﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Server.WebSocketServiceHost>
struct Dictionary_2_t286814546;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Boolean476798718.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Server_ServerStat3811759112.h"
#include "mscorlib_System_TimeSpan413522987.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketServiceManager
struct  WebSocketServiceManager_t1938852857  : public Il2CppObject
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Server.WebSocketServiceManager::_clean
	bool ____clean_0;
	// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Server.WebSocketServiceHost> WebSocketSharp.Server.WebSocketServiceManager::_hosts
	Dictionary_2_t286814546 * ____hosts_1;
	// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketServiceManager::_logger
	Logger_t3695440972 * ____logger_2;
	// WebSocketSharp.Server.ServerState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Server.WebSocketServiceManager::_state
	int32_t ____state_3;
	// System.Object WebSocketSharp.Server.WebSocketServiceManager::_sync
	Il2CppObject * ____sync_4;
	// System.TimeSpan WebSocketSharp.Server.WebSocketServiceManager::_waitTime
	TimeSpan_t413522987  ____waitTime_5;

public:
	inline static int32_t get_offset_of__clean_0() { return static_cast<int32_t>(offsetof(WebSocketServiceManager_t1938852857, ____clean_0)); }
	inline bool get__clean_0() const { return ____clean_0; }
	inline bool* get_address_of__clean_0() { return &____clean_0; }
	inline void set__clean_0(bool value)
	{
		____clean_0 = value;
	}

	inline static int32_t get_offset_of__hosts_1() { return static_cast<int32_t>(offsetof(WebSocketServiceManager_t1938852857, ____hosts_1)); }
	inline Dictionary_2_t286814546 * get__hosts_1() const { return ____hosts_1; }
	inline Dictionary_2_t286814546 ** get_address_of__hosts_1() { return &____hosts_1; }
	inline void set__hosts_1(Dictionary_2_t286814546 * value)
	{
		____hosts_1 = value;
		Il2CppCodeGenWriteBarrier(&____hosts_1, value);
	}

	inline static int32_t get_offset_of__logger_2() { return static_cast<int32_t>(offsetof(WebSocketServiceManager_t1938852857, ____logger_2)); }
	inline Logger_t3695440972 * get__logger_2() const { return ____logger_2; }
	inline Logger_t3695440972 ** get_address_of__logger_2() { return &____logger_2; }
	inline void set__logger_2(Logger_t3695440972 * value)
	{
		____logger_2 = value;
		Il2CppCodeGenWriteBarrier(&____logger_2, value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(WebSocketServiceManager_t1938852857, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__sync_4() { return static_cast<int32_t>(offsetof(WebSocketServiceManager_t1938852857, ____sync_4)); }
	inline Il2CppObject * get__sync_4() const { return ____sync_4; }
	inline Il2CppObject ** get_address_of__sync_4() { return &____sync_4; }
	inline void set__sync_4(Il2CppObject * value)
	{
		____sync_4 = value;
		Il2CppCodeGenWriteBarrier(&____sync_4, value);
	}

	inline static int32_t get_offset_of__waitTime_5() { return static_cast<int32_t>(offsetof(WebSocketServiceManager_t1938852857, ____waitTime_5)); }
	inline TimeSpan_t413522987  get__waitTime_5() const { return ____waitTime_5; }
	inline TimeSpan_t413522987 * get_address_of__waitTime_5() { return &____waitTime_5; }
	inline void set__waitTime_5(TimeSpan_t413522987  value)
	{
		____waitTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
