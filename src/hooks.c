#ifndef HOOKS_C
#define GETINFO
#include "hooks.h"

#ifndef HOOKS_H
#define HOOKS_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include <tchar.h>
	
	#include "tools/func_type.h"
	#include "includes.h"
	#include "db.h"
	#include "utils.h"
	
	#define DLL_FILENAME DLL_BASENAME DLL_EXTENSION
	#define DLL_FILENAME_HOOKED DLL_BASENAME TEXT("Hooked") DLL_EXTENSION
	#define DLL_CONSOLE_FILENAME DLL_BASENAME TEXT(".con")
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
	
	// Try <name>Hooked.dll first
	_tcscpy(system_path, DLL_FILENAME_HOOKED);
	DWORD attrs = GetFileAttributes(system_path);
	if (attrs == INVALID_FILE_ATTRIBUTES || (attrs & FILE_ATTRIBUTE_DIRECTORY)) {
		// Get Windows system directory
		GetSystemDirectory(system_dir, MAX_PATH);
		// Build path to original DLL
		_sntprintf(system_path, sizeof(system_path) / sizeof(TCHAR), TCSCN TEXT("\\") TCSCN, system_dir, DLL_FILENAME);
	}
	
	// Load the original DLL
	_ftprintf(stderr, TEXT("[ASI Loader] Loading ") TCSCN TEXT(" ...\n"), system_path);
	dll_module = LoadLibrary(system_path);
	if (!dll_module) {
		_ftprintf(stderr, TEXT("[ASI Loader] > ERROR: Could not load original DLL from system!\n"));
		return FALSE;
	}
	
	// Get all original functions
	#include "tools/func_og_get.h"
	#include "db.h"
	return TRUE;
}
#endif

#endif
