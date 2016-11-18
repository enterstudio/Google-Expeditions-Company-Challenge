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

// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t1454629112;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// WebSocketSharp.Server.IWebSocketSession
struct IWebSocketSession_t403714098;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Server.IWebSocketSession>
struct IEnumerable_1_t3704627055;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Action
struct Action_t3771233898;
// System.IO.Stream
struct Stream_t1561764144;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.Byte[]>
struct Dictionary_2_t1115770063;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.IO.Stream>
struct Dictionary_2_t2711741034;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1297217088;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t2470319931;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.Object
struct Il2CppObject;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t2035959611;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Logger3695440972.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Server_ServerStat3811759112.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseEventArgs2470319931.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Timers_ElapsedEventArgs2035959611.h"

// System.Void WebSocketSharp.Server.WebSocketSessionManager::.ctor()
extern "C"  void WebSocketSessionManager__ctor_m242715117 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::.ctor(WebSocketSharp.Logger)
extern "C"  void WebSocketSessionManager__ctor_m875185834 (WebSocketSessionManager_t1454629112 * __this, Logger_t3695440972 * ___logger0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.ServerState WebSocketSharp.Server.WebSocketSessionManager::get_State()
extern "C"  int32_t WebSocketSessionManager_get_State_m3748400376 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Server.WebSocketSessionManager::get_ActiveIDs()
extern "C"  Il2CppObject* WebSocketSessionManager_get_ActiveIDs_m3234052240 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Server.WebSocketSessionManager::get_Count()
extern "C"  int32_t WebSocketSessionManager_get_Count_m3232655359 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Server.WebSocketSessionManager::get_IDs()
extern "C"  Il2CppObject* WebSocketSessionManager_get_IDs_m582274486 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Server.WebSocketSessionManager::get_InactiveIDs()
extern "C"  Il2CppObject* WebSocketSessionManager_get_InactiveIDs_m2588040971 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.IWebSocketSession WebSocketSharp.Server.WebSocketSessionManager::get_Item(System.String)
extern "C"  Il2CppObject * WebSocketSessionManager_get_Item_m1662335786 (WebSocketSessionManager_t1454629112 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::get_KeepClean()
extern "C"  bool WebSocketSessionManager_get_KeepClean_m2382619162 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::set_KeepClean(System.Boolean)
extern "C"  void WebSocketSessionManager_set_KeepClean_m100710249 (WebSocketSessionManager_t1454629112 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Server.IWebSocketSession> WebSocketSharp.Server.WebSocketSessionManager::get_Sessions()
extern "C"  Il2CppObject* WebSocketSessionManager_get_Sessions_m1536279129 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan WebSocketSharp.Server.WebSocketSessionManager::get_WaitTime()
extern "C"  TimeSpan_t413522987  WebSocketSessionManager_get_WaitTime_m1648207493 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::set_WaitTime(System.TimeSpan)
extern "C"  void WebSocketSessionManager_set_WaitTime_m1741722054 (WebSocketSessionManager_t1454629112 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::broadcast(WebSocketSharp.Opcode,System.Byte[],System.Action)
extern "C"  void WebSocketSessionManager_broadcast_m3943725639 (WebSocketSessionManager_t1454629112 * __this, uint8_t ___opcode0, ByteU5BU5D_t4260760469* ___data1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::broadcast(WebSocketSharp.Opcode,System.IO.Stream,System.Action)
extern "C"  void WebSocketSessionManager_broadcast_m3132997671 (WebSocketSessionManager_t1454629112 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::broadcastAsync(WebSocketSharp.Opcode,System.Byte[],System.Action)
extern "C"  void WebSocketSessionManager_broadcastAsync_m1437044769 (WebSocketSessionManager_t1454629112 * __this, uint8_t ___opcode0, ByteU5BU5D_t4260760469* ___data1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::broadcastAsync(WebSocketSharp.Opcode,System.IO.Stream,System.Action)
extern "C"  void WebSocketSessionManager_broadcastAsync_m3199575053 (WebSocketSessionManager_t1454629112 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketSessionManager::createID()
extern "C"  String_t* WebSocketSessionManager_createID_m2334141227 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::setSweepTimer(System.Double)
extern "C"  void WebSocketSessionManager_setSweepTimer_m1439104220 (WebSocketSessionManager_t1454629112 * __this, double ___interval0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::tryGetSession(System.String,WebSocketSharp.Server.IWebSocketSession&)
extern "C"  bool WebSocketSessionManager_tryGetSession_m299621104 (WebSocketSessionManager_t1454629112 * __this, String_t* ___id0, Il2CppObject ** ___session1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketSessionManager::Add(WebSocketSharp.Server.IWebSocketSession)
extern "C"  String_t* WebSocketSessionManager_Add_m1243201419 (WebSocketSessionManager_t1454629112 * __this, Il2CppObject * ___session0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Broadcast(WebSocketSharp.Opcode,System.Byte[],System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.Byte[]>)
extern "C"  void WebSocketSessionManager_Broadcast_m4134343452 (WebSocketSessionManager_t1454629112 * __this, uint8_t ___opcode0, ByteU5BU5D_t4260760469* ___data1, Dictionary_2_t1115770063 * ___cache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Broadcast(WebSocketSharp.Opcode,System.IO.Stream,System.Collections.Generic.Dictionary`2<WebSocketSharp.CompressionMethod,System.IO.Stream>)
extern "C"  void WebSocketSessionManager_Broadcast_m97340588 (WebSocketSessionManager_t1454629112 * __this, uint8_t ___opcode0, Stream_t1561764144 * ___stream1, Dictionary_2_t2711741034 * ___cache2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketSessionManager::Broadping(System.Byte[],System.TimeSpan)
extern "C"  Dictionary_2_t1297217088 * WebSocketSessionManager_Broadping_m3608964545 (WebSocketSessionManager_t1454629112 * __this, ByteU5BU5D_t4260760469* ___frameAsBytes0, TimeSpan_t413522987  ___timeout1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::Remove(System.String)
extern "C"  bool WebSocketSessionManager_Remove_m4072363995 (WebSocketSessionManager_t1454629112 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Start()
extern "C"  void WebSocketSessionManager_Start_m3484820205 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Stop(WebSocketSharp.CloseEventArgs,System.Byte[],System.Boolean)
extern "C"  void WebSocketSessionManager_Stop_m2571536555 (WebSocketSessionManager_t1454629112 * __this, CloseEventArgs_t2470319931 * ___e0, ByteU5BU5D_t4260760469* ___frameAsBytes1, bool ___receive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Broadcast(System.Byte[])
extern "C"  void WebSocketSessionManager_Broadcast_m1405775037 (WebSocketSessionManager_t1454629112 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Broadcast(System.String)
extern "C"  void WebSocketSessionManager_Broadcast_m3463580662 (WebSocketSessionManager_t1454629112 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::BroadcastAsync(System.Byte[],System.Action)
extern "C"  void WebSocketSessionManager_BroadcastAsync_m2988465614 (WebSocketSessionManager_t1454629112 * __this, ByteU5BU5D_t4260760469* ___data0, Action_t3771233898 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::BroadcastAsync(System.String,System.Action)
extern "C"  void WebSocketSessionManager_BroadcastAsync_m1163945287 (WebSocketSessionManager_t1454629112 * __this, String_t* ___data0, Action_t3771233898 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::BroadcastAsync(System.IO.Stream,System.Int32,System.Action)
extern "C"  void WebSocketSessionManager_BroadcastAsync_m962986341 (WebSocketSessionManager_t1454629112 * __this, Stream_t1561764144 * ___stream0, int32_t ___length1, Action_t3771233898 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketSessionManager::Broadping()
extern "C"  Dictionary_2_t1297217088 * WebSocketSessionManager_Broadping_m2056984862 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketSessionManager::Broadping(System.String)
extern "C"  Dictionary_2_t1297217088 * WebSocketSessionManager_Broadping_m3495216804 (WebSocketSessionManager_t1454629112 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::CloseSession(System.String)
extern "C"  void WebSocketSessionManager_CloseSession_m2645918573 (WebSocketSessionManager_t1454629112 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::CloseSession(System.String,System.UInt16,System.String)
extern "C"  void WebSocketSessionManager_CloseSession_m3717808343 (WebSocketSessionManager_t1454629112 * __this, String_t* ___id0, uint16_t ___code1, String_t* ___reason2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::CloseSession(System.String,WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocketSessionManager_CloseSession_m34160713 (WebSocketSessionManager_t1454629112 * __this, String_t* ___id0, uint16_t ___code1, String_t* ___reason2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::PingTo(System.String)
extern "C"  bool WebSocketSessionManager_PingTo_m978273714 (WebSocketSessionManager_t1454629112 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::PingTo(System.String,System.String)
extern "C"  bool WebSocketSessionManager_PingTo_m851152494 (WebSocketSessionManager_t1454629112 * __this, String_t* ___message0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendTo(System.Byte[],System.String)
extern "C"  void WebSocketSessionManager_SendTo_m100559979 (WebSocketSessionManager_t1454629112 * __this, ByteU5BU5D_t4260760469* ___data0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendTo(System.String,System.String)
extern "C"  void WebSocketSessionManager_SendTo_m2571006948 (WebSocketSessionManager_t1454629112 * __this, String_t* ___data0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendToAsync(System.Byte[],System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocketSessionManager_SendToAsync_m3748110542 (WebSocketSessionManager_t1454629112 * __this, ByteU5BU5D_t4260760469* ___data0, String_t* ___id1, Action_1_t872614854 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendToAsync(System.String,System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocketSessionManager_SendToAsync_m3552805959 (WebSocketSessionManager_t1454629112 * __this, String_t* ___data0, String_t* ___id1, Action_1_t872614854 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::SendToAsync(System.IO.Stream,System.Int32,System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocketSessionManager_SendToAsync_m1592347749 (WebSocketSessionManager_t1454629112 * __this, Stream_t1561764144 * ___stream0, int32_t ___length1, String_t* ___id2, Action_1_t872614854 * ___completed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::Sweep()
extern "C"  void WebSocketSessionManager_Sweep_m3574010615 (WebSocketSessionManager_t1454629112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketSessionManager::TryGetSession(System.String,WebSocketSharp.Server.IWebSocketSession&)
extern "C"  bool WebSocketSessionManager_TryGetSession_m3886672592 (WebSocketSessionManager_t1454629112 * __this, String_t* ___id0, Il2CppObject ** ___session1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketSessionManager::<setSweepTimer>m__24(System.Object,System.Timers.ElapsedEventArgs)
extern "C"  void WebSocketSessionManager_U3CsetSweepTimerU3Em__24_m1245689501 (WebSocketSessionManager_t1454629112 * __this, Il2CppObject * ___sender0, ElapsedEventArgs_t2035959611 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
