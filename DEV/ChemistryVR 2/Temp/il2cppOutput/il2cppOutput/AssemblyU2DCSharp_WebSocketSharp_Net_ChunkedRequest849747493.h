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
// WebSocketSharp.Net.ChunkStream
struct ChunkStream_t4213968439;

#include "AssemblyU2DCSharp_WebSocketSharp_Net_RequestStream2929193945.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.ChunkedRequestStream
struct  ChunkedRequestStream_t849747493  : public RequestStream_t2929193945
{
public:
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Net.ChunkedRequestStream::_context
	HttpListenerContext_t3744659101 * ____context_8;
	// WebSocketSharp.Net.ChunkStream WebSocketSharp.Net.ChunkedRequestStream::_decoder
	ChunkStream_t4213968439 * ____decoder_9;
	// System.Boolean WebSocketSharp.Net.ChunkedRequestStream::_disposed
	bool ____disposed_10;
	// System.Boolean WebSocketSharp.Net.ChunkedRequestStream::_noMoreData
	bool ____noMoreData_11;

public:
	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ChunkedRequestStream_t849747493, ____context_8)); }
	inline HttpListenerContext_t3744659101 * get__context_8() const { return ____context_8; }
	inline HttpListenerContext_t3744659101 ** get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(HttpListenerContext_t3744659101 * value)
	{
		____context_8 = value;
		Il2CppCodeGenWriteBarrier(&____context_8, value);
	}

	inline static int32_t get_offset_of__decoder_9() { return static_cast<int32_t>(offsetof(ChunkedRequestStream_t849747493, ____decoder_9)); }
	inline ChunkStream_t4213968439 * get__decoder_9() const { return ____decoder_9; }
	inline ChunkStream_t4213968439 ** get_address_of__decoder_9() { return &____decoder_9; }
	inline void set__decoder_9(ChunkStream_t4213968439 * value)
	{
		____decoder_9 = value;
		Il2CppCodeGenWriteBarrier(&____decoder_9, value);
	}

	inline static int32_t get_offset_of__disposed_10() { return static_cast<int32_t>(offsetof(ChunkedRequestStream_t849747493, ____disposed_10)); }
	inline bool get__disposed_10() const { return ____disposed_10; }
	inline bool* get_address_of__disposed_10() { return &____disposed_10; }
	inline void set__disposed_10(bool value)
	{
		____disposed_10 = value;
	}

	inline static int32_t get_offset_of__noMoreData_11() { return static_cast<int32_t>(offsetof(ChunkedRequestStream_t849747493, ____noMoreData_11)); }
	inline bool get__noMoreData_11() const { return ____noMoreData_11; }
	inline bool* get_address_of__noMoreData_11() { return &____noMoreData_11; }
	inline void set__noMoreData_11(bool value)
	{
		____noMoreData_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
