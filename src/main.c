#ifndef MAIN_C
#define GETINFO
#include "main.h"

#ifdef MAIN_C
	#define BUILDING_DLL
#endif

#ifndef MAIN_H
#define MAIN_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include "asi_loader.h"
	#include "hooks.h"
	#include "main.h"
#endif
#define FIVEHEAD
#include "main.h"

// VARIABLES, TABLES, FUNCTIONS, ...
FH_STATIC(FUNC(void initialize_asi_loader(void),{
	if (!initialize_original_dll()) return;
	load_all_asis();
	_ftprintf(stderr, TEXT("[ASI Loader] DONE!\n"));
}))

VAR(BYTE entry_orig_bytes[5],);
VAR(BYTE *entry_point_addr,= NULL);

FH_STATIC(FUNC(void entry_point_trampoline(void),{
	DWORD old_protect;
	VirtualProtect(entry_point_addr, sizeof(entry_orig_bytes), PAGE_EXECUTE_READWRITE, &old_protect);
	memcpy(entry_point_addr, entry_orig_bytes, sizeof(entry_orig_bytes));
	VirtualProtect(entry_point_addr, sizeof(entry_orig_bytes), old_protect, &old_protect);
	FlushInstructionCache(GetCurrentProcess(), entry_point_addr, sizeof(entry_orig_bytes));
	
	initialize_asi_loader();
	
	((void (*)(void))entry_point_addr)();
}))

FH_STATIC(FUNC(void install_entry_point_hook(void),{
	BYTE *base = (BYTE *)GetModuleHandle(NULL);
	IMAGE_DOS_HEADER *dos = (IMAGE_DOS_HEADER *)base;
	IMAGE_NT_HEADERS *nt = (IMAGE_NT_HEADERS *)(base + dos->e_lfanew);
	entry_point_addr = base + nt->OptionalHeader.AddressOfEntryPoint;
	
	memcpy(entry_orig_bytes, entry_point_addr, sizeof(entry_orig_bytes));
	
	BYTE patch[5];
	patch[0] = 0xE9;
	#ifdef _WIN64
		INT64 rel = (BYTE *)entry_point_trampoline - (entry_point_addr + sizeof(patch));
		if (rel > 0x7FFFFFFFLL || rel < -0x80000000LL) {
			_ftprintf(stderr, TEXT("[ASI Loader] ERROR: entry point out of 32-bit jmp range!\n"));
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
}))

FUNC(BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReason, LPVOID lpReserved),{
	(void)lpReserved;
	switch (ulReason) {
		case DLL_PROCESS_ATTACH: {
			FILE *con_check = _tfopen(DLL_CONSOLE_FILENAME, TEXT("r"));
			if (con_check) {
				FILE *f;
				fclose(con_check);
				AllocConsole();
				f = freopen("CONOUT$", "w", stdout);
				f = freopen("CONOUT$", "w", stderr);
				f = freopen("CONIN$", "r", stdin);
				(void)f;
			}
			
			DisableThreadLibraryCalls(hModule);
			install_entry_point_hook();
			break;
		}
		case DLL_PROCESS_DETACH:
			break;
	}
	return TRUE;
})
#endif
