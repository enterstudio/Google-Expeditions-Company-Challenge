﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2907705007;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext/<ContainsTwice>c__AnonStoreyC
struct  U3CContainsTwiceU3Ec__AnonStoreyC_t3299461620  : public Il2CppObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<ContainsTwice>c__AnonStoreyC::len
	int32_t ___len_0;
	// System.String[] WebSocketSharp.Ext/<ContainsTwice>c__AnonStoreyC::values
	StringU5BU5D_t4054002952* ___values_1;
	// System.Func`2<System.Int32,System.Boolean> WebSocketSharp.Ext/<ContainsTwice>c__AnonStoreyC::contains
	Func_2_t2907705007 * ___contains_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CContainsTwiceU3Ec__AnonStoreyC_t3299461620, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(U3CContainsTwiceU3Ec__AnonStoreyC_t3299461620, ___values_1)); }
	inline StringU5BU5D_t4054002952* get_values_1() const { return ___values_1; }
	inline StringU5BU5D_t4054002952** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(StringU5BU5D_t4054002952* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier(&___values_1, value);
	}

	inline static int32_t get_offset_of_contains_2() { return static_cast<int32_t>(offsetof(U3CContainsTwiceU3Ec__AnonStoreyC_t3299461620, ___contains_2)); }
	inline Func_2_t2907705007 * get_contains_2() const { return ___contains_2; }
	inline Func_2_t2907705007 ** get_address_of_contains_2() { return &___contains_2; }
	inline void set_contains_2(Func_2_t2907705007 * value)
	{
		___contains_2 = value;
		Il2CppCodeGenWriteBarrier(&___contains_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
