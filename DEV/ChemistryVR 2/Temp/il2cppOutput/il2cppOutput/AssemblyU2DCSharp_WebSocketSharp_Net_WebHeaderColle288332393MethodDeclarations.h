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

// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t288332393;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1246329035;
// System.Action`2<System.String,System.String>
struct Action_2_t3074826119;
// WebSocketSharp.Net.HttpHeaderInfo
struct HttpHeaderInfo_t3355144229;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpHeaderTyp3355482801.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpRequestHe2085812542.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpResponseH2709761912.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void WebSocketSharp.Net.WebHeaderCollection::.ctor(WebSocketSharp.Net.HttpHeaderType,System.Boolean)
extern "C"  void WebHeaderCollection__ctor_m4126859342 (WebHeaderCollection_t288332393 * __this, int32_t ___state0, bool ___internallyUsed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection__ctor_m3483552601 (WebHeaderCollection_t288332393 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::.ctor()
extern "C"  void WebHeaderCollection__ctor_m2551406104 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::.cctor()
extern "C"  void WebHeaderCollection__cctor_m1302081685 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m58068851 (WebHeaderCollection_t288332393 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::get_State()
extern "C"  int32_t WebHeaderCollection_get_State_m1516589974 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.WebHeaderCollection::get_AllKeys()
extern "C"  StringU5BU5D_t4054002952* WebHeaderCollection_get_AllKeys_m3960132129 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.WebHeaderCollection::get_Count()
extern "C"  int32_t WebHeaderCollection_get_Count_m2460903758 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::get_Item(WebSocketSharp.Net.HttpRequestHeader)
extern "C"  String_t* WebHeaderCollection_get_Item_m1656768179 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::set_Item(WebSocketSharp.Net.HttpRequestHeader,System.String)
extern "C"  void WebHeaderCollection_set_Item_m3659773312 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::get_Item(WebSocketSharp.Net.HttpResponseHeader)
extern "C"  String_t* WebHeaderCollection_get_Item_m4029126517 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::set_Item(WebSocketSharp.Net.HttpResponseHeader,System.String)
extern "C"  void WebHeaderCollection_set_Item_m3088190784 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection WebSocketSharp.Net.WebHeaderCollection::get_Keys()
extern "C"  KeysCollection_t1246329035 * WebHeaderCollection_get_Keys_m3315862203 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::add(System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_add_m3584274486 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, String_t* ___value1, bool ___ignoreRestricted2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::addWithoutCheckingName(System.String,System.String)
extern "C"  void WebHeaderCollection_addWithoutCheckingName_m3377271398 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::addWithoutCheckingNameAndRestricted(System.String,System.String)
extern "C"  void WebHeaderCollection_addWithoutCheckingNameAndRestricted_m2971502658 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.WebHeaderCollection::checkColonSeparated(System.String)
extern "C"  int32_t WebHeaderCollection_checkColonSeparated_m4200431440 (Il2CppObject * __this /* static, unused */, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::checkHeaderType(System.String)
extern "C"  int32_t WebHeaderCollection_checkHeaderType_m2440539589 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::checkName(System.String)
extern "C"  String_t* WebHeaderCollection_checkName_m3008661500 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::checkRestricted(System.String)
extern "C"  void WebHeaderCollection_checkRestricted_m2370803657 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::checkState(System.Boolean)
extern "C"  void WebHeaderCollection_checkState_m4058746540 (WebHeaderCollection_t288332393 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::checkValue(System.String)
extern "C"  String_t* WebHeaderCollection_checkValue_m2907849866 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::convert(System.String)
extern "C"  String_t* WebHeaderCollection_convert_m3184721276 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::doWithCheckingState(System.Action`2<System.String,System.String>,System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_doWithCheckingState_m3388260936 (WebHeaderCollection_t288332393 * __this, Action_2_t3074826119 * ___action0, String_t* ___name1, String_t* ___value2, bool ___setState3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::doWithCheckingState(System.Action`2<System.String,System.String>,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void WebHeaderCollection_doWithCheckingState_m2515908661 (WebHeaderCollection_t288332393 * __this, Action_2_t3074826119 * ___action0, String_t* ___name1, String_t* ___value2, bool ___response3, bool ___setState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::doWithoutCheckingName(System.Action`2<System.String,System.String>,System.String,System.String)
extern "C"  void WebHeaderCollection_doWithoutCheckingName_m2681071569 (WebHeaderCollection_t288332393 * __this, Action_2_t3074826119 * ___action0, String_t* ___name1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderInfo WebSocketSharp.Net.WebHeaderCollection::getHeaderInfo(System.String)
extern "C"  HttpHeaderInfo_t3355144229 * WebHeaderCollection_getHeaderInfo_m900384527 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::isRestricted(System.String,System.Boolean)
extern "C"  bool WebHeaderCollection_isRestricted_m3179449184 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::removeWithoutCheckingName(System.String,System.String)
extern "C"  void WebHeaderCollection_removeWithoutCheckingName_m1525890687 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, String_t* ___unuse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::setWithoutCheckingName(System.String,System.String)
extern "C"  void WebHeaderCollection_setWithoutCheckingName_m1935175719 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Convert(WebSocketSharp.Net.HttpRequestHeader)
extern "C"  String_t* WebHeaderCollection_Convert_m1846569710 (Il2CppObject * __this /* static, unused */, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Convert(WebSocketSharp.Net.HttpResponseHeader)
extern "C"  String_t* WebHeaderCollection_Convert_m1323039386 (Il2CppObject * __this /* static, unused */, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::InternalRemove(System.String)
extern "C"  void WebHeaderCollection_InternalRemove_m453573717 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::InternalSet(System.String,System.Boolean)
extern "C"  void WebHeaderCollection_InternalSet_m2198377558 (WebHeaderCollection_t288332393 * __this, String_t* ___header0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::InternalSet(System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_InternalSet_m3252124890 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, String_t* ___value1, bool ___response2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderName_m1336993376 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderValue_m2625745574 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsMultiValue(System.String,System.Boolean)
extern "C"  bool WebHeaderCollection_IsMultiValue_m2058585629 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::ToStringMultiValue(System.Boolean)
extern "C"  String_t* WebHeaderCollection_ToStringMultiValue_m3611145994 (WebHeaderCollection_t288332393 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C"  void WebHeaderCollection_AddWithoutValidate_m166966613 (WebHeaderCollection_t288332393 * __this, String_t* ___headerName0, String_t* ___headerValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(System.String)
extern "C"  void WebHeaderCollection_Add_m1915310987 (WebHeaderCollection_t288332393 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(WebSocketSharp.Net.HttpRequestHeader,System.String)
extern "C"  void WebHeaderCollection_Add_m4212984347 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(WebSocketSharp.Net.HttpResponseHeader,System.String)
extern "C"  void WebHeaderCollection_Add_m3057863685 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C"  void WebHeaderCollection_Add_m4101500039 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Clear()
extern "C"  void WebHeaderCollection_Clear_m4252506691 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Get(System.Int32)
extern "C"  String_t* WebHeaderCollection_Get_m2221813978 (WebHeaderCollection_t288332393 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Get(System.String)
extern "C"  String_t* WebHeaderCollection_Get_m613455001 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.Net.WebHeaderCollection::GetEnumerator()
extern "C"  Il2CppObject * WebHeaderCollection_GetEnumerator_m3405010984 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C"  String_t* WebHeaderCollection_GetKey_m1888993225 (WebHeaderCollection_t288332393 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.WebHeaderCollection::GetValues(System.Int32)
extern "C"  StringU5BU5D_t4054002952* WebHeaderCollection_GetValues_m1207409342 (WebHeaderCollection_t288332393 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.WebHeaderCollection::GetValues(System.String)
extern "C"  StringU5BU5D_t4054002952* WebHeaderCollection_GetValues_m3526649653 (WebHeaderCollection_t288332393 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_GetObjectData_m1572055478 (WebHeaderCollection_t288332393 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C"  bool WebHeaderCollection_IsRestricted_m2808956509 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsRestricted(System.String,System.Boolean)
extern "C"  bool WebHeaderCollection_IsRestricted_m3504072576 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C"  void WebHeaderCollection_OnDeserialization_m674631278 (WebHeaderCollection_t288332393 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Remove(WebSocketSharp.Net.HttpRequestHeader)
extern "C"  void WebHeaderCollection_Remove_m1355939768 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Remove(WebSocketSharp.Net.HttpResponseHeader)
extern "C"  void WebHeaderCollection_Remove_m3293380368 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Remove(System.String)
extern "C"  void WebHeaderCollection_Remove_m419115026 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Set(WebSocketSharp.Net.HttpRequestHeader,System.String)
extern "C"  void WebHeaderCollection_Set_m3503398748 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Set(WebSocketSharp.Net.HttpResponseHeader,System.String)
extern "C"  void WebHeaderCollection_Set_m2535546596 (WebHeaderCollection_t288332393 * __this, int32_t ___header0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Set(System.String,System.String)
extern "C"  void WebHeaderCollection_Set_m2811227238 (WebHeaderCollection_t288332393 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.WebHeaderCollection::ToByteArray()
extern "C"  ByteU5BU5D_t4260760469* WebHeaderCollection_ToByteArray_m1886877506 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::ToString()
extern "C"  String_t* WebHeaderCollection_ToString_m374624635 (WebHeaderCollection_t288332393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
