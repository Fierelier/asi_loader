#if defined(GETINFO)
	#undef GETINFO
	#if !defined(HOOKS_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define HOOKS_IMPLEMENT
		#define HOOKS_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef HOOKS_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define HOOKS_HEADER
	#include "hooks.c"
	#undef HOOKS_HEADER
#endif
