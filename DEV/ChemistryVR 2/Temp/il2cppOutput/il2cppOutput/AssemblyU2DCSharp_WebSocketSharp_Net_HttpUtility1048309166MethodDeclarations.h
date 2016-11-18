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

// WebSocketSharp.Net.HttpUtility
struct HttpUtility_t1048309166;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Collections.Generic.Dictionary`2<System.String,System.Char>
struct Dictionary_2_t3683040908;
// System.IO.Stream
struct Stream_t1561764144;
// System.Collections.IList
struct IList_t1751339649;
// System.Uri
struct Uri_t1116831938;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1899242073;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t4138449219;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.IO.TextWriter
struct TextWriter_t2304124208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_MemoryStream418716369.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"

// System.Void WebSocketSharp.Net.HttpUtility::.ctor()
extern "C"  void HttpUtility__ctor_m2561245299 (HttpUtility_t1048309166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::.cctor()
extern "C"  void HttpUtility__cctor_m1607096730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpUtility::getChar(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_getChar_m872764634 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpUtility::getChar(System.String,System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_getChar_m945876691 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] WebSocketSharp.Net.HttpUtility::getChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C"  CharU5BU5D_t3324145743* HttpUtility_getChars_m746757863 (Il2CppObject * __this /* static, unused */, MemoryStream_t418716369 * ___buffer0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Char> WebSocketSharp.Net.HttpUtility::getEntities()
extern "C"  Dictionary_2_t3683040908 * HttpUtility_getEntities_m87057237 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpUtility::getInt(System.Byte)
extern "C"  int32_t HttpUtility_getInt_m1878533011 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::initEntities()
extern "C"  void HttpUtility_initEntities_m2961121026 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.HttpUtility::notEncoded(System.Char)
extern "C"  bool HttpUtility_notEncoded_m3162593245 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::urlEncode(System.Char,System.IO.Stream,System.Boolean)
extern "C"  void HttpUtility_urlEncode_m546482951 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t1561764144 * ___result1, bool ___unicode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::urlPathEncode(System.Char,System.IO.Stream)
extern "C"  void HttpUtility_urlPathEncode_m1659123707 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t1561764144 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::writeCharBytes(System.Char,System.Collections.IList,System.Text.Encoding)
extern "C"  void HttpUtility_writeCharBytes_m230740112 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, Il2CppObject * ___buffer1, Encoding_t2012439129 * ___encoding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Net.HttpUtility::CreateRequestUrl(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  Uri_t1116831938 * HttpUtility_CreateRequestUrl_m4058933857 (Il2CppObject * __this /* static, unused */, String_t* ___requestUri0, String_t* ___host1, bool ___websocketRequest2, bool ___secure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal WebSocketSharp.Net.HttpUtility::CreateUser(System.String,WebSocketSharp.Net.AuthenticationSchemes,System.String,System.String,System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>)
extern "C"  Il2CppObject * HttpUtility_CreateUser_m2613224629 (Il2CppObject * __this /* static, unused */, String_t* ___response0, int32_t ___scheme1, String_t* ___realm2, String_t* ___method3, Func_2_t4138449219 * ___credentialsFinder4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding WebSocketSharp.Net.HttpUtility::GetEncoding(System.String)
extern "C"  Encoding_t2012439129 * HttpUtility_GetEncoding_m1332053360 (Il2CppObject * __this /* static, unused */, String_t* ___contentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpUtility::InternalParseQueryString(System.String,System.Text.Encoding)
extern "C"  NameValueCollection_t2791941106 * HttpUtility_InternalParseQueryString_m1329860633 (Il2CppObject * __this /* static, unused */, String_t* ___query0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::InternalUrlDecode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* HttpUtility_InternalUrlDecode_m3952957014 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___offset1, int32_t ___count2, Encoding_t2012439129 * ___encoding3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::InternalUrlDecodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_InternalUrlDecodeToBytes_m4248867870 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::InternalUrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_InternalUrlEncodeToBytes_m241979462 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::InternalUrlEncodeUnicodeToBytes(System.String)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_InternalUrlEncodeUnicodeToBytes_m1681077184 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::HtmlAttributeEncode(System.String)
extern "C"  String_t* HttpUtility_HtmlAttributeEncode_m3344283373 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::HtmlAttributeEncode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlAttributeEncode_m1744808275 (Il2CppObject * __this /* static, unused */, String_t* ___s0, TextWriter_t2304124208 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::HtmlDecode(System.String)
extern "C"  String_t* HttpUtility_HtmlDecode_m1173419221 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::HtmlDecode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlDecode_m1719380485 (Il2CppObject * __this /* static, unused */, String_t* ___s0, TextWriter_t2304124208 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::HtmlEncode(System.String)
extern "C"  String_t* HttpUtility_HtmlEncode_m2000319405 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpUtility::HtmlEncode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlEncode_m1602380333 (Il2CppObject * __this /* static, unused */, String_t* ___s0, TextWriter_t2304124208 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpUtility::ParseQueryString(System.String)
extern "C"  NameValueCollection_t2791941106 * HttpUtility_ParseQueryString_m4037216885 (Il2CppObject * __this /* static, unused */, String_t* ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.Net.HttpUtility::ParseQueryString(System.String,System.Text.Encoding)
extern "C"  NameValueCollection_t2791941106 * HttpUtility_ParseQueryString_m895963068 (Il2CppObject * __this /* static, unused */, String_t* ___query0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.String)
extern "C"  String_t* HttpUtility_UrlDecode_m2851664983 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m2350630682 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.Byte[],System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m95647923 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlDecode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m3735689427 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___offset1, int32_t ___count2, Encoding_t2012439129 * ___encoding3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlDecodeToBytes(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlDecodeToBytes_m2666978491 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlDecodeToBytes(System.String)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlDecodeToBytes_m429816820 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlDecodeToBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlDecodeToBytes_m3406042013 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlDecodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlDecodeToBytes_m2755980891 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.Byte[])
extern "C"  String_t* HttpUtility_UrlEncode_m1620759542 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.String)
extern "C"  String_t* HttpUtility_UrlEncode_m3678565167 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlEncode_m2233630530 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncode(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* HttpUtility_UrlEncode_m1023476182 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytes(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlEncodeToBytes_m2476833507 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytes(System.String)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlEncodeToBytes_m239671836 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlEncodeToBytes_m3534577269 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlEncodeToBytes_m3044059779 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlEncodeUnicode(System.String)
extern "C"  String_t* HttpUtility_UrlEncodeUnicode_m3644199926 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Net.HttpUtility::UrlEncodeUnicodeToBytes(System.String)
extern "C"  ByteU5BU5D_t4260760469* HttpUtility_UrlEncodeUnicodeToBytes_m336490659 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.HttpUtility::UrlPathEncode(System.String)
extern "C"  String_t* HttpUtility_UrlPathEncode_m3067938314 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
