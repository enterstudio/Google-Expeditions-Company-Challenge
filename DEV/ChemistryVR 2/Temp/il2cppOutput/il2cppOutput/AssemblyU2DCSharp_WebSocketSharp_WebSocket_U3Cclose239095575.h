#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`4<WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean>
struct Action_4_t3835461760;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket/<closeAsync>c__AnonStorey23
struct  U3CcloseAsyncU3Ec__AnonStorey23_t239095575  : public Il2CppObject
{
public:
	// System.Action`4<WebSocketSharp.CloseEventArgs,System.Boolean,System.Boolean,System.Boolean> WebSocketSharp.WebSocket/<closeAsync>c__AnonStorey23::closer
	Action_4_t3835461760 * ___closer_0;

public:
	inline static int32_t get_offset_of_closer_0() { return static_cast<int32_t>(offsetof(U3CcloseAsyncU3Ec__AnonStorey23_t239095575, ___closer_0)); }
	inline Action_4_t3835461760 * get_closer_0() const { return ___closer_0; }
	inline Action_4_t3835461760 ** get_address_of_closer_0() { return &___closer_0; }
	inline void set_closer_0(Action_4_t3835461760 * value)
	{
		___closer_0 = value;
		Il2CppCodeGenWriteBarrier(&___closer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
