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
	#include "asi_loader.h"
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
	TCHAR basename[MAX_PATH];
	TCHAR extension[MAX_PATH];
	TCHAR dll_filename[MAX_PATH];
	
	get_dll_name_parts(basename, extension);
	_sntprintf(dll_filename, sizeof(dll_filename) / sizeof(TCHAR), TCSCN TCSCN, basename, extension);
	
	// Try <name>Hooked.dll first
	_sntprintf(system_path, sizeof(system_path) / sizeof(TCHAR), TCSCN TEXT("Hooked") TCSCN, basename, extension);
	DWORD attrs = GetFileAttributes(system_path);
	if (attrs == INVALID_FILE_ATTRIBUTES || (attrs & FILE_ATTRIBUTE_DIRECTORY)) {
		// Get Windows system directory
		GetSystemDirectory(system_dir, MAX_PATH);
		// Build path to original DLL
		_sntprintf(system_path, sizeof(system_path) / sizeof(TCHAR), TCSCN TEXT("\\") TCSCN, system_dir, dll_filename);
	}
	
	// Load the original DLL
	asi_log(TEXT("[ASI Loader] Loading ") TCSCN TEXT(" ...\n"), system_path);
	dll_module = LoadLibrary(system_path);
	if (!dll_module) {
		asi_log(TEXT("[ASI Loader] > ERROR: Could not load original DLL from system!\n"));
		return FALSE;
	}
	
	// Get all original functions
	#include "tools/func_og_get.h"
	#include "db.h"
	return TRUE;
}
#endif

#endif
