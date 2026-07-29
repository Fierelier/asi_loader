#define func_type IDirect3D9* WINAPI
#define func_name Direct3DCreate9
#define func_args_proto(F) \
	F(UINT,SDKVersion)
#define func_body WaitForSingleObject(init_done_event, INFINITE);
#include "tools/func.h"

#define func_type HRESULT WINAPI
#define func_name Direct3DCreate9Ex
#define func_args_proto(F) \
	F(UINT,SDKVersion), \
	F(IDirect3D9Ex**,d3d9ex)
#define func_body
#include "tools/func.h"

#define func_type int WINAPI
#define func_name D3DPERF_BeginEvent
#define func_args_proto(F) \
	F(D3DCOLOR,color), \
	F(const WCHAR*,name)
#define func_body
#include "tools/func.h"

#define func_type int WINAPI
#define func_name D3DPERF_EndEvent
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type DWORD WINAPI
#define func_name D3DPERF_GetStatus
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name D3DPERF_QueryRepeatFrame
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name D3DPERF_SetMarker
#define func_args_proto(F) \
	F(D3DCOLOR,color), \
	F(const WCHAR*,name)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name D3DPERF_SetOptions
#define func_args_proto(F) \
	F(DWORD,options)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name D3DPERF_SetRegion
#define func_args_proto(F) \
	F(D3DCOLOR,color), \
	F(const WCHAR*,name)
#define func_body
#include "tools/func.h"
