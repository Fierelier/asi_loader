#ifndef DLL_HOOKS_C
#define GETINFO
#include "hooks.h"

#ifndef DLL_HOOKS_H
#define DLL_HOOKS_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include <dinput.h>
	#include <tchar.h>
	
	typedef HRESULT (WINAPI *DirectInput8Create_t)(HINSTANCE, DWORD, REFIID, LPVOID*, LPUNKNOWN);
#endif
#define FIVEHEAD
#include "hooks.h"

// VARIABLES, TABLES, FUNCTIONS, ...
VAR(HMODULE dinput8_module,= NULL);
VAR(DirectInput8Create_t og_DirectInput8Create,= NULL);

FUNC(BOOL initialize_original_dll(void),{
    TCHAR system_dir[MAX_PATH];
    TCHAR system_path[MAX_PATH];
    
    // Get Windows system directory
    GetSystemDirectory(system_dir, MAX_PATH);
    
    // Build path to original dinput8.dll
    _sntprintf(system_path, sizeof(system_path) / sizeof(TCHAR), TEXT("%s\\dinput8.dll"), system_dir);
    
    // Load the original DLL from System32
    dinput8_module = LoadLibrary(system_path);
    if (!dinput8_module) {
        _ftprintf(stderr, TEXT("[ASI Loader] ERROR - Could not load original dinput8.dll from System32\n"));
        _ftprintf(stderr, TEXT("[ASI Loader] Path: %s\n"), system_path);
        return FALSE;
    }
    
    _ftprintf(stderr, TEXT("[ASI Loader] Loaded original dinput8.dll from System32\n"));
    
    // Get the original DirectInput8Create function
    og_DirectInput8Create = (DirectInput8Create_t)GetProcAddress(dinput8_module, "DirectInput8Create");
    if (!og_DirectInput8Create) {
        _ftprintf(stderr, TEXT("[ASI Loader] ERROR - Could not find DirectInput8Create in original DLL\n"));
        FreeLibrary(dinput8_module);
        dinput8_module = NULL;
        return FALSE;
    }
    
    _ftprintf(stderr, TEXT("[ASI Loader] Found DirectInput8Create in original DLL\n"));
    return TRUE;
})

#endif
