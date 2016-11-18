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

// WebSocketSharp.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t1379363822;
// WebSocketSharp.Net.HttpListener
struct HttpListener_t398944510;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1919096606;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListener398944510.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::.ctor(WebSocketSharp.Net.HttpListener)
extern "C"  void HttpListenerPrefixCollection__ctor_m3910433431 (HttpListenerPrefixCollection_t1379363822 * __this, HttpListener_t398944510 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.Net.HttpListenerPrefixCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_m1719580926 (HttpListenerPrefixCollection_t1379363822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerPrefixCollection::get_Count()
extern "C"  int32_t HttpListenerPrefixCollection_get_Count_m2312899733 (HttpListenerPrefixCollection_t1379363822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefixCollection::get_IsReadOnly()
extern "C"  bool HttpListenerPrefixCollection_get_IsReadOnly_m168657058 (HttpListenerPrefixCollection_t1379363822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefixCollection::get_IsSynchronized()
extern "C"  bool HttpListenerPrefixCollection_get_IsSynchronized_m889190228 (HttpListenerPrefixCollection_t1379363822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::Add(System.String)
extern "C"  void HttpListenerPrefixCollection_Add_m3290573760 (HttpListenerPrefixCollection_t1379363822 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::Clear()
extern "C"  void HttpListenerPrefixCollection_Clear_m2935247150 (HttpListenerPrefixCollection_t1379363822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefixCollection::Contains(System.String)
extern "C"  bool HttpListenerPrefixCollection_Contains_m1656241014 (HttpListenerPrefixCollection_t1379363822 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::CopyTo(System.Array,System.Int32)
extern "C"  void HttpListenerPrefixCollection_CopyTo_m281964576 (HttpListenerPrefixCollection_t1379363822 * __this, Il2CppArray * ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerPrefixCollection::CopyTo(System.String[],System.Int32)
extern "C"  void HttpListenerPrefixCollection_CopyTo_m575930472 (HttpListenerPrefixCollection_t1379363822 * __this, StringU5BU5D_t4054002952* ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Net.HttpListenerPrefixCollection::GetEnumerator()
extern "C"  Il2CppObject* HttpListenerPrefixCollection_GetEnumerator_m2031974099 (HttpListenerPrefixCollection_t1379363822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpListenerPrefixCollection::Remove(System.String)
extern "C"  bool HttpListenerPrefixCollection_Remove_m3701270385 (HttpListenerPrefixCollection_t1379363822 * __this, String_t* ___uriPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
