﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t1174010442;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketFrame/<readHeaderAsync>c__AnonStorey2F
struct  U3CreadHeaderAsyncU3Ec__AnonStorey2F_t3097884760  : public Il2CppObject
{
public:
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<readHeaderAsync>c__AnonStorey2F::completed
	Action_1_t1174010442 * ___completed_0;

public:
	inline static int32_t get_offset_of_completed_0() { return static_cast<int32_t>(offsetof(U3CreadHeaderAsyncU3Ec__AnonStorey2F_t3097884760, ___completed_0)); }
	inline Action_1_t1174010442 * get_completed_0() const { return ___completed_0; }
	inline Action_1_t1174010442 ** get_address_of_completed_0() { return &___completed_0; }
	inline void set_completed_0(Action_1_t1174010442 * value)
	{
		___completed_0 = value;
		Il2CppCodeGenWriteBarrier(&___completed_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
