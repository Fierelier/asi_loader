#ifndef ASI_LOADER_C
#define GETINFO
#include "asi_loader.h"

#ifndef ASI_LOADER_H
#define ASI_LOADER_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include <tchar.h>
	#include <io.h>
	#include "utils.h"
#endif
#define FIVEHEAD
#include "asi_loader.h"

// VARIABLES, TABLES, FUNCTIONS, ...
FUNC(int load_asi(TCHAR * path),{
	if (GetModuleHandle(path)) {
		_ftprintf(stderr, TEXT("[ASI Loader] SKIPPING ") TCSCN TEXT(" (already loaded)\n"), path);
		return TRUE;
	}
	
	HMODULE asi = LoadLibrary(path);
	_ftprintf(stderr, TEXT("[ASI Loader] LOADING ") TCSCN TEXT(" ...\n"), path);
	if (!asi) {
		_ftprintf(stderr, TEXT("[ASI Loader] ERROR: Load failed!"));
		return FALSE;
	}
	return TRUE;
})

FUNC(void load_asis_from_dir(TCHAR * dir),{
	struct _tfinddata_t fileinfo;
	intptr_t handle;
	TCHAR sz_pattern[MAX_PATH];
	TCHAR sz_path[MAX_PATH];
	
	_sntprintf(sz_pattern, sizeof(sz_pattern) / sizeof(TCHAR), TCSCN TEXT("\\*.asi"), dir);
	handle = _tfindfirst(sz_pattern, &fileinfo);
	if (handle == -1) {
		return;
	}
	
	do {
		if (!(fileinfo.attrib & _A_SUBDIR)) {
			_sntprintf(sz_path, sizeof(sz_path) / sizeof(TCHAR), TCSCN TEXT("\\") TCSCN, dir, fileinfo.name);
			load_asi(sz_path);
		}
	} while (_tfindnext(handle, &fileinfo) == 0);
	
	_findclose(handle);
})

FUNC(void load_all_asis(void),{
	_ftprintf(stderr, TEXT("[ASI Loader] Loading from .\\ ...\n"));
	load_asis_from_dir(TEXT("."));
	
	_ftprintf(stderr, TEXT("[ASI Loader] Loading from scripts\\ ...\n"));
	load_asis_from_dir(TEXT("scripts"));
})
#endif
