#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3771233898;
// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1938852857;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketServiceManager/<BroadcastAsync>c__AnonStorey1F
struct  U3CBroadcastAsyncU3Ec__AnonStorey1F_t1025384389  : public Il2CppObject
{
public:
	// System.Int32 WebSocketSharp.Server.WebSocketServiceManager/<BroadcastAsync>c__AnonStorey1F::length
	int32_t ___length_0;
	// System.Action WebSocketSharp.Server.WebSocketServiceManager/<BroadcastAsync>c__AnonStorey1F::completed
	Action_t3771233898 * ___completed_1;
	// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.WebSocketServiceManager/<BroadcastAsync>c__AnonStorey1F::<>f__this
	WebSocketServiceManager_t1938852857 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(U3CBroadcastAsyncU3Ec__AnonStorey1F_t1025384389, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(U3CBroadcastAsyncU3Ec__AnonStorey1F_t1025384389, ___completed_1)); }
	inline Action_t3771233898 * get_completed_1() const { return ___completed_1; }
	inline Action_t3771233898 ** get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(Action_t3771233898 * value)
	{
		___completed_1 = value;
		Il2CppCodeGenWriteBarrier(&___completed_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CBroadcastAsyncU3Ec__AnonStorey1F_t1025384389, ___U3CU3Ef__this_2)); }
	inline WebSocketServiceManager_t1938852857 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline WebSocketServiceManager_t1938852857 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(WebSocketServiceManager_t1938852857 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
