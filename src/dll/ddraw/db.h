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

#define func_type HRESULT WINAPI
#define func_name DllCanUnloadNow
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type HRESULT WINAPI
#define func_name DllGetClassObject
#define func_args_proto(F) \
	F(REFCLSID,rclsid), \
	F(REFIID,riid), \
	F(LPVOID*,ppv)
#define func_body
#include "tools/func.h"

#define func_name AcquireDDThreadLock
#define func_fwd
#include "tools/func.h"

#define func_name CompleteCreateSysmemSurface
#define func_fwd
#include "tools/func.h"

#define func_name D3DParseUnknownCommand
#define func_fwd
#include "tools/func.h"

#define func_name DDGetAttachedSurfaceLcl
#define func_fwd
#include "tools/func.h"

#define func_name DDHAL32_VidMemAlloc
#define func_fwd
#include "tools/func.h"

#define func_name DDHAL32_VidMemFree
#define func_fwd
#include "tools/func.h"

#define func_name DDInternalLock
#define func_fwd
#include "tools/func.h"

#define func_name DDInternalUnlock
#define func_fwd
#include "tools/func.h"

#define func_name DSoundHelp
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry1
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry2
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry3
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry4
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry5
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry6
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry7
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry8
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry9
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry10
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry11
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry12
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry13
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry16
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry17
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry18
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry19
#define func_fwd
#include "tools/func.h"

#define func_name DdEntry20
#define func_fwd
#include "tools/func.h"

#define func_name GetAliasedVidMem
#define func_fwd
#include "tools/func.h"

#define func_name GetDDSurfaceLocal
#define func_fwd
#include "tools/func.h"

#define func_name GetNextMipMap
#define func_fwd
#include "tools/func.h"

#define func_name GetOLEThunkData
#define func_fwd
#include "tools/func.h"

#define func_name GetSurfaceFromDC
#define func_fwd
#include "tools/func.h"

#define func_name HeapVidMemAllocAligned
#define func_fwd
#include "tools/func.h"

#define func_name InternalLock
#define func_fwd
#include "tools/func.h"

#define func_name InternalUnlock
#define func_fwd
#include "tools/func.h"

#define func_name LateAllocateSurfaceMem
#define func_fwd
#include "tools/func.h"

#define func_name RegisterSpecialCase
#define func_fwd
#include "tools/func.h"

#define func_name ReleaseDDThreadLock
#define func_fwd
#include "tools/func.h"

#define func_name SetAppCompatData
#define func_fwd
#include "tools/func.h"

#define func_name VidMemAlloc
#define func_fwd
#include "tools/func.h"

#define func_name VidMemAmountFree
#define func_fwd
#include "tools/func.h"

#define func_name VidMemFini
#define func_fwd
#include "tools/func.h"

#define func_name VidMemFree
#define func_fwd
#include "tools/func.h"

#define func_name VidMemInit
#define func_fwd
#include "tools/func.h"

#define func_name VidMemLargestFree
#define func_fwd
#include "tools/func.h"
