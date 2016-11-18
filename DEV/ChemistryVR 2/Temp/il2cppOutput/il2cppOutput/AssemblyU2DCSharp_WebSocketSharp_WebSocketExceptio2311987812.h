#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Exception3991598821.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.WebSocketException
struct  WebSocketException_t2311987812  : public Exception_t3991598821
{
public:
	// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::_code
	uint16_t ____code_11;

public:
	inline static int32_t get_offset_of__code_11() { return static_cast<int32_t>(offsetof(WebSocketException_t2311987812, ____code_11)); }
	inline uint16_t get__code_11() const { return ____code_11; }
	inline uint16_t* get_address_of__code_11() { return &____code_11; }
	inline void set__code_11(uint16_t value)
	{
		____code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
