#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpConnection
struct HttpConnection_t602292776;
// System.String
struct String_t;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t3888821117;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t1992878431;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1899242073;
// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct HttpListenerWebSocketContext_t1074545506;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListenerContext
struct  HttpListenerContext_t3744659101  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.HttpConnection WebSocketSharp.Net.HttpListenerContext::_connection
	HttpConnection_t602292776 * ____connection_0;
	// System.String WebSocketSharp.Net.HttpListenerContext::_error
	String_t* ____error_1;
	// System.Int32 WebSocketSharp.Net.HttpListenerContext::_errorStatus
	int32_t ____errorStatus_2;
	// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpListenerContext::_listener
	HttpListener_t398944510 * ____listener_3;
	// WebSocketSharp.Net.HttpListenerRequest WebSocketSharp.Net.HttpListenerContext::_request
	HttpListenerRequest_t3888821117 * ____request_4;
	// WebSocketSharp.Net.HttpListenerResponse WebSocketSharp.Net.HttpListenerContext::_response
	HttpListenerResponse_t1992878431 * ____response_5;
	// System.Security.Principal.IPrincipal WebSocketSharp.Net.HttpListenerContext::_user
	Il2CppObject * ____user_6;
	// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext WebSocketSharp.Net.HttpListenerContext::_websocketContext
	HttpListenerWebSocketContext_t1074545506 * ____websocketContext_7;

public:
	inline static int32_t get_offset_of__connection_0() { return static_cast<int32_t>(offsetof(HttpListenerContext_t3744659101, ____connection_0)); }
	inline HttpConnection_t602292776 * get__connection_0() const { return ____connection_0; }
	inline HttpConnection_t602292776 ** get_address_of__connection_0() { return &____connection_0; }
	inline void set__connection_0(HttpConnection_t602292776 * value)
	{
		____connection_0 = value;
		Il2CppCodeGenWriteBarrier(&____connection_0, value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(HttpListenerContext_t3744659101, ____error_1)); }
	inline String_t* get__error_1() const { return ____error_1; }
	inline String_t** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(String_t* value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier(&____error_1, value);
	}

	inline static int32_t get_offset_of__errorStatus_2() { return static_cast<int32_t>(offsetof(HttpListenerContext_t3744659101, ____errorStatus_2)); }
	inline int32_t get__errorStatus_2() const { return ____errorStatus_2; }
	inline int32_t* get_address_of__errorStatus_2() { return &____errorStatus_2; }
	inline void set__errorStatus_2(int32_t value)
	{
		____errorStatus_2 = value;
	}

	inline static int32_t get_offset_of__listener_3() { return static_cast<int32_t>(offsetof(HttpListenerContext_t3744659101, ____listener_3)); }
	inline HttpListener_t398944510 * get__listener_3() const { return ____listener_3; }
	inline HttpListener_t398944510 ** get_address_of__listener_3() { return &____listener_3; }
	inline void set__listener_3(HttpListener_t398944510 * value)
	{
		____listener_3 = value;
		Il2CppCodeGenWriteBarrier(&____listener_3, value);
	}

	inline static int32_t get_offset_of__request_4() { return static_cast<int32_t>(offsetof(HttpListenerContext_t3744659101, ____request_4)); }
	inline HttpListenerRequest_t3888821117 * get__request_4() const { return ____request_4; }
	inline HttpListenerRequest_t3888821117 ** get_address_of__request_4() { return &____request_4; }
	inline void set__request_4(HttpListenerRequest_t3888821117 * value)
	{
		____request_4 = value;
		Il2CppCodeGenWriteBarrier(&____request_4, value);
	}

	inline static int32_t get_offset_of__response_5() { return static_cast<int32_t>(offsetof(HttpListenerContext_t3744659101, ____response_5)); }
	inline HttpListenerResponse_t1992878431 * get__response_5() const { return ____response_5; }
	inline HttpListenerResponse_t1992878431 ** get_address_of__response_5() { return &____response_5; }
	inline void set__response_5(HttpListenerResponse_t1992878431 * value)
	{
		____response_5 = value;
		Il2CppCodeGenWriteBarrier(&____response_5, value);
	}

	inline static int32_t get_offset_of__user_6() { return static_cast<int32_t>(offsetof(HttpListenerContext_t3744659101, ____user_6)); }
	inline Il2CppObject * get__user_6() const { return ____user_6; }
	inline Il2CppObject ** get_address_of__user_6() { return &____user_6; }
	inline void set__user_6(Il2CppObject * value)
	{
		____user_6 = value;
		Il2CppCodeGenWriteBarrier(&____user_6, value);
	}

	inline static int32_t get_offset_of__websocketContext_7() { return static_cast<int32_t>(offsetof(HttpListenerContext_t3744659101, ____websocketContext_7)); }
	inline HttpListenerWebSocketContext_t1074545506 * get__websocketContext_7() const { return ____websocketContext_7; }
	inline HttpListenerWebSocketContext_t1074545506 ** get_address_of__websocketContext_7() { return &____websocketContext_7; }
	inline void set__websocketContext_7(HttpListenerWebSocketContext_t1074545506 * value)
	{
		____websocketContext_7 = value;
		Il2CppCodeGenWriteBarrier(&____websocketContext_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
