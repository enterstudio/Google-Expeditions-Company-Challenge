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

// WebSocketSharp.Net.ChunkStream
struct ChunkStream_t4213968439;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t288332393;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebHeaderColle288332393.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_InputChunkSta4273164664.h"

// System.Void WebSocketSharp.Net.ChunkStream::.ctor(WebSocketSharp.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m2968231879 (ChunkStream_t4213968439 * __this, WebHeaderCollection_t288332393 * ___headers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,WebSocketSharp.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m2255280580 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, WebHeaderCollection_t288332393 * ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.ChunkStream::get_Headers()
extern "C"  WebHeaderCollection_t288332393 * ChunkStream_get_Headers_m2902828043 (ChunkStream_t4213968439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkStream::get_ChunkLeft()
extern "C"  int32_t ChunkStream_get_ChunkLeft_m1129758725 (ChunkStream_t4213968439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ChunkStream::get_WantMore()
extern "C"  bool ChunkStream_get_WantMore_m2363430268 (ChunkStream_t4213968439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkStream::read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_read_m633260203 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.ChunkStream::removeChunkExtension(System.String)
extern "C"  String_t* ChunkStream_removeChunkExtension_m2118000559 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::seekCrLf(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_seekCrLf_m1260524479 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::setChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_setChunkSize_m1455200490 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::setTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_setTrailer_m3198662735 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::throwProtocolViolation(System.String)
extern "C"  void ChunkStream_throwProtocolViolation_m1183337889 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::write(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ChunkStream_write_m3224357920 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.InputChunkState WebSocketSharp.Net.ChunkStream::writeData(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_writeData_m408515775 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::ResetBuffer()
extern "C"  void ChunkStream_ResetBuffer_m1857756311 (ChunkStream_t4213968439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_WriteAndReadBack_m3392033291 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___writeCount2, int32_t ___readCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_Read_m3517347979 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ChunkStream_Write_m4013588162 (ChunkStream_t4213968439 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
