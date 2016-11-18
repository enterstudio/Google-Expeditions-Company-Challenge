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

// WebSocketSharp.Net.AuthenticationResponse
struct AuthenticationResponse_t2112712571;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t1204099087;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t1782907061;
// System.String
struct String_t;
// System.Security.Principal.IIdentity
struct IIdentity_t1905038877;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_NetworkCreden1204099087.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio1782907061.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.Net.AuthenticationResponse::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.Collections.Specialized.NameValueCollection)
extern "C"  void AuthenticationResponse__ctor_m432646435 (AuthenticationResponse_t2112712571 * __this, int32_t ___scheme0, NameValueCollection_t2791941106 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationResponse::.ctor(WebSocketSharp.Net.NetworkCredential)
extern "C"  void AuthenticationResponse__ctor_m4096801069 (AuthenticationResponse_t2112712571 * __this, NetworkCredential_t1204099087 * ___credentials0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationResponse::.ctor(WebSocketSharp.Net.AuthenticationChallenge,WebSocketSharp.Net.NetworkCredential,System.UInt32)
extern "C"  void AuthenticationResponse__ctor_m91930666 (AuthenticationResponse_t2112712571 * __this, AuthenticationChallenge_t1782907061 * ___challenge0, NetworkCredential_t1204099087 * ___credentials1, uint32_t ___nonceCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationResponse::.ctor(WebSocketSharp.Net.AuthenticationSchemes,System.Collections.Specialized.NameValueCollection,WebSocketSharp.Net.NetworkCredential,System.UInt32)
extern "C"  void AuthenticationResponse__ctor_m3870877966 (AuthenticationResponse_t2112712571 * __this, int32_t ___scheme0, NameValueCollection_t2791941106 * ___parameters1, NetworkCredential_t1204099087 * ___credentials2, uint32_t ___nonceCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 WebSocketSharp.Net.AuthenticationResponse::get_NonceCount()
extern "C"  uint32_t AuthenticationResponse_get_NonceCount_m622951388 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Cnonce()
extern "C"  String_t* AuthenticationResponse_get_Cnonce_m1417887328 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Nc()
extern "C"  String_t* AuthenticationResponse_get_Nc_m1420153321 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Password()
extern "C"  String_t* AuthenticationResponse_get_Password_m3955391247 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Response()
extern "C"  String_t* AuthenticationResponse_get_Response_m2030043957 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_Uri()
extern "C"  String_t* AuthenticationResponse_get_Uri_m1082053978 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::get_UserName()
extern "C"  String_t* AuthenticationResponse_get_UserName_m4094464682 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::createA1(System.String,System.String,System.String)
extern "C"  String_t* AuthenticationResponse_createA1_m1453305539 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, String_t* ___realm2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::createA1(System.String,System.String,System.String,System.String,System.String)
extern "C"  String_t* AuthenticationResponse_createA1_m3095589819 (Il2CppObject * __this /* static, unused */, String_t* ___username0, String_t* ___password1, String_t* ___realm2, String_t* ___nonce3, String_t* ___cnonce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::createA2(System.String,System.String)
extern "C"  String_t* AuthenticationResponse_createA2_m3822852710 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::createA2(System.String,System.String,System.String)
extern "C"  String_t* AuthenticationResponse_createA2_m428611618 (Il2CppObject * __this /* static, unused */, String_t* ___method0, String_t* ___uri1, String_t* ___entity2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::hash(System.String)
extern "C"  String_t* AuthenticationResponse_hash_m4150953353 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.AuthenticationResponse::initAsDigest()
extern "C"  void AuthenticationResponse_initAsDigest_m512426900 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::CreateRequestDigest(System.Collections.Specialized.NameValueCollection)
extern "C"  String_t* AuthenticationResponse_CreateRequestDigest_m2487636519 (Il2CppObject * __this /* static, unused */, NameValueCollection_t2791941106 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.AuthenticationResponse WebSocketSharp.Net.AuthenticationResponse::Parse(System.String)
extern "C"  AuthenticationResponse_t2112712571 * AuthenticationResponse_Parse_m1873470333 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.AuthenticationResponse::ParseBasicCredentials(System.String)
extern "C"  NameValueCollection_t2791941106 * AuthenticationResponse_ParseBasicCredentials_m1138064055 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::ToBasicString()
extern "C"  String_t* AuthenticationResponse_ToBasicString_m1355797499 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.AuthenticationResponse::ToDigestString()
extern "C"  String_t* AuthenticationResponse_ToDigestString_m3344972091 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IIdentity WebSocketSharp.Net.AuthenticationResponse::ToIdentity()
extern "C"  Il2CppObject * AuthenticationResponse_ToIdentity_m3820074700 (AuthenticationResponse_t2112712571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.AuthenticationResponse::<initAsDigest>m__10(System.String)
extern "C"  bool AuthenticationResponse_U3CinitAsDigestU3Em__10_m1041111114 (Il2CppObject * __this /* static, unused */, String_t* ___qop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
