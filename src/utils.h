#if defined(GETINFO)
	#undef GETINFO
	#if !defined(UTILS_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define UTILS_IMPLEMENT
		#define UTILS_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef UTILS_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define UTILS_HEADER
	#include "utils.c"
	#undef UTILS_HEADER
#endif
