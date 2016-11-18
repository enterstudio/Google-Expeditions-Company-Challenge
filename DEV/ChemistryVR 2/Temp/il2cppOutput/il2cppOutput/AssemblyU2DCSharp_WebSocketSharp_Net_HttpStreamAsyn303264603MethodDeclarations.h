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

// WebSocketSharp.Net.HttpStreamAsyncResult
struct HttpStreamAsyncResult_t303264603;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Exception
struct Exception_t3991598821;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;
// System.IAsyncResult
struct IAsyncResult_t2754620036;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void HttpStreamAsyncResult__ctor_m608371090 (HttpStreamAsyncResult_t303264603 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpStreamAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t4260760469* HttpStreamAsyncResult_get_Buffer_m2665459153 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::set_Buffer(System.Byte[])
extern "C"  void HttpStreamAsyncResult_set_Buffer_m781472974 (HttpStreamAsyncResult_t303264603 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::get_Count()
extern "C"  int32_t HttpStreamAsyncResult_get_Count_m1329561372 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::set_Count(System.Int32)
extern "C"  void HttpStreamAsyncResult_set_Count_m3106146759 (HttpStreamAsyncResult_t303264603 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception WebSocketSharp.Net.HttpStreamAsyncResult::get_Exception()
extern "C"  Exception_t3991598821 * HttpStreamAsyncResult_get_Exception_m3876825309 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpStreamAsyncResult::get_HasException()
extern "C"  bool HttpStreamAsyncResult_get_HasException_m287293424 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::get_Offset()
extern "C"  int32_t HttpStreamAsyncResult_get_Offset_m2177792392 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::set_Offset(System.Int32)
extern "C"  void HttpStreamAsyncResult_set_Offset_m1020620479 (HttpStreamAsyncResult_t303264603 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpStreamAsyncResult::get_SyncRead()
extern "C"  int32_t HttpStreamAsyncResult_get_SyncRead_m3922805574 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::set_SyncRead(System.Int32)
extern "C"  void HttpStreamAsyncResult_set_SyncRead_m1368271357 (HttpStreamAsyncResult_t303264603 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object WebSocketSharp.Net.HttpStreamAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * HttpStreamAsyncResult_get_AsyncState_m4204869073 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle WebSocketSharp.Net.HttpStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * HttpStreamAsyncResult_get_AsyncWaitHandle_m2649483411 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpStreamAsyncResult::get_CompletedSynchronously()
extern "C"  bool HttpStreamAsyncResult_get_CompletedSynchronously_m1919835430 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpStreamAsyncResult::get_IsCompleted()
extern "C"  bool HttpStreamAsyncResult_get_IsCompleted_m180628584 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::Complete()
extern "C"  void HttpStreamAsyncResult_Complete_m3737307543 (HttpStreamAsyncResult_t303264603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::Complete(System.Exception)
extern "C"  void HttpStreamAsyncResult_Complete_m3893120071 (HttpStreamAsyncResult_t303264603 * __this, Exception_t3991598821 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpStreamAsyncResult::<Complete>m__15(System.IAsyncResult)
extern "C"  void HttpStreamAsyncResult_U3CCompleteU3Em__15_m228056887 (HttpStreamAsyncResult_t303264603 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
