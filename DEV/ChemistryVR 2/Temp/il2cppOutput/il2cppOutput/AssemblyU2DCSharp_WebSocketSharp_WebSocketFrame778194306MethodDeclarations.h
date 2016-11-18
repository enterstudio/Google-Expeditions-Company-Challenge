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

// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t778194306;
// WebSocketSharp.PayloadData
struct PayloadData_t39926750;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t1561764144;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t1174010442;
// System.Action`1<System.Exception>
struct Action_1_t92447661;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t479507413;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"
#include "AssemblyU2DCSharp_WebSocketSharp_PayloadData39926750.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Fin3262160529.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Mask3422653544.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Rsv3262172379.h"
#include "AssemblyU2DCSharp_WebSocketSharp_WebSocketFrame778194306.h"
#include "mscorlib_System_IO_Stream1561764144.h"

// System.Void WebSocketSharp.WebSocketFrame::.ctor()
extern "C"  void WebSocketFrame__ctor_m2272980410 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean)
extern "C"  void WebSocketFrame__ctor_m2732174307 (WebSocketFrame_t778194306 * __this, uint8_t ___opcode0, PayloadData_t39926750 * ___payloadData1, bool ___mask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,System.Byte[],System.Boolean,System.Boolean)
extern "C"  void WebSocketFrame__ctor_m2691900528 (WebSocketFrame_t778194306 * __this, uint8_t ___fin0, uint8_t ___opcode1, ByteU5BU5D_t4260760469* ___data2, bool ___compressed3, bool ___mask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::.ctor(WebSocketSharp.Fin,WebSocketSharp.Opcode,WebSocketSharp.PayloadData,System.Boolean,System.Boolean)
extern "C"  void WebSocketFrame__ctor_m3643298860 (WebSocketFrame_t778194306 * __this, uint8_t ___fin0, uint8_t ___opcode1, PayloadData_t39926750 * ___payloadData2, bool ___compressed3, bool ___mask4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::.cctor()
extern "C"  void WebSocketFrame__cctor_m1260819763 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.WebSocketFrame::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * WebSocketFrame_System_Collections_IEnumerable_GetEnumerator_m3591556711 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.WebSocketFrame::get_ExtendedPayloadLengthCount()
extern "C"  int32_t WebSocketFrame_get_ExtendedPayloadLengthCount_m3621623545 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.WebSocketFrame::get_FullPayloadLength()
extern "C"  uint64_t WebSocketFrame_get_FullPayloadLength_m2406435728 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WebSocketFrame::get_ExtendedPayloadLength()
extern "C"  ByteU5BU5D_t4260760469* WebSocketFrame_get_ExtendedPayloadLength_m2660771956 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Fin WebSocketSharp.WebSocketFrame::get_Fin()
extern "C"  uint8_t WebSocketFrame_get_Fin_m1975553495 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsBinary()
extern "C"  bool WebSocketFrame_get_IsBinary_m2066147498 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsClose()
extern "C"  bool WebSocketFrame_get_IsClose_m2149864465 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsCompressed()
extern "C"  bool WebSocketFrame_get_IsCompressed_m3923144746 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsContinuation()
extern "C"  bool WebSocketFrame_get_IsContinuation_m4205121376 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsControl()
extern "C"  bool WebSocketFrame_get_IsControl_m229257270 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsData()
extern "C"  bool WebSocketFrame_get_IsData_m2997444627 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFinal()
extern "C"  bool WebSocketFrame_get_IsFinal_m430067727 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsFragment()
extern "C"  bool WebSocketFrame_get_IsFragment_m1108479289 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsMasked()
extern "C"  bool WebSocketFrame_get_IsMasked_m1404103348 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPing()
extern "C"  bool WebSocketFrame_get_IsPing_m3348209627 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsPong()
extern "C"  bool WebSocketFrame_get_IsPong_m3353750753 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.WebSocketFrame::get_IsText()
extern "C"  bool WebSocketFrame_get_IsText_m3459342550 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.WebSocketFrame::get_Length()
extern "C"  uint64_t WebSocketFrame_get_Length_m132165789 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Mask WebSocketSharp.WebSocketFrame::get_Mask()
extern "C"  uint8_t WebSocketFrame_get_Mask_m1377172099 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WebSocketFrame::get_MaskingKey()
extern "C"  ByteU5BU5D_t4260760469* WebSocketFrame_get_MaskingKey_m1393028594 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::get_Opcode()
extern "C"  uint8_t WebSocketFrame_get_Opcode_m53528135 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::get_PayloadData()
extern "C"  PayloadData_t39926750 * WebSocketFrame_get_PayloadData_m4173896503 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte WebSocketSharp.WebSocketFrame::get_PayloadLength()
extern "C"  uint8_t WebSocketFrame_get_PayloadLength_m2711758479 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv1()
extern "C"  uint8_t WebSocketFrame_get_Rsv1_m1579988508 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv2()
extern "C"  uint8_t WebSocketFrame_get_Rsv2_m1579989469 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::get_Rsv3()
extern "C"  uint8_t WebSocketFrame_get_Rsv3_m1579990430 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WebSocketFrame::createMaskingKey()
extern "C"  ByteU5BU5D_t4260760469* WebSocketFrame_createMaskingKey_m991693541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocketFrame::dump(WebSocketSharp.WebSocketFrame)
extern "C"  String_t* WebSocketFrame_dump_m3839803398 (Il2CppObject * __this /* static, unused */, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocketFrame::print(WebSocketSharp.WebSocketFrame)
extern "C"  String_t* WebSocketFrame_print_m1807623609 (Il2CppObject * __this /* static, unused */, WebSocketFrame_t778194306 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::processHeader(System.Byte[])
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_processHeader_m3656006163 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::readExtendedPayloadLength(System.IO.Stream,WebSocketSharp.WebSocketFrame)
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_readExtendedPayloadLength_m2482846609 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, WebSocketFrame_t778194306 * ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::readExtendedPayloadLengthAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_readExtendedPayloadLengthAsync_m1654520164 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, WebSocketFrame_t778194306 * ___frame1, Action_1_t1174010442 * ___completed2, Action_1_t92447661 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::readHeader(System.IO.Stream)
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_readHeader_m4007617954 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::readHeaderAsync(System.IO.Stream,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_readHeaderAsync_m2806598927 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, Action_1_t1174010442 * ___completed1, Action_1_t92447661 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::readMaskingKey(System.IO.Stream,WebSocketSharp.WebSocketFrame)
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_readMaskingKey_m3205255769 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, WebSocketFrame_t778194306 * ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::readMaskingKeyAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_readMaskingKeyAsync_m2261960240 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, WebSocketFrame_t778194306 * ___frame1, Action_1_t1174010442 * ___completed2, Action_1_t92447661 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::readPayloadData(System.IO.Stream,WebSocketSharp.WebSocketFrame)
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_readPayloadData_m1058266702 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, WebSocketFrame_t778194306 * ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::readPayloadDataAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_readPayloadDataAsync_m3171898849 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, WebSocketFrame_t778194306 * ___frame1, Action_1_t1174010442 * ___completed2, Action_1_t92447661 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreateCloseFrame(WebSocketSharp.PayloadData,System.Boolean)
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_CreateCloseFrame_m3865901169 (Il2CppObject * __this /* static, unused */, PayloadData_t39926750 * ___payloadData0, bool ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Boolean)
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_CreatePingFrame_m443289520 (Il2CppObject * __this /* static, unused */, bool ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::CreatePingFrame(System.Byte[],System.Boolean)
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_CreatePingFrame_m1584016141 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, bool ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::ReadFrame(System.IO.Stream,System.Boolean)
extern "C"  WebSocketFrame_t778194306 * WebSocketFrame_ReadFrame_m3699642165 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, bool ___unmask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::ReadFrameAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
extern "C"  void WebSocketFrame_ReadFrameAsync_m160145120 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, bool ___unmask1, Action_1_t1174010442 * ___completed2, Action_1_t92447661 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
extern "C"  void WebSocketFrame_Unmask_m1952409039 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> WebSocketSharp.WebSocketFrame::GetEnumerator()
extern "C"  Il2CppObject* WebSocketFrame_GetEnumerator_m2490913985 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketFrame::Print(System.Boolean)
extern "C"  void WebSocketFrame_Print_m2623923964 (WebSocketFrame_t778194306 * __this, bool ___dumped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocketFrame::PrintToString(System.Boolean)
extern "C"  String_t* WebSocketFrame_PrintToString_m2057514283 (WebSocketFrame_t778194306 * __this, bool ___dumped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.WebSocketFrame::ToArray()
extern "C"  ByteU5BU5D_t4260760469* WebSocketFrame_ToArray_m813447968 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.WebSocketFrame::ToString()
extern "C"  String_t* WebSocketFrame_ToString_m2245624947 (WebSocketFrame_t778194306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
