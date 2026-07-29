#if defined(GETINFO)
	#undef GETINFO
	#if !defined(DLL_HOOKS_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define DLL_HOOKS_IMPLEMENT
		#define DLL_HOOKS_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef DLL_HOOKS_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define DLL_HOOKS_HEADER
	#include "hooks.c"
	#undef DLL_HOOKS_HEADER
#endif
