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

// WebSocketSharp.Net.HttpDigestIdentity
struct HttpDigestIdentity_t2083794924;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.Net.HttpDigestIdentity::.ctor(System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpDigestIdentity__ctor_m1496509246 (HttpDigestIdentity_t2083794924 * __this, NameValueCollection_t2791941106 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Algorithm()
extern "C"  String_t* HttpDigestIdentity_get_Algorithm_m4158494476 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Cnonce()
extern "C"  String_t* HttpDigestIdentity_get_Cnonce_m620525457 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Nc()
extern "C"  String_t* HttpDigestIdentity_get_Nc_m432360346 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Nonce()
extern "C"  String_t* HttpDigestIdentity_get_Nonce_m250169484 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Opaque()
extern "C"  String_t* HttpDigestIdentity_get_Opaque_m1436919046 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Qop()
extern "C"  String_t* HttpDigestIdentity_get_Qop_m521466095 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Realm()
extern "C"  String_t* HttpDigestIdentity_get_Realm_m3502162732 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Response()
extern "C"  String_t* HttpDigestIdentity_get_Response_m269464614 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpDigestIdentity::get_Uri()
extern "C"  String_t* HttpDigestIdentity_get_Uri_m525242825 (HttpDigestIdentity_t2083794924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpDigestIdentity::IsValid(System.String,System.String,System.String,System.String)
extern "C"  bool HttpDigestIdentity_IsValid_m1271553933 (HttpDigestIdentity_t2083794924 * __this, String_t* ___password0, String_t* ___realm1, String_t* ___method2, String_t* ___entity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
