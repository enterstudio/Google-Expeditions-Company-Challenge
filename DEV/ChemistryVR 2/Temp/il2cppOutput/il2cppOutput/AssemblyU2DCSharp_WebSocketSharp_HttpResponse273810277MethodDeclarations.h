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

// WebSocketSharp.HttpResponse
struct HttpResponse_t273810277;
// System.String
struct String_t;
// System.Version
struct Version_t763695022;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Version763695022.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpStatusCod1625451593.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_CookieCollect1136277956.h"

// System.Void WebSocketSharp.HttpResponse::.ctor(System.String,System.String,System.Version,System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpResponse__ctor_m3641047353 (HttpResponse_t273810277 * __this, String_t* ___code0, String_t* ___reason1, Version_t763695022 * ___version2, NameValueCollection_t2791941106 * ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpResponse::.ctor(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void HttpResponse__ctor_m2922064248 (HttpResponse_t273810277 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpResponse::.ctor(WebSocketSharp.Net.HttpStatusCode,System.String)
extern "C"  void HttpResponse__ctor_m1514299316 (HttpResponse_t273810277 * __this, int32_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.HttpResponse::get_Cookies()
extern "C"  CookieCollection_t1136277956 * HttpResponse_get_Cookies_m1108319056 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_HasConnectionClose()
extern "C"  bool HttpResponse_get_HasConnectionClose_m1762571522 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_IsProxyAuthenticationRequired()
extern "C"  bool HttpResponse_get_IsProxyAuthenticationRequired_m4118364699 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_IsRedirect()
extern "C"  bool HttpResponse_get_IsRedirect_m822115304 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_IsUnauthorized()
extern "C"  bool HttpResponse_get_IsUnauthorized_m4237949312 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpResponse::get_IsWebSocketResponse()
extern "C"  bool HttpResponse_get_IsWebSocketResponse_m804786846 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpResponse::get_Reason()
extern "C"  String_t* HttpResponse_get_Reason_m961578359 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpResponse::get_StatusCode()
extern "C"  String_t* HttpResponse_get_StatusCode_m1766977650 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::CreateCloseResponse(WebSocketSharp.Net.HttpStatusCode)
extern "C"  HttpResponse_t273810277 * HttpResponse_CreateCloseResponse_m3473570174 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::CreateUnauthorizedResponse(System.String)
extern "C"  HttpResponse_t273810277 * HttpResponse_CreateUnauthorizedResponse_m1054044035 (Il2CppObject * __this /* static, unused */, String_t* ___challenge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::CreateWebSocketResponse()
extern "C"  HttpResponse_t273810277 * HttpResponse_CreateWebSocketResponse_m84969504 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::Parse(System.String[])
extern "C"  HttpResponse_t273810277 * HttpResponse_Parse_m1133844121 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t4054002952* ___headerParts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpResponse::Read(System.IO.Stream,System.Int32)
extern "C"  HttpResponse_t273810277 * HttpResponse_Read_m2699880604 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, int32_t ___millisecondsTimeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpResponse::SetCookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void HttpResponse_SetCookies_m4048206970 (HttpResponse_t273810277 * __this, CookieCollection_t1136277956 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpResponse::ToString()
extern "C"  String_t* HttpResponse_ToString_m1412452118 (HttpResponse_t273810277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
