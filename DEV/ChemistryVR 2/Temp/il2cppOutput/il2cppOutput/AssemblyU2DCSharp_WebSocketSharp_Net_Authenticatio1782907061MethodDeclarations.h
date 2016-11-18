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

// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t1782907061;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.Net.AuthenticationChallenge::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.Collections.Specialized.NameValueCollection)
extern "C"  void AuthenticationChallenge__ctor_m1420629037 (AuthenticationChallenge_t1782907061 * __this, int32_t ___scheme0, NameValueCollection_t2791941106 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationChallenge::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.String)
extern "C"  void AuthenticationChallenge__ctor_m2899974158 (AuthenticationChallenge_t1782907061 * __this, int32_t ___scheme0, String_t* ___realm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationChallenge::get_Domain()
extern "C"  String_t* AuthenticationChallenge_get_Domain_m2290735336 (AuthenticationChallenge_t1782907061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationChallenge::get_Stale()
extern "C"  String_t* AuthenticationChallenge_get_Stale_m2850690519 (AuthenticationChallenge_t1782907061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.Net.AuthenticationChallenge::CreateBasicChallenge(System.String)
extern "C"  AuthenticationChallenge_t1782907061 * AuthenticationChallenge_CreateBasicChallenge_m1503762059 (Il2CppObject * __this /* static, unused */, String_t* ___realm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.Net.AuthenticationChallenge::CreateDigestChallenge(System.String)
extern "C"  AuthenticationChallenge_t1782907061 * AuthenticationChallenge_CreateDigestChallenge_m3293250371 (Il2CppObject * __this /* static, unused */, String_t* ___realm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.Net.AuthenticationChallenge::Parse(System.String)
extern "C"  AuthenticationChallenge_t1782907061 * AuthenticationChallenge_Parse_m1516135155 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationChallenge::ToBasicString()
extern "C"  String_t* AuthenticationChallenge_ToBasicString_m911330507 (AuthenticationChallenge_t1782907061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationChallenge::ToDigestString()
extern "C"  String_t* AuthenticationChallenge_ToDigestString_m2451397227 (AuthenticationChallenge_t1782907061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
