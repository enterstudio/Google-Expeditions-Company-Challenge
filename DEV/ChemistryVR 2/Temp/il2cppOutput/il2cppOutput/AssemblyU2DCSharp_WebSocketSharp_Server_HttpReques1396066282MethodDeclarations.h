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

// WebSocketSharp.Server.HttpRequestEventArgs
struct HttpRequestEventArgs_t1396066282;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t3888821117;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t1992878431;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"

// System.Void WebSocketSharp.Server.HttpRequestEventArgs::.ctor(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpRequestEventArgs__ctor_m3223050676 (HttpRequestEventArgs_t1396066282 * __this, HttpListenerContext_t3744659101 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Server.HttpRequestEventArgs::get_Request()
extern "C"  HttpListenerRequest_t3888821117 * HttpRequestEventArgs_get_Request_m765115273 (HttpRequestEventArgs_t1396066282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Server.HttpRequestEventArgs::get_Response()
extern "C"  HttpListenerResponse_t1992878431 * HttpRequestEventArgs_get_Response_m1879778525 (HttpRequestEventArgs_t1396066282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
