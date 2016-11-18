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

// WebSocketSharp.Net.Cookie
struct Cookie_t2077085446;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Uri
struct Uri_t1116831938;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void WebSocketSharp.Net.Cookie::.ctor()
extern "C"  void Cookie__ctor_m161303275 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.ctor(System.String,System.String)
extern "C"  void Cookie__ctor_m4229273075 (Cookie_t2077085446 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.ctor(System.String,System.String,System.String)
extern "C"  void Cookie__ctor_m3287013615 (Cookie_t2077085446 * __this, String_t* ___name0, String_t* ___value1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void Cookie__ctor_m581120747 (Cookie_t2077085446 * __this, String_t* ___name0, String_t* ___value1, String_t* ___path2, String_t* ___domain3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::.cctor()
extern "C"  void Cookie__cctor_m223338018 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_ExactDomain()
extern "C"  bool Cookie_get_ExactDomain_m2100817271 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_ExactDomain(System.Boolean)
extern "C"  void Cookie_set_ExactDomain_m1409500166 (Cookie_t2077085446 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::get_MaxAge()
extern "C"  int32_t Cookie_get_MaxAge_m1656535599 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] WebSocketSharp.Net.Cookie::get_Ports()
extern "C"  Int32U5BU5D_t3230847821* Cookie_get_Ports_m1096371230 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Comment()
extern "C"  String_t* Cookie_get_Comment_m2551610914 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Comment(System.String)
extern "C"  void Cookie_set_Comment_m2078259159 (Cookie_t2077085446 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.Cookie::get_CommentUri()
extern "C"  Uri_t1116831938 * Cookie_get_CommentUri_m385704607 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_CommentUri(System.Uri)
extern "C"  void Cookie_set_CommentUri_m3858142966 (Cookie_t2077085446 * __this, Uri_t1116831938 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_Discard()
extern "C"  bool Cookie_get_Discard_m1719833650 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Discard(System.Boolean)
extern "C"  void Cookie_set_Discard_m1073640321 (Cookie_t2077085446 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Domain()
extern "C"  String_t* Cookie_get_Domain_m567228931 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Domain(System.String)
extern "C"  void Cookie_set_Domain_m522886984 (Cookie_t2077085446 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_Expired()
extern "C"  bool Cookie_get_Expired_m2104274169 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Expired(System.Boolean)
extern "C"  void Cookie_set_Expired_m1626219528 (Cookie_t2077085446 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.Net.Cookie::get_Expires()
extern "C"  DateTime_t4283661327  Cookie_get_Expires_m476365421 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Expires(System.DateTime)
extern "C"  void Cookie_set_Expires_m3074185624 (Cookie_t2077085446 * __this, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_HttpOnly()
extern "C"  bool Cookie_get_HttpOnly_m2458772642 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_HttpOnly(System.Boolean)
extern "C"  void Cookie_set_HttpOnly_m1863227457 (Cookie_t2077085446 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Name()
extern "C"  String_t* Cookie_get_Name_m4010262922 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Name(System.String)
extern "C"  void Cookie_set_Name_m962924897 (Cookie_t2077085446 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Path()
extern "C"  String_t* Cookie_get_Path_m4067732644 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Path(System.String)
extern "C"  void Cookie_set_Path_m2920579207 (Cookie_t2077085446 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Port()
extern "C"  String_t* Cookie_get_Port_m4080613888 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Port(System.String)
extern "C"  void Cookie_set_Port_m1603373227 (Cookie_t2077085446 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::get_Secure()
extern "C"  bool Cookie_get_Secure_m177642053 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Secure(System.Boolean)
extern "C"  void Cookie_set_Secure_m1321172644 (Cookie_t2077085446 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.Net.Cookie::get_TimeStamp()
extern "C"  DateTime_t4283661327  Cookie_get_TimeStamp_m1407122863 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::get_Value()
extern "C"  String_t* Cookie_get_Value_m2568772916 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Value(System.String)
extern "C"  void Cookie_set_Value_m3914524613 (Cookie_t2077085446 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::get_Version()
extern "C"  int32_t Cookie_get_Version_m3805664070 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.Cookie::set_Version(System.Int32)
extern "C"  void Cookie_set_Version_m3507131541 (Cookie_t2077085446 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::canSetName(System.String,System.String&)
extern "C"  bool Cookie_canSetName_m4079305552 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::canSetValue(System.String,System.String&)
extern "C"  bool Cookie_canSetValue_m784386314 (Il2CppObject * __this /* static, unused */, String_t* ___value0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Cookie_hash_m2911585194 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___j1, int32_t ___k2, int32_t ___l3, int32_t ___m4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::toResponseStringVersion0()
extern "C"  String_t* Cookie_toResponseStringVersion0_m2455548379 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::toResponseStringVersion1()
extern "C"  String_t* Cookie_toResponseStringVersion1_m2455549340 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::tryCreatePorts(System.String,System.Int32[]&,System.String&)
extern "C"  bool Cookie_tryCreatePorts_m311163735 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Int32U5BU5D_t3230847821** ___result1, String_t** ___parseError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToRequestString(System.Uri)
extern "C"  String_t* Cookie_ToRequestString_m2428107172 (Cookie_t2077085446 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToResponseString()
extern "C"  String_t* Cookie_ToResponseString_m3703425923 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.Cookie::Equals(System.Object)
extern "C"  bool Cookie_Equals_m3186476112 (Cookie_t2077085446 * __this, Il2CppObject * ___comparand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.Cookie::GetHashCode()
extern "C"  int32_t Cookie_GetHashCode_m3397750632 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.Cookie::ToString()
extern "C"  String_t* Cookie_ToString_m3371988002 (Cookie_t2077085446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
