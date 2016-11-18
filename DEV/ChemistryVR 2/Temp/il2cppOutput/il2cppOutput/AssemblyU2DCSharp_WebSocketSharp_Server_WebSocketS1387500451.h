#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Action
struct Action_t3771233898;
// WebSocketSharp.Server.WebSocketServiceManager
struct WebSocketServiceManager_t1938852857;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketServiceManager/<broadcastAsync>c__AnonStorey1D
struct  U3CbroadcastAsyncU3Ec__AnonStorey1D_t1387500451  : public Il2CppObject
{
public:
	// WebSocketSharp.Opcode WebSocketSharp.Server.WebSocketServiceManager/<broadcastAsync>c__AnonStorey1D::opcode
	uint8_t ___opcode_0;
	// System.Byte[] WebSocketSharp.Server.WebSocketServiceManager/<broadcastAsync>c__AnonStorey1D::data
	ByteU5BU5D_t4260760469* ___data_1;
	// System.Action WebSocketSharp.Server.WebSocketServiceManager/<broadcastAsync>c__AnonStorey1D::completed
	Action_t3771233898 * ___completed_2;
	// WebSocketSharp.Server.WebSocketServiceManager WebSocketSharp.Server.WebSocketServiceManager/<broadcastAsync>c__AnonStorey1D::<>f__this
	WebSocketServiceManager_t1938852857 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_opcode_0() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey1D_t1387500451, ___opcode_0)); }
	inline uint8_t get_opcode_0() const { return ___opcode_0; }
	inline uint8_t* get_address_of_opcode_0() { return &___opcode_0; }
	inline void set_opcode_0(uint8_t value)
	{
		___opcode_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey1D_t1387500451, ___data_1)); }
	inline ByteU5BU5D_t4260760469* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4260760469** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4260760469* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey1D_t1387500451, ___completed_2)); }
	inline Action_t3771233898 * get_completed_2() const { return ___completed_2; }
	inline Action_t3771233898 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_t3771233898 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier(&___completed_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CbroadcastAsyncU3Ec__AnonStorey1D_t1387500451, ___U3CU3Ef__this_3)); }
	inline WebSocketServiceManager_t1938852857 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline WebSocketServiceManager_t1938852857 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(WebSocketServiceManager_t1938852857 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
