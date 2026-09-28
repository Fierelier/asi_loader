#include "universal.h"
#define func_og_get_tool(cast) \
	func_concat_exp(func_name,_og) = (cast) \
										GetProcAddress(dll_module, func_stringify_exp(func_name)); \
	if (!func_concat_exp(func_name,_og)) { \
		asi_log(TEXT("[ASI Loader] > WARNING: Could not find "func_stringify_exp(func_name)" in original DLL\n")); \
	}
#define func_tool() func_og_get_tool(func_concat_exp(func_name,_t))
#define func_fwd_tool() func_og_get_tool(FARPROC)
