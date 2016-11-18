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

// WebSocketSharp.Server.HttpServer
struct HttpServer_t2239471717;
// System.String
struct String_t;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>
struct EventHandler_1_t1541016828;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t1612362831;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t4138449219;
// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1938852857;
// System.Uri
struct Uri_t1116831938;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1074545506;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ServerSslConf1612362831.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "System_System_Uri1116831938.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Ht1074545506.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"

// System.Void WebSocketSharp.Server.HttpServer::.ctor()
extern "C"  void HttpServer__ctor_m2628061776 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.Int32)
extern "C"  void HttpServer__ctor_m2330314657 (HttpServer_t2239471717 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.String)
extern "C"  void HttpServer__ctor_m3976976050 (HttpServer_t2239471717 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.Int32,System.Boolean)
extern "C"  void HttpServer__ctor_m4193269180 (HttpServer_t2239471717 * __this, int32_t ___port0, bool ___secure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void HttpServer__ctor_m2910592900 (HttpServer_t2239471717 * __this, IPAddress_t3525271463 * ___address0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::.ctor(System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void HttpServer__ctor_m794344313 (HttpServer_t2239471717 * __this, IPAddress_t3525271463 * ___address0, int32_t ___port1, bool ___secure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnConnect(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnConnect_m1710717093 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnConnect(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnConnect_m3405943964 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnDelete(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnDelete_m3082340772 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnDelete(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnDelete_m2305741517 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnGet(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnGet_m1481949881 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnGet(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnGet_m1396863536 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnHead(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnHead_m2528963919 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnHead(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnHead_m4186254520 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnOptions(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnOptions_m51101297 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnOptions(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnOptions_m1746328168 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnPatch(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnPatch_m1777365127 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnPatch(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnPatch_m1613766206 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnPost(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnPost_m2809801359 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnPost(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnPost_m172124664 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnPut(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnPut_m1834033248 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnPut(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnPut_m1748946903 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::add_OnTrace(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_add_OnTrace_m2064714346 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::remove_OnTrace(System.EventHandler`1<WebSocketSharp.Server.HttpRequestEventArgs>)
extern "C"  void HttpServer_remove_OnTrace_m1901115425 (HttpServer_t2239471717 * __this, EventHandler_1_t1541016828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Server.HttpServer::get_Address()
extern "C"  IPAddress_t3525271463 * HttpServer_get_Address_m3636184665 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Server.HttpServer::get_AuthenticationSchemes()
extern "C"  int32_t HttpServer_get_AuthenticationSchemes_m256852600 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_AuthenticationSchemes(WebSocketSharp.Net.AuthenticationSchemes)
extern "C"  void HttpServer_set_AuthenticationSchemes_m2133668205 (HttpServer_t2239471717 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::get_IsListening()
extern "C"  bool HttpServer_get_IsListening_m3106989378 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::get_IsSecure()
extern "C"  bool HttpServer_get_IsSecure_m1950003762 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::get_KeepClean()
extern "C"  bool HttpServer_get_KeepClean_m394429333 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_KeepClean(System.Boolean)
extern "C"  void HttpServer_set_KeepClean_m2185001868 (HttpServer_t2239471717 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Server.HttpServer::get_Log()
extern "C"  Logger_t3695440972 * HttpServer_get_Log_m1240027569 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.HttpServer::get_Port()
extern "C"  int32_t HttpServer_get_Port_m1754520012 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::get_Realm()
extern "C"  String_t* HttpServer_get_Realm_m805582481 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_Realm(System.String)
extern "C"  void HttpServer_set_Realm_m2799883810 (HttpServer_t2239471717 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::get_ReuseAddress()
extern "C"  bool HttpServer_get_ReuseAddress_m256738321 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_ReuseAddress(System.Boolean)
extern "C"  void HttpServer_set_ReuseAddress_m2198393992 (HttpServer_t2239471717 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::get_RootPath()
extern "C"  String_t* HttpServer_get_RootPath_m2890067207 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_RootPath(System.String)
extern "C"  void HttpServer_set_RootPath_m3858191786 (HttpServer_t2239471717 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Server.HttpServer::get_SslConfiguration()
extern "C"  ServerSslConfiguration_t1612362831 * HttpServer_get_SslConfiguration_m1752030193 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_SslConfiguration(WebSocketSharp.Net.ServerSslConfiguration)
extern "C"  void HttpServer_set_SslConfiguration_m3309275182 (HttpServer_t2239471717 * __this, ServerSslConfiguration_t1612362831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Server.HttpServer::get_UserCredentialsFinder()
extern "C"  Func_2_t4138449219 * HttpServer_get_UserCredentialsFinder_m3302030755 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_UserCredentialsFinder(System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  void HttpServer_set_UserCredentialsFinder_m2125710928 (HttpServer_t2239471717 * __this, Func_2_t4138449219 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.Server.HttpServer::get_WaitTime()
extern "C"  TimeSpan_t413522987  HttpServer_get_WaitTime_m3547925020 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::set_WaitTime(System.TimeSpan)
extern "C"  void HttpServer_set_WaitTime_m3826013673 (HttpServer_t2239471717 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.HttpServer::get_WebSocketServices()
extern "C"  WebSocketServiceManager_t1938852857 * HttpServer_get_WebSocketServices_m1413681462 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::abort()
extern "C"  void HttpServer_abort_m612953790 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::checkIfAvailable(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String&)
extern "C"  bool HttpServer_checkIfAvailable_m365859414 (HttpServer_t2239471717 * __this, bool ___ready0, bool ___start1, bool ___shutting2, bool ___stop3, String_t** ___message4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::checkIfCertificateExists()
extern "C"  String_t* HttpServer_checkIfCertificateExists_m458121349 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::convertToString(System.Net.IPAddress)
extern "C"  String_t* HttpServer_convertToString_m3253249709 (Il2CppObject * __this /* static, unused */, IPAddress_t3525271463 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.HttpServer::getHost(System.Uri)
extern "C"  String_t* HttpServer_getHost_m4160030044 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::init(System.String,System.Net.IPAddress,System.Int32,System.Boolean)
extern "C"  void HttpServer_init_m2939179473 (HttpServer_t2239471717 * __this, String_t* ___hostname0, IPAddress_t3525271463 * ___address1, int32_t ___port2, bool ___secure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::processRequest(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpServer_processRequest_m2613611197 (HttpServer_t2239471717 * __this, HttpListenerContext_t3744659101 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::processRequest(WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext)
extern "C"  void HttpServer_processRequest_m3904087466 (HttpServer_t2239471717 * __this, HttpListenerWebSocketContext_t1074545506 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::receiveRequest()
extern "C"  void HttpServer_receiveRequest_m1248561216 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::startReceiving()
extern "C"  void HttpServer_startReceiving_m1619107378 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::stopReceiving(System.Int32)
extern "C"  void HttpServer_stopReceiving_m1946096477 (HttpServer_t2239471717 * __this, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::tryCreateUri(System.String,System.Uri&,System.String&)
extern "C"  bool HttpServer_tryCreateUri_m1296770520 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, Uri_t1116831938 ** ___result1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Server.HttpServer::GetFile(System.String)
extern "C"  ByteU5BU5D_t4260760469* HttpServer_GetFile_m2277008972 (HttpServer_t2239471717 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.HttpServer::RemoveWebSocketService(System.String)
extern "C"  bool HttpServer_RemoveWebSocketService_m4122293352 (HttpServer_t2239471717 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::Start()
extern "C"  void HttpServer_Start_m1575199568 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::Stop()
extern "C"  void HttpServer_Stop_m1159604342 (HttpServer_t2239471717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::Stop(System.UInt16,System.String)
extern "C"  void HttpServer_Stop_m3433714938 (HttpServer_t2239471717 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.HttpServer::Stop(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void HttpServer_Stop_m1018467974 (HttpServer_t2239471717 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
