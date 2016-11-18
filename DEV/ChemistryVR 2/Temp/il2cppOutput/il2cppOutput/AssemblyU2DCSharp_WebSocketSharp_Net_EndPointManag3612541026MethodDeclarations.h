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

// WebSocketSharp.Net.EndPointManager
struct EndPointManager_t3612541026;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListener398944510.h"
#include "System_System_Net_IPEndPoint2123960758.h"

// System.Void WebSocketSharp.Net.EndPointManager::.ctor()
extern "C"  void EndPointManager__ctor_m3262278719 (EndPointManager_t3612541026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::.cctor()
extern "C"  void EndPointManager__cctor_m1864296270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::addPrefix(System.String,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_addPrefix_m487406182 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, HttpListener_t398944510 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Net.EndPointManager::convertToIPAddress(System.String)
extern "C"  IPAddress_t3525271463 * EndPointManager_convertToIPAddress_m3181936030 (Il2CppObject * __this /* static, unused */, String_t* ___hostname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::removePrefix(System.String,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_removePrefix_m3525430747 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, HttpListener_t398944510 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.EndPointManager::RemoveEndPoint(System.Net.IPEndPoint)
extern "C"  bool EndPointManager_RemoveEndPoint_m3142674036 (Il2CppObject * __this /* static, unused */, IPEndPoint_t2123960758 * ___endpoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::AddListener(WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_AddListener_m4252482088 (Il2CppObject * __this /* static, unused */, HttpListener_t398944510 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::AddPrefix(System.String,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_AddPrefix_m4131577478 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, HttpListener_t398944510 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::RemoveListener(WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_RemoveListener_m1982232797 (Il2CppObject * __this /* static, unused */, HttpListener_t398944510 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.EndPointManager::RemovePrefix(System.String,WebSocketSharp.Net.HttpListener)
extern "C"  void EndPointManager_RemovePrefix_m3144168891 (Il2CppObject * __this /* static, unused */, String_t* ___uriPrefix0, HttpListener_t398944510 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
