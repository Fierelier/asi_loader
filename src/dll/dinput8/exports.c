#ifndef DLL_EXPORTS_C
#define GETINFO
#include "exports.h"

#ifdef DLL_EXPORTS_C
	#define BUILDING_DLL
#endif

#ifndef DLL_EXPORTS_H
#define DLL_EXPORTS_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#ifdef BUILDING_DLL
		#define DLL_EXPORT __declspec(dllexport)
	#else
		#define DLL_EXPORT __declspec(dllimport)
	#endif
	
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <dinput.h>
	#include <stdio.h>
	#include "exports.h"
	#include "hooks.h"
	#include "main.h"
	#include "asi_loader.h"
#endif
#define FIVEHEAD
#include "exports.h"

// VARIABLES, TABLES, FUNCTIONS, ...
FUNC(DLL_EXPORT HRESULT WINAPI DirectInput8Create(HINSTANCE hInstance, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter),{
    WaitForSingleObject(init_done_event, INFINITE);
	
	if (og_DirectInput8Create) {
        return og_DirectInput8Create(hInstance, dwVersion, riidltf, ppvOut, punkOuter);
    }
    return E_FAIL;
})

#endif

