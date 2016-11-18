﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Text.Encoding
struct Encoding_t2012439129;
// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t288332393;
// System.IO.Stream
struct Stream_t1561764144;
// System.String
struct String_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.Uri
struct Uri_t1116831938;
// System.Version
struct Version_t763695022;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Guid2862754429.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.HttpListenerRequest
struct  HttpListenerRequest_t3888821117  : public Il2CppObject
{
public:
	// System.String[] WebSocketSharp.Net.HttpListenerRequest::_acceptTypes
	StringU5BU5D_t4054002952* ____acceptTypes_1;
	// System.Boolean WebSocketSharp.Net.HttpListenerRequest::_chunked
	bool ____chunked_2;
	// System.Text.Encoding WebSocketSharp.Net.HttpListenerRequest::_contentEncoding
	Encoding_t2012439129 * ____contentEncoding_3;
	// System.Int64 WebSocketSharp.Net.HttpListenerRequest::_contentLength
	int64_t ____contentLength_4;
	// System.Boolean WebSocketSharp.Net.HttpListenerRequest::_contentLengthSet
	bool ____contentLengthSet_5;
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.HttpListenerRequest::_context
	HttpListenerContext_t3744659101 * ____context_6;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.HttpListenerRequest::_cookies
	CookieCollection_t1136277956 * ____cookies_7;
	// WebSocketSharp.Net.WebHeaderCollection WebSocketSharp.Net.HttpListenerRequest::_headers
	WebHeaderCollection_t288332393 * ____headers_8;
	// System.Guid WebSocketSharp.Net.HttpListenerRequest::_identifier
	Guid_t2862754429  ____identifier_9;
	// System.IO.Stream WebSocketSharp.Net.HttpListenerRequest::_inputStream
	Stream_t1561764144 * ____inputStream_10;
	// System.Boolean WebSocketSharp.Net.HttpListenerRequest::_keepAlive
	bool ____keepAlive_11;
	// System.Boolean WebSocketSharp.Net.HttpListenerRequest::_keepAliveSet
	bool ____keepAliveSet_12;
	// System.String WebSocketSharp.Net.HttpListenerRequest::_method
	String_t* ____method_13;
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpListenerRequest::_queryString
	NameValueCollection_t2791941106 * ____queryString_14;
	// System.Uri WebSocketSharp.Net.HttpListenerRequest::_referer
	Uri_t1116831938 * ____referer_15;
	// System.String WebSocketSharp.Net.HttpListenerRequest::_uri
	String_t* ____uri_16;
	// System.Uri WebSocketSharp.Net.HttpListenerRequest::_url
	Uri_t1116831938 * ____url_17;
	// System.String[] WebSocketSharp.Net.HttpListenerRequest::_userLanguages
	StringU5BU5D_t4054002952* ____userLanguages_18;
	// System.Version WebSocketSharp.Net.HttpListenerRequest::_version
	Version_t763695022 * ____version_19;
	// System.Boolean WebSocketSharp.Net.HttpListenerRequest::_websocketRequest
	bool ____websocketRequest_20;
	// System.Boolean WebSocketSharp.Net.HttpListenerRequest::_websocketRequestSet
	bool ____websocketRequestSet_21;

public:
	inline static int32_t get_offset_of__acceptTypes_1() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____acceptTypes_1)); }
	inline StringU5BU5D_t4054002952* get__acceptTypes_1() const { return ____acceptTypes_1; }
	inline StringU5BU5D_t4054002952** get_address_of__acceptTypes_1() { return &____acceptTypes_1; }
	inline void set__acceptTypes_1(StringU5BU5D_t4054002952* value)
	{
		____acceptTypes_1 = value;
		Il2CppCodeGenWriteBarrier(&____acceptTypes_1, value);
	}

	inline static int32_t get_offset_of__chunked_2() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____chunked_2)); }
	inline bool get__chunked_2() const { return ____chunked_2; }
	inline bool* get_address_of__chunked_2() { return &____chunked_2; }
	inline void set__chunked_2(bool value)
	{
		____chunked_2 = value;
	}

	inline static int32_t get_offset_of__contentEncoding_3() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____contentEncoding_3)); }
	inline Encoding_t2012439129 * get__contentEncoding_3() const { return ____contentEncoding_3; }
	inline Encoding_t2012439129 ** get_address_of__contentEncoding_3() { return &____contentEncoding_3; }
	inline void set__contentEncoding_3(Encoding_t2012439129 * value)
	{
		____contentEncoding_3 = value;
		Il2CppCodeGenWriteBarrier(&____contentEncoding_3, value);
	}

	inline static int32_t get_offset_of__contentLength_4() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____contentLength_4)); }
	inline int64_t get__contentLength_4() const { return ____contentLength_4; }
	inline int64_t* get_address_of__contentLength_4() { return &____contentLength_4; }
	inline void set__contentLength_4(int64_t value)
	{
		____contentLength_4 = value;
	}

	inline static int32_t get_offset_of__contentLengthSet_5() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____contentLengthSet_5)); }
	inline bool get__contentLengthSet_5() const { return ____contentLengthSet_5; }
	inline bool* get_address_of__contentLengthSet_5() { return &____contentLengthSet_5; }
	inline void set__contentLengthSet_5(bool value)
	{
		____contentLengthSet_5 = value;
	}

	inline static int32_t get_offset_of__context_6() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____context_6)); }
	inline HttpListenerContext_t3744659101 * get__context_6() const { return ____context_6; }
	inline HttpListenerContext_t3744659101 ** get_address_of__context_6() { return &____context_6; }
	inline void set__context_6(HttpListenerContext_t3744659101 * value)
	{
		____context_6 = value;
		Il2CppCodeGenWriteBarrier(&____context_6, value);
	}

	inline static int32_t get_offset_of__cookies_7() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____cookies_7)); }
	inline CookieCollection_t1136277956 * get__cookies_7() const { return ____cookies_7; }
	inline CookieCollection_t1136277956 ** get_address_of__cookies_7() { return &____cookies_7; }
	inline void set__cookies_7(CookieCollection_t1136277956 * value)
	{
		____cookies_7 = value;
		Il2CppCodeGenWriteBarrier(&____cookies_7, value);
	}

	inline static int32_t get_offset_of__headers_8() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____headers_8)); }
	inline WebHeaderCollection_t288332393 * get__headers_8() const { return ____headers_8; }
	inline WebHeaderCollection_t288332393 ** get_address_of__headers_8() { return &____headers_8; }
	inline void set__headers_8(WebHeaderCollection_t288332393 * value)
	{
		____headers_8 = value;
		Il2CppCodeGenWriteBarrier(&____headers_8, value);
	}

	inline static int32_t get_offset_of__identifier_9() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____identifier_9)); }
	inline Guid_t2862754429  get__identifier_9() const { return ____identifier_9; }
	inline Guid_t2862754429 * get_address_of__identifier_9() { return &____identifier_9; }
	inline void set__identifier_9(Guid_t2862754429  value)
	{
		____identifier_9 = value;
	}

	inline static int32_t get_offset_of__inputStream_10() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____inputStream_10)); }
	inline Stream_t1561764144 * get__inputStream_10() const { return ____inputStream_10; }
	inline Stream_t1561764144 ** get_address_of__inputStream_10() { return &____inputStream_10; }
	inline void set__inputStream_10(Stream_t1561764144 * value)
	{
		____inputStream_10 = value;
		Il2CppCodeGenWriteBarrier(&____inputStream_10, value);
	}

	inline static int32_t get_offset_of__keepAlive_11() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____keepAlive_11)); }
	inline bool get__keepAlive_11() const { return ____keepAlive_11; }
	inline bool* get_address_of__keepAlive_11() { return &____keepAlive_11; }
	inline void set__keepAlive_11(bool value)
	{
		____keepAlive_11 = value;
	}

	inline static int32_t get_offset_of__keepAliveSet_12() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____keepAliveSet_12)); }
	inline bool get__keepAliveSet_12() const { return ____keepAliveSet_12; }
	inline bool* get_address_of__keepAliveSet_12() { return &____keepAliveSet_12; }
	inline void set__keepAliveSet_12(bool value)
	{
		____keepAliveSet_12 = value;
	}

	inline static int32_t get_offset_of__method_13() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____method_13)); }
	inline String_t* get__method_13() const { return ____method_13; }
	inline String_t** get_address_of__method_13() { return &____method_13; }
	inline void set__method_13(String_t* value)
	{
		____method_13 = value;
		Il2CppCodeGenWriteBarrier(&____method_13, value);
	}

	inline static int32_t get_offset_of__queryString_14() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____queryString_14)); }
	inline NameValueCollection_t2791941106 * get__queryString_14() const { return ____queryString_14; }
	inline NameValueCollection_t2791941106 ** get_address_of__queryString_14() { return &____queryString_14; }
	inline void set__queryString_14(NameValueCollection_t2791941106 * value)
	{
		____queryString_14 = value;
		Il2CppCodeGenWriteBarrier(&____queryString_14, value);
	}

	inline static int32_t get_offset_of__referer_15() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____referer_15)); }
	inline Uri_t1116831938 * get__referer_15() const { return ____referer_15; }
	inline Uri_t1116831938 ** get_address_of__referer_15() { return &____referer_15; }
	inline void set__referer_15(Uri_t1116831938 * value)
	{
		____referer_15 = value;
		Il2CppCodeGenWriteBarrier(&____referer_15, value);
	}

	inline static int32_t get_offset_of__uri_16() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____uri_16)); }
	inline String_t* get__uri_16() const { return ____uri_16; }
	inline String_t** get_address_of__uri_16() { return &____uri_16; }
	inline void set__uri_16(String_t* value)
	{
		____uri_16 = value;
		Il2CppCodeGenWriteBarrier(&____uri_16, value);
	}

	inline static int32_t get_offset_of__url_17() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____url_17)); }
	inline Uri_t1116831938 * get__url_17() const { return ____url_17; }
	inline Uri_t1116831938 ** get_address_of__url_17() { return &____url_17; }
	inline void set__url_17(Uri_t1116831938 * value)
	{
		____url_17 = value;
		Il2CppCodeGenWriteBarrier(&____url_17, value);
	}

	inline static int32_t get_offset_of__userLanguages_18() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____userLanguages_18)); }
	inline StringU5BU5D_t4054002952* get__userLanguages_18() const { return ____userLanguages_18; }
	inline StringU5BU5D_t4054002952** get_address_of__userLanguages_18() { return &____userLanguages_18; }
	inline void set__userLanguages_18(StringU5BU5D_t4054002952* value)
	{
		____userLanguages_18 = value;
		Il2CppCodeGenWriteBarrier(&____userLanguages_18, value);
	}

	inline static int32_t get_offset_of__version_19() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____version_19)); }
	inline Version_t763695022 * get__version_19() const { return ____version_19; }
	inline Version_t763695022 ** get_address_of__version_19() { return &____version_19; }
	inline void set__version_19(Version_t763695022 * value)
	{
		____version_19 = value;
		Il2CppCodeGenWriteBarrier(&____version_19, value);
	}

	inline static int32_t get_offset_of__websocketRequest_20() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____websocketRequest_20)); }
	inline bool get__websocketRequest_20() const { return ____websocketRequest_20; }
	inline bool* get_address_of__websocketRequest_20() { return &____websocketRequest_20; }
	inline void set__websocketRequest_20(bool value)
	{
		____websocketRequest_20 = value;
	}

	inline static int32_t get_offset_of__websocketRequestSet_21() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117, ____websocketRequestSet_21)); }
	inline bool get__websocketRequestSet_21() const { return ____websocketRequestSet_21; }
	inline bool* get_address_of__websocketRequestSet_21() { return &____websocketRequestSet_21; }
	inline void set__websocketRequestSet_21(bool value)
	{
		____websocketRequestSet_21 = value;
	}
};

struct HttpListenerRequest_t3888821117_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.Net.HttpListenerRequest::_100continue
	ByteU5BU5D_t4260760469* ____100continue_0;

public:
	inline static int32_t get_offset_of__100continue_0() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3888821117_StaticFields, ____100continue_0)); }
	inline ByteU5BU5D_t4260760469* get__100continue_0() const { return ____100continue_0; }
	inline ByteU5BU5D_t4260760469** get_address_of__100continue_0() { return &____100continue_0; }
	inline void set__100continue_0(ByteU5BU5D_t4260760469* value)
	{
		____100continue_0 = value;
		Il2CppCodeGenWriteBarrier(&____100continue_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
