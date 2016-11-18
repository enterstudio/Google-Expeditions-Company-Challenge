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

// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t3888821117;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.String
struct String_t;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.IO.Stream
struct Stream_t1561764144;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.Version
struct Version_t763695022;
// System.Uri
struct Uri_t1116831938;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t160474609;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"
#include "mscorlib_System_Guid2862754429.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Version763695022.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void WebSocketSharp.Net.HttpListenerRequest::.ctor(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpListenerRequest__ctor_m2579181581 (HttpListenerRequest_t3888821117 * __this, HttpListenerContext_t3744659101 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerRequest::.cctor()
extern "C"  void HttpListenerRequest__cctor_m3586785449 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.HttpListenerRequest::get_AcceptTypes()
extern "C"  StringU5BU5D_t4054002952* HttpListenerRequest_get_AcceptTypes_m1348643113 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerRequest::get_ClientCertificateError()
extern "C"  int32_t HttpListenerRequest_get_ClientCertificateError_m828052851 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding WebSocketSharp.Net.HttpListenerRequest::get_ContentEncoding()
extern "C"  Encoding_t2012439129 * HttpListenerRequest_get_ContentEncoding_m1460083933 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.HttpListenerRequest::get_ContentLength64()
extern "C"  int64_t HttpListenerRequest_get_ContentLength64_m848704391 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_ContentType()
extern "C"  String_t* HttpListenerRequest_get_ContentType_m285575177 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerRequest::get_Cookies()
extern "C"  CookieCollection_t1136277956 * HttpListenerRequest_get_Cookies_m3685088019 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_HasEntityBody()
extern "C"  bool HttpListenerRequest_get_HasEntityBody_m3407426468 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpListenerRequest::get_Headers()
extern "C"  NameValueCollection_t2791941106 * HttpListenerRequest_get_Headers_m1002524169 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_HttpMethod()
extern "C"  String_t* HttpListenerRequest_get_HttpMethod_m2511432501 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.HttpListenerRequest::get_InputStream()
extern "C"  Stream_t1561764144 * HttpListenerRequest_get_InputStream_m3402611151 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsAuthenticated()
extern "C"  bool HttpListenerRequest_get_IsAuthenticated_m4271429098 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsLocal()
extern "C"  bool HttpListenerRequest_get_IsLocal_m2075868198 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsSecureConnection()
extern "C"  bool HttpListenerRequest_get_IsSecureConnection_m3630695100 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_IsWebSocketRequest()
extern "C"  bool HttpListenerRequest_get_IsWebSocketRequest_m1652499695 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::get_KeepAlive()
extern "C"  bool HttpListenerRequest_get_KeepAlive_m912099661 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpListenerRequest::get_LocalEndPoint()
extern "C"  IPEndPoint_t2123960758 * HttpListenerRequest_get_LocalEndPoint_m2837911762 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version WebSocketSharp.Net.HttpListenerRequest::get_ProtocolVersion()
extern "C"  Version_t763695022 * HttpListenerRequest_get_ProtocolVersion_m1066754005 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpListenerRequest::get_QueryString()
extern "C"  NameValueCollection_t2791941106 * HttpListenerRequest_get_QueryString_m70265788 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_RawUrl()
extern "C"  String_t* HttpListenerRequest_get_RawUrl_m1890151891 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpListenerRequest::get_RemoteEndPoint()
extern "C"  IPEndPoint_t2123960758 * HttpListenerRequest_get_RemoteEndPoint_m1696684651 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid WebSocketSharp.Net.HttpListenerRequest::get_RequestTraceIdentifier()
extern "C"  Guid_t2862754429  HttpListenerRequest_get_RequestTraceIdentifier_m250922611 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.HttpListenerRequest::get_Url()
extern "C"  Uri_t1116831938 * HttpListenerRequest_get_Url_m2579028472 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.HttpListenerRequest::get_UrlReferrer()
extern "C"  Uri_t1116831938 * HttpListenerRequest_get_UrlReferrer_m3854417783 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_UserAgent()
extern "C"  String_t* HttpListenerRequest_get_UserAgent_m3004223024 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_UserHostAddress()
extern "C"  String_t* HttpListenerRequest_get_UserHostAddress_m3217553175 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::get_UserHostName()
extern "C"  String_t* HttpListenerRequest_get_UserHostName_m250685674 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.HttpListenerRequest::get_UserLanguages()
extern "C"  StringU5BU5D_t4054002952* HttpListenerRequest_get_UserLanguages_m3607786472 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::tryCreateVersion(System.String,System.Version&)
extern "C"  bool HttpListenerRequest_tryCreateVersion_m3678681452 (Il2CppObject * __this /* static, unused */, String_t* ___version0, Version_t763695022 ** ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerRequest::AddHeader(System.String)
extern "C"  void HttpListenerRequest_AddHeader_m1643824594 (HttpListenerRequest_t3888821117 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerRequest::FinishInitialization()
extern "C"  void HttpListenerRequest_FinishInitialization_m4242321043 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerRequest::FlushInput()
extern "C"  bool HttpListenerRequest_FlushInput_m1186299994 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerRequest::SetRequestLine(System.String)
extern "C"  void HttpListenerRequest_SetRequestLine_m2013217025 (HttpListenerRequest_t3888821117 * __this, String_t* ___requestLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.HttpListenerRequest::BeginGetClientCertificate(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpListenerRequest_BeginGetClientCertificate_m1172141865 (HttpListenerRequest_t3888821117 * __this, AsyncCallback_t1369114871 * ___requestCallback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.HttpListenerRequest::EndGetClientCertificate(System.IAsyncResult)
extern "C"  X509Certificate2_t160474609 * HttpListenerRequest_EndGetClientCertificate_m1283421331 (HttpListenerRequest_t3888821117 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.HttpListenerRequest::GetClientCertificate()
extern "C"  X509Certificate2_t160474609 * HttpListenerRequest_GetClientCertificate_m1326521177 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerRequest::ToString()
extern "C"  String_t* HttpListenerRequest_ToString_m1246653583 (HttpListenerRequest_t3888821117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
