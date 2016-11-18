#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix>
struct List_1_t979282048;
// System.String
struct String_t;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener>
struct Dictionary_2_t1687103689;
// System.Net.Sockets.Socket
struct Socket_t2157335841;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t1612362831;
// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpConnection,WebSocketSharp.Net.HttpConnection>
struct Dictionary_2_t3390149787;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.EndPointListener
struct  EndPointListener_t3188089579  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix> WebSocketSharp.Net.EndPointListener::_all
	List_1_t979282048 * ____all_0;
	// System.Net.IPEndPoint WebSocketSharp.Net.EndPointListener::_endpoint
	IPEndPoint_t2123960758 * ____endpoint_2;
	// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpListenerPrefix,WebSocketSharp.Net.HttpListener> WebSocketSharp.Net.EndPointListener::_prefixes
	Dictionary_2_t1687103689 * ____prefixes_3;
	// System.Boolean WebSocketSharp.Net.EndPointListener::_secure
	bool ____secure_4;
	// System.Net.Sockets.Socket WebSocketSharp.Net.EndPointListener::_socket
	Socket_t2157335841 * ____socket_5;
	// WebSocketSharp.Net.ServerSslConfiguration WebSocketSharp.Net.EndPointListener::_sslConfig
	ServerSslConfiguration_t1612362831 * ____sslConfig_6;
	// System.Collections.Generic.List`1<WebSocketSharp.Net.HttpListenerPrefix> WebSocketSharp.Net.EndPointListener::_unhandled
	List_1_t979282048 * ____unhandled_7;
	// System.Collections.Generic.Dictionary`2<WebSocketSharp.Net.HttpConnection,WebSocketSharp.Net.HttpConnection> WebSocketSharp.Net.EndPointListener::_unregistered
	Dictionary_2_t3390149787 * ____unregistered_8;
	// System.Object WebSocketSharp.Net.EndPointListener::_unregisteredSync
	Il2CppObject * ____unregisteredSync_9;

public:
	inline static int32_t get_offset_of__all_0() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____all_0)); }
	inline List_1_t979282048 * get__all_0() const { return ____all_0; }
	inline List_1_t979282048 ** get_address_of__all_0() { return &____all_0; }
	inline void set__all_0(List_1_t979282048 * value)
	{
		____all_0 = value;
		Il2CppCodeGenWriteBarrier(&____all_0, value);
	}

	inline static int32_t get_offset_of__endpoint_2() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____endpoint_2)); }
	inline IPEndPoint_t2123960758 * get__endpoint_2() const { return ____endpoint_2; }
	inline IPEndPoint_t2123960758 ** get_address_of__endpoint_2() { return &____endpoint_2; }
	inline void set__endpoint_2(IPEndPoint_t2123960758 * value)
	{
		____endpoint_2 = value;
		Il2CppCodeGenWriteBarrier(&____endpoint_2, value);
	}

	inline static int32_t get_offset_of__prefixes_3() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____prefixes_3)); }
	inline Dictionary_2_t1687103689 * get__prefixes_3() const { return ____prefixes_3; }
	inline Dictionary_2_t1687103689 ** get_address_of__prefixes_3() { return &____prefixes_3; }
	inline void set__prefixes_3(Dictionary_2_t1687103689 * value)
	{
		____prefixes_3 = value;
		Il2CppCodeGenWriteBarrier(&____prefixes_3, value);
	}

	inline static int32_t get_offset_of__secure_4() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____secure_4)); }
	inline bool get__secure_4() const { return ____secure_4; }
	inline bool* get_address_of__secure_4() { return &____secure_4; }
	inline void set__secure_4(bool value)
	{
		____secure_4 = value;
	}

	inline static int32_t get_offset_of__socket_5() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____socket_5)); }
	inline Socket_t2157335841 * get__socket_5() const { return ____socket_5; }
	inline Socket_t2157335841 ** get_address_of__socket_5() { return &____socket_5; }
	inline void set__socket_5(Socket_t2157335841 * value)
	{
		____socket_5 = value;
		Il2CppCodeGenWriteBarrier(&____socket_5, value);
	}

	inline static int32_t get_offset_of__sslConfig_6() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____sslConfig_6)); }
	inline ServerSslConfiguration_t1612362831 * get__sslConfig_6() const { return ____sslConfig_6; }
	inline ServerSslConfiguration_t1612362831 ** get_address_of__sslConfig_6() { return &____sslConfig_6; }
	inline void set__sslConfig_6(ServerSslConfiguration_t1612362831 * value)
	{
		____sslConfig_6 = value;
		Il2CppCodeGenWriteBarrier(&____sslConfig_6, value);
	}

	inline static int32_t get_offset_of__unhandled_7() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____unhandled_7)); }
	inline List_1_t979282048 * get__unhandled_7() const { return ____unhandled_7; }
	inline List_1_t979282048 ** get_address_of__unhandled_7() { return &____unhandled_7; }
	inline void set__unhandled_7(List_1_t979282048 * value)
	{
		____unhandled_7 = value;
		Il2CppCodeGenWriteBarrier(&____unhandled_7, value);
	}

	inline static int32_t get_offset_of__unregistered_8() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____unregistered_8)); }
	inline Dictionary_2_t3390149787 * get__unregistered_8() const { return ____unregistered_8; }
	inline Dictionary_2_t3390149787 ** get_address_of__unregistered_8() { return &____unregistered_8; }
	inline void set__unregistered_8(Dictionary_2_t3390149787 * value)
	{
		____unregistered_8 = value;
		Il2CppCodeGenWriteBarrier(&____unregistered_8, value);
	}

	inline static int32_t get_offset_of__unregisteredSync_9() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579, ____unregisteredSync_9)); }
	inline Il2CppObject * get__unregisteredSync_9() const { return ____unregisteredSync_9; }
	inline Il2CppObject ** get_address_of__unregisteredSync_9() { return &____unregisteredSync_9; }
	inline void set__unregisteredSync_9(Il2CppObject * value)
	{
		____unregisteredSync_9 = value;
		Il2CppCodeGenWriteBarrier(&____unregisteredSync_9, value);
	}
};

struct EndPointListener_t3188089579_StaticFields
{
public:
	// System.String WebSocketSharp.Net.EndPointListener::_defaultCertFolderPath
	String_t* ____defaultCertFolderPath_1;

public:
	inline static int32_t get_offset_of__defaultCertFolderPath_1() { return static_cast<int32_t>(offsetof(EndPointListener_t3188089579_StaticFields, ____defaultCertFolderPath_1)); }
	inline String_t* get__defaultCertFolderPath_1() const { return ____defaultCertFolderPath_1; }
	inline String_t** get_address_of__defaultCertFolderPath_1() { return &____defaultCertFolderPath_1; }
	inline void set__defaultCertFolderPath_1(String_t* value)
	{
		____defaultCertFolderPath_1 = value;
		Il2CppCodeGenWriteBarrier(&____defaultCertFolderPath_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
