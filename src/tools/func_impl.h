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

#ifdef __x86_64__
	#define func_fwd_jmp(sym) "jmp *" sym "(%rip)"
#else
	#define func_fwd_jmp(sym) "jmp *" sym
#endif

#define func_fwd_tool() \
	FUNC(DLL_EXPORT __attribute__((naked)) void func_name(void) func_export_name(func_name),{ \
		__asm__(func_fwd_jmp(func_stringify_exp(func_concat_exp(__USER_LABEL_PREFIX__,func_concat_exp(func_name,_og))))); \
	})
