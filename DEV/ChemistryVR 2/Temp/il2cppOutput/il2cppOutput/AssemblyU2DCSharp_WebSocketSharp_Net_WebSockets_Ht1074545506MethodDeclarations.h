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

// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1074545506;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// System.String
struct String_t;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.IO.Stream
struct Stream_t1561764144;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.Uri
struct Uri_t1116831938;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1899242073;
// WebSocketSharp.WebSocket
struct WebSocket_t1342580397;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpStatusCod1625451593.h"

// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::.ctor(WebSocketSharp.Net.HttpListenerContext,System.String)
extern "C"  void HttpListenerWebSocketContext__ctor_m1047238486 (HttpListenerWebSocketContext_t1074545506 * __this, HttpListenerContext_t3744659101 * ___context0, String_t* ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Log()
extern "C"  Logger_t3695440972 * HttpListenerWebSocketContext_get_Log_m709667570 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Stream()
extern "C"  Stream_t1561764144 * HttpListenerWebSocketContext_get_Stream_m1443623536 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_CookieCollection()
extern "C"  CookieCollection_t1136277956 * HttpListenerWebSocketContext_get_CookieCollection_m3517732435 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Headers()
extern "C"  NameValueCollection_t2791941106 * HttpListenerWebSocketContext_get_Headers_m1987071382 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Host()
extern "C"  String_t* HttpListenerWebSocketContext_get_Host_m454106343 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsAuthenticated()
extern "C"  bool HttpListenerWebSocketContext_get_IsAuthenticated_m1446699895 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsLocal()
extern "C"  bool HttpListenerWebSocketContext_get_IsLocal_m3057002163 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsSecureConnection()
extern "C"  bool HttpListenerWebSocketContext_get_IsSecureConnection_m3417239055 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_IsWebSocketRequest()
extern "C"  bool HttpListenerWebSocketContext_get_IsWebSocketRequest_m1439043650 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_Origin()
extern "C"  String_t* HttpListenerWebSocketContext_get_Origin_m4285486949 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_QueryString()
extern "C"  NameValueCollection_t2791941106 * HttpListenerWebSocketContext_get_QueryString_m1225432265 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_RequestUri()
extern "C"  Uri_t1116831938 * HttpListenerWebSocketContext_get_RequestUri_m318604841 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketKey()
extern "C"  String_t* HttpListenerWebSocketContext_get_SecWebSocketKey_m4226166700 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketProtocols()
extern "C"  Il2CppObject* HttpListenerWebSocketContext_get_SecWebSocketProtocols_m4160882095 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_SecWebSocketVersion()
extern "C"  String_t* HttpListenerWebSocketContext_get_SecWebSocketVersion_m2835942885 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_ServerEndPoint()
extern "C"  IPEndPoint_t2123960758 * HttpListenerWebSocketContext_get_ServerEndPoint_m242884219 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_User()
extern "C"  Il2CppObject * HttpListenerWebSocketContext_get_User_m1558652720 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_UserEndPoint()
extern "C"  IPEndPoint_t2123960758 * HttpListenerWebSocketContext_get_UserEndPoint_m2042810755 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::get_WebSocket()
extern "C"  WebSocket_t1342580397 * HttpListenerWebSocketContext_get_WebSocket_m3774700236 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::Close()
extern "C"  void HttpListenerWebSocketContext_Close_m2643023591 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::Close(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void HttpListenerWebSocketContext_Close_m2714929608 (HttpListenerWebSocketContext_t1074545506 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::ToString()
extern "C"  String_t* HttpListenerWebSocketContext_ToString_m4269451170 (HttpListenerWebSocketContext_t1074545506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
