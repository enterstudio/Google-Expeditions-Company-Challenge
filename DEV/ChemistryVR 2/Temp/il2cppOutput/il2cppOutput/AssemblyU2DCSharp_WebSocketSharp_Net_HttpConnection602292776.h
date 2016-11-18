#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// WebSocketSharp.Net.RequestStream
struct RequestStream_t2929193945;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// WebSocketSharp.Net.EndPointListener
struct EndPointListener_t3188089579;
// WebSocketSharp.Net.ResponseStream
struct ResponseStream_t1796293571;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Net.Sockets.Socket
struct Socket_t2157335841;
// System.IO.Stream
struct Stream_t1561764144;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t474061957;
// System.Threading.Timer
struct Timer_t1893171827;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_InputState2025202057.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_LineState793115623.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpConnection
struct  HttpConnection_t602292776  : public Il2CppObject
{
public:
	// System.Byte[] WebSocketSharp.Net.HttpConnection::_buffer
	ByteU5BU5D_t4260760469* ____buffer_1;
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpConnection::_context
	HttpListenerContext_t3744659101 * ____context_2;
	// System.Boolean WebSocketSharp.Net.HttpConnection::_contextRegistered
	bool ____contextRegistered_3;
	// System.Text.StringBuilder WebSocketSharp.Net.HttpConnection::_currentLine
	StringBuilder_t243639308 * ____currentLine_4;
	// WebSocketSharp.Net.InputState WebSocketSharp.Net.HttpConnection::_inputState
	int32_t ____inputState_5;
	// WebSocketSharp.Net.RequestStream WebSocketSharp.Net.HttpConnection::_inputStream
	RequestStream_t2929193945 * ____inputStream_6;
	// WebSocketSharp.Net.HttpListener WebSocketSharp.Net.HttpConnection::_lastListener
	HttpListener_t398944510 * ____lastListener_7;
	// WebSocketSharp.Net.LineState WebSocketSharp.Net.HttpConnection::_lineState
	int32_t ____lineState_8;
	// WebSocketSharp.Net.EndPointListener WebSocketSharp.Net.HttpConnection::_listener
	EndPointListener_t3188089579 * ____listener_9;
	// WebSocketSharp.Net.ResponseStream WebSocketSharp.Net.HttpConnection::_outputStream
	ResponseStream_t1796293571 * ____outputStream_10;
	// System.Int32 WebSocketSharp.Net.HttpConnection::_position
	int32_t ____position_11;
	// System.IO.MemoryStream WebSocketSharp.Net.HttpConnection::_requestBuffer
	MemoryStream_t418716369 * ____requestBuffer_12;
	// System.Int32 WebSocketSharp.Net.HttpConnection::_reuses
	int32_t ____reuses_13;
	// System.Boolean WebSocketSharp.Net.HttpConnection::_secure
	bool ____secure_14;
	// System.Net.Sockets.Socket WebSocketSharp.Net.HttpConnection::_socket
	Socket_t2157335841 * ____socket_15;
	// System.IO.Stream WebSocketSharp.Net.HttpConnection::_stream
	Stream_t1561764144 * ____stream_16;
	// System.Object WebSocketSharp.Net.HttpConnection::_sync
	Il2CppObject * ____sync_17;
	// System.Int32 WebSocketSharp.Net.HttpConnection::_timeout
	int32_t ____timeout_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> WebSocketSharp.Net.HttpConnection::_timeoutCanceled
	Dictionary_2_t474061957 * ____timeoutCanceled_19;
	// System.Threading.Timer WebSocketSharp.Net.HttpConnection::_timer
	Timer_t1893171827 * ____timer_20;

public:
	inline static int32_t get_offset_of__buffer_1() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____buffer_1)); }
	inline ByteU5BU5D_t4260760469* get__buffer_1() const { return ____buffer_1; }
	inline ByteU5BU5D_t4260760469** get_address_of__buffer_1() { return &____buffer_1; }
	inline void set__buffer_1(ByteU5BU5D_t4260760469* value)
	{
		____buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_1, value);
	}

	inline static int32_t get_offset_of__context_2() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____context_2)); }
	inline HttpListenerContext_t3744659101 * get__context_2() const { return ____context_2; }
	inline HttpListenerContext_t3744659101 ** get_address_of__context_2() { return &____context_2; }
	inline void set__context_2(HttpListenerContext_t3744659101 * value)
	{
		____context_2 = value;
		Il2CppCodeGenWriteBarrier(&____context_2, value);
	}

	inline static int32_t get_offset_of__contextRegistered_3() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____contextRegistered_3)); }
	inline bool get__contextRegistered_3() const { return ____contextRegistered_3; }
	inline bool* get_address_of__contextRegistered_3() { return &____contextRegistered_3; }
	inline void set__contextRegistered_3(bool value)
	{
		____contextRegistered_3 = value;
	}

	inline static int32_t get_offset_of__currentLine_4() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____currentLine_4)); }
	inline StringBuilder_t243639308 * get__currentLine_4() const { return ____currentLine_4; }
	inline StringBuilder_t243639308 ** get_address_of__currentLine_4() { return &____currentLine_4; }
	inline void set__currentLine_4(StringBuilder_t243639308 * value)
	{
		____currentLine_4 = value;
		Il2CppCodeGenWriteBarrier(&____currentLine_4, value);
	}

	inline static int32_t get_offset_of__inputState_5() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____inputState_5)); }
	inline int32_t get__inputState_5() const { return ____inputState_5; }
	inline int32_t* get_address_of__inputState_5() { return &____inputState_5; }
	inline void set__inputState_5(int32_t value)
	{
		____inputState_5 = value;
	}

	inline static int32_t get_offset_of__inputStream_6() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____inputStream_6)); }
	inline RequestStream_t2929193945 * get__inputStream_6() const { return ____inputStream_6; }
	inline RequestStream_t2929193945 ** get_address_of__inputStream_6() { return &____inputStream_6; }
	inline void set__inputStream_6(RequestStream_t2929193945 * value)
	{
		____inputStream_6 = value;
		Il2CppCodeGenWriteBarrier(&____inputStream_6, value);
	}

	inline static int32_t get_offset_of__lastListener_7() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____lastListener_7)); }
	inline HttpListener_t398944510 * get__lastListener_7() const { return ____lastListener_7; }
	inline HttpListener_t398944510 ** get_address_of__lastListener_7() { return &____lastListener_7; }
	inline void set__lastListener_7(HttpListener_t398944510 * value)
	{
		____lastListener_7 = value;
		Il2CppCodeGenWriteBarrier(&____lastListener_7, value);
	}

	inline static int32_t get_offset_of__lineState_8() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____lineState_8)); }
	inline int32_t get__lineState_8() const { return ____lineState_8; }
	inline int32_t* get_address_of__lineState_8() { return &____lineState_8; }
	inline void set__lineState_8(int32_t value)
	{
		____lineState_8 = value;
	}

	inline static int32_t get_offset_of__listener_9() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____listener_9)); }
	inline EndPointListener_t3188089579 * get__listener_9() const { return ____listener_9; }
	inline EndPointListener_t3188089579 ** get_address_of__listener_9() { return &____listener_9; }
	inline void set__listener_9(EndPointListener_t3188089579 * value)
	{
		____listener_9 = value;
		Il2CppCodeGenWriteBarrier(&____listener_9, value);
	}

	inline static int32_t get_offset_of__outputStream_10() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____outputStream_10)); }
	inline ResponseStream_t1796293571 * get__outputStream_10() const { return ____outputStream_10; }
	inline ResponseStream_t1796293571 ** get_address_of__outputStream_10() { return &____outputStream_10; }
	inline void set__outputStream_10(ResponseStream_t1796293571 * value)
	{
		____outputStream_10 = value;
		Il2CppCodeGenWriteBarrier(&____outputStream_10, value);
	}

	inline static int32_t get_offset_of__position_11() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____position_11)); }
	inline int32_t get__position_11() const { return ____position_11; }
	inline int32_t* get_address_of__position_11() { return &____position_11; }
	inline void set__position_11(int32_t value)
	{
		____position_11 = value;
	}

	inline static int32_t get_offset_of__requestBuffer_12() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____requestBuffer_12)); }
	inline MemoryStream_t418716369 * get__requestBuffer_12() const { return ____requestBuffer_12; }
	inline MemoryStream_t418716369 ** get_address_of__requestBuffer_12() { return &____requestBuffer_12; }
	inline void set__requestBuffer_12(MemoryStream_t418716369 * value)
	{
		____requestBuffer_12 = value;
		Il2CppCodeGenWriteBarrier(&____requestBuffer_12, value);
	}

	inline static int32_t get_offset_of__reuses_13() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____reuses_13)); }
	inline int32_t get__reuses_13() const { return ____reuses_13; }
	inline int32_t* get_address_of__reuses_13() { return &____reuses_13; }
	inline void set__reuses_13(int32_t value)
	{
		____reuses_13 = value;
	}

	inline static int32_t get_offset_of__secure_14() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____secure_14)); }
	inline bool get__secure_14() const { return ____secure_14; }
	inline bool* get_address_of__secure_14() { return &____secure_14; }
	inline void set__secure_14(bool value)
	{
		____secure_14 = value;
	}

	inline static int32_t get_offset_of__socket_15() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____socket_15)); }
	inline Socket_t2157335841 * get__socket_15() const { return ____socket_15; }
	inline Socket_t2157335841 ** get_address_of__socket_15() { return &____socket_15; }
	inline void set__socket_15(Socket_t2157335841 * value)
	{
		____socket_15 = value;
		Il2CppCodeGenWriteBarrier(&____socket_15, value);
	}

	inline static int32_t get_offset_of__stream_16() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____stream_16)); }
	inline Stream_t1561764144 * get__stream_16() const { return ____stream_16; }
	inline Stream_t1561764144 ** get_address_of__stream_16() { return &____stream_16; }
	inline void set__stream_16(Stream_t1561764144 * value)
	{
		____stream_16 = value;
		Il2CppCodeGenWriteBarrier(&____stream_16, value);
	}

	inline static int32_t get_offset_of__sync_17() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____sync_17)); }
	inline Il2CppObject * get__sync_17() const { return ____sync_17; }
	inline Il2CppObject ** get_address_of__sync_17() { return &____sync_17; }
	inline void set__sync_17(Il2CppObject * value)
	{
		____sync_17 = value;
		Il2CppCodeGenWriteBarrier(&____sync_17, value);
	}

	inline static int32_t get_offset_of__timeout_18() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____timeout_18)); }
	inline int32_t get__timeout_18() const { return ____timeout_18; }
	inline int32_t* get_address_of__timeout_18() { return &____timeout_18; }
	inline void set__timeout_18(int32_t value)
	{
		____timeout_18 = value;
	}

	inline static int32_t get_offset_of__timeoutCanceled_19() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____timeoutCanceled_19)); }
	inline Dictionary_2_t474061957 * get__timeoutCanceled_19() const { return ____timeoutCanceled_19; }
	inline Dictionary_2_t474061957 ** get_address_of__timeoutCanceled_19() { return &____timeoutCanceled_19; }
	inline void set__timeoutCanceled_19(Dictionary_2_t474061957 * value)
	{
		____timeoutCanceled_19 = value;
		Il2CppCodeGenWriteBarrier(&____timeoutCanceled_19, value);
	}

	inline static int32_t get_offset_of__timer_20() { return static_cast<int32_t>(offsetof(HttpConnection_t602292776, ____timer_20)); }
	inline Timer_t1893171827 * get__timer_20() const { return ____timer_20; }
	inline Timer_t1893171827 ** get_address_of__timer_20() { return &____timer_20; }
	inline void set__timer_20(Timer_t1893171827 * value)
	{
		____timer_20 = value;
		Il2CppCodeGenWriteBarrier(&____timer_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
