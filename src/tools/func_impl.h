#include "universal.h"
#define func_tool() \
	FUNC(func_type func_name(func_args),{ \
		func_body \
		return func_concat_exp(func_name,_og)(func_call_args); \
	})
