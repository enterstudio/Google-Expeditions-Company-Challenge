#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlashCamera
struct  FlashCamera_t2466288405  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.CanvasGroup FlashCamera::flashCanvas
	CanvasGroup_t3702418109 * ___flashCanvas_2;
	// System.Boolean FlashCamera::flash
	bool ___flash_3;

public:
	inline static int32_t get_offset_of_flashCanvas_2() { return static_cast<int32_t>(offsetof(FlashCamera_t2466288405, ___flashCanvas_2)); }
	inline CanvasGroup_t3702418109 * get_flashCanvas_2() const { return ___flashCanvas_2; }
	inline CanvasGroup_t3702418109 ** get_address_of_flashCanvas_2() { return &___flashCanvas_2; }
	inline void set_flashCanvas_2(CanvasGroup_t3702418109 * value)
	{
		___flashCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___flashCanvas_2, value);
	}

	inline static int32_t get_offset_of_flash_3() { return static_cast<int32_t>(offsetof(FlashCamera_t2466288405, ___flash_3)); }
	inline bool get_flash_3() const { return ___flash_3; }
	inline bool* get_address_of_flash_3() { return &___flash_3; }
	inline void set_flash_3(bool value)
	{
		___flash_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
