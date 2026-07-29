#if defined(GETINFO)
	#undef GETINFO
	#if !defined(DLL_EXPORTS_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define DLL_EXPORTS_IMPLEMENT
		#define DLL_EXPORTS_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef DLL_EXPORTS_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define DLL_EXPORTS_HEADER
	#include "exports.c"
	#undef DLL_EXPORTS_HEADER
#endif
