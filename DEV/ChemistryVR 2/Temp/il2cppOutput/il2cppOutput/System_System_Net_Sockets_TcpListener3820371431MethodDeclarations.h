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

// System.Net.Sockets.TcpListener
struct TcpListener_t3820371431;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.Net.EndPoint
struct EndPoint_t1026786191;
// System.Net.Sockets.Socket
struct Socket_t2157335841;
// System.Net.Sockets.TcpClient
struct TcpClient_t838416830;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "System_System_Net_Sockets_AddressFamily3770679850.h"
#include "System_System_Net_EndPoint1026786191.h"

// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void TcpListener__ctor_m3859460879 (TcpListener_t3820371431 * __this, IPAddress_t3525271463 * ___listen_ip0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Init(System.Net.Sockets.AddressFamily,System.Net.EndPoint)
extern "C"  void TcpListener_Init_m2143836828 (TcpListener_t3820371431 * __this, int32_t ___family0, EndPoint_t1026786191 * ___ep1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
extern "C"  Socket_t2157335841 * TcpListener_get_Server_m3341054637 (TcpListener_t3820371431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
extern "C"  TcpClient_t838416830 * TcpListener_AcceptTcpClient_m589915414 (TcpListener_t3820371431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Finalize()
extern "C"  void TcpListener_Finalize_m1045232861 (TcpListener_t3820371431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start()
extern "C"  void TcpListener_Start_m2992146021 (TcpListener_t3820371431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start(System.Int32)
extern "C"  void TcpListener_Start_m3019820086 (TcpListener_t3820371431 * __this, int32_t ___backlog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Stop()
extern "C"  void TcpListener_Stop_m2175143617 (TcpListener_t3820371431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
