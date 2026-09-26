#ifndef ENTRY_HOOK_C
#define GETINFO
#include "entry_hook.h"

#ifndef ENTRY_HOOK_H
#define ENTRY_HOOK_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include <tchar.h>
#endif
#define FIVEHEAD
#include "entry_hook.h"

// VARIABLES, TABLES, FUNCTIONS, ...
VAR(BYTE entry_orig_bytes[5],);
VAR(BYTE *entry_point_addr,= NULL);
VAR(void (*entry_point_callback)(void),= NULL);

FH_STATIC(FUNC(void entry_point_trampoline(void),{
	DWORD old_protect;
	VirtualProtect(entry_point_addr, sizeof(entry_orig_bytes), PAGE_EXECUTE_READWRITE, &old_protect);
	memcpy(entry_point_addr, entry_orig_bytes, sizeof(entry_orig_bytes));
	VirtualProtect(entry_point_addr, sizeof(entry_orig_bytes), old_protect, &old_protect);
	FlushInstructionCache(GetCurrentProcess(), entry_point_addr, sizeof(entry_orig_bytes));
	
	entry_point_callback();
	
	((void (*)(void))entry_point_addr)();
}))

FUNC(void install_entry_point_hook(void (*callback)(void)),{
	BYTE *base = (BYTE *)GetModuleHandle(NULL);
	IMAGE_DOS_HEADER *dos = (IMAGE_DOS_HEADER *)base;
	IMAGE_NT_HEADERS *nt = (IMAGE_NT_HEADERS *)(base + dos->e_lfanew);
	entry_point_addr = base + nt->OptionalHeader.AddressOfEntryPoint;
	
	entry_point_callback = callback;
	memcpy(entry_orig_bytes, entry_point_addr, sizeof(entry_orig_bytes));
	
	BYTE patch[5];
	patch[0] = 0xE9;
	#ifdef _WIN64
		INT64 rel = (BYTE *)entry_point_trampoline - (entry_point_addr + sizeof(patch));
		if (rel > 0x7FFFFFFFLL || rel < -0x80000000LL) {
			asi_log(TEXT("[ASI Loader] ERROR: entry point out of 32-bit jmp range!\n"));
			return;
		}
		*(DWORD *)(patch + 1) = (DWORD)rel;
	#else
		*(DWORD *)(patch + 1) = (DWORD)((BYTE *)entry_point_trampoline - (entry_point_addr + sizeof(patch)));
	#endif
	
	DWORD old_protect;
	VirtualProtect(entry_point_addr, sizeof(patch), PAGE_EXECUTE_READWRITE, &old_protect);
	memcpy(entry_point_addr, patch, sizeof(patch));
	VirtualProtect(entry_point_addr, sizeof(patch), old_protect, &old_protect);
	FlushInstructionCache(GetCurrentProcess(), entry_point_addr, sizeof(patch));
})

#endif
