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

// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t630471434;
// System.Object
struct Il2CppObject;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t2035959611;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Timers_ElapsedEventArgs2035959611.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ElapsedEventHandler__ctor_m161074339 (ElapsedEventHandler_t630471434 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.ElapsedEventHandler::Invoke(System.Object,System.Timers.ElapsedEventArgs)
extern "C"  void ElapsedEventHandler_Invoke_m3422162035 (ElapsedEventHandler_t630471434 * __this, Il2CppObject * ___sender0, ElapsedEventArgs_t2035959611 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Timers.ElapsedEventHandler::BeginInvoke(System.Object,System.Timers.ElapsedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ElapsedEventHandler_BeginInvoke_m830051962 (ElapsedEventHandler_t630471434 * __this, Il2CppObject * ___sender0, ElapsedEventArgs_t2035959611 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.ElapsedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ElapsedEventHandler_EndInvoke_m3116042291 (ElapsedEventHandler_t630471434 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
