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
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t1782907061;
// System.Action
struct Action_t3771233898;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t763725542;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t1204099087;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t874642578;
// System.Object
struct Il2CppObject;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t636757868;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_t432761876;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_t2273188169;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Uri
struct Uri_t1116831938;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t224487639;
// System.IO.Stream
struct Stream_t1561764144;
// System.Net.Sockets.TcpClient
struct TcpClient_t838416830;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t2615270477;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t569145917;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t181896286;
// System.EventHandler
struct EventHandler_t2463957060;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CompressionMethod2226596781.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"
#include "mscorlib_System_Boolean476798718.h"
#include "AssemblyU2DCSharp_WebSocketSharp_WebSocketState790259878.h"
#include "mscorlib_System_TimeSpan413522987.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocket
struct  WebSocket_t1342580397  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t1782907061 * ____authChallenge_2;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_3;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_4;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_t3771233898 * ____closeContext_5;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_6;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t763725542 * ____context_7;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_t1136277956 * ____cookies_8;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_t1204099087 * ____credentials_9;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_10;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_11;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_exitReceiving
	AutoResetEvent_t874642578 * ____exitReceiving_12;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_13;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_14;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	Il2CppObject * ____forMessageEventQueue_15;
	// System.Object WebSocketSharp.WebSocket::_forSend
	Il2CppObject * ____forSend_16;
	// System.Object WebSocketSharp.WebSocket::_forState
	Il2CppObject * ____forState_17;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_t418716369 * ____fragmentsBuffer_18;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_19;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_20;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_t636757868 * ____handshakeRequestChecker_21;
	// System.Boolean WebSocketSharp.WebSocket::_ignoreExtensions
	bool ____ignoreExtensions_22;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_24;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_t3695440972 * ____logger_25;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_t432761876 * ____message_26;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_t2273188169 * ____messageEventQueue_27;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_28;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_29;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_30;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_31;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t4054002952* ____protocols_32;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_33;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_t1204099087 * ____proxyCredentials_34;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t1116831938 * ____proxyUri_35;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_36;
	// System.Threading.AutoResetEvent WebSocketSharp.WebSocket::_receivePong
	AutoResetEvent_t874642578 * ____receivePong_37;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_38;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_t224487639 * ____sslConfig_39;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_t1561764144 * ____stream_40;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t838416830 * ____tcpClient_41;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t1116831938 * ____uri_42;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t413522987  ____waitTime_43;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t2615270477 * ___OnClose_47;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t569145917 * ___OnError_48;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t181896286 * ___OnMessage_49;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_t2463957060 * ___OnOpen_50;

