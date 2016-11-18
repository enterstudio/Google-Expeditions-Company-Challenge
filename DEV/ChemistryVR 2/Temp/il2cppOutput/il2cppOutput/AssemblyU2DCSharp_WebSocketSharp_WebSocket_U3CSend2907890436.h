#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// WebSocketSharp.WebSocket
struct WebSocket_t1342580397;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey2B
struct  U3CSendAsyncU3Ec__AnonStorey2B_t2907890436  : public Il2CppObject
{
public:
	// System.Int32 WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey2B::length
	int32_t ___length_0;
	// System.Action`1<System.Boolean> WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey2B::completed
	Action_1_t872614854 * ___completed_1;
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<SendAsync>c__AnonStorey2B::<>f__this
	WebSocket_t1342580397 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey2B_t2907890436, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey2B_t2907890436, ___completed_1)); }
	inline Action_1_t872614854 * get_completed_1() const { return ___completed_1; }
	inline Action_1_t872614854 ** get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(Action_1_t872614854 * value)
	{
		___completed_1 = value;
		Il2CppCodeGenWriteBarrier(&___completed_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey2B_t2907890436, ___U3CU3Ef__this_2)); }
	inline WebSocket_t1342580397 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline WebSocket_t1342580397 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(WebSocket_t1342580397 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
