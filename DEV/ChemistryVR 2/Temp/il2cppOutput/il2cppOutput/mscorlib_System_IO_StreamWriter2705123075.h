﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t2012439129;
// System.IO.Stream
struct Stream_t1561764144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.IO.StreamWriter
struct StreamWriter_t2705123075;

#include "mscorlib_System_IO_TextWriter2304124208.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t2705123075  : public TextWriter_t2304124208
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t2012439129 * ___internalEncoding_3;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1561764144 * ___internalStream_4;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_5;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t4260760469* ___byte_buf_6;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_7;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3324145743* ___decode_buf_8;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_9;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_10;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_11;

public:
	inline static int32_t get_offset_of_internalEncoding_3() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___internalEncoding_3)); }
	inline Encoding_t2012439129 * get_internalEncoding_3() const { return ___internalEncoding_3; }
	inline Encoding_t2012439129 ** get_address_of_internalEncoding_3() { return &___internalEncoding_3; }
	inline void set_internalEncoding_3(Encoding_t2012439129 * value)
	{
		___internalEncoding_3 = value;
		Il2CppCodeGenWriteBarrier(&___internalEncoding_3, value);
	}

	inline static int32_t get_offset_of_internalStream_4() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___internalStream_4)); }
	inline Stream_t1561764144 * get_internalStream_4() const { return ___internalStream_4; }
	inline Stream_t1561764144 ** get_address_of_internalStream_4() { return &___internalStream_4; }
	inline void set_internalStream_4(Stream_t1561764144 * value)
	{
		___internalStream_4 = value;
		Il2CppCodeGenWriteBarrier(&___internalStream_4, value);
	}

	inline static int32_t get_offset_of_iflush_5() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___iflush_5)); }
	inline bool get_iflush_5() const { return ___iflush_5; }
	inline bool* get_address_of_iflush_5() { return &___iflush_5; }
	inline void set_iflush_5(bool value)
	{
		___iflush_5 = value;
	}

	inline static int32_t get_offset_of_byte_buf_6() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___byte_buf_6)); }
	inline ByteU5BU5D_t4260760469* get_byte_buf_6() const { return ___byte_buf_6; }
	inline ByteU5BU5D_t4260760469** get_address_of_byte_buf_6() { return &___byte_buf_6; }
	inline void set_byte_buf_6(ByteU5BU5D_t4260760469* value)
	{
		___byte_buf_6 = value;
		Il2CppCodeGenWriteBarrier(&___byte_buf_6, value);
	}

	inline static int32_t get_offset_of_byte_pos_7() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___byte_pos_7)); }
	inline int32_t get_byte_pos_7() const { return ___byte_pos_7; }
	inline int32_t* get_address_of_byte_pos_7() { return &___byte_pos_7; }
	inline void set_byte_pos_7(int32_t value)
	{
		___byte_pos_7 = value;
	}

	inline static int32_t get_offset_of_decode_buf_8() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___decode_buf_8)); }
	inline CharU5BU5D_t3324145743* get_decode_buf_8() const { return ___decode_buf_8; }
	inline CharU5BU5D_t3324145743** get_address_of_decode_buf_8() { return &___decode_buf_8; }
	inline void set_decode_buf_8(CharU5BU5D_t3324145743* value)
	{
		___decode_buf_8 = value;
		Il2CppCodeGenWriteBarrier(&___decode_buf_8, value);
	}

	inline static int32_t get_offset_of_decode_pos_9() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___decode_pos_9)); }
	inline int32_t get_decode_pos_9() const { return ___decode_pos_9; }
	inline int32_t* get_address_of_decode_pos_9() { return &___decode_pos_9; }
	inline void set_decode_pos_9(int32_t value)
	{
		___decode_pos_9 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_10() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___DisposedAlready_10)); }
	inline bool get_DisposedAlready_10() const { return ___DisposedAlready_10; }
	inline bool* get_address_of_DisposedAlready_10() { return &___DisposedAlready_10; }
	inline void set_DisposedAlready_10(bool value)
	{
		___DisposedAlready_10 = value;
	}

	inline static int32_t get_offset_of_preamble_done_11() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075, ___preamble_done_11)); }
	inline bool get_preamble_done_11() const { return ___preamble_done_11; }
	inline bool* get_address_of_preamble_done_11() { return &___preamble_done_11; }
	inline void set_preamble_done_11(bool value)
	{
		___preamble_done_11 = value;
	}
};

struct StreamWriter_t2705123075_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t2705123075 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamWriter_t2705123075_StaticFields, ___Null_12)); }
	inline StreamWriter_t2705123075 * get_Null_12() const { return ___Null_12; }
	inline StreamWriter_t2705123075 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamWriter_t2705123075 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier(&___Null_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
