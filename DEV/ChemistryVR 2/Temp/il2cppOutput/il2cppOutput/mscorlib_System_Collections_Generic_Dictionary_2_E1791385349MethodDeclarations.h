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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t474061957;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1791385349.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_372842663.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m2854996535_gshared (Enumerator_t1791385349 * __this, Dictionary_2_t474061957 * ___dictionary0, const MethodInfo* method);
#define Enumerator__ctor_m2854996535(__this, ___dictionary0, method) ((  void (*) (Enumerator_t1791385349 *, Dictionary_2_t474061957 *, const MethodInfo*))Enumerator__ctor_m2854996535_gshared)(__this, ___dictionary0, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m4073414986_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m4073414986(__this, method) ((  Il2CppObject * (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m4073414986_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m3459641886_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m3459641886(__this, method) ((  void (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m3459641886_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t1751606614  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m489020455_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m489020455(__this, method) ((  DictionaryEntry_t1751606614  (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m489020455_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3273326246_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3273326246(__this, method) ((  Il2CppObject * (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3273326246_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2798898104_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2798898104(__this, method) ((  Il2CppObject * (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2798898104_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2589126666_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m2589126666(__this, method) ((  bool (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_MoveNext_m2589126666_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::get_Current()
extern "C"  KeyValuePair_2_t372842663  Enumerator_get_Current_m1715940838_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1715940838(__this, method) ((  KeyValuePair_2_t372842663  (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_get_Current_m1715940838_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::get_CurrentKey()
extern "C"  int32_t Enumerator_get_CurrentKey_m718027863_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m718027863(__this, method) ((  int32_t (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_get_CurrentKey_m718027863_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::get_CurrentValue()
extern "C"  bool Enumerator_get_CurrentValue_m2739709755_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m2739709755(__this, method) ((  bool (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_get_CurrentValue_m2739709755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::Reset()
extern "C"  void Enumerator_Reset_m1533084169_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1533084169(__this, method) ((  void (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_Reset_m1533084169_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::VerifyState()
extern "C"  void Enumerator_VerifyState_m1765992274_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1765992274(__this, method) ((  void (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_VerifyState_m1765992274_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m3351365178_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m3351365178(__this, method) ((  void (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_VerifyCurrent_m3351365178_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::Dispose()
extern "C"  void Enumerator_Dispose_m2643532953_gshared (Enumerator_t1791385349 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m2643532953(__this, method) ((  void (*) (Enumerator_t1791385349 *, const MethodInfo*))Enumerator_Dispose_m2643532953_gshared)(__this, method)
