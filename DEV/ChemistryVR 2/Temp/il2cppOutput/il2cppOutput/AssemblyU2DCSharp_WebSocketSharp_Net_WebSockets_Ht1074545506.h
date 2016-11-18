#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// WebSocketSharp.WebSocket
struct WebSocket_t1342580397;

#include "AssemblyU2DCSharp_WebSocketSharp_Net_WebSockets_Web763725542.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext
struct  HttpListenerWebSocketContext_t1074545506  : public WebSocketContext_t763725542
{
public:
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::_context
	HttpListenerContext_t3744659101 * ____context_0;
	// WebSocketSharp.WebSocket WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext::_websocket
	WebSocket_t1342580397 * ____websocket_1;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(HttpListenerWebSocketContext_t1074545506, ____context_0)); }
	inline HttpListenerContext_t3744659101 * get__context_0() const { return ____context_0; }
	inline HttpListenerContext_t3744659101 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(HttpListenerContext_t3744659101 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}

	inline static int32_t get_offset_of__websocket_1() { return static_cast<int32_t>(offsetof(HttpListenerWebSocketContext_t1074545506, ____websocket_1)); }
	inline WebSocket_t1342580397 * get__websocket_1() const { return ____websocket_1; }
	inline WebSocket_t1342580397 ** get_address_of__websocket_1() { return &____websocket_1; }
	inline void set__websocket_1(WebSocket_t1342580397 * value)
	{
		____websocket_1 = value;
		Il2CppCodeGenWriteBarrier(&____websocket_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
