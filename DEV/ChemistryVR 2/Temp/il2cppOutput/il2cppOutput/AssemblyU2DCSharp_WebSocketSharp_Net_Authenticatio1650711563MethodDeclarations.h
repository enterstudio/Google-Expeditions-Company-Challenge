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

// WebSocketSharp.Net.AuthenticationBase
struct AuthenticationBase_t1650711563;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.Net.AuthenticationBase::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.Collections.Specialized.NameValueCollection)
extern "C"  void AuthenticationBase__ctor_m150559155 (AuthenticationBase_t1650711563 * __this, int32_t ___scheme0, NameValueCollection_t2791941106 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Algorithm()
extern "C"  String_t* AuthenticationBase_get_Algorithm_m656788685 (AuthenticationBase_t1650711563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Nonce()
extern "C"  String_t* AuthenticationBase_get_Nonce_m1248626381 (AuthenticationBase_t1650711563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Opaque()
extern "C"  String_t* AuthenticationBase_get_Opaque_m2324311781 (AuthenticationBase_t1650711563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Qop()
extern "C"  String_t* AuthenticationBase_get_Qop_m522505072 (AuthenticationBase_t1650711563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::get_Realm()
extern "C"  String_t* AuthenticationBase_get_Realm_m205652333 (AuthenticationBase_t1650711563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.AuthenticationBase::get_Scheme()
extern "C"  int32_t AuthenticationBase_get_Scheme_m3444393929 (AuthenticationBase_t1650711563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::CreateNonceValue()
extern "C"  String_t* AuthenticationBase_CreateNonceValue_m664928793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.AuthenticationBase::ParseParameters(System.String)
extern "C"  NameValueCollection_t2791941106 * AuthenticationBase_ParseParameters_m328941515 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationBase::ToString()
extern "C"  String_t* AuthenticationBase_ToString_m2575632935 (AuthenticationBase_t1650711563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
