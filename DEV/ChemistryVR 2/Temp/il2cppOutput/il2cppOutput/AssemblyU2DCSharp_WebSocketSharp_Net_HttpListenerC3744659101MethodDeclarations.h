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

// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t602292776;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t3888821117;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t1992878431;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1899242073;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1074545506;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpConnection602292776.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListener398944510.h"

// System.Void WebSocketSharp.Net.HttpListenerContext::.ctor(WebSocketSharp.Net.HttpConnection)
extern "C"  void HttpListenerContext__ctor_m2127277548 (HttpListenerContext_t3744659101 * __this, HttpConnection_t602292776 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpConnection WebSocketSharp.Net.HttpListenerContext::get_Connection()
extern "C"  HttpConnection_t602292776 * HttpListenerContext_get_Connection_m2508772408 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerContext::get_ErrorMessage()
extern "C"  String_t* HttpListenerContext_get_ErrorMessage_m898629483 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerContext::set_ErrorMessage(System.String)
extern "C"  void HttpListenerContext_set_ErrorMessage_m1803085830 (HttpListenerContext_t3744659101 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerContext::get_ErrorStatus()
extern "C"  int32_t HttpListenerContext_get_ErrorStatus_m2939904613 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerContext::set_ErrorStatus(System.Int32)
extern "C"  void HttpListenerContext_set_ErrorStatus_m1279195024 (HttpListenerContext_t3744659101 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerContext::get_HasError()
extern "C"  bool HttpListenerContext_get_HasError_m2355355051 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerContext::get_Listener()
extern "C"  HttpListener_t398944510 * HttpListenerContext_get_Listener_m18299384 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerContext::set_Listener(WebSocketSharp.Net.HttpListener)
extern "C"  void HttpListenerContext_set_Listener_m726231241 (HttpListenerContext_t3744659101 * __this, HttpListener_t398944510 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Net.HttpListenerContext::get_Request()
extern "C"  HttpListenerRequest_t3888821117 * HttpListenerContext_get_Request_m560810946 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Net.HttpListenerContext::get_Response()
extern "C"  HttpListenerResponse_t1992878431 * HttpListenerContext_get_Response_m824899012 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.HttpListenerContext::get_User()
extern "C"  Il2CppObject * HttpListenerContext_get_User_m297823805 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerContext::Authenticate()
extern "C"  bool HttpListenerContext_Authenticate_m456747689 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerContext::Register()
extern "C"  bool HttpListenerContext_Register_m3594369143 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerContext::Unregister()
extern "C"  void HttpListenerContext_Unregister_m253052508 (HttpListenerContext_t3744659101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext WebSocketSharp.Net.HttpListenerContext::AcceptWebSocket(System.String)
extern "C"  HttpListenerWebSocketContext_t1074545506 * HttpListenerContext_AcceptWebSocket_m3825904340 (HttpListenerContext_t3744659101 * __this, String_t* ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
