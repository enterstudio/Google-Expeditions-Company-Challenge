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

// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t1204099087;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.Net.NetworkCredential::.ctor(System.String,System.String)
extern "C"  void NetworkCredential__ctor_m2840603468 (NetworkCredential_t1204099087 * __this, String_t* ___userName0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::.ctor(System.String,System.String,System.String,System.String[])
extern "C"  void NetworkCredential__ctor_m332947170 (NetworkCredential_t1204099087 * __this, String_t* ___userName0, String_t* ___password1, String_t* ___domain2, StringU5BU5D_t4054002952* ___roles3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.NetworkCredential::get_Domain()
extern "C"  String_t* NetworkCredential_get_Domain_m2408558338 (NetworkCredential_t1204099087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::set_Domain(System.String)
extern "C"  void NetworkCredential_set_Domain_m778498511 (NetworkCredential_t1204099087 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.NetworkCredential::get_Password()
extern "C"  String_t* NetworkCredential_get_Password_m2174672857 (NetworkCredential_t1204099087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::set_Password(System.String)
extern "C"  void NetworkCredential_set_Password_m2126556824 (NetworkCredential_t1204099087 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.NetworkCredential::get_Roles()
extern "C"  StringU5BU5D_t4054002952* NetworkCredential_get_Roles_m796691523 (NetworkCredential_t1204099087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::set_Roles(System.String[])
extern "C"  void NetworkCredential_set_Roles_m874615856 (NetworkCredential_t1204099087 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.NetworkCredential::get_UserName()
extern "C"  String_t* NetworkCredential_get_UserName_m2313746292 (NetworkCredential_t1204099087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.NetworkCredential::set_UserName(System.String)
extern "C"  void NetworkCredential_set_UserName_m1830619869 (NetworkCredential_t1204099087 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
