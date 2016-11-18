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

// WebSocketSharp.PayloadData
struct PayloadData_t39926750;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t479507413;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.PayloadData::.ctor()
extern "C"  void PayloadData__ctor_m1953054222 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[])
extern "C"  void PayloadData__ctor_m719751291 (PayloadData_t39926750 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Int64)
extern "C"  void PayloadData__ctor_m2192146365 (PayloadData_t39926750 * __this, ByteU5BU5D_t4260760469* ___data0, int64_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.ctor(System.UInt16,System.String)
extern "C"  void PayloadData__ctor_m2285273186 (PayloadData_t39926750 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::.cctor()
extern "C"  void PayloadData__cctor_m4228009823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.PayloadData::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * PayloadData_System_Collections_IEnumerable_GetEnumerator_m1737577763 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 WebSocketSharp.PayloadData::get_Code()
extern "C"  uint16_t PayloadData_get_Code_m861067265 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 WebSocketSharp.PayloadData::get_ExtensionDataLength()
extern "C"  int64_t PayloadData_get_ExtensionDataLength_m2659149091 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::set_ExtensionDataLength(System.Int64)
extern "C"  void PayloadData_set_ExtensionDataLength_m1141765936 (PayloadData_t39926750 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.PayloadData::get_HasReservedCode()
extern "C"  bool PayloadData_get_HasReservedCode_m2587051070 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.PayloadData::get_Reason()
extern "C"  String_t* PayloadData_get_Reason_m4234791142 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::get_ApplicationData()
extern "C"  ByteU5BU5D_t4260760469* PayloadData_get_ApplicationData_m3147947059 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::get_ExtensionData()
extern "C"  ByteU5BU5D_t4260760469* PayloadData_get_ExtensionData_m2164787682 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.PayloadData::get_Length()
extern "C"  uint64_t PayloadData_get_Length_m3166044545 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.PayloadData::Mask(System.Byte[])
extern "C"  void PayloadData_Mask_m2120375719 (PayloadData_t39926750 * __this, ByteU5BU5D_t4260760469* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.PayloadData::GetEnumerator()
extern "C"  Il2CppObject* PayloadData_GetEnumerator_m2795194391 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.PayloadData::ToArray()
extern "C"  ByteU5BU5D_t4260760469* PayloadData_ToArray_m2183245024 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.PayloadData::ToString()
extern "C"  String_t* PayloadData_ToString_m441557573 (PayloadData_t39926750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
