#ifndef HOOKS_C
#define GETINFO
#include "hooks.h"

#ifndef HOOKS_H
#define HOOKS_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include <dinput.h>
	#include <tchar.h>
	
	#include "tools/func_type.h"
	#include "db.h"
#endif
#define FIVEHEAD
#include "hooks.h"

// VARIABLES, TABLES, FUNCTIONS, ...
VAR(HMODULE dll_module,= NULL);
#include "tools/func_og.h"
#include "db.h"

FUNCD(BOOL initialize_original_dll(void))
#ifdef HOOKS_C
{
    TCHAR system_dir[MAX_PATH];
    TCHAR system_path[MAX_PATH];
    
    // Get Windows system directory
    GetSystemDirectory(system_dir, MAX_PATH);
    
    // Build path to original dinput8.dll
    _sntprintf(system_path, sizeof(system_path) / sizeof(TCHAR), TEXT("%s\\dinput8.dll"), system_dir);
    
    // Load the original DLL from System32
    dll_module = LoadLibrary(system_path);
    if (!dll_module) {
        _ftprintf(stderr, TEXT("[ASI Loader] ERROR - Could not load original DLL from system\n"));
        _ftprintf(stderr, TEXT("[ASI Loader] Path: %s\n"), system_path);
        return FALSE;
    }
    
    _ftprintf(stderr, TEXT("[ASI Loader] Loaded original DLL from system\n"));
    
    // Get all original functions
    DirectInput8Create_og = (DirectInput8Create_t)GetProcAddress(dll_module, "DirectInput8Create");
    #include "tools/func_og_get.h"
	#include "db.h"
    
    if (!DirectInput8Create_og) {
        _ftprintf(stderr, TEXT("[ASI Loader] ERROR - Could not find DirectInput8Create in original DLL\n"));
        FreeLibrary(dll_module);
        dll_module = NULL;
        return FALSE;
    }
    
    _ftprintf(stderr, TEXT("[ASI Loader] Found DirectInput8Create in original DLL\n"));
    return TRUE;
}
#endif

#endif
