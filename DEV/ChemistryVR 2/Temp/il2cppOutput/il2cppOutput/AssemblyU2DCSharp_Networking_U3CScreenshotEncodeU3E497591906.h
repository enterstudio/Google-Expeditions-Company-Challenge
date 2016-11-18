#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Networking/<ScreenshotEncode>c__Iterator2
struct  U3CScreenshotEncodeU3Ec__Iterator2_t497591906  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D Networking/<ScreenshotEncode>c__Iterator2::<texture>__0
	Texture2D_t3884108195 * ___U3CtextureU3E__0_0;
	// System.Byte[] Networking/<ScreenshotEncode>c__Iterator2::<bytes>__1
	ByteU5BU5D_t4260760469* ___U3CbytesU3E__1_1;
	// System.Int32 Networking/<ScreenshotEncode>c__Iterator2::$PC
	int32_t ___U24PC_2;
	// System.Object Networking/<ScreenshotEncode>c__Iterator2::$current
	Il2CppObject * ___U24current_3;

public:
	inline static int32_t get_offset_of_U3CtextureU3E__0_0() { return static_cast<int32_t>(offsetof(U3CScreenshotEncodeU3Ec__Iterator2_t497591906, ___U3CtextureU3E__0_0)); }
	inline Texture2D_t3884108195 * get_U3CtextureU3E__0_0() const { return ___U3CtextureU3E__0_0; }
	inline Texture2D_t3884108195 ** get_address_of_U3CtextureU3E__0_0() { return &___U3CtextureU3E__0_0; }
	inline void set_U3CtextureU3E__0_0(Texture2D_t3884108195 * value)
	{
		___U3CtextureU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtextureU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CbytesU3E__1_1() { return static_cast<int32_t>(offsetof(U3CScreenshotEncodeU3Ec__Iterator2_t497591906, ___U3CbytesU3E__1_1)); }
	inline ByteU5BU5D_t4260760469* get_U3CbytesU3E__1_1() const { return ___U3CbytesU3E__1_1; }
	inline ByteU5BU5D_t4260760469** get_address_of_U3CbytesU3E__1_1() { return &___U3CbytesU3E__1_1; }
	inline void set_U3CbytesU3E__1_1(ByteU5BU5D_t4260760469* value)
	{
		___U3CbytesU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbytesU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CScreenshotEncodeU3Ec__Iterator2_t497591906, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CScreenshotEncodeU3Ec__Iterator2_t497591906, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
