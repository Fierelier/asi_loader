#include "universal.h"
#ifdef __TINYC__
	#define func_export_name(name) asm(func_stringify_exp(name))
#else
	#define func_export_name(name)
#endif

#define func_tool() \
	FUNC(DLL_EXPORT func_type func_name(func_args) func_export_name(func_name),{ \
		func_body \
		return func_concat_exp(func_name,_og)(func_call_args); \
	})
