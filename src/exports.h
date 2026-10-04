#ifndef EXPORTS_H
#define EXPORTS_H
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <tchar.h>

	// Point every exported thunk at the matching export of real_module.
	// Names missing from real_module are left pointing at NULL (a host that
	// expects the DLL we impersonate never imports those). Ordinal thunks are
	// bound by the table entries whose dll matches dll_filename (case-insensitive).
	void exports_bind(HMODULE real_module, const TCHAR *dll_filename);
#endif
