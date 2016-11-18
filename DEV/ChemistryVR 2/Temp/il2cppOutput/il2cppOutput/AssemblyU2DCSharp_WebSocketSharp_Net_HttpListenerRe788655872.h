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
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t1992878431;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListenerResponse/<Close>c__AnonStorey16
struct  U3CCloseU3Ec__AnonStorey16_t788655872  : public Il2CppObject
{
public:
	// System.IO.Stream WebSocketSharp.Net.HttpListenerResponse/<Close>c__AnonStorey16::output
	Stream_t1561764144 * ___output_0;
	// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Net.HttpListenerResponse/<Close>c__AnonStorey16::<>f__this
	HttpListenerResponse_t1992878431 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_output_0() { return static_cast<int32_t>(offsetof(U3CCloseU3Ec__AnonStorey16_t788655872, ___output_0)); }
	inline Stream_t1561764144 * get_output_0() const { return ___output_0; }
	inline Stream_t1561764144 ** get_address_of_output_0() { return &___output_0; }
	inline void set_output_0(Stream_t1561764144 * value)
	{
		___output_0 = value;
		Il2CppCodeGenWriteBarrier(&___output_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CCloseU3Ec__AnonStorey16_t788655872, ___U3CU3Ef__this_1)); }
	inline HttpListenerResponse_t1992878431 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline HttpListenerResponse_t1992878431 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(HttpListenerResponse_t1992878431 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
