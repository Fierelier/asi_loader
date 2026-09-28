#ifndef STACK_HOOK_C
#define GETINFO
#include "stack_hook.h"

#ifndef STACK_HOOK_H
#define STACK_HOOK_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include <tchar.h>
	#include <stdint.h>
	#include "asi_loader.h"
#endif
#define FIVEHEAD
#include "stack_hook.h"

// VARIABLES, TABLES, FUNCTIONS, ...
VAR(void *stack_saved_ra,= NULL);
VAR(void (*stack_callback)(void),= NULL);
VAR(LONG stack_hook_done,= 0);

#ifdef STACK_HOOK_C
extern void stack_trampoline(void);

__attribute__((used)) void stack_on_return(void) {
	if (InterlockedExchange(&stack_hook_done, 1)) return;
	if (stack_callback) stack_callback();
}

#if defined(__TINYC__) || defined(_WIN64)
	#define SYM(name) name
#else
	#define SYM(name) "_" name
#endif

#ifdef _WIN64
	__asm__(
		".text\n\t"
		".globl stack_trampoline\n"
		"stack_trampoline:\n\t"
			"push %rax\n\t"
			"sub $0x28, %rsp\n\t"
			"call stack_on_return\n\t"
			"add $0x28, %rsp\n\t"
			"pop %rax\n\t"
			"jmp *stack_saved_ra(%rip)\n"
	);
#else
	__asm__(
		".text\n\t"
		".globl " SYM("stack_trampoline") "\n"
		SYM("stack_trampoline") ":\n\t"
			"pusha\n\t"
			"pushf\n\t"
			"call " SYM("stack_on_return") "\n\t"
			"popf\n\t"
			"popa\n\t"
			"jmp *" SYM("stack_saved_ra") "\n"
	);
#endif
#endif

FH_STATIC(FUNC(BOOL stack_addr_in_module_code(BYTE *base, BYTE *addr),{
	IMAGE_DOS_HEADER *dos = (IMAGE_DOS_HEADER *)base;
	if (dos->e_magic != IMAGE_DOS_SIGNATURE) return FALSE;

	IMAGE_NT_HEADERS *nt = (IMAGE_NT_HEADERS *)(base + dos->e_lfanew);
	if (nt->Signature != IMAGE_NT_SIGNATURE) return FALSE;

	IMAGE_SECTION_HEADER *sec = IMAGE_FIRST_SECTION(nt);
	WORD i;
	for (i = 0; i < nt->FileHeader.NumberOfSections; ++i) {
		if (!(sec[i].Characteristics & IMAGE_SCN_MEM_EXECUTE)) continue;
		BYTE *start = base + sec[i].VirtualAddress;
		DWORD size = sec[i].Misc.VirtualSize ? sec[i].Misc.VirtualSize : sec[i].SizeOfRawData;
		if (addr >= start && addr < start + size) return TRUE;
	}
	return FALSE;
}))

FH_STATIC(FUNC(BOOL stack_addr_is_caller_code(void *addr, const TCHAR *sysdir, size_t sysdir_len, void *b_self),{
	MEMORY_BASIC_INFORMATION mbi;
	if (!VirtualQuery(addr, &mbi, sizeof(mbi))) return FALSE;
	if (mbi.State != MEM_COMMIT) return FALSE;

	void *mod = mbi.AllocationBase;
	if (mod == NULL || mod == b_self) return FALSE;

	TCHAR path[MAX_PATH];
	DWORD len = GetModuleFileName((HMODULE)mod, path, MAX_PATH);
	if (len == 0) return FALSE;
	if (len >= sysdir_len && _tcsnicmp(path, sysdir, sysdir_len) == 0) return FALSE;

	return stack_addr_in_module_code((BYTE *)mod, (BYTE *)addr);
}))

FH_STATIC(FUNC(BOOL stack_is_return_addr(BYTE *ra),{
	if (ra[-5] == 0xE8) return TRUE;                              // E8 rel32
	if (ra[-2] == 0xFF && ((ra[-1] >> 3) & 7) == 2) return TRUE; // FF /2, no disp   (call reg / call [reg])
	if (ra[-3] == 0xFF && ((ra[-2] >> 3) & 7) == 2) return TRUE; // FF /2, disp8
	if (ra[-6] == 0xFF && ((ra[-5] >> 3) & 7) == 2) return TRUE; // FF /2, disp32    (call [imp_x])
	if (ra[-7] == 0xFF && ((ra[-6] >> 3) & 7) == 2) return TRUE; // FF /2, sib+disp32
	return FALSE;
}))

FH_STATIC(FUNC(void *stack_get_base(void),{
	void *base;
	#ifdef _WIN64
		__asm__ volatile ("movq %%gs:0x8, %0" : "=r"(base));
	#else
		__asm__ volatile ("movl %%fs:0x4, %0" : "=r"(base));
	#endif
	return base;
}))

FUNC(BOOL install_stack_return_hook(void (*callback)(void)),{
	TCHAR sysdir[MAX_PATH];
	size_t sysdir_len = GetSystemDirectory(sysdir, MAX_PATH);

	void *b_self;
	{
		MEMORY_BASIC_INFORMATION mbi;
		if (VirtualQuery((void *)&install_stack_return_hook, &mbi, sizeof(mbi)))
			b_self = mbi.AllocationBase;
		else
			b_self = NULL;
	}

	uintptr_t top = (uintptr_t)stack_get_base();

	volatile int probe = 0;
	uintptr_t p = ((uintptr_t)&probe) & ~(uintptr_t)(sizeof(void *) - 1);
	(void)probe;

	for (; p + sizeof(void *) <= top; p += sizeof(void *)) {
		uintptr_t value = *(uintptr_t *)p;
		if (!stack_addr_is_caller_code((void *)value, sysdir, sysdir_len, b_self)) continue;
		if (!stack_is_return_addr((BYTE *)value)) continue;

		stack_callback = callback;
		stack_saved_ra = (void *)value;
		stack_hook_done = 0;
		*(uintptr_t *)p = (uintptr_t)&stack_trampoline;
		asi_log(TEXT("[ASI Loader] Hijacked caller return address at %p\n"), (void *)value);
		return TRUE;
	}

	asi_log(TEXT("[ASI Loader] ERROR: could not locate caller return address on stack!\n"));
	return FALSE;
})

#endif
