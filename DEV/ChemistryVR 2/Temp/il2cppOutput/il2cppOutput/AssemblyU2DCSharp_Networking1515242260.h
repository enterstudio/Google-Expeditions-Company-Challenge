#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Networking
struct  Networking_t1515242260  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 Networking::frames
	int32_t ___frames_2;
	// System.Int32 Networking::refreshInterval
	int32_t ___refreshInterval_3;
	// System.Int32 Networking::count
	int32_t ___count_4;

public:
	inline static int32_t get_offset_of_frames_2() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ___frames_2)); }
	inline int32_t get_frames_2() const { return ___frames_2; }
	inline int32_t* get_address_of_frames_2() { return &___frames_2; }
	inline void set_frames_2(int32_t value)
	{
		___frames_2 = value;
	}

	inline static int32_t get_offset_of_refreshInterval_3() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ___refreshInterval_3)); }
	inline int32_t get_refreshInterval_3() const { return ___refreshInterval_3; }
	inline int32_t* get_address_of_refreshInterval_3() { return &___refreshInterval_3; }
	inline void set_refreshInterval_3(int32_t value)
	{
		___refreshInterval_3 = value;
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
