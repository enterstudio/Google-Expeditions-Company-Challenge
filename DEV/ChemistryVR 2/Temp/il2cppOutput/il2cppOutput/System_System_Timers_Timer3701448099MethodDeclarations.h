#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Timers.Timer
struct Timer_t3701448099;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t630471434;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Timers_ElapsedEventHandler630471434.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Timers.Timer::.ctor(System.Double)
extern "C"  void Timer__ctor_m278711068 (Timer_t3701448099 * __this, double ___interval0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
extern "C"  void Timer_add_Elapsed_m874001893 (Timer_t3701448099 * __this, ElapsedEventHandler_t630471434 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::remove_Elapsed(System.Timers.ElapsedEventHandler)
extern "C"  void Timer_remove_Elapsed_m1975629832 (Timer_t3701448099 * __this, ElapsedEventHandler_t630471434 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Timers.Timer::get_Enabled()
extern "C"  bool Timer_get_Enabled_m1255331122 (Timer_t3701448099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_Enabled(System.Boolean)
extern "C"  void Timer_set_Enabled_m1772433311 (Timer_t3701448099 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_Interval(System.Double)
extern "C"  void Timer_set_Interval_m2514557474 (Timer_t3701448099 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Close()
extern "C"  void Timer_Close_m1755912956 (Timer_t3701448099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Dispose(System.Boolean)
extern "C"  void Timer_Dispose_m4246002906 (Timer_t3701448099 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Callback(System.Object)
extern "C"  void Timer_Callback_m1607582545 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
