#if defined(GETINFO)
	#undef GETINFO
	#if !defined(STACK_HOOK_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif

	#ifdef IMPLEMENT
		#define STACK_HOOK_IMPLEMENT
		#define STACK_HOOK_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef STACK_HOOK_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define STACK_HOOK_HEADER
	#include "stack_hook.c"
	#undef STACK_HOOK_HEADER
#endif
