﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3771233898;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Action`1<System.Exception>
struct Action_1_t92447661;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext/<WriteBytesAsync>c__AnonStorey11
struct  U3CWriteBytesAsyncU3Ec__AnonStorey11_t366640406  : public Il2CppObject
{
public:
	// System.Action WebSocketSharp.Ext/<WriteBytesAsync>c__AnonStorey11::completed
	Action_t3771233898 * ___completed_0;
	// System.IO.MemoryStream WebSocketSharp.Ext/<WriteBytesAsync>c__AnonStorey11::input
	MemoryStream_t418716369 * ___input_1;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<WriteBytesAsync>c__AnonStorey11::error
	Action_1_t92447661 * ___error_2;

public:
	inline static int32_t get_offset_of_completed_0() { return static_cast<int32_t>(offsetof(U3CWriteBytesAsyncU3Ec__AnonStorey11_t366640406, ___completed_0)); }
	inline Action_t3771233898 * get_completed_0() const { return ___completed_0; }
	inline Action_t3771233898 ** get_address_of_completed_0() { return &___completed_0; }
	inline void set_completed_0(Action_t3771233898 * value)
	{
		___completed_0 = value;
		Il2CppCodeGenWriteBarrier(&___completed_0, value);
	}

	inline static int32_t get_offset_of_input_1() { return static_cast<int32_t>(offsetof(U3CWriteBytesAsyncU3Ec__AnonStorey11_t366640406, ___input_1)); }
	inline MemoryStream_t418716369 * get_input_1() const { return ___input_1; }
	inline MemoryStream_t418716369 ** get_address_of_input_1() { return &___input_1; }
	inline void set_input_1(MemoryStream_t418716369 * value)
	{
		___input_1 = value;
		Il2CppCodeGenWriteBarrier(&___input_1, value);
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(U3CWriteBytesAsyncU3Ec__AnonStorey11_t366640406, ___error_2)); }
	inline Action_1_t92447661 * get_error_2() const { return ___error_2; }
	inline Action_1_t92447661 ** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(Action_1_t92447661 * value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier(&___error_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
