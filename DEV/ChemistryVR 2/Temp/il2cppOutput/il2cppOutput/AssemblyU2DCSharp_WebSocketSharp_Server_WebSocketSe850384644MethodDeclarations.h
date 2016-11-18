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

// WebSocketSharp.Server.WebSocketServer
struct WebSocketServer_t850384644;
// System.String
struct String_t;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t1612362831;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t4138449219;
// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1938852857;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t3782393199;
// System.Uri
struct Uri_t1116831938;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ServerSslConf1612362831.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Tc3782393199.h"
#include "System_System_Uri1116831938.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"

// System.Void WebSocketSharp.Server.WebSocketServer::.ctor()
extern "C"  void WebSocketServer__ctor_m3164408161 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Int32)
extern "C"  void WebSocketServer__ctor_m3398087986 (WebSocketServer_t850384644 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.String)
extern "C"  void WebSocketServer__ctor_m2718210881 (WebSocketServer_t850384644 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Int32,System.Boolean)
extern "C"  void WebSocketServer__ctor_m3419558923 (WebSocketServer_t850384644 * __this, int32_t ___port0, bool ___secure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void WebSocketServer__ctor_m1541146259 (WebSocketServer_t850384644 * __this, IPAddress_t3525271463 * ___address0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.ctor(System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void WebSocketServer__ctor_m3990484106 (WebSocketServer_t850384644 * __this, IPAddress_t3525271463 * ___address0, int32_t ___port1, bool ___secure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::.cctor()
extern "C"  void WebSocketServer__cctor_m3125276268 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Server.WebSocketServer::get_Address()
extern "C"  IPAddress_t3525271463 * WebSocketServer_get_Address_m1604010474 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_AllowForwardedRequest()
extern "C"  bool WebSocketServer_get_AllowForwardedRequest_m2706433918 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_AllowForwardedRequest(System.Boolean)
extern "C"  void WebSocketServer_set_AllowForwardedRequest_m1092699597 (WebSocketServer_t850384644 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Server.WebSocketServer::get_AuthenticationSchemes()
extern "C"  int32_t WebSocketServer_get_AuthenticationSchemes_m4006225647 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_AuthenticationSchemes(WebSocketSharp.Net.AuthenticationSchemes)
extern "C"  void WebSocketServer_set_AuthenticationSchemes_m2270451966 (WebSocketServer_t850384644 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_IsListening()
extern "C"  bool WebSocketServer_get_IsListening_m642541819 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_IsSecure()
extern "C"  bool WebSocketServer_get_IsSecure_m510095641 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_KeepClean()
extern "C"  bool WebSocketServer_get_KeepClean_m3001917838 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_KeepClean(System.Boolean)
extern "C"  void WebSocketServer_set_KeepClean_m2481350621 (WebSocketServer_t850384644 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketServer::get_Log()
extern "C"  Logger_t3695440972 * WebSocketServer_get_Log_m738408114 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.WebSocketServer::get_Port()
extern "C"  int32_t WebSocketServer_get_Port_m2160108479 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketServer::get_Realm()
extern "C"  String_t* WebSocketServer_get_Realm_m209956296 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_Realm(System.String)
extern "C"  void WebSocketServer_set_Realm_m4055415601 (WebSocketServer_t850384644 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::get_ReuseAddress()
extern "C"  bool WebSocketServer_get_ReuseAddress_m1168275320 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_ReuseAddress(System.Boolean)
extern "C"  void WebSocketServer_set_ReuseAddress_m271334039 (WebSocketServer_t850384644 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.WebSocketServer::get_SslConfiguration()
extern "C"  ServerSslConfiguration_t1612362831 * WebSocketServer_get_SslConfiguration_m3425818540 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Server.WebSocketServer::get_UserCredentialsFinder()
extern "C"  Func_2_t4138449219 * WebSocketServer_get_UserCredentialsFinder_m189425990 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_UserCredentialsFinder(System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  void WebSocketServer_set_UserCredentialsFinder_m3122359967 (WebSocketServer_t850384644 * __this, Func_2_t4138449219 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.Server.WebSocketServer::get_WaitTime()
extern "C"  TimeSpan_t413522987  WebSocketServer_get_WaitTime_m2377658257 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocketServer_set_WaitTime_m4122362426 (WebSocketServer_t850384644 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.WebSocketServer::get_WebSocketServices()
extern "C"  WebSocketServiceManager_t1938852857 * WebSocketServer_get_WebSocketServices_m3307751855 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::abort()
extern "C"  void WebSocketServer_abort_m1149300175 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::checkHostNameForRequest(System.String)
extern "C"  bool WebSocketServer_checkHostNameForRequest_m2047761550 (WebSocketServer_t850384644 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::checkIfAvailable(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String&)
extern "C"  bool WebSocketServer_checkIfAvailable_m4039833853 (WebSocketServer_t850384644 * __this, bool ___ready0, bool ___start1, bool ___shutting2, bool ___stop3, String_t** ___message4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::checkServicePath(System.String,System.String&)
extern "C"  bool WebSocketServer_checkServicePath_m1799329423 (WebSocketServer_t850384644 * __this, String_t* ___path0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::checkSslConfiguration(WebSocketSharp.Net.ServerSslConfiguration,System.String&)
extern "C"  bool WebSocketServer_checkSslConfiguration_m4067149484 (WebSocketServer_t850384644 * __this, ServerSslConfiguration_t1612362831 * ___configuration0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketServer::getRealm()
extern "C"  String_t* WebSocketServer_getRealm_m370692473 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.WebSocketServer::getSslConfiguration()
extern "C"  ServerSslConfiguration_t1612362831 * WebSocketServer_getSslConfiguration_m139838601 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::init(System.String,System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void WebSocketServer_init_m2884508768 (WebSocketServer_t850384644 * __this, String_t* ___hostname0, IPAddress_t3525271463 * ___address1, int32_t ___port2, bool ___secure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::processRequest(WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext)
extern "C"  void WebSocketServer_processRequest_m4056523288 (WebSocketServer_t850384644 * __this, TcpListenerWebSocketContext_t3782393199 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::receiveRequest()
extern "C"  void WebSocketServer_receiveRequest_m2430790735 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::startReceiving()
extern "C"  void WebSocketServer_startReceiving_m2801336897 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::stopReceiving(System.Int32)
extern "C"  void WebSocketServer_stopReceiving_m623501294 (WebSocketServer_t850384644 * __this, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::tryCreateUri(System.String,System.Uri&,System.String&)
extern "C"  bool WebSocketServer_tryCreateUri_m535343551 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, Uri_t1116831938 ** ___result1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServer::RemoveWebSocketService(System.String)
extern "C"  bool WebSocketServer_RemoveWebSocketService_m662348193 (WebSocketServer_t850384644 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::Start()
extern "C"  void WebSocketServer_Start_m2111545953 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::Stop()
extern "C"  void WebSocketServer_Stop_m4086399813 (WebSocketServer_t850384644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::Stop(System.UInt16,System.String)
extern "C"  void WebSocketServer_Stop_m3824398539 (WebSocketServer_t850384644 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServer::Stop(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocketServer_Stop_m3607508693 (WebSocketServer_t850384644 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
