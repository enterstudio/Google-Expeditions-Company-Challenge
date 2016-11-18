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

// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// System.Collections.Generic.IList`1<WebSocketSharp.Net.Cookie>
struct IList_1_t476765353;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie>
struct IEnumerable_1_t1083031107;
// WebSocketSharp.Net.Cookie
struct Cookie_t2077085446;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Array
struct Il2CppArray;
// WebSocketSharp.Net.Cookie[]
struct CookieU5BU5D_t4193117731;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Cookie2077085446.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_CookieCollect1136277956.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void WebSocketSharp.Net.CookieCollection::.ctor()
extern "C"  void CookieCollection__ctor_m2379289581 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::get_List()
extern "C"  Il2CppObject* CookieCollection_get_List_m2927543100 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<WebSocketSharp.Net.Cookie> WebSocketSharp.Net.CookieCollection::get_Sorted()
extern "C"  Il2CppObject* CookieCollection_get_Sorted_m1420324273 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::get_Count()
extern "C"  int32_t CookieCollection_get_Count_m483044223 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.CookieCollection::get_IsReadOnly()
extern "C"  bool CookieCollection_get_IsReadOnly_m1867479800 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.CookieCollection::get_IsSynchronized()
extern "C"  bool CookieCollection_get_IsSynchronized_m3648050858 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.Cookie WebSocketSharp.Net.CookieCollection::get_Item(System.Int32)
extern "C"  Cookie_t2077085446 * CookieCollection_get_Item_m1135295281 (CookieCollection_t1136277956 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.Cookie WebSocketSharp.Net.CookieCollection::get_Item(System.String)
extern "C"  Cookie_t2077085446 * CookieCollection_get_Item_m1291113762 (CookieCollection_t1136277956 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object WebSocketSharp.Net.CookieCollection::get_SyncRoot()
extern "C"  Il2CppObject * CookieCollection_get_SyncRoot_m1445844552 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::compareCookieWithinSort(WebSocketSharp.Net.Cookie,WebSocketSharp.Net.Cookie)
extern "C"  int32_t CookieCollection_compareCookieWithinSort_m3117945939 (Il2CppObject * __this /* static, unused */, Cookie_t2077085446 * ___x0, Cookie_t2077085446 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::compareCookieWithinSorted(WebSocketSharp.Net.Cookie,WebSocketSharp.Net.Cookie)
extern "C"  int32_t CookieCollection_compareCookieWithinSorted_m2935459732 (Il2CppObject * __this /* static, unused */, Cookie_t2077085446 * ___x0, Cookie_t2077085446 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::parseRequest(System.String)
extern "C"  CookieCollection_t1136277956 * CookieCollection_parseRequest_m1893890052 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::parseResponse(System.String)
extern "C"  CookieCollection_t1136277956 * CookieCollection_parseResponse_m2459232430 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.CookieCollection::searchCookie(WebSocketSharp.Net.Cookie)
extern "C"  int32_t CookieCollection_searchCookie_m4087671645 (CookieCollection_t1136277956 * __this, Cookie_t2077085446 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.CookieCollection::splitCookieHeaderValue(System.String)
extern "C"  StringU5BU5D_t4054002952* CookieCollection_splitCookieHeaderValue_m76027558 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Net.CookieCollection::Parse(System.String,System.Boolean)
extern "C"  CookieCollection_t1136277956 * CookieCollection_Parse_m2466953806 (Il2CppObject * __this /* static, unused */, String_t* ___value0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::SetOrRemove(WebSocketSharp.Net.Cookie)
extern "C"  void CookieCollection_SetOrRemove_m2794184222 (CookieCollection_t1136277956 * __this, Cookie_t2077085446 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::SetOrRemove(WebSocketSharp.Net.CookieCollection)
extern "C"  void CookieCollection_SetOrRemove_m4091837664 (CookieCollection_t1136277956 * __this, CookieCollection_t1136277956 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::Sort()
extern "C"  void CookieCollection_Sort_m1701244373 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::Add(WebSocketSharp.Net.Cookie)
extern "C"  void CookieCollection_Add_m845344582 (CookieCollection_t1136277956 * __this, Cookie_t2077085446 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::Add(WebSocketSharp.Net.CookieCollection)
extern "C"  void CookieCollection_Add_m1385577480 (CookieCollection_t1136277956 * __this, CookieCollection_t1136277956 * ___cookies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C"  void CookieCollection_CopyTo_m3760701066 (CookieCollection_t1136277956 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.CookieCollection::CopyTo(WebSocketSharp.Net.Cookie[],System.Int32)
extern "C"  void CookieCollection_CopyTo_m3475423886 (CookieCollection_t1136277956 * __this, CookieU5BU5D_t4193117731* ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.Net.CookieCollection::GetEnumerator()
extern "C"  Il2CppObject * CookieCollection_GetEnumerator_m3330523789 (CookieCollection_t1136277956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
