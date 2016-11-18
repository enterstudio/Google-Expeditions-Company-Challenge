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

// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t36945740;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t778194306;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_WebSocketFrame778194306.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"

// System.Void WebSocketSharp.MessageEventArgs::.ctor(WebSocketSharp.WebSocketFrame)
extern "C"  void MessageEventArgs__ctor_m1597614033 (MessageEventArgs_t36945740 * __this, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.MessageEventArgs::.ctor(WebSocketSharp.Opcode,System.Byte[])
extern "C"  void MessageEventArgs__ctor_m2265064076 (MessageEventArgs_t36945740 * __this, uint8_t ___opcode0, ByteU5BU5D_t4260760469* ___rawData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::get_Opcode()
extern "C"  uint8_t MessageEventArgs_get_Opcode_m4133992209 (MessageEventArgs_t36945740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.MessageEventArgs::get_Data()
extern "C"  String_t* MessageEventArgs_get_Data_m3589934276 (MessageEventArgs_t36945740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.MessageEventArgs::get_IsBinary()
extern "C"  bool MessageEventArgs_get_IsBinary_m2388467060 (MessageEventArgs_t36945740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.MessageEventArgs::get_IsPing()
extern "C"  bool MessageEventArgs_get_IsPing_m327319333 (MessageEventArgs_t36945740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.MessageEventArgs::get_IsText()
extern "C"  bool MessageEventArgs_get_IsText_m438452256 (MessageEventArgs_t36945740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.MessageEventArgs::get_RawData()
extern "C"  ByteU5BU5D_t4260760469* MessageEventArgs_get_RawData_m1299359681 (MessageEventArgs_t36945740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.MessageEventArgs::setData()
extern "C"  void MessageEventArgs_setData_m2304274266 (MessageEventArgs_t36945740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
