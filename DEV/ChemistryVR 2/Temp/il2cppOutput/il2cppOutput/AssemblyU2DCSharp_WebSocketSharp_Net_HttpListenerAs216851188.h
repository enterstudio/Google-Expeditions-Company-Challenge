#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.AsyncCallback
struct AsyncCallback_t1369114871;
// WebSocketSharp.Net.HttpListenerAsyncResult
struct HttpListenerAsyncResult_t183645863;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListenerAsyncResult/<complete>c__AnonStorey15
struct  U3CcompleteU3Ec__AnonStorey15_t216851188  : public Il2CppObject
{
public:
	// System.AsyncCallback WebSocketSharp.Net.HttpListenerAsyncResult/<complete>c__AnonStorey15::callback
	AsyncCallback_t1369114871 * ___callback_0;
	// WebSocketSharp.Net.HttpListenerAsyncResult WebSocketSharp.Net.HttpListenerAsyncResult/<complete>c__AnonStorey15::asyncResult
	HttpListenerAsyncResult_t183645863 * ___asyncResult_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CcompleteU3Ec__AnonStorey15_t216851188, ___callback_0)); }
	inline AsyncCallback_t1369114871 * get_callback_0() const { return ___callback_0; }
	inline AsyncCallback_t1369114871 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(AsyncCallback_t1369114871 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_asyncResult_1() { return static_cast<int32_t>(offsetof(U3CcompleteU3Ec__AnonStorey15_t216851188, ___asyncResult_1)); }
	inline HttpListenerAsyncResult_t183645863 * get_asyncResult_1() const { return ___asyncResult_1; }
	inline HttpListenerAsyncResult_t183645863 ** get_address_of_asyncResult_1() { return &___asyncResult_1; }
	inline void set_asyncResult_1(HttpListenerAsyncResult_t183645863 * value)
	{
		___asyncResult_1 = value;
		Il2CppCodeGenWriteBarrier(&___asyncResult_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
