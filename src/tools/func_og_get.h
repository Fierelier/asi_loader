#include "universal.h"
#define func_tool() \
	func_concat_exp(func_name,_og) = (func_concat_exp(func_name,_t)) \
										GetProcAddress(dll_module, func_stringify_exp(func_name)); \
	if (!func_concat_exp(func_name,_og)) { \
		_ftprintf(stderr, TEXT("[ASI Loader] > WARNING: Could not find "func_stringify_exp(func_name)" in original DLL\n")); \
	}
