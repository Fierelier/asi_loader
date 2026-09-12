#include "universal.h"
#define func_tool() \
	FUNC(DLL_EXPORT func_type func_name(func_args) asm(func_stringify_exp(func_name)),{ \
		func_body \
		return func_concat_exp(func_name,_og)(func_call_args); \
	})
