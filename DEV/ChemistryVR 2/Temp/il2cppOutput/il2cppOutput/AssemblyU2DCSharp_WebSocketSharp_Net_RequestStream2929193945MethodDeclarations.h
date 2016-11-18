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

// WebSocketSharp.Net.RequestStream
struct RequestStream_t2929193945;
// System.IO.Stream
struct Stream_t1561764144;
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
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void WebSocketSharp.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  void RequestStream__ctor_m1819832546 (RequestStream_t2929193945 * __this, Stream_t1561764144 * ___stream0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___offset2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Int64)
extern "C"  void RequestStream__ctor_m4088182454 (RequestStream_t2929193945 * __this, Stream_t1561764144 * ___stream0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___offset2, int32_t ___count3, int64_t ___contentLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.RequestStream::get_CanRead()
extern "C"  bool RequestStream_get_CanRead_m2320963375 (RequestStream_t2929193945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.RequestStream::get_CanSeek()
extern "C"  bool RequestStream_get_CanSeek_m2349718417 (RequestStream_t2929193945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.RequestStream::get_CanWrite()
extern "C"  bool RequestStream_get_CanWrite_m3753041416 (RequestStream_t2929193945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.RequestStream::get_Length()
extern "C"  int64_t RequestStream_get_Length_m3314334426 (RequestStream_t2929193945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.RequestStream::get_Position()
extern "C"  int64_t RequestStream_get_Position_m2726118301 (RequestStream_t2929193945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::set_Position(System.Int64)
extern "C"  void RequestStream_set_Position_m1985679700 (RequestStream_t2929193945 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.RequestStream::fillFromBuffer(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t RequestStream_fillFromBuffer_m2334450834 (RequestStream_t2929193945 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.RequestStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RequestStream_BeginRead_m3057763658 (RequestStream_t2929193945 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.RequestStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RequestStream_BeginWrite_m2773889471 (RequestStream_t2929193945 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::Close()
extern "C"  void RequestStream_Close_m2337225150 (RequestStream_t2929193945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.RequestStream::EndRead(System.IAsyncResult)
extern "C"  int32_t RequestStream_EndRead_m1658999994 (RequestStream_t2929193945 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::EndWrite(System.IAsyncResult)
extern "C"  void RequestStream_EndWrite_m2372448515 (RequestStream_t2929193945 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::Flush()
extern "C"  void RequestStream_Flush_m710312906 (RequestStream_t2929193945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.RequestStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t RequestStream_Read_m126343209 (RequestStream_t2929193945 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.Net.RequestStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t RequestStream_Seek_m121018570 (RequestStream_t2929193945 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::SetLength(System.Int64)
extern "C"  void RequestStream_SetLength_m1024144128 (RequestStream_t2929193945 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.RequestStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void RequestStream_Write_m2290040420 (RequestStream_t2929193945 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
