#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_EventArgs2540831021.h"
#include "mscorlib_System_DateTime4283661327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Timers.ElapsedEventArgs
struct  ElapsedEventArgs_t2035959611  : public EventArgs_t2540831021
{
public:
	// System.DateTime System.Timers.ElapsedEventArgs::time
	DateTime_t4283661327  ___time_1;

public:
	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(ElapsedEventArgs_t2035959611, ___time_1)); }
	inline DateTime_t4283661327  get_time_1() const { return ___time_1; }
	inline DateTime_t4283661327 * get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(DateTime_t4283661327  value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
