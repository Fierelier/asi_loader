#if defined(GETINFO)
	#undef GETINFO
	#if !defined(MAIN_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define MAIN_IMPLEMENT
		#define MAIN_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef MAIN_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define MAIN_HEADER
	#include "main.c"
	#undef MAIN_HEADER
#endif
