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

// WebSocketSharp.Net.HttpListenerAsyncResult
struct HttpListenerAsyncResult_t183645863;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;
// System.Exception
struct Exception_t3991598821;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerAs183645863.h"
#include "mscorlib_System_Exception3991598821.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"

// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void HttpListenerAsyncResult__ctor_m3678666950 (HttpListenerAsyncResult_t183645863 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::get_EndCalled()
extern "C"  bool HttpListenerAsyncResult_get_EndCalled_m3880047955 (HttpListenerAsyncResult_t183645863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::set_EndCalled(System.Boolean)
extern "C"  void HttpListenerAsyncResult_set_EndCalled_m3514562506 (HttpListenerAsyncResult_t183645863 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::get_InGet()
extern "C"  bool HttpListenerAsyncResult_get_InGet_m324343756 (HttpListenerAsyncResult_t183645863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::set_InGet(System.Boolean)
extern "C"  void HttpListenerAsyncResult_set_InGet_m3860664963 (HttpListenerAsyncResult_t183645863 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object WebSocketSharp.Net.HttpListenerAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * HttpListenerAsyncResult_get_AsyncState_m3897973469 (HttpListenerAsyncResult_t183645863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle WebSocketSharp.Net.HttpListenerAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * HttpListenerAsyncResult_get_AsyncWaitHandle_m3027164679 (HttpListenerAsyncResult_t183645863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::get_CompletedSynchronously()
extern "C"  bool HttpListenerAsyncResult_get_CompletedSynchronously_m2595986546 (HttpListenerAsyncResult_t183645863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerAsyncResult::get_IsCompleted()
extern "C"  bool HttpListenerAsyncResult_get_IsCompleted_m1757775004 (HttpListenerAsyncResult_t183645863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::complete(WebSocketSharp.Net.HttpListenerAsyncResult)
extern "C"  void HttpListenerAsyncResult_complete_m2397484610 (Il2CppObject * __this /* static, unused */, HttpListenerAsyncResult_t183645863 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::Complete(System.Exception)
extern "C"  void HttpListenerAsyncResult_Complete_m3332066195 (HttpListenerAsyncResult_t183645863 * __this, Exception_t3991598821 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::Complete(WebSocketSharp.Net.HttpListenerContext)
extern "C"  void HttpListenerAsyncResult_Complete_m2562971180 (HttpListenerAsyncResult_t183645863 * __this, HttpListenerContext_t3744659101 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerAsyncResult::Complete(WebSocketSharp.Net.HttpListenerContext,System.Boolean)
extern "C"  void HttpListenerAsyncResult_Complete_m682090449 (HttpListenerAsyncResult_t183645863 * __this, HttpListenerContext_t3744659101 * ___context0, bool ___syncCompleted1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListenerAsyncResult::GetContext()
extern "C"  HttpListenerContext_t3744659101 * HttpListenerAsyncResult_GetContext_m1299003305 (HttpListenerAsyncResult_t183645863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
