#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t778194306;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t1174010442;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<readPayloadDataAsync>c__AnonStorey31
struct  U3CreadPayloadDataAsyncU3Ec__AnonStorey31_t2350514271  : public Il2CppObject
{
public:
	// System.Int64 WebSocketSharp.WebSocketFrame/<readPayloadDataAsync>c__AnonStorey31::llen
	int64_t ___llen_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<readPayloadDataAsync>c__AnonStorey31::frame
	WebSocketFrame_t778194306 * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<readPayloadDataAsync>c__AnonStorey31::completed
	Action_1_t1174010442 * ___completed_2;

public:
	inline static int32_t get_offset_of_llen_0() { return static_cast<int32_t>(offsetof(U3CreadPayloadDataAsyncU3Ec__AnonStorey31_t2350514271, ___llen_0)); }
	inline int64_t get_llen_0() const { return ___llen_0; }
	inline int64_t* get_address_of_llen_0() { return &___llen_0; }
	inline void set_llen_0(int64_t value)
	{
		___llen_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CreadPayloadDataAsyncU3Ec__AnonStorey31_t2350514271, ___frame_1)); }
	inline WebSocketFrame_t778194306 * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t778194306 ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t778194306 * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier(&___frame_1, value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CreadPayloadDataAsyncU3Ec__AnonStorey31_t2350514271, ___completed_2)); }
	inline Action_1_t1174010442 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t1174010442 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t1174010442 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier(&___completed_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
