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

// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2907705007;
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

// System.Void System.Func`2<System.Int32,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m972235686_gshared (Func_2_t2907705007 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m972235686(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t2907705007 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m972235686_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Int32,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m3440883198_gshared (Func_2_t2907705007 * __this, int32_t ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m3440883198(__this, ___arg10, method) ((  bool (*) (Func_2_t2907705007 *, int32_t, const MethodInfo*))Func_2_Invoke_m3440883198_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m2685970075_gshared (Func_2_t2907705007 * __this, int32_t ___arg10, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m2685970075(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t2907705007 *, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m2685970075_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Int32,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m2653525224_gshared (Func_2_t2907705007 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m2653525224(__this, ___result0, method) ((  bool (*) (Func_2_t2907705007 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m2653525224_gshared)(__this, ___result0, method)
