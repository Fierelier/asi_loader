#define func_type HRESULT WINAPI
#define func_name DirectInput8Create
#define func_args_proto(F) \
	F(HINSTANCE,hInstance), \
	F(DWORD,dwVersion), \
	F(REFIID,riidltf), \
	F(LPVOID*,ppvOut), \
	F(LPUNKNOWN,punkOuter)
#define func_body WaitForSingleObject(init_done_event, INFINITE);
#include "tools/func.h"
