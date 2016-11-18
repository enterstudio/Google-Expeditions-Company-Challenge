#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,WebSocketSharp.Net.EndPointListener>
struct Dictionary_2_t1529683928;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.EndPointManager
struct  EndPointManager_t3612541026  : public Il2CppObject
{
public:

public:
};

struct EndPointManager_t3612541026_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,WebSocketSharp.Net.EndPointListener> WebSocketSharp.Net.EndPointManager::_endpoints
	Dictionary_2_t1529683928 * ____endpoints_0;

public:
	inline static int32_t get_offset_of__endpoints_0() { return static_cast<int32_t>(offsetof(EndPointManager_t3612541026_StaticFields, ____endpoints_0)); }
	inline Dictionary_2_t1529683928 * get__endpoints_0() const { return ____endpoints_0; }
	inline Dictionary_2_t1529683928 ** get_address_of__endpoints_0() { return &____endpoints_0; }
	inline void set__endpoints_0(Dictionary_2_t1529683928 * value)
	{
		____endpoints_0 = value;
		Il2CppCodeGenWriteBarrier(&____endpoints_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