public:
	inline static int32_t get_offset_of__authChallenge_2() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____authChallenge_2)); }
	inline AuthenticationChallenge_t1782907061 * get__authChallenge_2() const { return ____authChallenge_2; }
	inline AuthenticationChallenge_t1782907061 ** get_address_of__authChallenge_2() { return &____authChallenge_2; }
	inline void set__authChallenge_2(AuthenticationChallenge_t1782907061 * value)
	{
		____authChallenge_2 = value;
		Il2CppCodeGenWriteBarrier(&____authChallenge_2, value);
	}

	inline static int32_t get_offset_of__base64Key_3() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____base64Key_3)); }
	inline String_t* get__base64Key_3() const { return ____base64Key_3; }
	inline String_t** get_address_of__base64Key_3() { return &____base64Key_3; }
	inline void set__base64Key_3(String_t* value)
	{
		____base64Key_3 = value;
		Il2CppCodeGenWriteBarrier(&____base64Key_3, value);
	}

	inline static int32_t get_offset_of__client_4() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____client_4)); }
	inline bool get__client_4() const { return ____client_4; }
	inline bool* get_address_of__client_4() { return &____client_4; }
	inline void set__client_4(bool value)
	{
		____client_4 = value;
	}

	inline static int32_t get_offset_of__closeContext_5() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____closeContext_5)); }
	inline Action_t3771233898 * get__closeContext_5() const { return ____closeContext_5; }
	inline Action_t3771233898 ** get_address_of__closeContext_5() { return &____closeContext_5; }
	inline void set__closeContext_5(Action_t3771233898 * value)
	{
		____closeContext_5 = value;
		Il2CppCodeGenWriteBarrier(&____closeContext_5, value);
	}

	inline static int32_t get_offset_of__compression_6() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____compression_6)); }
	inline uint8_t get__compression_6() const { return ____compression_6; }
	inline uint8_t* get_address_of__compression_6() { return &____compression_6; }
	inline void set__compression_6(uint8_t value)
	{
		____compression_6 = value;
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____context_7)); }
	inline WebSocketContext_t763725542 * get__context_7() const { return ____context_7; }
	inline WebSocketContext_t763725542 ** get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(WebSocketContext_t763725542 * value)
	{
		____context_7 = value;
		Il2CppCodeGenWriteBarrier(&____context_7, value);
	}

	inline static int32_t get_offset_of__cookies_8() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____cookies_8)); }
	inline CookieCollection_t1136277956 * get__cookies_8() const { return ____cookies_8; }
	inline CookieCollection_t1136277956 ** get_address_of__cookies_8() { return &____cookies_8; }
	inline void set__cookies_8(CookieCollection_t1136277956 * value)
	{
		____cookies_8 = value;
		Il2CppCodeGenWriteBarrier(&____cookies_8, value);
	}

	inline static int32_t get_offset_of__credentials_9() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____credentials_9)); }
	inline NetworkCredential_t1204099087 * get__credentials_9() const { return ____credentials_9; }
	inline NetworkCredential_t1204099087 ** get_address_of__credentials_9() { return &____credentials_9; }
	inline void set__credentials_9(NetworkCredential_t1204099087 * value)
	{
		____credentials_9 = value;
		Il2CppCodeGenWriteBarrier(&____credentials_9, value);
	}

	inline static int32_t get_offset_of__emitOnPing_10() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____emitOnPing_10)); }
	inline bool get__emitOnPing_10() const { return ____emitOnPing_10; }
	inline bool* get_address_of__emitOnPing_10() { return &____emitOnPing_10; }
	inline void set__emitOnPing_10(bool value)
	{
		____emitOnPing_10 = value;
	}

	inline static int32_t get_offset_of__enableRedirection_11() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____enableRedirection_11)); }
	inline bool get__enableRedirection_11() const { return ____enableRedirection_11; }
	inline bool* get_address_of__enableRedirection_11() { return &____enableRedirection_11; }
	inline void set__enableRedirection_11(bool value)
	{
		____enableRedirection_11 = value;
	}

	inline static int32_t get_offset_of__exitReceiving_12() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____exitReceiving_12)); }
	inline AutoResetEvent_t874642578 * get__exitReceiving_12() const { return ____exitReceiving_12; }
	inline AutoResetEvent_t874642578 ** get_address_of__exitReceiving_12() { return &____exitReceiving_12; }
	inline void set__exitReceiving_12(AutoResetEvent_t874642578 * value)
	{
		____exitReceiving_12 = value;
		Il2CppCodeGenWriteBarrier(&____exitReceiving_12, value);
	}

	inline static int32_t get_offset_of__extensions_13() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____extensions_13)); }
	inline String_t* get__extensions_13() const { return ____extensions_13; }
	inline String_t** get_address_of__extensions_13() { return &____extensions_13; }
	inline void set__extensions_13(String_t* value)
	{
		____extensions_13 = value;
		Il2CppCodeGenWriteBarrier(&____extensions_13, value);
	}

	inline static int32_t get_offset_of__extensionsRequested_14() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____extensionsRequested_14)); }
	inline bool get__extensionsRequested_14() const { return ____extensionsRequested_14; }
	inline bool* get_address_of__extensionsRequested_14() { return &____extensionsRequested_14; }
	inline void set__extensionsRequested_14(bool value)
	{
		____extensionsRequested_14 = value;
	}

	inline static int32_t get_offset_of__forMessageEventQueue_15() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____forMessageEventQueue_15)); }
	inline Il2CppObject * get__forMessageEventQueue_15() const { return ____forMessageEventQueue_15; }
	inline Il2CppObject ** get_address_of__forMessageEventQueue_15() { return &____forMessageEventQueue_15; }
	inline void set__forMessageEventQueue_15(Il2CppObject * value)
	{
		____forMessageEventQueue_15 = value;
		Il2CppCodeGenWriteBarrier(&____forMessageEventQueue_15, value);
	}

	inline static int32_t get_offset_of__forSend_16() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____forSend_16)); }
	inline Il2CppObject * get__forSend_16() const { return ____forSend_16; }
	inline Il2CppObject ** get_address_of__forSend_16() { return &____forSend_16; }
	inline void set__forSend_16(Il2CppObject * value)
	{
		____forSend_16 = value;
		Il2CppCodeGenWriteBarrier(&____forSend_16, value);
	}

	inline static int32_t get_offset_of__forState_17() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____forState_17)); }
	inline Il2CppObject * get__forState_17() const { return ____forState_17; }
	inline Il2CppObject ** get_address_of__forState_17() { return &____forState_17; }
	inline void set__forState_17(Il2CppObject * value)
	{
		____forState_17 = value;
		Il2CppCodeGenWriteBarrier(&____forState_17, value);
	}

	inline static int32_t get_offset_of__fragmentsBuffer_18() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____fragmentsBuffer_18)); }
	inline MemoryStream_t418716369 * get__fragmentsBuffer_18() const { return ____fragmentsBuffer_18; }
	inline MemoryStream_t418716369 ** get_address_of__fragmentsBuffer_18() { return &____fragmentsBuffer_18; }
	inline void set__fragmentsBuffer_18(MemoryStream_t418716369 * value)
	{
		____fragmentsBuffer_18 = value;
		Il2CppCodeGenWriteBarrier(&____fragmentsBuffer_18, value);
	}

	inline static int32_t get_offset_of__fragmentsCompressed_19() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____fragmentsCompressed_19)); }
	inline bool get__fragmentsCompressed_19() const { return ____fragmentsCompressed_19; }
	inline bool* get_address_of__fragmentsCompressed_19() { return &____fragmentsCompressed_19; }
	inline void set__fragmentsCompressed_19(bool value)
	{
		____fragmentsCompressed_19 = value;
	}

	inline static int32_t get_offset_of__fragmentsOpcode_20() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____fragmentsOpcode_20)); }
	inline uint8_t get__fragmentsOpcode_20() const { return ____fragmentsOpcode_20; }
	inline uint8_t* get_address_of__fragmentsOpcode_20() { return &____fragmentsOpcode_20; }
	inline void set__fragmentsOpcode_20(uint8_t value)
	{
		____fragmentsOpcode_20 = value;
	}

	inline static int32_t get_offset_of__handshakeRequestChecker_21() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____handshakeRequestChecker_21)); }
	inline Func_2_t636757868 * get__handshakeRequestChecker_21() const { return ____handshakeRequestChecker_21; }
	inline Func_2_t636757868 ** get_address_of__handshakeRequestChecker_21() { return &____handshakeRequestChecker_21; }
	inline void set__handshakeRequestChecker_21(Func_2_t636757868 * value)
	{
		____handshakeRequestChecker_21 = value;
		Il2CppCodeGenWriteBarrier(&____handshakeRequestChecker_21, value);
	}

	inline static int32_t get_offset_of__ignoreExtensions_22() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____ignoreExtensions_22)); }
	inline bool get__ignoreExtensions_22() const { return ____ignoreExtensions_22; }
	inline bool* get_address_of__ignoreExtensions_22() { return &____ignoreExtensions_22; }
	inline void set__ignoreExtensions_22(bool value)
	{
		____ignoreExtensions_22 = value;
	}

	inline static int32_t get_offset_of__inContinuation_23() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____inContinuation_23)); }
	inline bool get__inContinuation_23() const { return ____inContinuation_23; }
	inline bool* get_address_of__inContinuation_23() { return &____inContinuation_23; }
	inline void set__inContinuation_23(bool value)
	{
		____inContinuation_23 = value;
	}

	inline static int32_t get_offset_of__inMessage_24() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____inMessage_24)); }
	inline bool get__inMessage_24() const { return ____inMessage_24; }
	inline bool* get_address_of__inMessage_24() { return &____inMessage_24; }
	inline void set__inMessage_24(bool value)
	{
		____inMessage_24 = value;
	}

	inline static int32_t get_offset_of__logger_25() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____logger_25)); }
	inline Logger_t3695440972 * get__logger_25() const { return ____logger_25; }
	inline Logger_t3695440972 ** get_address_of__logger_25() { return &____logger_25; }
	inline void set__logger_25(Logger_t3695440972 * value)
	{
		____logger_25 = value;
		Il2CppCodeGenWriteBarrier(&____logger_25, value);
	}

	inline static int32_t get_offset_of__message_26() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____message_26)); }
	inline Action_1_t432761876 * get__message_26() const { return ____message_26; }
	inline Action_1_t432761876 ** get_address_of__message_26() { return &____message_26; }
	inline void set__message_26(Action_1_t432761876 * value)
	{
		____message_26 = value;
		Il2CppCodeGenWriteBarrier(&____message_26, value);
	}

	inline static int32_t get_offset_of__messageEventQueue_27() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____messageEventQueue_27)); }
	inline Queue_1_t2273188169 * get__messageEventQueue_27() const { return ____messageEventQueue_27; }
	inline Queue_1_t2273188169 ** get_address_of__messageEventQueue_27() { return &____messageEventQueue_27; }
	inline void set__messageEventQueue_27(Queue_1_t2273188169 * value)
	{
		____messageEventQueue_27 = value;
		Il2CppCodeGenWriteBarrier(&____messageEventQueue_27, value);
	}

	inline static int32_t get_offset_of__nonceCount_28() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____nonceCount_28)); }
	inline uint32_t get__nonceCount_28() const { return ____nonceCount_28; }
	inline uint32_t* get_address_of__nonceCount_28() { return &____nonceCount_28; }
	inline void set__nonceCount_28(uint32_t value)
	{
		____nonceCount_28 = value;
	}

	inline static int32_t get_offset_of__origin_29() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____origin_29)); }
	inline String_t* get__origin_29() const { return ____origin_29; }
	inline String_t** get_address_of__origin_29() { return &____origin_29; }
	inline void set__origin_29(String_t* value)
	{
		____origin_29 = value;
		Il2CppCodeGenWriteBarrier(&____origin_29, value);
	}

	inline static int32_t get_offset_of__preAuth_30() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____preAuth_30)); }
	inline bool get__preAuth_30() const { return ____preAuth_30; }
	inline bool* get_address_of__preAuth_30() { return &____preAuth_30; }
	inline void set__preAuth_30(bool value)
	{
		____preAuth_30 = value;
	}

	inline static int32_t get_offset_of__protocol_31() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____protocol_31)); }
	inline String_t* get__protocol_31() const { return ____protocol_31; }
	inline String_t** get_address_of__protocol_31() { return &____protocol_31; }
	inline void set__protocol_31(String_t* value)
	{
		____protocol_31 = value;
		Il2CppCodeGenWriteBarrier(&____protocol_31, value);
	}

	inline static int32_t get_offset_of__protocols_32() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____protocols_32)); }
	inline StringU5BU5D_t4054002952* get__protocols_32() const { return ____protocols_32; }
	inline StringU5BU5D_t4054002952** get_address_of__protocols_32() { return &____protocols_32; }
	inline void set__protocols_32(StringU5BU5D_t4054002952* value)
	{
		____protocols_32 = value;
		Il2CppCodeGenWriteBarrier(&____protocols_32, value);
	}

	inline static int32_t get_offset_of__protocolsRequested_33() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____protocolsRequested_33)); }
	inline bool get__protocolsRequested_33() const { return ____protocolsRequested_33; }
	inline bool* get_address_of__protocolsRequested_33() { return &____protocolsRequested_33; }
	inline void set__protocolsRequested_33(bool value)
	{
		____protocolsRequested_33 = value;
	}

	inline static int32_t get_offset_of__proxyCredentials_34() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____proxyCredentials_34)); }
	inline NetworkCredential_t1204099087 * get__proxyCredentials_34() const { return ____proxyCredentials_34; }
	inline NetworkCredential_t1204099087 ** get_address_of__proxyCredentials_34() { return &____proxyCredentials_34; }
	inline void set__proxyCredentials_34(NetworkCredential_t1204099087 * value)
	{
		____proxyCredentials_34 = value;
		Il2CppCodeGenWriteBarrier(&____proxyCredentials_34, value);
	}

	inline static int32_t get_offset_of__proxyUri_35() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____proxyUri_35)); }
	inline Uri_t1116831938 * get__proxyUri_35() const { return ____proxyUri_35; }
	inline Uri_t1116831938 ** get_address_of__proxyUri_35() { return &____proxyUri_35; }
	inline void set__proxyUri_35(Uri_t1116831938 * value)
	{
		____proxyUri_35 = value;
		Il2CppCodeGenWriteBarrier(&____proxyUri_35, value);
	}

	inline static int32_t get_offset_of__readyState_36() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____readyState_36)); }
	inline uint16_t get__readyState_36() const { return ____readyState_36; }
	inline uint16_t* get_address_of__readyState_36() { return &____readyState_36; }
	inline void set__readyState_36(uint16_t value)
	{
		____readyState_36 = value;
	}

	inline static int32_t get_offset_of__receivePong_37() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____receivePong_37)); }
	inline AutoResetEvent_t874642578 * get__receivePong_37() const { return ____receivePong_37; }
	inline AutoResetEvent_t874642578 ** get_address_of__receivePong_37() { return &____receivePong_37; }
	inline void set__receivePong_37(AutoResetEvent_t874642578 * value)
	{
		____receivePong_37 = value;
		Il2CppCodeGenWriteBarrier(&____receivePong_37, value);
	}

	inline static int32_t get_offset_of__secure_38() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____secure_38)); }
	inline bool get__secure_38() const { return ____secure_38; }
	inline bool* get_address_of__secure_38() { return &____secure_38; }
	inline void set__secure_38(bool value)
	{
		____secure_38 = value;
	}

	inline static int32_t get_offset_of__sslConfig_39() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____sslConfig_39)); }
	inline ClientSslConfiguration_t224487639 * get__sslConfig_39() const { return ____sslConfig_39; }
	inline ClientSslConfiguration_t224487639 ** get_address_of__sslConfig_39() { return &____sslConfig_39; }
	inline void set__sslConfig_39(ClientSslConfiguration_t224487639 * value)
	{
		____sslConfig_39 = value;
		Il2CppCodeGenWriteBarrier(&____sslConfig_39, value);
	}

	inline static int32_t get_offset_of__stream_40() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____stream_40)); }
	inline Stream_t1561764144 * get__stream_40() const { return ____stream_40; }
	inline Stream_t1561764144 ** get_address_of__stream_40() { return &____stream_40; }
	inline void set__stream_40(Stream_t1561764144 * value)
	{
		____stream_40 = value;
		Il2CppCodeGenWriteBarrier(&____stream_40, value);
	}

	inline static int32_t get_offset_of__tcpClient_41() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____tcpClient_41)); }
	inline TcpClient_t838416830 * get__tcpClient_41() const { return ____tcpClient_41; }
	inline TcpClient_t838416830 ** get_address_of__tcpClient_41() { return &____tcpClient_41; }
	inline void set__tcpClient_41(TcpClient_t838416830 * value)
	{
		____tcpClient_41 = value;
		Il2CppCodeGenWriteBarrier(&____tcpClient_41, value);
	}

	inline static int32_t get_offset_of__uri_42() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____uri_42)); }
	inline Uri_t1116831938 * get__uri_42() const { return ____uri_42; }
	inline Uri_t1116831938 ** get_address_of__uri_42() { return &____uri_42; }
	inline void set__uri_42(Uri_t1116831938 * value)
	{
		____uri_42 = value;
		Il2CppCodeGenWriteBarrier(&____uri_42, value);
	}

	inline static int32_t get_offset_of__waitTime_43() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ____waitTime_43)); }
	inline TimeSpan_t413522987  get__waitTime_43() const { return ____waitTime_43; }
	inline TimeSpan_t413522987 * get_address_of__waitTime_43() { return &____waitTime_43; }
	inline void set__waitTime_43(TimeSpan_t413522987  value)
	{
		____waitTime_43 = value;
	}

	inline static int32_t get_offset_of_OnClose_47() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ___OnClose_47)); }
	inline EventHandler_1_t2615270477 * get_OnClose_47() const { return ___OnClose_47; }
	inline EventHandler_1_t2615270477 ** get_address_of_OnClose_47() { return &___OnClose_47; }
	inline void set_OnClose_47(EventHandler_1_t2615270477 * value)
	{
		___OnClose_47 = value;
		Il2CppCodeGenWriteBarrier(&___OnClose_47, value);
	}

	inline static int32_t get_offset_of_OnError_48() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ___OnError_48)); }
	inline EventHandler_1_t569145917 * get_OnError_48() const { return ___OnError_48; }
	inline EventHandler_1_t569145917 ** get_address_of_OnError_48() { return &___OnError_48; }
	inline void set_OnError_48(EventHandler_1_t569145917 * value)
	{
		___OnError_48 = value;
		Il2CppCodeGenWriteBarrier(&___OnError_48, value);
	}

	inline static int32_t get_offset_of_OnMessage_49() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ___OnMessage_49)); }
	inline EventHandler_1_t181896286 * get_OnMessage_49() const { return ___OnMessage_49; }
	inline EventHandler_1_t181896286 ** get_address_of_OnMessage_49() { return &___OnMessage_49; }
	inline void set_OnMessage_49(EventHandler_1_t181896286 * value)
	{
		___OnMessage_49 = value;
		Il2CppCodeGenWriteBarrier(&___OnMessage_49, value);
	}

	inline static int32_t get_offset_of_OnOpen_50() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397, ___OnOpen_50)); }
	inline EventHandler_t2463957060 * get_OnOpen_50() const { return ___OnOpen_50; }
	inline EventHandler_t2463957060 ** get_address_of_OnOpen_50() { return &___OnOpen_50; }
	inline void set_OnOpen_50(EventHandler_t2463957060 * value)
	{
		___OnOpen_50 = value;
		Il2CppCodeGenWriteBarrier(&___OnOpen_50, value);
	}
};

