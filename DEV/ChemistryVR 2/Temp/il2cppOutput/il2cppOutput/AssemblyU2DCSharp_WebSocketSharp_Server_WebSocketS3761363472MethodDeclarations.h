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

// WebSocketSharp.Server.WebSocketServiceHost
struct WebSocketServiceHost_t3761363472;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t763725542;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Server_ServerStat3811759112.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Web763725542.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.Server.WebSocketServiceHost::.ctor()
extern "C"  void WebSocketServiceHost__ctor_m1517077253 (WebSocketServiceHost_t3761363472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Server.ServerState WebSocketSharp.Server.WebSocketServiceHost::get_State()
extern "C"  int32_t WebSocketServiceHost_get_State_m2266518310 (WebSocketServiceHost_t3761363472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceHost::Start()
extern "C"  void WebSocketServiceHost_Start_m464215045 (WebSocketServiceHost_t3761363472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceHost::StartSession(WebSocketSharp.Net.WebSockets.WebSocketContext)
extern "C"  void WebSocketServiceHost_StartSession_m1276825893 (WebSocketServiceHost_t3761363472 * __this, WebSocketContext_t763725542 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Server.WebSocketServiceHost::Stop(System.UInt16,System.String)
extern "C"  void WebSocketServiceHost_Stop_m437052783 (WebSocketServiceHost_t3761363472 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
