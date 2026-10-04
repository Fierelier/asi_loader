#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <tchar.h>
#include "hooks.h"
#include "exports.h"
#include "utils.h"
#include "asi_loader.h"

static HMODULE dll_module = NULL;

BOOL initialize_original_dll(void) {
	TCHAR basename[MAX_PATH];
	TCHAR extension[MAX_PATH];
	TCHAR dll_filename[MAX_PATH];
	TCHAR system_dir[MAX_PATH];
	TCHAR system_path[MAX_PATH];

	// Our file may be renamed (d3d9.dll, ddraw.dll, ...); derive the target
	// from our own module name rather than a build-time constant.
	get_dll_name_parts(basename, extension);
	_sntprintf(dll_filename, sizeof(dll_filename) / sizeof(TCHAR), TCSCN TCSCN, basename, extension);

	// Prefer a <name>Hooked.dll override, otherwise the real one in system32.
	_sntprintf(system_path, sizeof(system_path) / sizeof(TCHAR), TCSCN TEXT("Hooked") TCSCN, basename, extension);
	DWORD attrs = GetFileAttributes(system_path);
	if (attrs == INVALID_FILE_ATTRIBUTES || (attrs & FILE_ATTRIBUTE_DIRECTORY)) {
		GetSystemDirectory(system_dir, MAX_PATH);
		_sntprintf(system_path, sizeof(system_path) / sizeof(TCHAR), TCSCN TEXT("\\") TCSCN, system_dir, dll_filename);
	}

	asi_log(TEXT("[ASI Loader] Loading ") TCSCN TEXT(" ...\n"), system_path);
	dll_module = LoadLibrary(system_path);
	if (!dll_module) {
		asi_log(TEXT("[ASI Loader] > ERROR: Could not load original DLL from system!\n"));
		return FALSE;
	}

	exports_bind(dll_module, dll_filename);
	return TRUE;
}
