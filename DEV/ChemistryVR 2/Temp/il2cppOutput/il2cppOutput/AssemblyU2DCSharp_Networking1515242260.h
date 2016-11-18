#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.WebClient
struct WebClient_t220232441;

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
	// System.Net.WebClient Networking::client
	WebClient_t220232441 * ___client_4;

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

	inline static int32_t get_offset_of_client_4() { return static_cast<int32_t>(offsetof(Networking_t1515242260, ___client_4)); }
	inline WebClient_t220232441 * get_client_4() const { return ___client_4; }
	inline WebClient_t220232441 ** get_address_of_client_4() { return &___client_4; }
	inline void set_client_4(WebClient_t220232441 * value)
	{
		___client_4 = value;
		Il2CppCodeGenWriteBarrier(&___client_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
