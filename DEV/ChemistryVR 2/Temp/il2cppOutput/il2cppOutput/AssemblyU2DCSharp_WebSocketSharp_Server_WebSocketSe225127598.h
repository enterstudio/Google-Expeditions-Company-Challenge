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
// System.Action
struct Action_t3771233898;
// WebSocketSharp.Server.WebSocketSessionManager
struct WebSocketSessionManager_t1454629112;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey21
struct  U3CbroadcastAsyncU3Ec__AnonStorey21_t225127598  : public Il2CppObject
{
public:
	// WebSocketSharp.Opcode WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey21::opcode
	uint8_t ___opcode_0;
	// System.IO.Stream WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey21::stream
	Stream_t1561764144 * ___stream_1;
	// System.Action WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey21::completed
	Action_t3771233898 * ___completed_2;
	// WebSocketSharp.Server.WebSocketSessionManager WebSocketSharp.Server.WebSocketSessionManager/<broadcastAsync>c__AnonStorey21::<>f__this
	WebSocketSessionManager_t1454629112 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_opcode_0() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey21_t225127598, ___opcode_0)); }
	inline uint8_t get_opcode_0() const { return ___opcode_0; }
	inline uint8_t* get_address_of_opcode_0() { return &___opcode_0; }
	inline void set_opcode_0(uint8_t value)
	{
		___opcode_0 = value;
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey21_t225127598, ___stream_1)); }
	inline Stream_t1561764144 * get_stream_1() const { return ___stream_1; }
	inline Stream_t1561764144 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t1561764144 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey21_t225127598, ___completed_2)); }
	inline Action_t3771233898 * get_completed_2() const { return ___completed_2; }
	inline Action_t3771233898 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_t3771233898 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier(&___completed_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey21_t225127598, ___U3CU3Ef__this_3)); }
	inline WebSocketSessionManager_t1454629112 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline WebSocketSessionManager_t1454629112 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(WebSocketSessionManager_t1454629112 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
