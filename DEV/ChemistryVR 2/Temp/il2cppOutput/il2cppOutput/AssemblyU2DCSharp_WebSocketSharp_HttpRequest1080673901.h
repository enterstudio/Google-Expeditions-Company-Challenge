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

#include "AssemblyU2DCSharp_WebSocketSharp_HttpBase1712924533.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HttpRequest
struct  HttpRequest_t1080673901  : public HttpBase_t1712924533
{
public:
	// System.String WebSocketSharp.HttpRequest::_method
	String_t* ____method_5;
	// System.String WebSocketSharp.HttpRequest::_uri
	String_t* ____uri_6;
	// System.Boolean WebSocketSharp.HttpRequest::_websocketRequest
	bool ____websocketRequest_7;
	// System.Boolean WebSocketSharp.HttpRequest::_websocketRequestSet
	bool ____websocketRequestSet_8;

public:
	inline static int32_t get_offset_of__method_5() { return static_cast<int32_t>(offsetof(HttpRequest_t1080673901, ____method_5)); }
	inline String_t* get__method_5() const { return ____method_5; }
	inline String_t** get_address_of__method_5() { return &____method_5; }
	inline void set__method_5(String_t* value)
	{
		____method_5 = value;
		Il2CppCodeGenWriteBarrier(&____method_5, value);
	}

	inline static int32_t get_offset_of__uri_6() { return static_cast<int32_t>(offsetof(HttpRequest_t1080673901, ____uri_6)); }
	inline String_t* get__uri_6() const { return ____uri_6; }
	inline String_t** get_address_of__uri_6() { return &____uri_6; }
	inline void set__uri_6(String_t* value)
	{
		____uri_6 = value;
		Il2CppCodeGenWriteBarrier(&____uri_6, value);
	}

	inline static int32_t get_offset_of__websocketRequest_7() { return static_cast<int32_t>(offsetof(HttpRequest_t1080673901, ____websocketRequest_7)); }
	inline bool get__websocketRequest_7() const { return ____websocketRequest_7; }
	inline bool* get_address_of__websocketRequest_7() { return &____websocketRequest_7; }
	inline void set__websocketRequest_7(bool value)
	{
		____websocketRequest_7 = value;
	}

	inline static int32_t get_offset_of__websocketRequestSet_8() { return static_cast<int32_t>(offsetof(HttpRequest_t1080673901, ____websocketRequestSet_8)); }
	inline bool get__websocketRequestSet_8() const { return ____websocketRequestSet_8; }
	inline bool* get_address_of__websocketRequestSet_8() { return &____websocketRequestSet_8; }
	inline void set__websocketRequestSet_8(bool value)
	{
		____websocketRequestSet_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
