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

// WebSocketSharp.HttpRequest
struct HttpRequest_t1080673901;
// System.String
struct String_t;
// System.Version
struct Version_t763695022;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// WebSocketSharp.Net.AuthenticationResponse
struct AuthenticationResponse_t2112712571;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// System.Uri
struct Uri_t1116831938;
// WebSocketSharp.HttpResponse
struct HttpResponse_t273810277;
// System.IO.Stream
struct Stream_t1561764144;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Version763695022.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_CookieCollect1136277956.h"

// System.Void WebSocketSharp.HttpRequest::.ctor(System.String,System.String,System.Version,System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpRequest__ctor_m1840645905 (HttpRequest_t1080673901 * __this, String_t* ___method0, String_t* ___uri1, Version_t763695022 * ___version2, NameValueCollection_t2791941106 * ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpRequest::.ctor(System.String,System.String)
extern "C"  void HttpRequest__ctor_m3452466175 (HttpRequest_t1080673901 * __this, String_t* ___method0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationResponse WebSocketSharp.HttpRequest::get_AuthenticationResponse()
extern "C"  AuthenticationResponse_t2112712571 * HttpRequest_get_AuthenticationResponse_m3607290725 (HttpRequest_t1080673901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.HttpRequest::get_Cookies()
extern "C"  CookieCollection_t1136277956 * HttpRequest_get_Cookies_m3174960174 (HttpRequest_t1080673901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpRequest::get_HttpMethod()
extern "C"  String_t* HttpRequest_get_HttpMethod_m3830293818 (HttpRequest_t1080673901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.HttpRequest::get_IsWebSocketRequest()
extern "C"  bool HttpRequest_get_IsWebSocketRequest_m2719030132 (HttpRequest_t1080673901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpRequest::get_RequestUri()
extern "C"  String_t* HttpRequest_get_RequestUri_m553295118 (HttpRequest_t1080673901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::CreateConnectRequest(System.Uri)
extern "C"  HttpRequest_t1080673901 * HttpRequest_CreateConnectRequest_m3638766874 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::CreateWebSocketRequest(System.Uri)
extern "C"  HttpRequest_t1080673901 * HttpRequest_CreateWebSocketRequest_m2288748221 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.HttpRequest::GetResponse(System.IO.Stream,System.Int32)
extern "C"  HttpResponse_t273810277 * HttpRequest_GetResponse_m2364282827 (HttpRequest_t1080673901 * __this, Stream_t1561764144 * ___stream0, int32_t ___millisecondsTimeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::Parse(System.String[])
extern "C"  HttpRequest_t1080673901 * HttpRequest_Parse_m3221839665 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t4054002952* ___headerParts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.HttpRequest::Read(System.IO.Stream,System.Int32)
extern "C"  HttpRequest_t1080673901 * HttpRequest_Read_m2103269124 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, int32_t ___millisecondsTimeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HttpRequest::SetCookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void HttpRequest_SetCookies_m777082786 (HttpRequest_t1080673901 * __this, CookieCollection_t1136277956 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpRequest::ToString()
extern "C"  String_t* HttpRequest_ToString_m1762381396 (HttpRequest_t1080673901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
