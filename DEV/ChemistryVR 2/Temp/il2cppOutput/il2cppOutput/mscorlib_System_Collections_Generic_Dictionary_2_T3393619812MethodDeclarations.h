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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>
struct Transform_1_t3393619812;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1038332288_gshared (Transform_1_t3393619812 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1038332288(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3393619812 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1038332288_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m258664312_gshared (Transform_1_t3393619812 * __this, int32_t ___key0, bool ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m258664312(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t3393619812 *, int32_t, bool, const MethodInfo*))Transform_1_Invoke_m258664312_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3627998371_gshared (Transform_1_t3393619812 * __this, int32_t ___key0, bool ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3627998371(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3393619812 *, int32_t, bool, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3627998371_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m4236172818_gshared (Transform_1_t3393619812 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4236172818(__this, ___result0, method) ((  int32_t (*) (Transform_1_t3393619812 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4236172818_gshared)(__this, ___result0, method)
