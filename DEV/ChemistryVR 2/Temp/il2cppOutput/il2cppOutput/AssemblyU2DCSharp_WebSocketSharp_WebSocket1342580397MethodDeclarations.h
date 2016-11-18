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

// WebSocketSharp.WebSocket
struct WebSocket_t1342580397;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1074545506;
// System.String
struct String_t;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t3782393199;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t2615270477;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t569145917;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t181896286;
// System.EventHandler
struct EventHandler_t2463957060;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t636757868;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie>
struct IEnumerable_1_t1083031107;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t1204099087;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t224487639;
// System.Uri
struct Uri_t1116831938;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t763725542;
// WebSocketSharp.HttpResponse
struct HttpResponse_t273810277;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t778194306;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t2470319931;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// WebSocketSharp.HttpRequest
struct HttpRequest_t1080673901;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t36945740;
// System.Exception
struct Exception_t3991598821;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// System.IO.Stream
struct Stream_t1561764144;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.IO.FileInfo
struct FileInfo_t3233670074;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.Byte[]>
struct Dictionary_2_t1115770063;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.IO.Stream>
struct Dictionary_2_t2711741034;
// WebSocketSharp.Net.Cookie
struct Cookie_t2077085446;
// System.IAsyncResult
struct IAsyncResult_t2754620036;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Ht1074545506.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Tc3782393199.h"
#include "mscorlib_System_EventHandler2463957060.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CompressionMethod2226596781.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Logger3695440972.h"
#include "AssemblyU2DCSharp_WebSocketSharp_WebSocketState790259878.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ClientSslConfi224487639.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Web763725542.h"
#include "AssemblyU2DCSharp_WebSocketSharp_HttpResponse273810277.h"
#include "AssemblyU2DCSharp_WebSocketSharp_WebSocketFrame778194306.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseEventArgs2470319931.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpStatusCod1625451593.h"
#include "AssemblyU2DCSharp_WebSocketSharp_MessageEventArgs36945740.h"
#include "mscorlib_System_Exception3991598821.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_CookieCollect1136277956.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Fin3262160529.h"
#include "AssemblyU2DCSharp_WebSocketSharp_HttpRequest1080673901.h"
#include "mscorlib_System_IO_FileInfo3233670074.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Cookie2077085446.h"

