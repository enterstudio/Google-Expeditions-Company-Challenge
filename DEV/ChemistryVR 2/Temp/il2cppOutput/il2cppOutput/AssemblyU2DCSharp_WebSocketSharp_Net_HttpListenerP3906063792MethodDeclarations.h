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

// WebSocketSharp.Net.HttpListenerPrefix
struct HttpListenerPrefix_t3906063792;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListener398944510.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void WebSocketSharp.Net.HttpListenerPrefix::.ctor(System.String)
extern "C"  void HttpListenerPrefix__ctor_m2230618401 (HttpListenerPrefix_t3906063792 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::get_Host()
extern "C"  String_t* HttpListenerPrefix_get_Host_m345710993 (HttpListenerPrefix_t3906063792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefix::get_IsSecure()
extern "C"  bool HttpListenerPrefix_get_IsSecure_m936855289 (HttpListenerPrefix_t3906063792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerPrefix::get_Listener()
extern "C"  HttpListener_t398944510 * HttpListenerPrefix_get_Listener_m1569674277 (HttpListenerPrefix_t3906063792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefix::set_Listener(WebSocketSharp.Net.HttpListener)
extern "C"  void HttpListenerPrefix_set_Listener_m2023538214 (HttpListenerPrefix_t3906063792 * __this, HttpListener_t398944510 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::get_Original()
extern "C"  String_t* HttpListenerPrefix_get_Original_m1196792698 (HttpListenerPrefix_t3906063792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::get_Path()
extern "C"  String_t* HttpListenerPrefix_get_Path_m561833166 (HttpListenerPrefix_t3906063792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::get_Port()
extern "C"  String_t* HttpListenerPrefix_get_Port_m574714410 (HttpListenerPrefix_t3906063792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefix::parse(System.String)
extern "C"  void HttpListenerPrefix_parse_m3866392976 (HttpListenerPrefix_t3906063792 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefix::CheckPrefix(System.String)
extern "C"  void HttpListenerPrefix_CheckPrefix_m4251974217 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefix::Equals(System.Object)
extern "C"  bool HttpListenerPrefix_Equals_m1614371942 (HttpListenerPrefix_t3906063792 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerPrefix::GetHashCode()
extern "C"  int32_t HttpListenerPrefix_GetHashCode_m1450993278 (HttpListenerPrefix_t3906063792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpListenerPrefix::ToString()
extern "C"  String_t* HttpListenerPrefix_ToString_m4161055820 (HttpListenerPrefix_t3906063792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
