#ifndef UTILS_C
#define GETINFO
#include "utils.h"

#ifndef UTILS_H
#define UTILS_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <tchar.h>
	
	#ifdef _UNICODE
		#define TCSCN TEXT("%ls")
	#else
		#define TCSCN TEXT("%s")
	#endif
#endif
#define FIVEHEAD
#include "utils.h"

// VARIABLES, TABLES, FUNCTIONS, ...
FUNC(HMODULE get_self_module(void),{
	HMODULE h = NULL;
	GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, (LPCTSTR)&get_self_module, &h);
	return h;
})

FUNC(void get_dll_name_parts(TCHAR *basename, TCHAR *extension),{
	TCHAR path[MAX_PATH];
	TCHAR *filename;
	TCHAR *dot;
	
	GetModuleFileName(get_self_module(), path, MAX_PATH);
	filename = _tcsrchr(path, TEXT('\\'));
	filename = filename ? filename + 1 : path;
	dot = _tcsrchr(filename, TEXT('.'));
	if (dot) {
		_tcscpy(extension, dot);
		*dot = 0;
	} else {
		extension[0] = 0;
	}
	_tcscpy(basename, filename);
})

#endif
