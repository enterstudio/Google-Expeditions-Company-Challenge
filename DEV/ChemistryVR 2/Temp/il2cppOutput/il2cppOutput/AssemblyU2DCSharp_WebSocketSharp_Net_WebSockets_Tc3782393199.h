#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// WebSocketSharp.HttpRequest
struct HttpRequest_t1080673901;
// System.IO.Stream
struct Stream_t1561764144;
// System.Net.Sockets.TcpClient
struct TcpClient_t838416830;
// System.Uri
struct Uri_t1116831938;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1899242073;
// WebSocketSharp.WebSocket
struct WebSocket_t1342580397;

#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Web763725542.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct  TcpListenerWebSocketContext_t3782393199  : public WebSocketContext_t763725542
{
public:
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_cookies
	CookieCollection_t1136277956 * ____cookies_0;
	// WebSocketSharp.Logger WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_logger
	Logger_t3695440972 * ____logger_1;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_queryString
	NameValueCollection_t2791941106 * ____queryString_2;
	// WebSocketSharp.HttpRequest WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_request
	HttpRequest_t1080673901 * ____request_3;
	// System.Boolean WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_secure
	bool ____secure_4;
	// System.IO.Stream WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_stream
	Stream_t1561764144 * ____stream_5;
	// System.Net.Sockets.TcpClient WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_tcpClient
	TcpClient_t838416830 * ____tcpClient_6;
	// System.Uri WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_uri
	Uri_t1116831938 * ____uri_7;
	// System.Security.Principal.IPrincipal WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_user
	Il2CppObject * ____user_8;
	// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext::_websocket
	WebSocket_t1342580397 * ____websocket_9;

public:
	inline static int32_t get_offset_of__cookies_0() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____cookies_0)); }
	inline CookieCollection_t1136277956 * get__cookies_0() const { return ____cookies_0; }
	inline CookieCollection_t1136277956 ** get_address_of__cookies_0() { return &____cookies_0; }
	inline void set__cookies_0(CookieCollection_t1136277956 * value)
	{
		____cookies_0 = value;
		Il2CppCodeGenWriteBarrier(&____cookies_0, value);
	}

	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____logger_1)); }
	inline Logger_t3695440972 * get__logger_1() const { return ____logger_1; }
	inline Logger_t3695440972 ** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(Logger_t3695440972 * value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier(&____logger_1, value);
	}

	inline static int32_t get_offset_of__queryString_2() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____queryString_2)); }
	inline NameValueCollection_t2791941106 * get__queryString_2() const { return ____queryString_2; }
	inline NameValueCollection_t2791941106 ** get_address_of__queryString_2() { return &____queryString_2; }
	inline void set__queryString_2(NameValueCollection_t2791941106 * value)
	{
		____queryString_2 = value;
		Il2CppCodeGenWriteBarrier(&____queryString_2, value);
	}

	inline static int32_t get_offset_of__request_3() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____request_3)); }
	inline HttpRequest_t1080673901 * get__request_3() const { return ____request_3; }
	inline HttpRequest_t1080673901 ** get_address_of__request_3() { return &____request_3; }
	inline void set__request_3(HttpRequest_t1080673901 * value)
	{
		____request_3 = value;
		Il2CppCodeGenWriteBarrier(&____request_3, value);
	}

	inline static int32_t get_offset_of__secure_4() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____secure_4)); }
	inline bool get__secure_4() const { return ____secure_4; }
	inline bool* get_address_of__secure_4() { return &____secure_4; }
	inline void set__secure_4(bool value)
	{
		____secure_4 = value;
	}

	inline static int32_t get_offset_of__stream_5() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____stream_5)); }
	inline Stream_t1561764144 * get__stream_5() const { return ____stream_5; }
	inline Stream_t1561764144 ** get_address_of__stream_5() { return &____stream_5; }
	inline void set__stream_5(Stream_t1561764144 * value)
	{
		____stream_5 = value;
		Il2CppCodeGenWriteBarrier(&____stream_5, value);
	}

	inline static int32_t get_offset_of__tcpClient_6() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____tcpClient_6)); }
	inline TcpClient_t838416830 * get__tcpClient_6() const { return ____tcpClient_6; }
	inline TcpClient_t838416830 ** get_address_of__tcpClient_6() { return &____tcpClient_6; }
	inline void set__tcpClient_6(TcpClient_t838416830 * value)
	{
		____tcpClient_6 = value;
		Il2CppCodeGenWriteBarrier(&____tcpClient_6, value);
	}

	inline static int32_t get_offset_of__uri_7() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____uri_7)); }
	inline Uri_t1116831938 * get__uri_7() const { return ____uri_7; }
	inline Uri_t1116831938 ** get_address_of__uri_7() { return &____uri_7; }
	inline void set__uri_7(Uri_t1116831938 * value)
	{
		____uri_7 = value;
		Il2CppCodeGenWriteBarrier(&____uri_7, value);
	}

	inline static int32_t get_offset_of__user_8() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____user_8)); }
	inline Il2CppObject * get__user_8() const { return ____user_8; }
	inline Il2CppObject ** get_address_of__user_8() { return &____user_8; }
	inline void set__user_8(Il2CppObject * value)
	{
		____user_8 = value;
		Il2CppCodeGenWriteBarrier(&____user_8, value);
	}

	inline static int32_t get_offset_of__websocket_9() { return static_cast<int32_t>(offsetof(TcpListenerWebSocketContext_t3782393199, ____websocket_9)); }
	inline WebSocket_t1342580397 * get__websocket_9() const { return ____websocket_9; }
	inline WebSocket_t1342580397 ** get_address_of__websocket_9() { return &____websocket_9; }
	inline void set__websocket_9(WebSocket_t1342580397 * value)
	{
		____websocket_9 = value;
		Il2CppCodeGenWriteBarrier(&____websocket_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
