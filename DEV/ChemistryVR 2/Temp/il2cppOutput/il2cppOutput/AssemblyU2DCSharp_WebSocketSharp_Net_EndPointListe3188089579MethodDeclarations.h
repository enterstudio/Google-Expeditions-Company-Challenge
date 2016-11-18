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

// WebSocketSharp.Net.EndPointListener
struct EndPointListener_t3188089579;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.String
struct String_t;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t1612362831;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>
struct List_1_t979282048;
// WebSocketSharp.Net.HttpListenerPrefix
struct HttpListenerPrefix_t3906063792;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t742318033;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t160474609;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.Net.Sockets.Socket
struct Socket_t2157335841;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t602292776;
// System.Uri
struct Uri_t1116831938;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPEndPoint2123960758.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ServerSslConf1612362831.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerP3906063792.h"
#include "System_System_Security_Cryptography_X509Certificate160474609.h"
#include "System_System_Net_Sockets_Socket2157335841.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_EndPointListe3188089579.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpConnection602292776.h"
#include "System_System_Uri1116831938.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListener398944510.h"

// System.Void WebSocketSharp.Net.EndPointListener::.ctor(System.Net.IPEndPoint,System.Boolean,System.String,WebSocketSharp.Net.ServerSslConfiguration,System.Boolean)
extern "C"  void EndPointListener__ctor_m3784122753 (EndPointListener_t3188089579 * __this, IPEndPoint_t2123960758 * ___endpoint0, bool ___secure1, String_t* ___certificateFolderPath2, ServerSslConfiguration_t1612362831 * ___sslConfig3, bool ___reuseAddress4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::.cctor()
extern "C"  void EndPointListener__cctor_m1784240583 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Net.EndPointListener::get_Address()
extern "C"  IPAddress_t3525271463 * EndPointListener_get_Address_m671244143 (EndPointListener_t3188089579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointListener::get_IsSecure()
extern "C"  bool EndPointListener_get_IsSecure_m3872894772 (EndPointListener_t3188089579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.EndPointListener::get_Port()
extern "C"  int32_t EndPointListener_get_Port_m3097618650 (EndPointListener_t3188089579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Net.EndPointListener::get_SslConfiguration()
extern "C"  ServerSslConfiguration_t1612362831 * EndPointListener_get_SslConfiguration_m1464923463 (EndPointListener_t3188089579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::addSpecial(System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>,WebSocketSharp.Net.HttpListenerPrefix)
extern "C"  void EndPointListener_addSpecial_m245203718 (Il2CppObject * __this /* static, unused */, List_1_t979282048 * ___prefixes0, HttpListenerPrefix_t3906063792 * ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSACryptoServiceProvider WebSocketSharp.Net.EndPointListener::createRSAFromFile(System.String)
extern "C"  RSACryptoServiceProvider_t742318033 * EndPointListener_createRSAFromFile_m3892065145 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.EndPointListener::getCertificate(System.Int32,System.String,System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Certificate2_t160474609 * EndPointListener_getCertificate_m1039450851 (Il2CppObject * __this /* static, unused */, int32_t ___port0, String_t* ___folderPath1, X509Certificate2_t160474609 * ___defaultCertificate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::leaveIfNoPrefix()
extern "C"  void EndPointListener_leaveIfNoPrefix_m3315973227 (EndPointListener_t3188089579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::onAccept(System.IAsyncResult)
extern "C"  void EndPointListener_onAccept_m4181496958 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::processAccepted(System.Net.Sockets.Socket,WebSocketSharp.Net.EndPointListener)
extern "C"  void EndPointListener_processAccepted_m3179254414 (Il2CppObject * __this /* static, unused */, Socket_t2157335841 * ___socket0, EndPointListener_t3188089579 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointListener::removeSpecial(System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>,WebSocketSharp.Net.HttpListenerPrefix)
extern "C"  bool EndPointListener_removeSpecial_m2584419293 (Il2CppObject * __this /* static, unused */, List_1_t979282048 * ___prefixes0, HttpListenerPrefix_t3906063792 * ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.EndPointListener::searchHttpListenerFromSpecial(System.String,System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>)
extern "C"  HttpListener_t398944510 * EndPointListener_searchHttpListenerFromSpecial_m3699496604 (Il2CppObject * __this /* static, unused */, String_t* ___path0, List_1_t979282048 * ___prefixes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointListener::CertificateExists(System.Int32,System.String)
extern "C"  bool EndPointListener_CertificateExists_m352010776 (Il2CppObject * __this /* static, unused */, int32_t ___port0, String_t* ___folderPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::RemoveConnection(WebSocketSharp.Net.HttpConnection)
extern "C"  void EndPointListener_RemoveConnection_m4132871536 (EndPointListener_t3188089579 * __this, HttpConnection_t602292776 * ___connection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointListener::TrySearchHttpListener(System.Uri,WebSocketSharp.Net.HttpListener&)
extern "C"  bool EndPointListener_TrySearchHttpListener_m1255763694 (EndPointListener_t3188089579 * __this, Uri_t1116831938 * ___uri0, HttpListener_t398944510 ** ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::AddPrefix(WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointListener_AddPrefix_m1143414725 (EndPointListener_t3188089579 * __this, HttpListenerPrefix_t3906063792 * ___prefix0, HttpListener_t398944510 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::Close()
extern "C"  void EndPointListener_Close_m1229777852 (EndPointListener_t3188089579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointListener::RemovePrefix(WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointListener_RemovePrefix_m997033576 (EndPointListener_t3188089579 * __this, HttpListenerPrefix_t3906063792 * ___prefix0, HttpListener_t398944510 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
