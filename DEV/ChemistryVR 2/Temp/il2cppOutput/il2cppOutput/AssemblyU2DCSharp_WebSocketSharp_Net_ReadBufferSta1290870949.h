#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpStreamAsyncResult
struct HttpStreamAsyncResult_t303264603;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.ReadBufferState
struct  ReadBufferState_t1290870949  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.HttpStreamAsyncResult WebSocketSharp.Net.ReadBufferState::_asyncResult
	HttpStreamAsyncResult_t303264603 * ____asyncResult_0;
	// System.Byte[] WebSocketSharp.Net.ReadBufferState::_buffer
	ByteU5BU5D_t4260760469* ____buffer_1;
	// System.Int32 WebSocketSharp.Net.ReadBufferState::_count
	int32_t ____count_2;
	// System.Int32 WebSocketSharp.Net.ReadBufferState::_initialCount
	int32_t ____initialCount_3;
	// System.Int32 WebSocketSharp.Net.ReadBufferState::_offset
	int32_t ____offset_4;

public:
	inline static int32_t get_offset_of__asyncResult_0() { return static_cast<int32_t>(offsetof(ReadBufferState_t1290870949, ____asyncResult_0)); }
	inline HttpStreamAsyncResult_t303264603 * get__asyncResult_0() const { return ____asyncResult_0; }
	inline HttpStreamAsyncResult_t303264603 ** get_address_of__asyncResult_0() { return &____asyncResult_0; }
	inline void set__asyncResult_0(HttpStreamAsyncResult_t303264603 * value)
	{
		____asyncResult_0 = value;
		Il2CppCodeGenWriteBarrier(&____asyncResult_0, value);
	}

	inline static int32_t get_offset_of__buffer_1() { return static_cast<int32_t>(offsetof(ReadBufferState_t1290870949, ____buffer_1)); }
	inline ByteU5BU5D_t4260760469* get__buffer_1() const { return ____buffer_1; }
	inline ByteU5BU5D_t4260760469** get_address_of__buffer_1() { return &____buffer_1; }
	inline void set__buffer_1(ByteU5BU5D_t4260760469* value)
	{
		____buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_1, value);
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ReadBufferState_t1290870949, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}

	inline static int32_t get_offset_of__initialCount_3() { return static_cast<int32_t>(offsetof(ReadBufferState_t1290870949, ____initialCount_3)); }
	inline int32_t get__initialCount_3() const { return ____initialCount_3; }
	inline int32_t* get_address_of__initialCount_3() { return &____initialCount_3; }
	inline void set__initialCount_3(int32_t value)
	{
		____initialCount_3 = value;
	}

	inline static int32_t get_offset_of__offset_4() { return static_cast<int32_t>(offsetof(ReadBufferState_t1290870949, ____offset_4)); }
	inline int32_t get__offset_4() const { return ____offset_4; }
	inline int32_t* get_address_of__offset_4() { return &____offset_4; }
	inline void set__offset_4(int32_t value)
	{
		____offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
