#define func_type IDirect3D8* WINAPI
#define func_name Direct3DCreate8
#define func_args_proto(F) \
	F(UINT,SDKVersion)
#define func_body WaitForSingleObject(init_done_event, INFINITE);
#include "tools/func.h"
