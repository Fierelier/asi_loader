#if defined(GETINFO)
	#undef GETINFO
	#if !defined(DLL_MAIN_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define DLL_MAIN_IMPLEMENT
		#define DLL_MAIN_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef DLL_MAIN_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define DLL_MAIN_HEADER
	#include "main.c"
	#undef DLL_MAIN_HEADER
#endif
