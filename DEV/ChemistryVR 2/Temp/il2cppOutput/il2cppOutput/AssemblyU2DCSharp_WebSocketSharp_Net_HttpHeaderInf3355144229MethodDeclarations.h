#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WebSocketSharp.Net.HttpHeaderInfo
struct HttpHeaderInfo_t3355144229;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpHeaderTyp3355482801.h"

// System.Void WebSocketSharp.Net.HttpHeaderInfo::.ctor(System.String,WebSocketSharp.Net.HttpHeaderType)
extern "C"  void HttpHeaderInfo__ctor_m164297463 (HttpHeaderInfo_t3355144229 * __this, String_t* ___name0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsMultiValueInRequest()
extern "C"  bool HttpHeaderInfo_get_IsMultiValueInRequest_m1806212701 (HttpHeaderInfo_t3355144229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsMultiValueInResponse()
extern "C"  bool HttpHeaderInfo_get_IsMultiValueInResponse_m3782791189 (HttpHeaderInfo_t3355144229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsRequest()
extern "C"  bool HttpHeaderInfo_get_IsRequest_m3060552666 (HttpHeaderInfo_t3355144229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::get_IsResponse()
extern "C"  bool HttpHeaderInfo_get_IsResponse_m4012624440 (HttpHeaderInfo_t3355144229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpHeaderInfo::get_Name()
extern "C"  String_t* HttpHeaderInfo_get_Name_m3814786857 (HttpHeaderInfo_t3355144229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.HttpHeaderInfo::get_Type()
extern "C"  int32_t HttpHeaderInfo_get_Type_m2703712723 (HttpHeaderInfo_t3355144229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::IsMultiValue(System.Boolean)
extern "C"  bool HttpHeaderInfo_IsMultiValue_m3504923357 (HttpHeaderInfo_t3355144229 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpHeaderInfo::IsRestricted(System.Boolean)
extern "C"  bool HttpHeaderInfo_IsRestricted_m3356106112 (HttpHeaderInfo_t3355144229 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
