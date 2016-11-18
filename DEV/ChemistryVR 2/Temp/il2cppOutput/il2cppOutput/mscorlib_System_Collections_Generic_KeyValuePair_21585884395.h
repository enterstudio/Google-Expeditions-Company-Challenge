#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListenerPrefix
struct HttpListenerPrefix_t3906063792;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener>
struct  KeyValuePair_2_t1585884395 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	HttpListenerPrefix_t3906063792 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	HttpListener_t398944510 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1585884395, ___key_0)); }
	inline HttpListenerPrefix_t3906063792 * get_key_0() const { return ___key_0; }
	inline HttpListenerPrefix_t3906063792 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(HttpListenerPrefix_t3906063792 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1585884395, ___value_1)); }
	inline HttpListener_t398944510 * get_value_1() const { return ___value_1; }
	inline HttpListener_t398944510 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(HttpListener_t398944510 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
