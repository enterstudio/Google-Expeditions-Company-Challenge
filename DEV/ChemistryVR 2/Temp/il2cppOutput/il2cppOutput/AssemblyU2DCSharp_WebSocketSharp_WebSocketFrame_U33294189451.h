#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t1561764144;
// System.Action`1<System.Exception>
struct Action_1_t92447661;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t1174010442;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<ReadFrameAsync>c__AnonStorey32
struct  U3CReadFrameAsyncU3Ec__AnonStorey32_t3294189451  : public Il2CppObject
{
public:
	// System.IO.Stream WebSocketSharp.WebSocketFrame/<ReadFrameAsync>c__AnonStorey32::stream
	Stream_t1561764144 * ___stream_0;
	// System.Action`1<System.Exception> WebSocketSharp.WebSocketFrame/<ReadFrameAsync>c__AnonStorey32::error
	Action_1_t92447661 * ___error_1;
	// System.Boolean WebSocketSharp.WebSocketFrame/<ReadFrameAsync>c__AnonStorey32::unmask
	bool ___unmask_2;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<ReadFrameAsync>c__AnonStorey32::completed
	Action_1_t1174010442 * ___completed_3;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CReadFrameAsyncU3Ec__AnonStorey32_t3294189451, ___stream_0)); }
	inline Stream_t1561764144 * get_stream_0() const { return ___stream_0; }
	inline Stream_t1561764144 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t1561764144 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3CReadFrameAsyncU3Ec__AnonStorey32_t3294189451, ___error_1)); }
	inline Action_1_t92447661 * get_error_1() const { return ___error_1; }
	inline Action_1_t92447661 ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(Action_1_t92447661 * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier(&___error_1, value);
	}

	inline static int32_t get_offset_of_unmask_2() { return static_cast<int32_t>(offsetof(U3CReadFrameAsyncU3Ec__AnonStorey32_t3294189451, ___unmask_2)); }
	inline bool get_unmask_2() const { return ___unmask_2; }
	inline bool* get_address_of_unmask_2() { return &___unmask_2; }
	inline void set_unmask_2(bool value)
	{
		___unmask_2 = value;
	}

	inline static int32_t get_offset_of_completed_3() { return static_cast<int32_t>(offsetof(U3CReadFrameAsyncU3Ec__AnonStorey32_t3294189451, ___completed_3)); }
	inline Action_1_t1174010442 * get_completed_3() const { return ___completed_3; }
	inline Action_1_t1174010442 ** get_address_of_completed_3() { return &___completed_3; }
	inline void set_completed_3(Action_1_t1174010442 * value)
	{
		___completed_3 = value;
		Il2CppCodeGenWriteBarrier(&___completed_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
