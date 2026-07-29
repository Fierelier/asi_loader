#ifndef EXPORTS_C
#define GETINFO
#include "exports.h"

#ifdef EXPORTS_C
	#define BUILDING_DLL
#endif

#ifndef EXPORTS_H
#define EXPORTS_H
	// INCLUDES, MACROS, TYPEDEFS, STRUCTS, UNIONS, ...
	#ifdef BUILDING_DLL
		#define DLL_EXPORT __declspec(dllexport)
	#else
		#define DLL_EXPORT __declspec(dllimport)
	#endif
	
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <stdio.h>
	#include "includes.h"
	#include "exports.h"
	#include "hooks.h"
	#include "main.h"
	#include "asi_loader.h"
	
	#include "tools/func_type.h"
	#include "db.h"
#endif
#define FIVEHEAD
#include "exports.h"

// VARIABLES, TABLES, FUNCTIONS, ...
#include "tools/func_impl.h"
#include "db.h"
#endif

