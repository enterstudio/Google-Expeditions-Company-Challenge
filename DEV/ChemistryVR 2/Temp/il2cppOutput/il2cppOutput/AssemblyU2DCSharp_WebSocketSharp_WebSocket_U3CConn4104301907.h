#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<System.Boolean>
struct Func_1_t1601960292;
// WebSocketSharp.WebSocket
struct WebSocket_t1342580397;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey2A
struct  U3CConnectAsyncU3Ec__AnonStorey2A_t4104301907  : public Il2CppObject
{
public:
	// System.Func`1<System.Boolean> WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey2A::connector
	Func_1_t1601960292 * ___connector_0;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<ConnectAsync>c__AnonStorey2A::<>f__this
	WebSocket_t1342580397 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_connector_0() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ec__AnonStorey2A_t4104301907, ___connector_0)); }
	inline Func_1_t1601960292 * get_connector_0() const { return ___connector_0; }
	inline Func_1_t1601960292 ** get_address_of_connector_0() { return &___connector_0; }
	inline void set_connector_0(Func_1_t1601960292 * value)
	{
		___connector_0 = value;
		Il2CppCodeGenWriteBarrier(&___connector_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CConnectAsyncU3Ec__AnonStorey2A_t4104301907, ___U3CU3Ef__this_1)); }
	inline WebSocket_t1342580397 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline WebSocket_t1342580397 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(WebSocket_t1342580397 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
