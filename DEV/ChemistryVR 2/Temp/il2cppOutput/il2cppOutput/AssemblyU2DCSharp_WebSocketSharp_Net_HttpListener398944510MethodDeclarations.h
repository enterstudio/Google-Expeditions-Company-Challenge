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

// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes>
struct Func_2_t310774036;
// System.String
struct String_t;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// WebSocketSharp.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t1379363822;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t1612362831;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t4138449219;
// System.Exception
struct Exception_t3991598821;
// WebSocketSharp.Net.HttpListenerAsyncResult
struct HttpListenerAsyncResult_t183645863;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t602292776;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t3888821117;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ServerSslConf1612362831.h"
#include "mscorlib_System_Exception3991598821.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpConnection602292776.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerAs183645863.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerR3888821117.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void WebSocketSharp.Net.HttpListener::.ctor()
extern "C"  void HttpListener__ctor_m988682739 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::.cctor()
extern "C"  void HttpListener__cctor_m102297626 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::System.IDisposable.Dispose()
extern "C"  void HttpListener_System_IDisposable_Dispose_m4047862668 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_IsDisposed()
extern "C"  bool HttpListener_get_IsDisposed_m568993973 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_ReuseAddress()
extern "C"  bool HttpListener_get_ReuseAddress_m1899331750 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_ReuseAddress(System.Boolean)
extern "C"  void HttpListener_set_ReuseAddress_m1109299781 (HttpListener_t398944510 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.HttpListener::get_AuthenticationSchemes()
extern "C"  int32_t HttpListener_get_AuthenticationSchemes_m936442049 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_AuthenticationSchemes(WebSocketSharp.Net.AuthenticationSchemes)
extern "C"  void HttpListener_set_AuthenticationSchemes_m2135093904 (HttpListener_t398944510 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes> WebSocketSharp.Net.HttpListener::get_AuthenticationSchemeSelector()
extern "C"  Func_2_t310774036 * HttpListener_get_AuthenticationSchemeSelector_m1924907407 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_AuthenticationSchemeSelector(System.Func`2<WebSocketSharp.Net.HttpListenerRequest,WebSocketSharp.Net.AuthenticationSchemes>)
extern "C"  void HttpListener_set_AuthenticationSchemeSelector_m669738548 (HttpListener_t398944510 * __this, Func_2_t310774036 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListener::get_CertificateFolderPath()
extern "C"  String_t* HttpListener_get_CertificateFolderPath_m3368631541 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_CertificateFolderPath(System.String)
extern "C"  void HttpListener_set_CertificateFolderPath_m2917502308 (HttpListener_t398944510 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_IgnoreWriteExceptions()
extern "C"  bool HttpListener_get_IgnoreWriteExceptions_m844497069 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_IgnoreWriteExceptions(System.Boolean)
extern "C"  void HttpListener_set_IgnoreWriteExceptions_m442436028 (HttpListener_t398944510 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_IsListening()
extern "C"  bool HttpListener_get_IsListening_m1220313613 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_IsSupported()
extern "C"  bool HttpListener_get_IsSupported_m2323989824 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Net.HttpListener::get_Log()
extern "C"  Logger_t3695440972 * HttpListener_get_Log_m1844640964 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerPrefixCollection WebSocketSharp.Net.HttpListener::get_Prefixes()
extern "C"  HttpListenerPrefixCollection_t1379363822 * HttpListener_get_Prefixes_m294084911 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListener::get_Realm()
extern "C"  String_t* HttpListener_get_Realm_m1497312154 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_Realm(System.String)
extern "C"  void HttpListener_set_Realm_m4175208671 (HttpListener_t398944510 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Net.HttpListener::get_SslConfiguration()
extern "C"  ServerSslConfiguration_t1612362831 * HttpListener_get_SslConfiguration_m1742862682 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_SslConfiguration(WebSocketSharp.Net.ServerSslConfiguration)
extern "C"  void HttpListener_set_SslConfiguration_m2387694289 (HttpListener_t398944510 * __this, ServerSslConfiguration_t1612362831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::get_UnsafeConnectionNtlmAuthentication()
extern "C"  bool HttpListener_get_UnsafeConnectionNtlmAuthentication_m1240061865 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_UnsafeConnectionNtlmAuthentication(System.Boolean)
extern "C"  void HttpListener_set_UnsafeConnectionNtlmAuthentication_m1433467400 (HttpListener_t398944510 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Net.HttpListener::get_UserCredentialsFinder()
extern "C"  Func_2_t4138449219 * HttpListener_get_UserCredentialsFinder_m2410544024 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::set_UserCredentialsFinder(System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  void HttpListener_set_UserCredentialsFinder_m1891370701 (HttpListener_t398944510 * __this, Func_2_t4138449219 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::cleanupConnections()
extern "C"  void HttpListener_cleanupConnections_m4260647074 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::cleanupContextQueue(System.Boolean)
extern "C"  void HttpListener_cleanupContextQueue_m2842726478 (HttpListener_t398944510 * __this, bool ___sendServiceUnavailable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::cleanupContextRegistry()
extern "C"  void HttpListener_cleanupContextRegistry_m534931097 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::cleanupWaitQueue(System.Exception)
extern "C"  void HttpListener_cleanupWaitQueue_m2313684953 (HttpListener_t398944510 * __this, Exception_t3991598821 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::close(System.Boolean)
extern "C"  void HttpListener_close_m4079591648 (HttpListener_t398944510 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerAsyncResult WebSocketSharp.Net.HttpListener::getAsyncResultFromQueue()
extern "C"  HttpListenerAsyncResult_t183645863 * HttpListener_getAsyncResultFromQueue_m1298260721 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListener::getContextFromQueue()
extern "C"  HttpListenerContext_t3744659101 * HttpListener_getContextFromQueue_m2536230917 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::AddConnection(WebSocketSharp.Net.HttpConnection)
extern "C"  bool HttpListener_AddConnection_m937091564 (HttpListener_t398944510 * __this, HttpConnection_t602292776 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerAsyncResult WebSocketSharp.Net.HttpListener::BeginGetContext(WebSocketSharp.Net.HttpListenerAsyncResult)
extern "C"  HttpListenerAsyncResult_t183645863 * HttpListener_BeginGetContext_m2121454222 (HttpListener_t398944510 * __this, HttpListenerAsyncResult_t183645863 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::CheckDisposed()
extern "C"  void HttpListener_CheckDisposed_m2495622942 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListener::GetRealm()
extern "C"  String_t* HttpListener_GetRealm_m4206800263 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Net.HttpListener::GetUserCredentialsFinder()
extern "C"  Func_2_t4138449219 * HttpListener_GetUserCredentialsFinder_m4086414105 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListener::RegisterContext(WebSocketSharp.Net.HttpListenerContext)
extern "C"  bool HttpListener_RegisterContext_m3143071258 (HttpListener_t398944510 * __this, HttpListenerContext_t3744659101 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::RemoveConnection(WebSocketSharp.Net.HttpConnection)
extern "C"  void HttpListener_RemoveConnection_m3516625213 (HttpListener_t398944510 * __this, HttpConnection_t602292776 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.HttpListener::SelectAuthenticationScheme(WebSocketSharp.Net.HttpListenerRequest)
extern "C"  int32_t HttpListener_SelectAuthenticationScheme_m1321691792 (HttpListener_t398944510 * __this, HttpListenerRequest_t3888821117 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::UnregisterContext(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpListener_UnregisterContext_m3333060781 (HttpListener_t398944510 * __this, HttpListenerContext_t3744659101 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::Abort()
extern "C"  void HttpListener_Abort_m638228033 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.HttpListener::BeginGetContext(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpListener_BeginGetContext_m36464131 (HttpListener_t398944510 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::Close()
extern "C"  void HttpListener_Close_m2699542281 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListener::EndGetContext(System.IAsyncResult)
extern "C"  HttpListenerContext_t3744659101 * HttpListener_EndGetContext_m3508574840 (HttpListener_t398944510 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListener::GetContext()
extern "C"  HttpListenerContext_t3744659101 * HttpListener_GetContext_m2821705508 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::Start()
extern "C"  void HttpListener_Start_m4230787827 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListener::Stop()
extern "C"  void HttpListener_Stop_m829626483 (HttpListener_t398944510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
