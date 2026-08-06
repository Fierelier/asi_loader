#define func_type HRESULT WINAPI
#define func_name DirectDrawCreate
#define func_args_proto(F) \
	F(GUID*,lpGUID), \
	F(LPDIRECTDRAW*,lplpDD), \
	F(IUnknown*,pUnkOuter)
#define func_body
#include "tools/func.h"

#define func_type HRESULT WINAPI
#define func_name DirectDrawCreateEx
#define func_args_proto(F) \
	F(GUID*,lpGuid), \
	F(LPVOID*,lplpDD), \
	F(REFIID,iid), \
	F(IUnknown*,pUnkOuter)
#define func_body
#include "tools/func.h"

#define func_type HRESULT WINAPI
#define func_name DirectDrawCreateClipper
#define func_args_proto(F) \
	F(DWORD,dwFlags), \
	F(LPDIRECTDRAWCLIPPER*,lplpDDClipper), \
	F(IUnknown*,pUnkOuter)
#define func_body
#include "tools/func.h"

#define func_type HRESULT WINAPI
#define func_name DirectDrawEnumerateA
#define func_args_proto(F) \
	F(LPDDENUMCALLBACKA,lpCallback), \
	F(LPVOID,lpContext)
#define func_body
#include "tools/func.h"

#define func_type HRESULT WINAPI
#define func_name DirectDrawEnumerateW
#define func_args_proto(F) \
	F(LPDDENUMCALLBACKW,lpCallback), \
	F(LPVOID,lpContext)
#define func_body
#include "tools/func.h"

#define func_type HRESULT WINAPI
#define func_name DirectDrawEnumerateExA
#define func_args_proto(F) \
	F(LPDDENUMCALLBACKEXA,lpCallback), \
	F(LPVOID,lpContext), \
	F(DWORD,dwFlags)
#define func_body
#include "tools/func.h"

#define func_type HRESULT WINAPI
#define func_name DirectDrawEnumerateExW
#define func_args_proto(F) \
	F(LPDDENUMCALLBACKEXW,lpCallback), \
	F(LPVOID,lpContext), \
	F(DWORD,dwFlags)
#define func_body
#include "tools/func.h"
