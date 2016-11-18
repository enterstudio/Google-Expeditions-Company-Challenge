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

// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t1992878431;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.String
struct String_t;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t288332393;
// System.IO.Stream
struct Stream_t1561764144;
// System.Version
struct Version_t763695022;
// WebSocketSharp.Net.Cookie
struct Cookie_t2077085446;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie>
struct IEnumerable_1_t1083031107;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_CookieCollect1136277956.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebHeaderColle288332393.h"
#include "mscorlib_System_Version763695022.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Cookie2077085446.h"
#include "mscorlib_System_IO_MemoryStream418716369.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerR1992878431.h"

// System.Void WebSocketSharp.Net.HttpListenerResponse::.ctor(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpListenerResponse__ctor_m527904955 (HttpListenerResponse_t1992878431 * __this, HttpListenerContext_t3744659101 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::System.IDisposable.Dispose()
extern "C"  void HttpListenerResponse_System_IDisposable_Dispose_m3920839725 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::get_CloseConnection()
extern "C"  bool HttpListenerResponse_get_CloseConnection_m194381329 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_CloseConnection(System.Boolean)
extern "C"  void HttpListenerResponse_set_CloseConnection_m4038551072 (HttpListenerResponse_t1992878431 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::get_HeadersSent()
extern "C"  bool HttpListenerResponse_get_HeadersSent_m865078873 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_HeadersSent(System.Boolean)
extern "C"  void HttpListenerResponse_set_HeadersSent_m2854567016 (HttpListenerResponse_t1992878431 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding WebSocketSharp.Net.HttpListenerResponse::get_ContentEncoding()
extern "C"  Encoding_t2012439129 * HttpListenerResponse_get_ContentEncoding_m4105465115 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_ContentEncoding(System.Text.Encoding)
extern "C"  void HttpListenerResponse_set_ContentEncoding_m972536042 (HttpListenerResponse_t1992878431 * __this, Encoding_t2012439129 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.HttpListenerResponse::get_ContentLength64()
extern "C"  int64_t HttpListenerResponse_get_ContentLength64_m137158323 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_ContentLength64(System.Int64)
extern "C"  void HttpListenerResponse_set_ContentLength64_m738667586 (HttpListenerResponse_t1992878431 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerResponse::get_ContentType()
extern "C"  String_t* HttpListenerResponse_get_ContentType_m3505013469 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_ContentType(System.String)
extern "C"  void HttpListenerResponse_set_ContentType_m1075181116 (HttpListenerResponse_t1992878431 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerResponse::get_Cookies()
extern "C"  CookieCollection_t1136277956 * HttpListenerResponse_get_Cookies_m4037380363 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_Cookies(WebSocketSharp.Net.CookieCollection)
extern "C"  void HttpListenerResponse_set_Cookies_m2496166002 (HttpListenerResponse_t1992878431 * __this, CookieCollection_t1136277956 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.HttpListenerResponse::get_Headers()
extern "C"  WebHeaderCollection_t288332393 * HttpListenerResponse_get_Headers_m975799783 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_Headers(WebSocketSharp.Net.WebHeaderCollection)
extern "C"  void HttpListenerResponse_set_Headers_m4157677942 (HttpListenerResponse_t1992878431 * __this, WebHeaderCollection_t288332393 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::get_KeepAlive()
extern "C"  bool HttpListenerResponse_get_KeepAlive_m1768290915 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_KeepAlive(System.Boolean)
extern "C"  void HttpListenerResponse_set_KeepAlive_m4128670962 (HttpListenerResponse_t1992878431 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.HttpListenerResponse::get_OutputStream()
extern "C"  Stream_t1561764144 * HttpListenerResponse_get_OutputStream_m2851180968 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version WebSocketSharp.Net.HttpListenerResponse::get_ProtocolVersion()
extern "C"  Version_t763695022 * HttpListenerResponse_get_ProtocolVersion_m2764080395 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_ProtocolVersion(System.Version)
extern "C"  void HttpListenerResponse_set_ProtocolVersion_m1753423770 (HttpListenerResponse_t1992878431 * __this, Version_t763695022 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerResponse::get_RedirectLocation()
extern "C"  String_t* HttpListenerResponse_get_RedirectLocation_m601124553 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_RedirectLocation(System.String)
extern "C"  void HttpListenerResponse_set_RedirectLocation_m3934402114 (HttpListenerResponse_t1992878431 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::get_SendChunked()
extern "C"  bool HttpListenerResponse_get_SendChunked_m3676009407 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_SendChunked(System.Boolean)
extern "C"  void HttpListenerResponse_set_SendChunked_m549992270 (HttpListenerResponse_t1992878431 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerResponse::get_StatusCode()
extern "C"  int32_t HttpListenerResponse_get_StatusCode_m1221303372 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_StatusCode(System.Int32)
extern "C"  void HttpListenerResponse_set_StatusCode_m3431608671 (HttpListenerResponse_t1992878431 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerResponse::get_StatusDescription()
extern "C"  String_t* HttpListenerResponse_get_StatusDescription_m3824085940 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::set_StatusDescription(System.String)
extern "C"  void HttpListenerResponse_set_StatusDescription_m1735019909 (HttpListenerResponse_t1992878431 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerResponse::canAddOrUpdate(WebSocketSharp.Net.Cookie)
extern "C"  bool HttpListenerResponse_canAddOrUpdate_m2118789175 (HttpListenerResponse_t1992878431 * __this, Cookie_t2077085446 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::checkDisposed()
extern "C"  void HttpListenerResponse_checkDisposed_m1598110973 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::checkDisposedOrHeadersSent()
extern "C"  void HttpListenerResponse_checkDisposedOrHeadersSent_m2346439168 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::close(System.Boolean)
extern "C"  void HttpListenerResponse_close_m1264311135 (HttpListenerResponse_t1992878431 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.HttpListenerResponse::findCookie(WebSocketSharp.Net.Cookie)
extern "C"  Il2CppObject* HttpListenerResponse_findCookie_m3245427503 (HttpListenerResponse_t1992878431 * __this, Cookie_t2077085446 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.HttpListenerResponse::WriteHeadersTo(System.IO.MemoryStream)
extern "C"  WebHeaderCollection_t288332393 * HttpListenerResponse_WriteHeadersTo_m4140156720 (HttpListenerResponse_t1992878431 * __this, MemoryStream_t418716369 * ___destination0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Abort()
extern "C"  void HttpListenerResponse_Abort_m2487454464 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::AddHeader(System.String,System.String)
extern "C"  void HttpListenerResponse_AddHeader_m685743520 (HttpListenerResponse_t1992878431 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::AppendCookie(WebSocketSharp.Net.Cookie)
extern "C"  void HttpListenerResponse_AppendCookie_m1321773506 (HttpListenerResponse_t1992878431 * __this, Cookie_t2077085446 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::AppendHeader(System.String,System.String)
extern "C"  void HttpListenerResponse_AppendHeader_m2178199621 (HttpListenerResponse_t1992878431 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Close()
extern "C"  void HttpListenerResponse_Close_m253801416 (HttpListenerResponse_t1992878431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Close(System.Byte[],System.Boolean)
extern "C"  void HttpListenerResponse_Close_m1346396252 (HttpListenerResponse_t1992878431 * __this, ByteU5BU5D_t4260760469* ___responseEntity0, bool ___willBlock1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::CopyFrom(WebSocketSharp.Net.HttpListenerResponse)
extern "C"  void HttpListenerResponse_CopyFrom_m870782152 (HttpListenerResponse_t1992878431 * __this, HttpListenerResponse_t1992878431 * ___templateResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::Redirect(System.String)
extern "C"  void HttpListenerResponse_Redirect_m2157529364 (HttpListenerResponse_t1992878431 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerResponse::SetCookie(WebSocketSharp.Net.Cookie)
extern "C"  void HttpListenerResponse_SetCookie_m740043324 (HttpListenerResponse_t1992878431 * __this, Cookie_t2077085446 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
