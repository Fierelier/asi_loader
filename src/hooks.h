#ifndef HOOKS_H
#define HOOKS_H
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>

	// Detect our own file name, load the matching real system DLL (or a
	// <name>Hooked.dll override next to us), and bind every export thunk to it.
	BOOL initialize_original_dll(void);
#endif
