#if defined(GETINFO)
	#undef GETINFO
	#if !defined(EXPORTS_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define EXPORTS_IMPLEMENT
		#define EXPORTS_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef EXPORTS_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define EXPORTS_HEADER
	#include "exports.c"
	#undef EXPORTS_HEADER
#endif
