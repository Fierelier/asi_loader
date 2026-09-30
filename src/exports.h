#ifndef EXPORTS_H
#define EXPORTS_H
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>

	// Point every exported thunk at the matching export of real_module.
	// Names missing from real_module are left pointing at NULL (a host that
	// expects the DLL we impersonate never imports those).
	void exports_bind(HMODULE real_module);
#endif
