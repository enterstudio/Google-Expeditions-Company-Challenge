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

// WebSocketSharp.HttpBase
struct HttpBase_t1712924533;
// System.Version
struct Version_t763695022;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.Stream
struct Stream_t1561764144;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Version763695022.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.HttpBase::.ctor(System.Version,System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpBase__ctor_m2861271121 (HttpBase_t1712924533 * __this, Version_t763695022 * ___version0, NameValueCollection_t2791941106 * ___headers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HttpBase::get_EntityBody()
extern "C"  String_t* HttpBase_get_EntityBody_m2143482024 (HttpBase_t1712924533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.HttpBase::get_Headers()
extern "C"  NameValueCollection_t2791941106 * HttpBase_get_Headers_m4258191640 (HttpBase_t1712924533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version WebSocketSharp.HttpBase::get_ProtocolVersion()
extern "C"  Version_t763695022 * HttpBase_get_ProtocolVersion_m2990665920 (HttpBase_t1712924533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.HttpBase::readEntityBody(System.IO.Stream,System.String)
extern "C"  ByteU5BU5D_t4260760469* HttpBase_readEntityBody_m67214369 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, String_t* ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.HttpBase::readHeaders(System.IO.Stream,System.Int32)
extern "C"  StringU5BU5D_t4054002952* HttpBase_readHeaders_m1246908778 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.HttpBase::ToByteArray()
extern "C"  ByteU5BU5D_t4260760469* HttpBase_ToByteArray_m1758981413 (HttpBase_t1712924533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
