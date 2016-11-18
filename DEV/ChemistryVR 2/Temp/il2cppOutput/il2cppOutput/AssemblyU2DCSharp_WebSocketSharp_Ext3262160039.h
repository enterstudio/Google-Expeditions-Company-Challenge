#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t3730860138;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext
struct  Ext_t3262160039  : public Il2CppObject
{
public:

public:
};

struct Ext_t3262160039_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.Ext::_last
	ByteU5BU5D_t4260760469* ____last_1;
	// System.Int32 WebSocketSharp.Ext::_retry
	int32_t ____retry_2;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.Ext::<>f__am$cache2
	Func_2_t3730860138 * ___U3CU3Ef__amU24cache2_3;

public:
	inline static int32_t get_offset_of__last_1() { return static_cast<int32_t>(offsetof(Ext_t3262160039_StaticFields, ____last_1)); }
	inline ByteU5BU5D_t4260760469* get__last_1() const { return ____last_1; }
	inline ByteU5BU5D_t4260760469** get_address_of__last_1() { return &____last_1; }
	inline void set__last_1(ByteU5BU5D_t4260760469* value)
	{
		____last_1 = value;
		Il2CppCodeGenWriteBarrier(&____last_1, value);
	}

	inline static int32_t get_offset_of__retry_2() { return static_cast<int32_t>(offsetof(Ext_t3262160039_StaticFields, ____retry_2)); }
	inline int32_t get__retry_2() const { return ____retry_2; }
	inline int32_t* get_address_of__retry_2() { return &____retry_2; }
	inline void set__retry_2(int32_t value)
	{
		____retry_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_3() { return static_cast<int32_t>(offsetof(Ext_t3262160039_StaticFields, ___U3CU3Ef__amU24cache2_3)); }
	inline Func_2_t3730860138 * get_U3CU3Ef__amU24cache2_3() const { return ___U3CU3Ef__amU24cache2_3; }
	inline Func_2_t3730860138 ** get_address_of_U3CU3Ef__amU24cache2_3() { return &___U3CU3Ef__amU24cache2_3; }
	inline void set_U3CU3Ef__amU24cache2_3(Func_2_t3730860138 * value)
	{
		___U3CU3Ef__amU24cache2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
