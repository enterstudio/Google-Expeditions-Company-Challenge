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

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t3782393199;
// System.Net.Sockets.TcpClient
struct TcpClient_t838416830;
// System.String
struct String_t;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t1612362831;
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
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t4138449219;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_TcpClient838416830.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ServerSslConf1612362831.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Logger3695440972.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpStatusCod1625451593.h"

// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::.ctor(System.Net.Sockets.TcpClient,System.String,System.Boolean,WebSocketSharp.Net.ServerSslConfiguration,WebSocketSharp.Logger)
extern "C"  void TcpListenerWebSocketContext__ctor_m3610312559 (TcpListenerWebSocketContext_t3782393199 * __this, TcpClient_t838416830 * ___tcpClient0, String_t* ___protocol1, bool ___secure2, ServerSslConfiguration_t1612362831 * ___sslConfig3, Logger_t3695440972 * ___logger4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Log()
extern "C"  Logger_t3695440972 * TcpListenerWebSocketContext_get_Log_m1273961413 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Stream()
extern "C"  Stream_t1561764144 * TcpListenerWebSocketContext_get_Stream_m2213800901 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_CookieCollection()
extern "C"  CookieCollection_t1136277956 * TcpListenerWebSocketContext_get_CookieCollection_m1782644806 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Headers()
extern "C"  NameValueCollection_t2791941106 * TcpListenerWebSocketContext_get_Headers_m983231973 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Host()
extern "C"  String_t* TcpListenerWebSocketContext_get_Host_m3911998590 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsAuthenticated()
extern "C"  bool TcpListenerWebSocketContext_get_IsAuthenticated_m286872194 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsLocal()
extern "C"  bool TcpListenerWebSocketContext_get_IsLocal_m3345862846 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsSecureConnection()
extern "C"  bool TcpListenerWebSocketContext_get_IsSecureConnection_m4002094884 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_IsWebSocketRequest()
extern "C"  bool TcpListenerWebSocketContext_get_IsWebSocketRequest_m2023899479 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_Origin()
extern "C"  String_t* TcpListenerWebSocketContext_get_Origin_m3015249212 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_QueryString()
extern "C"  NameValueCollection_t2791941106 * TcpListenerWebSocketContext_get_QueryString_m3141434776 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_RequestUri()
extern "C"  Uri_t1116831938 * TcpListenerWebSocketContext_get_RequestUri_m1916335686 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketKey()
extern "C"  String_t* TcpListenerWebSocketContext_get_SecWebSocketKey_m543562677 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketProtocols()
extern "C"  Il2CppObject* TcpListenerWebSocketContext_get_SecWebSocketProtocols_m3109178122 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_SecWebSocketVersion()
extern "C"  String_t* TcpListenerWebSocketContext_get_SecWebSocketVersion_m1949420910 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_ServerEndPoint()
extern "C"  IPEndPoint_t2123960758 * TcpListenerWebSocketContext_get_ServerEndPoint_m2124729098 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_User()
extern "C"  Il2CppObject * TcpListenerWebSocketContext_get_User_m2925498427 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_UserEndPoint()
extern "C"  IPEndPoint_t2123960758 * TcpListenerWebSocketContext_get_UserEndPoint_m779965906 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::get_WebSocket()
extern "C"  WebSocket_t1342580397 * TcpListenerWebSocketContext_get_WebSocket_m1846694673 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Authenticate(WebSocketSharp.Net.AuthenticationSchemes,System.String,System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  bool TcpListenerWebSocketContext_Authenticate_m591045637 (TcpListenerWebSocketContext_t3782393199 * __this, int32_t ___scheme0, String_t* ___realm1, Func_2_t4138449219 * ___credentialsFinder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Close()
extern "C"  void TcpListenerWebSocketContext_Close_m1144748106 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::Close(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void TcpListenerWebSocketContext_Close_m3572588741 (TcpListenerWebSocketContext_t3782393199 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::SendAuthenticationChallenge(System.String)
extern "C"  void TcpListenerWebSocketContext_SendAuthenticationChallenge_m3663957037 (TcpListenerWebSocketContext_t3782393199 * __this, String_t* ___challenge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::ToString()
extern "C"  String_t* TcpListenerWebSocketContext_ToString_m3432376121 (TcpListenerWebSocketContext_t3782393199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
