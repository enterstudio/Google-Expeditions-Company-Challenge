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
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Action`1<System.Byte[]>
struct Action_1_t361609309;
// System.Action`1<System.Exception>
struct Action_1_t92447661;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE
struct  U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834  : public Il2CppObject
{
public:
	// System.IO.Stream WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE::stream
	Stream_t1561764144 * ___stream_0;
	// System.Int32 WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE::retry
	int32_t ___retry_1;
	// System.Byte[] WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE::buff
	ByteU5BU5D_t4260760469* ___buff_2;
	// System.Int32 WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE::offset
	int32_t ___offset_3;
	// System.Int32 WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE::length
	int32_t ___length_4;
	// System.AsyncCallback WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE::callback
	AsyncCallback_t1369114871 * ___callback_5;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE::completed
	Action_1_t361609309 * ___completed_6;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<ReadBytesAsync>c__AnonStoreyE::error
	Action_1_t92447661 * ___error_7;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834, ___stream_0)); }
	inline Stream_t1561764144 * get_stream_0() const { return ___stream_0; }
	inline Stream_t1561764144 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t1561764144 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_retry_1() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834, ___retry_1)); }
	inline int32_t get_retry_1() const { return ___retry_1; }
	inline int32_t* get_address_of_retry_1() { return &___retry_1; }
	inline void set_retry_1(int32_t value)
	{
		___retry_1 = value;
	}

	inline static int32_t get_offset_of_buff_2() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834, ___buff_2)); }
	inline ByteU5BU5D_t4260760469* get_buff_2() const { return ___buff_2; }
	inline ByteU5BU5D_t4260760469** get_address_of_buff_2() { return &___buff_2; }
	inline void set_buff_2(ByteU5BU5D_t4260760469* value)
	{
		___buff_2 = value;
		Il2CppCodeGenWriteBarrier(&___buff_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834, ___callback_5)); }
	inline AsyncCallback_t1369114871 * get_callback_5() const { return ___callback_5; }
	inline AsyncCallback_t1369114871 ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(AsyncCallback_t1369114871 * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier(&___callback_5, value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834, ___completed_6)); }
	inline Action_1_t361609309 * get_completed_6() const { return ___completed_6; }
	inline Action_1_t361609309 ** get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(Action_1_t361609309 * value)
	{
		___completed_6 = value;
		Il2CppCodeGenWriteBarrier(&___completed_6, value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834, ___error_7)); }
	inline Action_1_t92447661 * get_error_7() const { return ___error_7; }
	inline Action_1_t92447661 ** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(Action_1_t92447661 * value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier(&___error_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
