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
	#include "entry_hook.h"
	#include "stack_hook.h"
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

FUNC(BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReason, LPVOID lpReserved),{
	switch (ulReason) {
		case DLL_PROCESS_ATTACH: {
			TCHAR basename[MAX_PATH];
			TCHAR extension[MAX_PATH];
			TCHAR console_filename[MAX_PATH];
			get_dll_name_parts(basename, extension);
			_sntprintf(console_filename, sizeof(console_filename) / sizeof(TCHAR), TCSCN TEXT(".con"), basename);
			
			FILE *con_check = _tfopen(console_filename, TEXT("r"));
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
			
			if (lpReserved == NULL) {
				if (!install_stack_return_hook(initialize_asi_loader))
					install_entry_point_hook(initialize_asi_loader);
			} else {
				install_entry_point_hook(initialize_asi_loader);
			}
			break;
		}
		case DLL_PROCESS_DETACH:
			break;
	}
	return TRUE;
})
#endif