struct WebSocket_t1342580397_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_t4260760469* ___EmptyBytes_44;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_45;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t1757673517 * ___RandomNumber_46;

public:
	inline static int32_t get_offset_of_EmptyBytes_44() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397_StaticFields, ___EmptyBytes_44)); }
	inline ByteU5BU5D_t4260760469* get_EmptyBytes_44() const { return ___EmptyBytes_44; }
	inline ByteU5BU5D_t4260760469** get_address_of_EmptyBytes_44() { return &___EmptyBytes_44; }
	inline void set_EmptyBytes_44(ByteU5BU5D_t4260760469* value)
	{
		___EmptyBytes_44 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyBytes_44, value);
	}

	inline static int32_t get_offset_of_FragmentLength_45() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397_StaticFields, ___FragmentLength_45)); }
	inline int32_t get_FragmentLength_45() const { return ___FragmentLength_45; }
	inline int32_t* get_address_of_FragmentLength_45() { return &___FragmentLength_45; }
	inline void set_FragmentLength_45(int32_t value)
	{
		___FragmentLength_45 = value;
	}

	inline static int32_t get_offset_of_RandomNumber_46() { return static_cast<int32_t>(offsetof(WebSocket_t1342580397_StaticFields, ___RandomNumber_46)); }
	inline RandomNumberGenerator_t1757673517 * get_RandomNumber_46() const { return ___RandomNumber_46; }
	inline RandomNumberGenerator_t1757673517 ** get_address_of_RandomNumber_46() { return &___RandomNumber_46; }
	inline void set_RandomNumber_46(RandomNumberGenerator_t1757673517 * value)
	{
		___RandomNumber_46 = value;
		Il2CppCodeGenWriteBarrier(&___RandomNumber_46, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
