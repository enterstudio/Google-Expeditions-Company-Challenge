﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListenerPrefixCollection
struct  HttpListenerPrefixCollection_t1379363822  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerPrefixCollection::_listener
	HttpListener_t398944510 * ____listener_0;
	// System.Collections.Generic.List`1<System.String> WebSocketSharp.Net.HttpListenerPrefixCollection::_prefixes
	List_1_t1375417109 * ____prefixes_1;

public:
	inline static int32_t get_offset_of__listener_0() { return static_cast<int32_t>(offsetof(HttpListenerPrefixCollection_t1379363822, ____listener_0)); }
	inline HttpListener_t398944510 * get__listener_0() const { return ____listener_0; }
	inline HttpListener_t398944510 ** get_address_of__listener_0() { return &____listener_0; }
	inline void set__listener_0(HttpListener_t398944510 * value)
	{
		____listener_0 = value;
		Il2CppCodeGenWriteBarrier(&____listener_0, value);
	}

	inline static int32_t get_offset_of__prefixes_1() { return static_cast<int32_t>(offsetof(HttpListenerPrefixCollection_t1379363822, ____prefixes_1)); }
	inline List_1_t1375417109 * get__prefixes_1() const { return ____prefixes_1; }
	inline List_1_t1375417109 ** get_address_of__prefixes_1() { return &____prefixes_1; }
	inline void set__prefixes_1(List_1_t1375417109 * value)
	{
		____prefixes_1 = value;
		Il2CppCodeGenWriteBarrier(&____prefixes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
