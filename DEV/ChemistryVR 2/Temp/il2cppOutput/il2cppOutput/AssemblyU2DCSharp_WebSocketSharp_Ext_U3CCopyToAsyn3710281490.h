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
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Action`1<System.Exception>
struct Action_1_t92447661;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext/<CopyToAsync>c__AnonStoreyD
struct  U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490  : public Il2CppObject
{
public:
	// System.IO.Stream WebSocketSharp.Ext/<CopyToAsync>c__AnonStoreyD::source
	Stream_t1561764144 * ___source_0;
	// System.Action WebSocketSharp.Ext/<CopyToAsync>c__AnonStoreyD::completed
	Action_t3771233898 * ___completed_1;
	// System.IO.Stream WebSocketSharp.Ext/<CopyToAsync>c__AnonStoreyD::destination
	Stream_t1561764144 * ___destination_2;
	// System.Byte[] WebSocketSharp.Ext/<CopyToAsync>c__AnonStoreyD::buff
	ByteU5BU5D_t4260760469* ___buff_3;
	// System.Int32 WebSocketSharp.Ext/<CopyToAsync>c__AnonStoreyD::bufferLength
	int32_t ___bufferLength_4;
	// System.AsyncCallback WebSocketSharp.Ext/<CopyToAsync>c__AnonStoreyD::callback
	AsyncCallback_t1369114871 * ___callback_5;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<CopyToAsync>c__AnonStoreyD::error
	Action_1_t92447661 * ___error_6;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490, ___source_0)); }
	inline Stream_t1561764144 * get_source_0() const { return ___source_0; }
	inline Stream_t1561764144 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(Stream_t1561764144 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_0, value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490, ___completed_1)); }
	inline Action_t3771233898 * get_completed_1() const { return ___completed_1; }
	inline Action_t3771233898 ** get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(Action_t3771233898 * value)
	{
		___completed_1 = value;
		Il2CppCodeGenWriteBarrier(&___completed_1, value);
	}

	inline static int32_t get_offset_of_destination_2() { return static_cast<int32_t>(offsetof(U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490, ___destination_2)); }
	inline Stream_t1561764144 * get_destination_2() const { return ___destination_2; }
	inline Stream_t1561764144 ** get_address_of_destination_2() { return &___destination_2; }
	inline void set_destination_2(Stream_t1561764144 * value)
	{
		___destination_2 = value;
		Il2CppCodeGenWriteBarrier(&___destination_2, value);
	}

	inline static int32_t get_offset_of_buff_3() { return static_cast<int32_t>(offsetof(U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490, ___buff_3)); }
	inline ByteU5BU5D_t4260760469* get_buff_3() const { return ___buff_3; }
	inline ByteU5BU5D_t4260760469** get_address_of_buff_3() { return &___buff_3; }
	inline void set_buff_3(ByteU5BU5D_t4260760469* value)
	{
		___buff_3 = value;
		Il2CppCodeGenWriteBarrier(&___buff_3, value);
	}

	inline static int32_t get_offset_of_bufferLength_4() { return static_cast<int32_t>(offsetof(U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490, ___bufferLength_4)); }
	inline int32_t get_bufferLength_4() const { return ___bufferLength_4; }
	inline int32_t* get_address_of_bufferLength_4() { return &___bufferLength_4; }
	inline void set_bufferLength_4(int32_t value)
	{
		___bufferLength_4 = value;
	}

	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490, ___callback_5)); }
	inline AsyncCallback_t1369114871 * get_callback_5() const { return ___callback_5; }
	inline AsyncCallback_t1369114871 ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(AsyncCallback_t1369114871 * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier(&___callback_5, value);
	}

	inline static int32_t get_offset_of_error_6() { return static_cast<int32_t>(offsetof(U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490, ___error_6)); }
	inline Action_1_t92447661 * get_error_6() const { return ___error_6; }
	inline Action_1_t92447661 ** get_address_of_error_6() { return &___error_6; }
	inline void set_error_6(Action_1_t92447661 * value)
	{
		___error_6 = value;
		Il2CppCodeGenWriteBarrier(&___error_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
