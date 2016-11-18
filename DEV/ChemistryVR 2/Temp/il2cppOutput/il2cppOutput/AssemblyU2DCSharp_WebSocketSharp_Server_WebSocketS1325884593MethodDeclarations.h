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

// WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>
struct WebSocketServiceHost_1_t1325884593;
// System.String
struct String_t;
// System.Func`1<System.Object>
struct Func_1_t1001010649;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t1454629112;
// System.Type
struct Type_t;
// WebSocketSharp.Server.WebSocketBehavior
struct WebSocketBehavior_t1468757075;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Logger3695440972.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::.ctor(System.String,System.Func`1<TBehavior>,WebSocketSharp.Logger)
extern "C"  void WebSocketServiceHost_1__ctor_m1414527211_gshared (WebSocketServiceHost_1_t1325884593 * __this, String_t* ___path0, Func_1_t1001010649 * ___initializer1, Logger_t3695440972 * ___logger2, const MethodInfo* method);
#define WebSocketServiceHost_1__ctor_m1414527211(__this, ___path0, ___initializer1, ___logger2, method) ((  void (*) (WebSocketServiceHost_1_t1325884593 *, String_t*, Func_1_t1001010649 *, Logger_t3695440972 *, const MethodInfo*))WebSocketServiceHost_1__ctor_m1414527211_gshared)(__this, ___path0, ___initializer1, ___logger2, method)
// System.Boolean WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_KeepClean()
extern "C"  bool WebSocketServiceHost_1_get_KeepClean_m629527395_gshared (WebSocketServiceHost_1_t1325884593 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_KeepClean_m629527395(__this, method) ((  bool (*) (WebSocketServiceHost_1_t1325884593 *, const MethodInfo*))WebSocketServiceHost_1_get_KeepClean_m629527395_gshared)(__this, method)
// System.Void WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::set_KeepClean(System.Boolean)
extern "C"  void WebSocketServiceHost_1_set_KeepClean_m3923476466_gshared (WebSocketServiceHost_1_t1325884593 * __this, bool ___value0, const MethodInfo* method);
#define WebSocketServiceHost_1_set_KeepClean_m3923476466(__this, ___value0, method) ((  void (*) (WebSocketServiceHost_1_t1325884593 *, bool, const MethodInfo*))WebSocketServiceHost_1_set_KeepClean_m3923476466_gshared)(__this, ___value0, method)
// System.String WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_Path()
extern "C"  String_t* WebSocketServiceHost_1_get_Path_m1030357305_gshared (WebSocketServiceHost_1_t1325884593 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_Path_m1030357305(__this, method) ((  String_t* (*) (WebSocketServiceHost_1_t1325884593 *, const MethodInfo*))WebSocketServiceHost_1_get_Path_m1030357305_gshared)(__this, method)
// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_Sessions()
extern "C"  WebSocketSessionManager_t1454629112 * WebSocketServiceHost_1_get_Sessions_m2993075647_gshared (WebSocketServiceHost_1_t1325884593 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_Sessions_m2993075647(__this, method) ((  WebSocketSessionManager_t1454629112 * (*) (WebSocketServiceHost_1_t1325884593 *, const MethodInfo*))WebSocketServiceHost_1_get_Sessions_m2993075647_gshared)(__this, method)
// System.Type WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_Type()
extern "C"  Type_t * WebSocketServiceHost_1_get_Type_m35914295_gshared (WebSocketServiceHost_1_t1325884593 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_Type_m35914295(__this, method) ((  Type_t * (*) (WebSocketServiceHost_1_t1325884593 *, const MethodInfo*))WebSocketServiceHost_1_get_Type_m35914295_gshared)(__this, method)
// System.TimeSpan WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::get_WaitTime()
extern "C"  TimeSpan_t413522987  WebSocketServiceHost_1_get_WaitTime_m3193779164_gshared (WebSocketServiceHost_1_t1325884593 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_get_WaitTime_m3193779164(__this, method) ((  TimeSpan_t413522987  (*) (WebSocketServiceHost_1_t1325884593 *, const MethodInfo*))WebSocketServiceHost_1_get_WaitTime_m3193779164_gshared)(__this, method)
// System.Void WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocketServiceHost_1_set_WaitTime_m1269520975_gshared (WebSocketServiceHost_1_t1325884593 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method);
#define WebSocketServiceHost_1_set_WaitTime_m1269520975(__this, ___value0, method) ((  void (*) (WebSocketServiceHost_1_t1325884593 *, TimeSpan_t413522987 , const MethodInfo*))WebSocketServiceHost_1_set_WaitTime_m1269520975_gshared)(__this, ___value0, method)
// WebSocketSharp.Server.WebSocketBehavior WebSocketSharp.Server.WebSocketServiceHost`1<System.Object>::CreateSession()
extern "C"  WebSocketBehavior_t1468757075 * WebSocketServiceHost_1_CreateSession_m148103528_gshared (WebSocketServiceHost_1_t1325884593 * __this, const MethodInfo* method);
#define WebSocketServiceHost_1_CreateSession_m148103528(__this, method) ((  WebSocketBehavior_t1468757075 * (*) (WebSocketServiceHost_1_t1325884593 *, const MethodInfo*))WebSocketServiceHost_1_CreateSession_m148103528_gshared)(__this, method)
