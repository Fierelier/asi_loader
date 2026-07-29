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
	_ftprintf(stderr, TEXT("[ASI Loader] Initializing ...\n"));

	if (!initialize_original_dll()) {
		_ftprintf(stderr, TEXT("[ASI Loader] Failed to initialize original DLL.\n"));
		return;
	}

	_ftprintf(stderr, TEXT("[ASI Loader] Loading ASI files ...\n"));
	load_all_asis();

	_ftprintf(stderr, TEXT("[ASI Loader] Initialization complete\n"));
}))

VAR(HANDLE init_done_event,= NULL);

FH_STATIC(FUNC(DWORD WINAPI init_thread_proc(LPVOID lpParam),{
	(void)lpParam;
	initialize_asi_loader();
	SetEvent(init_done_event);
	return 0;
}))

// DLL entry point - minimal work only
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
			
			init_done_event = CreateEvent(NULL, TRUE, FALSE, NULL);
			DisableThreadLibraryCalls(hModule);
			HANDLE hThread = CreateThread(NULL, 0, init_thread_proc, NULL, 0, NULL);
			if (hThread) {
				CloseHandle(hThread);
			}
			break;
		}
		case DLL_PROCESS_DETACH:
			break;
	}
	return TRUE;
})
#endif
