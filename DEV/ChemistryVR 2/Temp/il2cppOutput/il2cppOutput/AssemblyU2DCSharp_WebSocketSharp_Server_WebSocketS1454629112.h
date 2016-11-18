﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Server.IWebSocketSession>
struct Dictionary_2_t1224132468;
// System.Timers.Timer
struct Timer_t3701448099;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Boolean476798718.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Server_ServerStat3811759112.h"
#include "mscorlib_System_TimeSpan413522987.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketSessionManager
struct  WebSocketSessionManager_t1454629112  : public Il2CppObject
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Server.WebSocketSessionManager::_clean
	bool ____clean_0;
	// System.Object WebSocketSharp.Server.WebSocketSessionManager::_forSweep
	Il2CppObject * ____forSweep_1;
	// WebSocketSharp.Logger WebSocketSharp.Server.WebSocketSessionManager::_logger
	Logger_t3695440972 * ____logger_2;
	// System.Collections.Generic.Dictionary`2<System.String,WebSocketSharp.Server.IWebSocketSession> WebSocketSharp.Server.WebSocketSessionManager::_sessions
	Dictionary_2_t1224132468 * ____sessions_3;
	// WebSocketSharp.Server.ServerState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Server.WebSocketSessionManager::_state
	int32_t ____state_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Server.WebSocketSessionManager::_sweeping
	bool ____sweeping_5;
	// System.Timers.Timer WebSocketSharp.Server.WebSocketSessionManager::_sweepTimer
	Timer_t3701448099 * ____sweepTimer_6;
	// System.Object WebSocketSharp.Server.WebSocketSessionManager::_sync
	Il2CppObject * ____sync_7;
	// System.TimeSpan WebSocketSharp.Server.WebSocketSessionManager::_waitTime
	TimeSpan_t413522987  ____waitTime_8;

public:
	inline static int32_t get_offset_of__clean_0() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____clean_0)); }
	inline bool get__clean_0() const { return ____clean_0; }
	inline bool* get_address_of__clean_0() { return &____clean_0; }
	inline void set__clean_0(bool value)
	{
		____clean_0 = value;
	}

	inline static int32_t get_offset_of__forSweep_1() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____forSweep_1)); }
	inline Il2CppObject * get__forSweep_1() const { return ____forSweep_1; }
	inline Il2CppObject ** get_address_of__forSweep_1() { return &____forSweep_1; }
	inline void set__forSweep_1(Il2CppObject * value)
	{
		____forSweep_1 = value;
		Il2CppCodeGenWriteBarrier(&____forSweep_1, value);
	}

	inline static int32_t get_offset_of__logger_2() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____logger_2)); }
	inline Logger_t3695440972 * get__logger_2() const { return ____logger_2; }
	inline Logger_t3695440972 ** get_address_of__logger_2() { return &____logger_2; }
	inline void set__logger_2(Logger_t3695440972 * value)
	{
		____logger_2 = value;
		Il2CppCodeGenWriteBarrier(&____logger_2, value);
	}

	inline static int32_t get_offset_of__sessions_3() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____sessions_3)); }
	inline Dictionary_2_t1224132468 * get__sessions_3() const { return ____sessions_3; }
	inline Dictionary_2_t1224132468 ** get_address_of__sessions_3() { return &____sessions_3; }
	inline void set__sessions_3(Dictionary_2_t1224132468 * value)
	{
		____sessions_3 = value;
		Il2CppCodeGenWriteBarrier(&____sessions_3, value);
	}

	inline static int32_t get_offset_of__state_4() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____state_4)); }
	inline int32_t get__state_4() const { return ____state_4; }
	inline int32_t* get_address_of__state_4() { return &____state_4; }
	inline void set__state_4(int32_t value)
	{
		____state_4 = value;
	}

	inline static int32_t get_offset_of__sweeping_5() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____sweeping_5)); }
	inline bool get__sweeping_5() const { return ____sweeping_5; }
	inline bool* get_address_of__sweeping_5() { return &____sweeping_5; }
	inline void set__sweeping_5(bool value)
	{
		____sweeping_5 = value;
	}

	inline static int32_t get_offset_of__sweepTimer_6() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____sweepTimer_6)); }
	inline Timer_t3701448099 * get__sweepTimer_6() const { return ____sweepTimer_6; }
	inline Timer_t3701448099 ** get_address_of__sweepTimer_6() { return &____sweepTimer_6; }
	inline void set__sweepTimer_6(Timer_t3701448099 * value)
	{
		____sweepTimer_6 = value;
		Il2CppCodeGenWriteBarrier(&____sweepTimer_6, value);
	}

	inline static int32_t get_offset_of__sync_7() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____sync_7)); }
	inline Il2CppObject * get__sync_7() const { return ____sync_7; }
	inline Il2CppObject ** get_address_of__sync_7() { return &____sync_7; }
	inline void set__sync_7(Il2CppObject * value)
	{
		____sync_7 = value;
		Il2CppCodeGenWriteBarrier(&____sync_7, value);
	}

	inline static int32_t get_offset_of__waitTime_8() { return static_cast<int32_t>(offsetof(WebSocketSessionManager_t1454629112, ____waitTime_8)); }
	inline TimeSpan_t413522987  get__waitTime_8() const { return ____waitTime_8; }
	inline TimeSpan_t413522987 * get_address_of__waitTime_8() { return &____waitTime_8; }
	inline void set__waitTime_8(TimeSpan_t413522987  value)
	{
		____waitTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
