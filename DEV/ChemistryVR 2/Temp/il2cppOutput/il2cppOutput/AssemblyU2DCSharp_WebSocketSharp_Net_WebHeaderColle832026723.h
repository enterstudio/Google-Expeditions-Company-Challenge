#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t243639308;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t288332393;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebHeaderCollection/<ToStringMultiValue>c__AnonStorey17
struct  U3CToStringMultiValueU3Ec__AnonStorey17_t832026723  : public Il2CppObject
{
public:
	// System.Boolean WebSocketSharp.Net.WebHeaderCollection/<ToStringMultiValue>c__AnonStorey17::response
	bool ___response_0;
	// System.Text.StringBuilder WebSocketSharp.Net.WebHeaderCollection/<ToStringMultiValue>c__AnonStorey17::buff
	StringBuilder_t243639308 * ___buff_1;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.WebHeaderCollection/<ToStringMultiValue>c__AnonStorey17::<>f__this
	WebHeaderCollection_t288332393 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_response_0() { return static_cast<int32_t>(offsetof(U3CToStringMultiValueU3Ec__AnonStorey17_t832026723, ___response_0)); }
	inline bool get_response_0() const { return ___response_0; }
	inline bool* get_address_of_response_0() { return &___response_0; }
	inline void set_response_0(bool value)
	{
		___response_0 = value;
	}

	inline static int32_t get_offset_of_buff_1() { return static_cast<int32_t>(offsetof(U3CToStringMultiValueU3Ec__AnonStorey17_t832026723, ___buff_1)); }
	inline StringBuilder_t243639308 * get_buff_1() const { return ___buff_1; }
	inline StringBuilder_t243639308 ** get_address_of_buff_1() { return &___buff_1; }
	inline void set_buff_1(StringBuilder_t243639308 * value)
	{
		___buff_1 = value;
		Il2CppCodeGenWriteBarrier(&___buff_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CToStringMultiValueU3Ec__AnonStorey17_t832026723, ___U3CU3Ef__this_2)); }
	inline WebHeaderCollection_t288332393 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline WebHeaderCollection_t288332393 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(WebHeaderCollection_t288332393 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
