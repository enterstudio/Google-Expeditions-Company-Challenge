#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t3888821117;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t1992878431;

#include "mscorlib_System_EventArgs2540831021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.HttpRequestEventArgs
struct  HttpRequestEventArgs_t1396066282  : public EventArgs_t2540831021
{
public:
	// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Server.HttpRequestEventArgs::_request
	HttpListenerRequest_t3888821117 * ____request_1;
	// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Server.HttpRequestEventArgs::_response
	HttpListenerResponse_t1992878431 * ____response_2;

public:
	inline static int32_t get_offset_of__request_1() { return static_cast<int32_t>(offsetof(HttpRequestEventArgs_t1396066282, ____request_1)); }
	inline HttpListenerRequest_t3888821117 * get__request_1() const { return ____request_1; }
	inline HttpListenerRequest_t3888821117 ** get_address_of__request_1() { return &____request_1; }
	inline void set__request_1(HttpListenerRequest_t3888821117 * value)
	{
		____request_1 = value;
		Il2CppCodeGenWriteBarrier(&____request_1, value);
	}

	inline static int32_t get_offset_of__response_2() { return static_cast<int32_t>(offsetof(HttpRequestEventArgs_t1396066282, ____response_2)); }
	inline HttpListenerResponse_t1992878431 * get__response_2() const { return ____response_2; }
	inline HttpListenerResponse_t1992878431 ** get_address_of__response_2() { return &____response_2; }
	inline void set__response_2(HttpListenerResponse_t1992878431 * value)
	{
		____response_2 = value;
		Il2CppCodeGenWriteBarrier(&____response_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
