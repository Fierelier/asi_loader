#if defined(GETINFO)
	#undef GETINFO
	#if !defined(ASI_LOADER_HEADER)
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	
	#ifdef IMPLEMENT
		#define ASI_LOADER_IMPLEMENT
		#define ASI_LOADER_C
		#undef IMPLEMENT
	#endif
#elif defined(FIVEHEAD)
	#undef FIVEHEAD
	#ifdef ASI_LOADER_IMPLEMENT
		#undef IMPLEMENT
		#define IMPLEMENT
	#endif
	#include "5head/5head.h"
#else
	#define ASI_LOADER_HEADER
	#include "asi_loader.c"
	#undef ASI_LOADER_HEADER
#endif
