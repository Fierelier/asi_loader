#if defined(GETINFO)
	#undef GETINFO
	#if !defined(ENTRY_HOOK_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define ENTRY_HOOK_IMPLEMENT
		#define ENTRY_HOOK_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef ENTRY_HOOK_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define ENTRY_HOOK_HEADER
	#include "entry_hook.c"
	#undef ENTRY_HOOK_HEADER
#endif
