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

// WebSocketSharp.Net.ChunkedRequestStream
struct ChunkedRequestStream_t849747493;
// System.IO.Stream
struct Stream_t1561764144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// WebSocketSharp.Net.ChunkStream
struct ChunkStream_t4213968439;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ChunkStream4213968439.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void WebSocketSharp.Net.ChunkedRequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32,WebSocketSharp.Net.HttpListenerContext)
extern "C"  void ChunkedRequestStream__ctor_m2474292201 (ChunkedRequestStream_t849747493 * __this, Stream_t1561764144 * ___stream0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___offset2, int32_t ___count3, HttpListenerContext_t3744659101 * ___context4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.ChunkStream WebSocketSharp.Net.ChunkedRequestStream::get_Decoder()
extern "C"  ChunkStream_t4213968439 * ChunkedRequestStream_get_Decoder_m2805342993 (ChunkedRequestStream_t849747493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkedRequestStream::set_Decoder(WebSocketSharp.Net.ChunkStream)
extern "C"  void ChunkedRequestStream_set_Decoder_m2640810272 (ChunkedRequestStream_t849747493 * __this, ChunkStream_t4213968439 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkedRequestStream::onRead(System.IAsyncResult)
extern "C"  void ChunkedRequestStream_onRead_m895469750 (ChunkedRequestStream_t849747493 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebSocketSharp.Net.ChunkedRequestStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ChunkedRequestStream_BeginRead_m2019690198 (ChunkedRequestStream_t849747493 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkedRequestStream::Close()
extern "C"  void ChunkedRequestStream_Close_m933985730 (ChunkedRequestStream_t849747493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkedRequestStream::EndRead(System.IAsyncResult)
extern "C"  int32_t ChunkedRequestStream_EndRead_m1148847194 (ChunkedRequestStream_t849747493 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkedRequestStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkedRequestStream_Read_m999382153 (ChunkedRequestStream_t849747493 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
