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

// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1938852857;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Server.WebSocketServiceHost>
struct IEnumerable_1_t2767309133;
// WebSocketSharp.Server.WebSocketServiceHost
struct WebSocketServiceHost_t3761363472;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Action
struct Action_t3771233898;
// System.IO.Stream
struct Stream_t1561764144;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>>
struct Dictionary_2_t2117635458;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t2470319931;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Logger3695440972.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Server_WebSocketS3761363472.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseEventArgs2470319931.h"

// System.Void WebSocketSharp.Server.WebSocketServiceManager::.ctor()
extern "C"  void WebSocketServiceManager__ctor_m2884939788 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::.ctor(WebSocketSharp.Logger)
extern "C"  void WebSocketServiceManager__ctor_m4206000619 (WebSocketServiceManager_t1938852857 * __this, Logger_t3695440972 * ___logger0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.WebSocketServiceManager::get_Count()
extern "C"  int32_t WebSocketServiceManager_get_Count_m1893557918 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Server.WebSocketServiceHost> WebSocketSharp.Server.WebSocketServiceManager::get_Hosts()
extern "C"  Il2CppObject* WebSocketServiceManager_get_Hosts_m733310474 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.WebSocketServiceHost WebSocketSharp.Server.WebSocketServiceManager::get_Item(System.String)
extern "C"  WebSocketServiceHost_t3761363472 * WebSocketServiceManager_get_Item_m4235289237 (WebSocketServiceManager_t1938852857 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServiceManager::get_KeepClean()
extern "C"  bool WebSocketServiceManager_get_KeepClean_m2068085049 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::set_KeepClean(System.Boolean)
extern "C"  void WebSocketServiceManager_set_KeepClean_m276753480 (WebSocketServiceManager_t1938852857 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Server.WebSocketServiceManager::get_Paths()
extern "C"  Il2CppObject* WebSocketServiceManager_get_Paths_m2631641515 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.WebSocketServiceManager::get_SessionCount()
extern "C"  int32_t WebSocketServiceManager_get_SessionCount_m50594508 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.Server.WebSocketServiceManager::get_WaitTime()
extern "C"  TimeSpan_t413522987  WebSocketServiceManager_get_WaitTime_m252587910 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocketServiceManager_set_WaitTime_m1917765285 (WebSocketServiceManager_t1938852857 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::broadcast(WebSocketSharp.Opcode,System.Byte[],System.Action)
extern "C"  void WebSocketServiceManager_broadcast_m2144561544 (WebSocketServiceManager_t1938852857 * __this, uint8_t ___opcode0, ByteU5BU5D_t4260760469* ___data1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::broadcast(WebSocketSharp.Opcode,System.IO.Stream,System.Action)
extern "C"  void WebSocketServiceManager_broadcast_m1132330310 (WebSocketServiceManager_t1938852857 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::broadcastAsync(WebSocketSharp.Opcode,System.Byte[],System.Action)
extern "C"  void WebSocketServiceManager_broadcastAsync_m2941059456 (WebSocketServiceManager_t1938852857 * __this, uint8_t ___opcode0, ByteU5BU5D_t4260760469* ___data1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::broadcastAsync(WebSocketSharp.Opcode,System.IO.Stream,System.Action)
extern "C"  void WebSocketServiceManager_broadcastAsync_m4202283598 (WebSocketServiceManager_t1938852857 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>> WebSocketSharp.Server.WebSocketServiceManager::broadping(System.Byte[],System.TimeSpan)
extern "C"  Dictionary_2_t2117635458 * WebSocketServiceManager_broadping_m2745961263 (WebSocketServiceManager_t1938852857 * __this, ByteU5BU5D_t4260760469* ___frameAsBytes0, TimeSpan_t413522987  ___timeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServiceManager::InternalTryGetServiceHost(System.String,WebSocketSharp.Server.WebSocketServiceHost&)
extern "C"  bool WebSocketServiceManager_InternalTryGetServiceHost_m1907653947 (WebSocketServiceManager_t1938852857 * __this, String_t* ___path0, WebSocketServiceHost_t3761363472 ** ___host1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServiceManager::Remove(System.String)
extern "C"  bool WebSocketServiceManager_Remove_m617601978 (WebSocketServiceManager_t1938852857 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::Start()
extern "C"  void WebSocketServiceManager_Start_m1832077580 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::Stop(WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean)
extern "C"  void WebSocketServiceManager_Stop_m1710339406 (WebSocketServiceManager_t1938852857 * __this, CloseEventArgs_t2470319931 * ___e0, bool ___send1, bool ___receive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::Broadcast(System.Byte[])
extern "C"  void WebSocketServiceManager_Broadcast_m891840638 (WebSocketServiceManager_t1938852857 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::Broadcast(System.String)
extern "C"  void WebSocketServiceManager_Broadcast_m2949646263 (WebSocketServiceManager_t1938852857 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::BroadcastAsync(System.Byte[],System.Action)
extern "C"  void WebSocketServiceManager_BroadcastAsync_m1607802989 (WebSocketServiceManager_t1938852857 * __this, ByteU5BU5D_t4260760469* ___data0, Action_t3771233898 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::BroadcastAsync(System.String,System.Action)
extern "C"  void WebSocketServiceManager_BroadcastAsync_m4078249958 (WebSocketServiceManager_t1938852857 * __this, String_t* ___data0, Action_t3771233898 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceManager::BroadcastAsync(System.IO.Stream,System.Int32,System.Action)
extern "C"  void WebSocketServiceManager_BroadcastAsync_m3537348100 (WebSocketServiceManager_t1938852857 * __this, Stream_t1561764144 * ___stream0, int32_t ___length1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>> WebSocketSharp.Server.WebSocketServiceManager::Broadping()
extern "C"  Dictionary_2_t2117635458 * WebSocketServiceManager_Broadping_m4003056848 (WebSocketServiceManager_t1938852857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Boolean>> WebSocketSharp.Server.WebSocketServiceManager::Broadping(System.String)
extern "C"  Dictionary_2_t2117635458 * WebSocketServiceManager_Broadping_m1766270002 (WebSocketServiceManager_t1938852857 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketServiceManager::TryGetServiceHost(System.String,WebSocketSharp.Server.WebSocketServiceHost&)
extern "C"  bool WebSocketServiceManager_TryGetServiceHost_m2799759582 (WebSocketServiceManager_t1938852857 * __this, String_t* ___path0, WebSocketServiceHost_t3761363472 ** ___host1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
