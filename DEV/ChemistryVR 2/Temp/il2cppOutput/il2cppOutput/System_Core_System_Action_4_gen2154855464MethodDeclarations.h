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

// System.Action`4<System.Object,System.Boolean,System.Boolean,System.Boolean>
struct Action_4_t2154855464;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`4<System.Object,System.Boolean,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_4__ctor_m4115418107_gshared (Action_4_t2154855464 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_4__ctor_m4115418107(__this, ___object0, ___method1, method) ((  void (*) (Action_4_t2154855464 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_4__ctor_m4115418107_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`4<System.Object,System.Boolean,System.Boolean,System.Boolean>::Invoke(T1,T2,T3,T4)
extern "C"  void Action_4_Invoke_m1891854351_gshared (Action_4_t2154855464 * __this, Il2CppObject * ___arg10, bool ___arg21, bool ___arg32, bool ___arg43, const MethodInfo* method);
#define Action_4_Invoke_m1891854351(__this, ___arg10, ___arg21, ___arg32, ___arg43, method) ((  void (*) (Action_4_t2154855464 *, Il2CppObject *, bool, bool, bool, const MethodInfo*))Action_4_Invoke_m1891854351_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method)
// System.IAsyncResult System.Action`4<System.Object,System.Boolean,System.Boolean,System.Boolean>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_4_BeginInvoke_m2819971608_gshared (Action_4_t2154855464 * __this, Il2CppObject * ___arg10, bool ___arg21, bool ___arg32, bool ___arg43, AsyncCallback_t1369114871 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method);
#define Action_4_BeginInvoke_m2819971608(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method) ((  Il2CppObject * (*) (Action_4_t2154855464 *, Il2CppObject *, bool, bool, bool, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_4_BeginInvoke_m2819971608_gshared)(__this, ___arg10, ___arg21, ___arg32, ___arg43, ___callback4, ___object5, method)
// System.Void System.Action`4<System.Object,System.Boolean,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_4_EndInvoke_m1820521355_gshared (Action_4_t2154855464 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_4_EndInvoke_m1820521355(__this, ___result0, method) ((  void (*) (Action_4_t2154855464 *, Il2CppObject *, const MethodInfo*))Action_4_EndInvoke_m1820521355_gshared)(__this, ___result0, method)
