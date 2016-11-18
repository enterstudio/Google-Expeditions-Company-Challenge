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

// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t602292776;
// System.Net.Sockets.Socket
struct Socket_t2157335841;
// WebSocketSharp.Net.EndPointListener
struct EndPointListener_t3188089579;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.IO.Stream
struct Stream_t1561764144;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// WebSocketSharp.Net.RequestStream
struct RequestStream_t2929193945;
// WebSocketSharp.Net.ResponseStream
struct ResponseStream_t1796293571;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket2157335841.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_EndPointListe3188089579.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.Net.HttpConnection::.ctor(System.Net.Sockets.Socket,WebSocketSharp.Net.EndPointListener)
extern "C"  void HttpConnection__ctor_m1099570367 (HttpConnection_t602292776 * __this, Socket_t2157335841 * ___socket0, EndPointListener_t3188089579 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpConnection::get_IsClosed()
extern "C"  bool HttpConnection_get_IsClosed_m2926197286 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpConnection::get_IsSecure()
extern "C"  bool HttpConnection_get_IsSecure_m2782485873 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpConnection::get_LocalEndPoint()
extern "C"  IPEndPoint_t2123960758 * HttpConnection_get_LocalEndPoint_m3201291013 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint WebSocketSharp.Net.HttpConnection::get_RemoteEndPoint()
extern "C"  IPEndPoint_t2123960758 * HttpConnection_get_RemoteEndPoint_m76539544 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpConnection::get_Reuses()
extern "C"  int32_t HttpConnection_get_Reuses_m1885226581 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Net.HttpConnection::get_Stream()
extern "C"  Stream_t1561764144 * HttpConnection_get_Stream_m1110780432 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::close()
extern "C"  void HttpConnection_close_m4116767551 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::closeSocket()
extern "C"  void HttpConnection_closeSocket_m828190610 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::disposeRequestBuffer()
extern "C"  void HttpConnection_disposeRequestBuffer_m1096277451 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::disposeStream()
extern "C"  void HttpConnection_disposeStream_m2834655238 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::disposeTimer()
extern "C"  void HttpConnection_disposeTimer_m1490704097 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::init()
extern "C"  void HttpConnection_init_m2522998539 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::onRead(System.IAsyncResult)
extern "C"  void HttpConnection_onRead_m1543402899 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::onTimeout(System.Object)
extern "C"  void HttpConnection_onTimeout_m354236907 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpConnection::processInput(System.Byte[],System.Int32)
extern "C"  bool HttpConnection_processInput_m3877366992 (HttpConnection_t602292776 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpConnection::readLineFrom(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C"  String_t* HttpConnection_readLineFrom_m3814603986 (HttpConnection_t602292776 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___length2, int32_t* ___read3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::removeConnection()
extern "C"  void HttpConnection_removeConnection_m2486945021 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::unregisterContext()
extern "C"  void HttpConnection_unregisterContext_m3272376154 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::Close(System.Boolean)
extern "C"  void HttpConnection_Close_m685690454 (HttpConnection_t602292776 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::BeginReadRequest()
extern "C"  void HttpConnection_BeginReadRequest_m2524653259 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::Close()
extern "C"  void HttpConnection_Close_m1486453535 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.RequestStream WebSocketSharp.Net.HttpConnection::GetRequestStream(System.Int64,System.Boolean)
extern "C"  RequestStream_t2929193945 * HttpConnection_GetRequestStream_m2442459297 (HttpConnection_t602292776 * __this, int64_t ___contentLength0, bool ___chunked1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ResponseStream WebSocketSharp.Net.HttpConnection::GetResponseStream()
extern "C"  ResponseStream_t1796293571 * HttpConnection_GetResponseStream_m1988831668 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::SendError()
extern "C"  void HttpConnection_SendError_m111404935 (HttpConnection_t602292776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpConnection::SendError(System.String,System.Int32)
extern "C"  void HttpConnection_SendError_m1394109916 (HttpConnection_t602292776 * __this, String_t* ___message0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
