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

// WebSocketSharp.Server.WebSocketBehavior
struct WebSocketBehavior_t1468757075;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t1454629112;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t763725542;
// System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean>
struct Func_3_t3773821990;
// System.String
struct String_t;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t3730860138;
// System.Object
struct Il2CppObject;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t2470319931;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t424195371;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t36945740;
// System.EventArgs
struct EventArgs_t2540831021;
// System.Exception
struct Exception_t3991598821;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.FileInfo
struct FileInfo_t3233670074;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "AssemblyU2DCSharp_WebSocketSharp_WebSocketState790259878.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Web763725542.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseEventArgs2470319931.h"
#include "AssemblyU2DCSharp_WebSocketSharp_ErrorEventArgs424195371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_MessageEventArgs36945740.h"
#include "mscorlib_System_EventArgs2540831021.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Server_WebSocketS1454629112.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_IO_FileInfo3233670074.h"
#include "mscorlib_System_IO_Stream1561764144.h"

// System.Void WebSocketSharp.Server.WebSocketBehavior::.ctor()
extern "C"  void WebSocketBehavior__ctor_m1044863730 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketBehavior::get_Log()
extern "C"  Logger_t3695440972 * WebSocketBehavior_get_Log_m3648840195 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketBehavior::get_Sessions()
extern "C"  WebSocketSessionManager_t1454629112 * WebSocketBehavior_get_Sessions_m2811314691 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.Server.WebSocketBehavior::get_Context()
extern "C"  WebSocketContext_t763725542 * WebSocketBehavior_get_Context_m451836165 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean> WebSocketSharp.Server.WebSocketBehavior::get_CookiesValidator()
extern "C"  Func_3_t3773821990 * WebSocketBehavior_get_CookiesValidator_m1659654334 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_CookiesValidator(System.Func`3<WebSocketSharp.Net.CookieCollection,WebSocketSharp.Net.CookieCollection,System.Boolean>)
extern "C"  void WebSocketBehavior_set_CookiesValidator_m2388554221 (WebSocketBehavior_t1468757075 * __this, Func_3_t3773821990 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketBehavior::get_EmitOnPing()
extern "C"  bool WebSocketBehavior_get_EmitOnPing_m1512020363 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_EmitOnPing(System.Boolean)
extern "C"  void WebSocketBehavior_set_EmitOnPing_m2065943658 (WebSocketBehavior_t1468757075 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketBehavior::get_ID()
extern "C"  String_t* WebSocketBehavior_get_ID_m2286879123 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Server.WebSocketBehavior::get_IgnoreExtensions()
extern "C"  bool WebSocketBehavior_get_IgnoreExtensions_m242171501 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_IgnoreExtensions(System.Boolean)
extern "C"  void WebSocketBehavior_set_IgnoreExtensions_m3908444108 (WebSocketBehavior_t1468757075 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.String,System.Boolean> WebSocketSharp.Server.WebSocketBehavior::get_OriginValidator()
extern "C"  Func_2_t3730860138 * WebSocketBehavior_get_OriginValidator_m1644543316 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_OriginValidator(System.Func`2<System.String,System.Boolean>)
extern "C"  void WebSocketBehavior_set_OriginValidator_m2020277281 (WebSocketBehavior_t1468757075 * __this, Func_2_t3730860138 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketBehavior::get_Protocol()
extern "C"  String_t* WebSocketBehavior_get_Protocol_m2076455600 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::set_Protocol(System.String)
extern "C"  void WebSocketBehavior_set_Protocol_m2332474043 (WebSocketBehavior_t1468757075 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.Server.WebSocketBehavior::get_StartTime()
extern "C"  DateTime_t4283661327  WebSocketBehavior_get_StartTime_m902444559 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketState WebSocketSharp.Server.WebSocketBehavior::get_State()
extern "C"  uint16_t WebSocketBehavior_get_State_m2698408310 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Server.WebSocketBehavior::checkHandshakeRequest(WebSocketSharp.Net.WebSockets.WebSocketContext)
extern "C"  String_t* WebSocketBehavior_checkHandshakeRequest_m2251444933 (WebSocketBehavior_t1468757075 * __this, WebSocketContext_t763725542 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::onClose(System.Object,WebSocketSharp.CloseEventArgs)
extern "C"  void WebSocketBehavior_onClose_m1877152525 (WebSocketBehavior_t1468757075 * __this, Il2CppObject * ___sender0, CloseEventArgs_t2470319931 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::onError(System.Object,WebSocketSharp.ErrorEventArgs)
extern "C"  void WebSocketBehavior_onError_m3460471053 (WebSocketBehavior_t1468757075 * __this, Il2CppObject * ___sender0, ErrorEventArgs_t424195371 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::onMessage(System.Object,WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocketBehavior_onMessage_m1496520621 (WebSocketBehavior_t1468757075 * __this, Il2CppObject * ___sender0, MessageEventArgs_t36945740 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::onOpen(System.Object,System.EventArgs)
extern "C"  void WebSocketBehavior_onOpen_m4198997461 (WebSocketBehavior_t1468757075 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Start(WebSocketSharp.Net.WebSockets.WebSocketContext,WebSocketSharp.Server.WebSocketSessionManager)
extern "C"  void WebSocketBehavior_Start_m2171401938 (WebSocketBehavior_t1468757075 * __this, WebSocketContext_t763725542 * ___context0, WebSocketSessionManager_t1454629112 * ___sessions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Error(System.String,System.Exception)
extern "C"  void WebSocketBehavior_Error_m2006565004 (WebSocketBehavior_t1468757075 * __this, String_t* ___message0, Exception_t3991598821 * ___exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::OnClose(WebSocketSharp.CloseEventArgs)
extern "C"  void WebSocketBehavior_OnClose_m233740191 (WebSocketBehavior_t1468757075 * __this, CloseEventArgs_t2470319931 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::OnError(WebSocketSharp.ErrorEventArgs)
extern "C"  void WebSocketBehavior_OnError_m1161707935 (WebSocketBehavior_t1468757075 * __this, ErrorEventArgs_t424195371 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::OnMessage(WebSocketSharp.MessageEventArgs)
extern "C"  void WebSocketBehavior_OnMessage_m638564735 (WebSocketBehavior_t1468757075 * __this, MessageEventArgs_t36945740 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::OnOpen()
extern "C"  void WebSocketBehavior_OnOpen_m4118101595 (WebSocketBehavior_t1468757075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Send(System.Byte[])
extern "C"  void WebSocketBehavior_Send_m1386197103 (WebSocketBehavior_t1468757075 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Send(System.IO.FileInfo)
extern "C"  void WebSocketBehavior_Send_m3313042087 (WebSocketBehavior_t1468757075 * __this, FileInfo_t3233670074 * ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::Send(System.String)
extern "C"  void WebSocketBehavior_Send_m3444002728 (WebSocketBehavior_t1468757075 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::SendAsync(System.Byte[],System.Action`1<System.Boolean>)
extern "C"  void WebSocketBehavior_SendAsync_m1302011730 (WebSocketBehavior_t1468757075 * __this, ByteU5BU5D_t4260760469* ___data0, Action_1_t872614854 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::SendAsync(System.IO.FileInfo,System.Action`1<System.Boolean>)
extern "C"  void WebSocketBehavior_SendAsync_m1368219230 (WebSocketBehavior_t1468757075 * __this, FileInfo_t3233670074 * ___file0, Action_1_t872614854 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::SendAsync(System.String,System.Action`1<System.Boolean>)
extern "C"  void WebSocketBehavior_SendAsync_m1863293579 (WebSocketBehavior_t1468757075 * __this, String_t* ___data0, Action_1_t872614854 * ___completed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketBehavior::SendAsync(System.IO.Stream,System.Int32,System.Action`1<System.Boolean>)
extern "C"  void WebSocketBehavior_SendAsync_m1378930473 (WebSocketBehavior_t1468757075 * __this, Stream_t1561764144 * ___stream0, int32_t ___length1, Action_1_t872614854 * ___completed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