// System.Void WebSocketSharp.WebSocket::.ctor(WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext,System.String)
extern "C"  void WebSocket__ctor_m1529266513 (WebSocket_t1342580397 * __this, HttpListenerWebSocketContext_t1074545506 * ___context0, String_t* ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::.ctor(WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext,System.String)
extern "C"  void WebSocket__ctor_m4103642360 (WebSocket_t1342580397 * __this, TcpListenerWebSocketContext_t3782393199 * ___context0, String_t* ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::.ctor(System.String,System.String[])
extern "C"  void WebSocket__ctor_m2306802077 (WebSocket_t1342580397 * __this, String_t* ___url0, StringU5BU5D_t4054002952* ___protocols1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::.cctor()
extern "C"  void WebSocket__cctor_m2557664622 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
extern "C"  void WebSocket_add_OnClose_m3939987016 (WebSocket_t1342580397 * __this, EventHandler_1_t2615270477 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
extern "C"  void WebSocket_remove_OnClose_m2678343347 (WebSocket_t1342580397 * __this, EventHandler_1_t2615270477 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
extern "C"  void WebSocket_add_OnError_m215455816 (WebSocket_t1342580397 * __this, EventHandler_1_t569145917 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
extern "C"  void WebSocket_remove_OnError_m3248779443 (WebSocket_t1342580397 * __this, EventHandler_1_t569145917 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
extern "C"  void WebSocket_add_OnMessage_m1138713256 (WebSocket_t1342580397 * __this, EventHandler_1_t181896286 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
extern "C"  void WebSocket_remove_OnMessage_m2623802771 (WebSocket_t1342580397 * __this, EventHandler_1_t181896286 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::add_OnOpen(System.EventHandler)
extern "C"  void WebSocket_add_OnOpen_m3674536951 (WebSocket_t1342580397 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::remove_OnOpen(System.EventHandler)
extern "C"  void WebSocket_remove_OnOpen_m2525126434 (WebSocket_t1342580397 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::System.IDisposable.Dispose()
extern "C"  void WebSocket_System_IDisposable_Dispose_m2593617632 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::get_CookieCollection()
extern "C"  CookieCollection_t1136277956 * WebSocket_get_CookieCollection_m1369077125 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::get_CustomHandshakeRequestChecker()
extern "C"  Func_2_t636757868 * WebSocket_get_CustomHandshakeRequestChecker_m1227021650 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_CustomHandshakeRequestChecker(System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>)
extern "C"  void WebSocket_set_CustomHandshakeRequestChecker_m2971497793 (WebSocket_t1342580397 * __this, Func_2_t636757868 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_HasMessage()
extern "C"  bool WebSocket_get_HasMessage_m1982824207 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_IgnoreExtensions()
extern "C"  bool WebSocket_get_IgnoreExtensions_m2528752520 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_IgnoreExtensions(System.Boolean)
extern "C"  void WebSocket_set_IgnoreExtensions_m308532159 (WebSocket_t1342580397 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_IsConnected()
extern "C"  bool WebSocket_get_IsConnected_m2653755679 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::get_Compression()
extern "C"  uint8_t WebSocket_get_Compression_m3949946905 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_Compression(WebSocketSharp.CompressionMethod)
extern "C"  void WebSocket_set_Compression_m1365773706 (WebSocket_t1342580397 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie> WebSocketSharp.WebSocket::get_Cookies()
extern "C"  Il2CppObject* WebSocket_get_Cookies_m1919387799 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::get_Credentials()
extern "C"  NetworkCredential_t1204099087 * WebSocket_get_Credentials_m1933776316 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_EmitOnPing()
extern "C"  bool WebSocket_get_EmitOnPing_m876789478 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_EmitOnPing(System.Boolean)
extern "C"  void WebSocket_set_EmitOnPing_m1712861853 (WebSocket_t1342580397 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_EnableRedirection()
extern "C"  bool WebSocket_get_EnableRedirection_m1016259465 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_EnableRedirection(System.Boolean)
extern "C"  void WebSocket_set_EnableRedirection_m2566591616 (WebSocket_t1342580397 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::get_Extensions()
extern "C"  String_t* WebSocket_get_Extensions_m3314700805 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_IsAlive()
extern "C"  bool WebSocket_get_IsAlive_m2079412323 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::get_IsSecure()
extern "C"  bool WebSocket_get_IsSecure_m3548243843 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.WebSocket::get_Log()
extern "C"  Logger_t3695440972 * WebSocket_get_Log_m257468864 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_Log(WebSocketSharp.Logger)
extern "C"  void WebSocket_set_Log_m1960622227 (WebSocket_t1342580397 * __this, Logger_t3695440972 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::get_Origin()
extern "C"  String_t* WebSocket_get_Origin_m4272001175 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_Origin(System.String)
extern "C"  void WebSocket_set_Origin_m1309570778 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::get_Protocol()
extern "C"  String_t* WebSocket_get_Protocol_m4186218377 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_Protocol(System.String)
extern "C"  void WebSocket_set_Protocol_m1846032744 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketState WebSocketSharp.WebSocket::get_ReadyState()
extern "C"  uint16_t WebSocket_get_ReadyState_m719238074 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::get_SslConfiguration()
extern "C"  ClientSslConfiguration_t224487639 * WebSocket_get_SslConfiguration_m3992490682 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_SslConfiguration(WebSocketSharp.Net.ClientSslConfiguration)
extern "C"  void WebSocket_set_SslConfiguration_m938726261 (WebSocket_t1342580397 * __this, ClientSslConfiguration_t224487639 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.WebSocket::get_Url()
extern "C"  Uri_t1116831938 * WebSocket_get_Url_m2061398483 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.WebSocket::get_WaitTime()
extern "C"  TimeSpan_t413522987  WebSocket_get_WaitTime_m472438893 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocket_set_WaitTime_m1544693880 (WebSocket_t1342580397 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::accept()
extern "C"  bool WebSocket_accept_m2073635553 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::acceptHandshake()
extern "C"  bool WebSocket_acceptHandshake_m303332664 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkHandshakeRequest(WebSocketSharp.Net.WebSockets.WebSocketContext,System.String&)
extern "C"  bool WebSocket_checkHandshakeRequest_m1613184661 (WebSocket_t1342580397 * __this, WebSocketContext_t763725542 * ___context0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkHandshakeResponse(WebSocketSharp.HttpResponse,System.String&)
extern "C"  bool WebSocket_checkHandshakeResponse_m4203630939 (WebSocket_t1342580397 * __this, HttpResponse_t273810277 * ___response0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkIfAvailable(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String&)
extern "C"  bool WebSocket_checkIfAvailable_m647536103 (WebSocket_t1342580397 * __this, bool ___connecting0, bool ___open1, bool ___closing2, bool ___closed3, String_t** ___message4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkIfAvailable(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String&)
extern "C"  bool WebSocket_checkIfAvailable_m3682060615 (WebSocket_t1342580397 * __this, bool ___client0, bool ___server1, bool ___connecting2, bool ___open3, bool ___closing4, bool ___closed5, String_t** ___message6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkParametersForSetCredentials(System.String,System.String,System.String&)
extern "C"  bool WebSocket_checkParametersForSetCredentials_m1989153820 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkParametersForSetProxy(System.String,System.String,System.String,System.String&)
extern "C"  bool WebSocket_checkParametersForSetProxy_m4216670738 (Il2CppObject * __this /* static, unused */, String_t* ___url0, String_t* ___username1, String_t* ___password2, String_t** ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::checkReceivedFrame(WebSocketSharp.WebSocketFrame,System.String&)
extern "C"  bool WebSocket_checkReceivedFrame_m3686599980 (WebSocket_t1342580397 * __this, WebSocketFrame_t778194306 * ___frame0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::close(System.UInt16,System.String)
extern "C"  void WebSocket_close_m2177362619 (WebSocket_t1342580397 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::close(WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void WebSocket_close_m1470398154 (WebSocket_t1342580397 * __this, CloseEventArgs_t2470319931 * ___e0, bool ___send1, bool ___receive2, bool ___received3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::closeAsync(System.UInt16,System.String)
extern "C"  void WebSocket_closeAsync_m728547079 (WebSocket_t1342580397 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::closeAsync(WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void WebSocket_closeAsync_m934623486 (WebSocket_t1342580397 * __this, CloseEventArgs_t2470319931 * ___e0, bool ___send1, bool ___receive2, bool ___received3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::closeHandshake(System.Byte[],System.Boolean,System.Boolean)
extern "C"  bool WebSocket_closeHandshake_m571313265 (WebSocket_t1342580397 * __this, ByteU5BU5D_t4260760469* ___frameAsBytes0, bool ___receive1, bool ___received2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::connect()
extern "C"  bool WebSocket_connect_m1396814739 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::createExtensions()
extern "C"  String_t* WebSocket_createExtensions_m75341048 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.WebSocket::createHandshakeFailureResponse(WebSocketSharp.Net.HttpStatusCode)
extern "C"  HttpResponse_t273810277 * WebSocket_createHandshakeFailureResponse_m2123753851 (WebSocket_t1342580397 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpRequest WebSocketSharp.WebSocket::createHandshakeRequest()
extern "C"  HttpRequest_t1080673901 * WebSocket_createHandshakeRequest_m3374881754 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.WebSocket::createHandshakeResponse()
extern "C"  HttpResponse_t273810277 * WebSocket_createHandshakeResponse_m3034105690 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::customCheckHandshakeRequest(WebSocketSharp.Net.WebSockets.WebSocketContext,System.String&)
extern "C"  bool WebSocket_customCheckHandshakeRequest_m3094499750 (WebSocket_t1342580397 * __this, WebSocketContext_t763725542 * ___context0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.MessageEventArgs WebSocketSharp.WebSocket::dequeueFromMessageEventQueue()
extern "C"  MessageEventArgs_t36945740 * WebSocket_dequeueFromMessageEventQueue_m4080620833 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::doHandshake()
extern "C"  bool WebSocket_doHandshake_m4093491669 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::enqueueToMessageEventQueue(WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocket_enqueueToMessageEventQueue_m3930529079 (WebSocket_t1342580397 * __this, MessageEventArgs_t36945740 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::error(System.String,System.Exception)
extern "C"  void WebSocket_error_m4041014041 (WebSocket_t1342580397 * __this, String_t* ___message0, Exception_t3991598821 * ___exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::fatal(System.String,System.Exception)
extern "C"  void WebSocket_fatal_m3476581909 (WebSocket_t1342580397 * __this, String_t* ___message0, Exception_t3991598821 * ___exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::fatal(System.String,WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocket_fatal_m1369598585 (WebSocket_t1342580397 * __this, String_t* ___message0, uint16_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::init()
extern "C"  void WebSocket_init_m2877534261 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::message()
extern "C"  void WebSocket_message_m241693348 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::messagec(WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocket_messagec_m2748824758 (WebSocket_t1342580397 * __this, MessageEventArgs_t36945740 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::messages(WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocket_messages_m1976827558 (WebSocket_t1342580397 * __this, MessageEventArgs_t36945740 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::open()
extern "C"  void WebSocket_open_m3051031279 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processCloseFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processCloseFrame_m3598068180 (WebSocket_t1342580397 * __this, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::processCookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void WebSocket_processCookies_m1854808591 (WebSocket_t1342580397 * __this, CookieCollection_t1136277956 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processDataFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processDataFrame_m3187783444 (WebSocket_t1342580397 * __this, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processFragmentFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processFragmentFrame_m173677370 (WebSocket_t1342580397 * __this, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processPingFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processPingFrame_m1232078044 (WebSocket_t1342580397 * __this, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processPongFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processPongFrame_m4285911138 (WebSocket_t1342580397 * __this, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processReceivedFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processReceivedFrame_m3571084875 (WebSocket_t1342580397 * __this, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::processSecWebSocketExtensionsClientHeader(System.String)
extern "C"  void WebSocket_processSecWebSocketExtensionsClientHeader_m4038139700 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::processSecWebSocketExtensionsServerHeader(System.String)
extern "C"  void WebSocket_processSecWebSocketExtensionsServerHeader_m835993276 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::processSecWebSocketProtocolHeader(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void WebSocket_processSecWebSocketProtocolHeader_m761041364 (WebSocket_t1342580397 * __this, Il2CppObject* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::processUnsupportedFrame(WebSocketSharp.WebSocketFrame)
extern "C"  bool WebSocket_processUnsupportedFrame_m3083964625 (WebSocket_t1342580397 * __this, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::releaseClientResources()
extern "C"  void WebSocket_releaseClientResources_m910726392 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::releaseCommonResources()
extern "C"  void WebSocket_releaseCommonResources_m296962776 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::releaseResources()
extern "C"  void WebSocket_releaseResources_m1526073219 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::releaseServerResources()
extern "C"  void WebSocket_releaseServerResources_m3428580992 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(System.Byte[])
extern "C"  bool WebSocket_send_m1644284424 (WebSocket_t1342580397 * __this, ByteU5BU5D_t4260760469* ___frameAsBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.Opcode,System.IO.Stream)
extern "C"  bool WebSocket_send_m2473628261 (WebSocket_t1342580397 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.Opcode,System.IO.Stream,System.Boolean)
extern "C"  bool WebSocket_send_m1491470968 (WebSocket_t1342580397 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, bool ___compressed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::send(WebSocketSharp.Fin,WebSocketSharp.Opcode,System.Byte[],System.Boolean)
extern "C"  bool WebSocket_send_m4057096742 (WebSocket_t1342580397 * __this, uint8_t ___fin0, uint8_t ___opcode1, ByteU5BU5D_t4260760469* ___data2, bool ___compressed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::sendAsync(WebSocketSharp.Opcode,System.IO.Stream,System.Action`1<System.Boolean>)
extern "C"  void WebSocket_sendAsync_m1251110818 (WebSocket_t1342580397 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, Action_1_t872614854 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::sendBytes(System.Byte[])
extern "C"  bool WebSocket_sendBytes_m2221126429 (WebSocket_t1342580397 * __this, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.WebSocket::sendHandshakeRequest()
extern "C"  HttpResponse_t273810277 * WebSocket_sendHandshakeRequest_m2671125188 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.HttpResponse WebSocketSharp.WebSocket::sendHttpRequest(WebSocketSharp.HttpRequest,System.Int32)
extern "C"  HttpResponse_t273810277 * WebSocket_sendHttpRequest_m2804290454 (WebSocket_t1342580397 * __this, HttpRequest_t1080673901 * ___request0, int32_t ___millisecondsTimeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::sendHttpResponse(WebSocketSharp.HttpResponse)
extern "C"  bool WebSocket_sendHttpResponse_m3442429780 (WebSocket_t1342580397 * __this, HttpResponse_t273810277 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::sendProxyConnectRequest()
extern "C"  void WebSocket_sendProxyConnectRequest_m2802889032 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::setClientStream()
extern "C"  void WebSocket_setClientStream_m1110293962 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::startReceiving()
extern "C"  void WebSocket_startReceiving_m3343765315 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketAcceptHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketAcceptHeader_m2593449224 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketExtensionsClientHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketExtensionsClientHeader_m1129489009 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketExtensionsServerHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketExtensionsServerHeader_m2222309881 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketKeyHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketKeyHeader_m1076494873 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketProtocolClientHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketProtocolClientHeader_m2490567789 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketProtocolServerHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketProtocolServerHeader_m3583388661 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketVersionClientHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketVersionClientHeader_m2132125493 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::validateSecWebSocketVersionServerHeader(System.String)
extern "C"  bool WebSocket_validateSecWebSocketVersionServerHeader_m3224946365 (WebSocket_t1342580397 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::CheckParametersForClose(System.UInt16,System.String,System.Boolean,System.String&)
extern "C"  bool WebSocket_CheckParametersForClose_m713266617 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, String_t* ___reason1, bool ___client2, String_t** ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::CheckParametersForClose(WebSocketSharp.CloseStatusCode,System.String,System.Boolean,System.String&)
extern "C"  bool WebSocket_CheckParametersForClose_m3840957229 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, String_t* ___reason1, bool ___client2, String_t** ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckPingParameter(System.String,System.Byte[]&)
extern "C"  String_t* WebSocket_CheckPingParameter_m1204567806 (Il2CppObject * __this /* static, unused */, String_t* ___message0, ByteU5BU5D_t4260760469** ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckSendParameter(System.Byte[])
extern "C"  String_t* WebSocket_CheckSendParameter_m486249896 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckSendParameter(System.IO.FileInfo)
extern "C"  String_t* WebSocket_CheckSendParameter_m1661499662 (Il2CppObject * __this /* static, unused */, FileInfo_t3233670074 * ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckSendParameter(System.String)
extern "C"  String_t* WebSocket_CheckSendParameter_m2544055521 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CheckSendParameters(System.IO.Stream,System.Int32)
extern "C"  String_t* WebSocket_CheckSendParameters_m1520890412 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.HttpResponse)
extern "C"  void WebSocket_Close_m570442601 (WebSocket_t1342580397 * __this, HttpResponse_t273810277 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.Net.HttpStatusCode)
extern "C"  void WebSocket_Close_m4199074618 (WebSocket_t1342580397 * __this, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.CloseEventArgs,System.Byte[],System.Boolean)
extern "C"  void WebSocket_Close_m3621383079 (WebSocket_t1342580397 * __this, CloseEventArgs_t2470319931 * ___e0, ByteU5BU5D_t4260760469* ___frameAsBytes1, bool ___receive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CreateBase64Key()
extern "C"  String_t* WebSocket_CreateBase64Key_m565389870 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocket::CreateResponseKey(System.String)
extern "C"  String_t* WebSocket_CreateResponseKey_m666974534 (Il2CppObject * __this /* static, unused */, String_t* ___base64Key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::InternalAccept()
extern "C"  void WebSocket_InternalAccept_m4130924330 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::Ping(System.Byte[],System.TimeSpan)
extern "C"  bool WebSocket_Ping_m797429524 (WebSocket_t1342580397 * __this, ByteU5BU5D_t4260760469* ___frameAsBytes0, TimeSpan_t413522987  ___timeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(WebSocketSharp.Opcode,System.Byte[],System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.Byte[]>)
extern "C"  void WebSocket_Send_m2771733563 (WebSocket_t1342580397 * __this, uint8_t ___opcode0, ByteU5BU5D_t4260760469* ___data1, Dictionary_2_t1115770063 * ___cache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(WebSocketSharp.Opcode,System.IO.Stream,System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.IO.Stream>)
extern "C"  void WebSocket_Send_m698872459 (WebSocket_t1342580397 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, Dictionary_2_t2711741034 * ___cache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Accept()
extern "C"  void WebSocket_Accept_m1297501517 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::AcceptAsync()
extern "C"  void WebSocket_AcceptAsync_m815134609 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close()
extern "C"  void WebSocket_Close_m3887126325 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(System.UInt16)
extern "C"  void WebSocket_Close_m338211039 (WebSocket_t1342580397 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocket_Close_m3195629129 (WebSocket_t1342580397 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(System.UInt16,System.String)
extern "C"  void WebSocket_Close_m3721357019 (WebSocket_t1342580397 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Close(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocket_Close_m1852531397 (WebSocket_t1342580397 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync()
extern "C"  void WebSocket_CloseAsync_m1380802217 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync(System.UInt16)
extern "C"  void WebSocket_CloseAsync_m350152171 (WebSocket_t1342580397 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync(WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocket_CloseAsync_m3945427645 (WebSocket_t1342580397 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync(System.UInt16,System.String)
extern "C"  void WebSocket_CloseAsync_m189650663 (WebSocket_t1342580397 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::CloseAsync(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocket_CloseAsync_m913411129 (WebSocket_t1342580397 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Connect()
extern "C"  void WebSocket_Connect_m3106463399 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::ConnectAsync()
extern "C"  void WebSocket_ConnectAsync_m1615474295 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::Ping()
extern "C"  bool WebSocket_Ping_m348145387 (WebSocket_t1342580397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::Ping(System.String)
extern "C"  bool WebSocket_Ping_m1968909815 (WebSocket_t1342580397 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m3742182428 (WebSocket_t1342580397 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(System.IO.FileInfo)
extern "C"  void WebSocket_Send_m7785242 (WebSocket_t1342580397 * __this, FileInfo_t3233670074 * ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::Send(System.String)
extern "C"  void WebSocket_Send_m1505020757 (WebSocket_t1342580397 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SendAsync(System.Byte[],System.Action`1<System.Boolean>)
extern "C"  void WebSocket_SendAsync_m1734499269 (WebSocket_t1342580397 * __this, ByteU5BU5D_t4260760469* ___data0, Action_1_t872614854 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SendAsync(System.IO.FileInfo,System.Action`1<System.Boolean>)
extern "C"  void WebSocket_SendAsync_m1663627723 (WebSocket_t1342580397 * __this, FileInfo_t3233670074 * ___file0, Action_1_t872614854 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SendAsync(System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocket_SendAsync_m2295781118 (WebSocket_t1342580397 * __this, String_t* ___data0, Action_1_t872614854 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SendAsync(System.IO.Stream,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void WebSocket_SendAsync_m172934556 (WebSocket_t1342580397 * __this, Stream_t1561764144 * ___stream0, int32_t ___length1, Action_1_t872614854 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SetCookie(WebSocketSharp.Net.Cookie)
extern "C"  void WebSocket_SetCookie_m3263691247 (WebSocket_t1342580397 * __this, Cookie_t2077085446 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SetCredentials(System.String,System.String,System.Boolean)
extern "C"  void WebSocket_SetCredentials_m4000006718 (WebSocket_t1342580397 * __this, String_t* ___username0, String_t* ___password1, bool ___preAuth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::SetProxy(System.String,System.String,System.String)
extern "C"  void WebSocket_SetProxy_m707250473 (WebSocket_t1342580397 * __this, String_t* ___url0, String_t* ___username1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocket::<open>m__29(System.IAsyncResult)
extern "C"  void WebSocket_U3CopenU3Em__29_m4263222090 (WebSocket_t1342580397 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocket::<processSecWebSocketProtocolHeader>m__2A(System.String)
extern "C"  bool WebSocket_U3CprocessSecWebSocketProtocolHeaderU3Em__2A_m663298973 (WebSocket_t1342580397 * __this, String_t* ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
