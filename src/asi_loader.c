#ifndef ASI_LOADER_C
#define GETINFO
#include "asi_loader.h"

#ifndef ASI_LOADER_H
#define ASI_LOADER_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include <stdarg.h>
	#include <tchar.h>
	#include <io.h>
	#include "utils.h"
	
	#ifndef ASI_LOADER_EXPORT
		#define ASI_LOADER_EXPORT __declspec(dllexport)
	#endif
#endif
#define FIVEHEAD
#include "asi_loader.h"

// VARIABLES, TABLES, FUNCTIONS, ...
VAR(void (*asi_loader_logger)(const TCHAR *message),= NULL);

FH_STATIC(FUNC(void asi_log(const TCHAR *format, ...),{
	TCHAR message[MAX_PATH + 64];
	size_t length;
	va_list arguments;
	
	va_start(arguments, format);
	if (!asi_loader_logger) {
		_vftprintf(stderr, format, arguments);
		va_end(arguments);
		return;
	}
	_vsntprintf(message, sizeof(message) / sizeof(TCHAR) - 1, format, arguments);
	va_end(arguments);
	message[sizeof(message) / sizeof(TCHAR) - 1] = 0;
	length = _tcslen(message);
	if (length && message[length - 1] == TEXT('\n')) message[length - 1] = 0;
	asi_loader_logger(message);
}))

// Some ASIs built against Ultimate ASI Loader look this up to be able to
// gauge whether their InitializeASI() export is going to be called.
FUNC(ASI_LOADER_EXPORT BOOL WINAPI IsUltimateASILoader(void),{
	return TRUE;
})

FUNC(int load_asi(TCHAR * path),{
	if (GetModuleHandle(path)) {
		asi_log(TEXT("[ASI Loader] > SKIP: ") TCSCN TEXT(" (already loaded)\n"), path);
		return TRUE;
	}
	
	HMODULE asi = LoadLibrary(path);
	asi_log(TEXT("[ASI Loader] > LOAD: ") TCSCN TEXT(" ...\n"), path);
	if (!asi) {
		asi_log(TEXT("[ASI Loader] > ERROR: Load failed!\n"));
		return FALSE;
	}
	
	void (WINAPI * initialize_asi)(void) = (void (WINAPI *)(void))GetProcAddress(asi, "InitializeASI");
	if (initialize_asi) {
		asi_log(TEXT("[ASI Loader] > InitializeASI() ...\n"));
		initialize_asi();
	}
	
	return TRUE;
})

FUNC(void load_asis_from_dir(TCHAR * dir),{
	struct _tfinddata_t fileinfo;
	intptr_t handle;
	
	DWORD attr = GetFileAttributes(dir);
	if (
		(attr == INVALID_FILE_ATTRIBUTES) ||
		(attr != (attr & FILE_ATTRIBUTE_DIRECTORY))
	) {
		return;
	}
	
	TCHAR old_cd[MAX_PATH];
	GetCurrentDirectory(MAX_PATH - 2,old_cd);
	
	TCHAR script_dir[MAX_PATH];
	SetCurrentDirectory(dir);
	GetCurrentDirectory(MAX_PATH - 2,script_dir);
	
	handle = _tfindfirst(TEXT("*.asi"), &fileinfo);
	if (handle == -1) {
		SetCurrentDirectory(old_cd);
		return;
	}
	
	do {
		if (!(fileinfo.attrib & _A_SUBDIR)) {
			SetCurrentDirectory(script_dir);
			load_asi(fileinfo.name);
		}
	} while (_tfindnext(handle, &fileinfo) == 0);
	
	_findclose(handle);
	SetCurrentDirectory(old_cd);
})

FUNC(void load_all_asis(void),{
	asi_log(TEXT("[ASI Loader] Loading from .\\ ...\n"));
	load_asis_from_dir(TEXT("."));
	
	asi_log(TEXT("[ASI Loader] Loading from scripts\\ ...\n"));
	load_asis_from_dir(TEXT("scripts"));
})
#endif
