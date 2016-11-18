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

// WebSocketSharp.Net.ResponseStream
struct ResponseStream_t1796293571;
// System.IO.Stream
struct Stream_t1561764144;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t1992878431;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerR1992878431.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void WebSocketSharp.Net.ResponseStream::.ctor(System.IO.Stream,WebSocketSharp.Net.HttpListenerResponse,System.Boolean)
extern "C"  void ResponseStream__ctor_m3189939365 (ResponseStream_t1796293571 * __this, Stream_t1561764144 * ___stream0, HttpListenerResponse_t1992878431 * ___response1, bool ___ignoreWriteExceptions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::.cctor()
extern "C"  void ResponseStream__cctor_m3711218335 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::get_CanRead()
extern "C"  bool ResponseStream_get_CanRead_m361059517 (ResponseStream_t1796293571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::get_CanSeek()
extern "C"  bool ResponseStream_get_CanSeek_m389814559 (ResponseStream_t1796293571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::get_CanWrite()
extern "C"  bool ResponseStream_get_CanWrite_m3125563962 (ResponseStream_t1796293571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.ResponseStream::get_Length()
extern "C"  int64_t ResponseStream_get_Length_m3955333046 (ResponseStream_t1796293571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.ResponseStream::get_Position()
extern "C"  int64_t ResponseStream_get_Position_m250501497 (ResponseStream_t1796293571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::set_Position(System.Int64)
extern "C"  void ResponseStream_set_Position_m3632285038 (ResponseStream_t1796293571 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::flush(System.Boolean)
extern "C"  bool ResponseStream_flush_m3856655931 (ResponseStream_t1796293571 * __this, bool ___closing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::flushBody(System.Boolean)
extern "C"  void ResponseStream_flushBody_m95391177 (ResponseStream_t1796293571 * __this, bool ___closing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ResponseStream::flushHeaders(System.Boolean)
extern "C"  bool ResponseStream_flushHeaders_m1354904891 (ResponseStream_t1796293571 * __this, bool ___closing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.ResponseStream::getChunkSizeBytes(System.Int32,System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* ResponseStream_getChunkSizeBytes_m1989477443 (Il2CppObject * __this /* static, unused */, int32_t ___size0, bool ___final1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::writeChunked(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_writeChunked_m1111119686 (ResponseStream_t1796293571 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::writeChunkedWithoutThrowingException(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_writeChunkedWithoutThrowingException_m1408899323 (ResponseStream_t1796293571 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::writeWithoutThrowingException(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_writeWithoutThrowingException_m401215251 (ResponseStream_t1796293571 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Close(System.Boolean)
extern "C"  void ResponseStream_Close_m2547265115 (ResponseStream_t1796293571 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_InternalWrite_m248884379 (ResponseStream_t1796293571 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.ResponseStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResponseStream_BeginRead_m1154080888 (ResponseStream_t1796293571 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.ResponseStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResponseStream_BeginWrite_m3889265745 (ResponseStream_t1796293571 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Close()
extern "C"  void ResponseStream_Close_m599201764 (ResponseStream_t1796293571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Dispose(System.Boolean)
extern "C"  void ResponseStream_Dispose_m1318848962 (ResponseStream_t1796293571 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ResponseStream::EndRead(System.IAsyncResult)
extern "C"  int32_t ResponseStream_EndRead_m4190953720 (ResponseStream_t1796293571 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::EndWrite(System.IAsyncResult)
extern "C"  void ResponseStream_EndWrite_m3570585257 (ResponseStream_t1796293571 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Flush()
extern "C"  void ResponseStream_Flush_m3267256816 (ResponseStream_t1796293571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ResponseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ResponseStream_Read_m1155239851 (ResponseStream_t1796293571 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.ResponseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ResponseStream_Seek_m914002542 (ResponseStream_t1796293571 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::SetLength(System.Int64)
extern "C"  void ResponseStream_SetLength_m1865286950 (ResponseStream_t1796293571 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ResponseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_Write_m3213582718 (ResponseStream_t1796293571 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
