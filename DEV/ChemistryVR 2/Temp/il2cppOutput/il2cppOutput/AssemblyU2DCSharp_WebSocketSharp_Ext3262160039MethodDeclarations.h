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

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.IO.Stream
struct Stream_t1561764144;
// System.Action
struct Action_t3771233898;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// WebSocketSharp.Net.HttpListenerResponse
struct HttpListenerResponse_t1992878431;
// System.Action`1<System.Exception>
struct Action_1_t92447661;
// System.Action`1<System.Int32>
struct Action_1_t1549654636;
// System.Uri
struct Uri_t1116831938;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t3782393199;
// System.Net.Sockets.TcpClient
struct TcpClient_t838416830;
// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t1612362831;
// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.Action`1<System.Byte[]>
struct Action_1_t361609309;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.EventHandler
struct EventHandler_t2463957060;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t2540831021;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t1136277956;
// WebSocketSharp.Net.HttpListenerRequest
struct HttpListenerRequest_t3888821117;
// System.Action`1<System.Int64>
struct Action_1_t1549654731;
// System.Action`1<System.UInt32>
struct Action_1_t420484117;
// System.Action`1<System.UInt64>
struct Action_1_t420484212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Server_ServerStat3811759112.h"
#include "AssemblyU2DCSharp_WebSocketSharp_WebSocketState790259878.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerR1992878431.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpStatusCod1625451593.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CompressionMethod2226596781.h"
#include "System_System_Uri1116831938.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"
#include "System_System_Net_Sockets_TcpClient838416830.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ServerSslConf1612362831.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Logger3695440972.h"
#include "AssemblyU2DCSharp_WebSocketSharp_ByteOrder422296044.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Opcode3782140426.h"
#include "System_System_Collections_Specialized_NameValueCol2791941106.h"
#include "mscorlib_System_EventHandler2463957060.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_EventArgs2540831021.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerR3888821117.h"

// System.Void WebSocketSharp.Ext::.cctor()
extern "C"  void Ext__cctor_m17789160 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::compress(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* Ext_compress_m2201619262 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream WebSocketSharp.Ext::compress(System.IO.Stream)
extern "C"  MemoryStream_t418716369 * Ext_compress_m1680850795 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::compressToArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t4260760469* Ext_compressToArray_m4150999532 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::decompress(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* Ext_decompress_m387891101 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream WebSocketSharp.Ext::decompress(System.IO.Stream)
extern "C"  MemoryStream_t418716369 * Ext_decompress_m3926803564 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::decompressToArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t4260760469* Ext_decompressToArray_m215827339 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::times(System.UInt64,System.Action)
extern "C"  void Ext_times_m1638317033 (Il2CppObject * __this /* static, unused */, uint64_t ___n0, Action_t3771233898 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Append(System.UInt16,System.String)
extern "C"  ByteU5BU5D_t4260760469* Ext_Append_m501190413 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfAvailable(WebSocketSharp.Server.ServerState,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Ext_CheckIfAvailable_m2137217951 (Il2CppObject * __this /* static, unused */, int32_t ___state0, bool ___ready1, bool ___start2, bool ___shutting3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfAvailable(WebSocketSharp.WebSocketState,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Ext_CheckIfAvailable_m1412347703 (Il2CppObject * __this /* static, unused */, uint16_t ___state0, bool ___connecting1, bool ___open2, bool ___closing3, bool ___closed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidProtocols(System.String[])
extern "C"  String_t* Ext_CheckIfValidProtocols_m3548151740 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t4054002952* ___protocols0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidServicePath(System.String)
extern "C"  String_t* Ext_CheckIfValidServicePath_m3836702879 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidSessionID(System.String)
extern "C"  String_t* Ext_CheckIfValidSessionID_m3343497224 (Il2CppObject * __this /* static, unused */, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::CheckIfValidWaitTime(System.TimeSpan)
extern "C"  String_t* Ext_CheckIfValidWaitTime_m2776357153 (Il2CppObject * __this /* static, unused */, TimeSpan_t413522987  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::CheckWaitTime(System.TimeSpan,System.String&)
extern "C"  bool Ext_CheckWaitTime_m1092539405 (Il2CppObject * __this /* static, unused */, TimeSpan_t413522987  ___time0, String_t** ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Close(WebSocketSharp.Net.HttpListenerResponse,WebSocketSharp.Net.HttpStatusCode)
extern "C"  void Ext_Close_m57100903 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t1992878431 * ___response0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::CloseWithAuthChallenge(WebSocketSharp.Net.HttpListenerResponse,System.String)
extern "C"  void Ext_CloseWithAuthChallenge_m2688350425 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t1992878431 * ___response0, String_t* ___challenge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Compress(System.Byte[],WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t4260760469* Ext_Compress_m2695677868 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Ext::Compress(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  Stream_t1561764144 * Ext_Compress_m4045017470 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::CompressToArray(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t4260760469* Ext_CompressToArray_m1481244350 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::ContainsTwice(System.String[])
extern "C"  bool Ext_ContainsTwice_m3841464136 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t4054002952* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::CopyTo(System.IO.Stream,System.IO.Stream,System.Int32)
extern "C"  void Ext_CopyTo_m469640576 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___source0, Stream_t1561764144 * ___destination1, int32_t ___bufferLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::CopyToAsync(System.IO.Stream,System.IO.Stream,System.Int32,System.Action,System.Action`1<System.Exception>)
extern "C"  void Ext_CopyToAsync_m2347543499 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___source0, Stream_t1561764144 * ___destination1, int32_t ___bufferLength2, Action_t3771233898 * ___completed3, Action_1_t92447661 * ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::Decompress(System.Byte[],WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t4260760469* Ext_Decompress_m2803880749 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream WebSocketSharp.Ext::Decompress(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  Stream_t1561764144 * Ext_Decompress_m4034383069 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::DecompressToArray(System.IO.Stream,WebSocketSharp.CompressionMethod)
extern "C"  ByteU5BU5D_t4260760469* Ext_DecompressToArray_m99179775 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::EqualsWith(System.Int32,System.Char,System.Action`1<System.Int32>)
extern "C"  bool Ext_EqualsWith_m83190675 (Il2CppObject * __this /* static, unused */, int32_t ___value0, Il2CppChar ___c1, Action_1_t1549654636 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetAbsolutePath(System.Uri)
extern "C"  String_t* Ext_GetAbsolutePath_m411437861 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetMessage(WebSocketSharp.CloseStatusCode)
extern "C"  String_t* Ext_GetMessage_m1491341063 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetName(System.String,System.Char)
extern "C"  String_t* Ext_GetName_m3888973368 (Il2CppObject * __this /* static, unused */, String_t* ___nameAndValue0, Il2CppChar ___separator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetValue(System.String,System.Char)
extern "C"  String_t* Ext_GetValue_m2577301276 (Il2CppObject * __this /* static, unused */, String_t* ___nameAndValue0, Il2CppChar ___separator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetValue(System.String,System.Char,System.Boolean)
extern "C"  String_t* Ext_GetValue_m1256732897 (Il2CppObject * __this /* static, unused */, String_t* ___nameAndValue0, Il2CppChar ___separator1, bool ___unquote2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext WebSocketSharp.Ext::GetWebSocketContext(System.Net.Sockets.TcpClient,System.String,System.Boolean,WebSocketSharp.Net.ServerSslConfiguration,WebSocketSharp.Logger)
extern "C"  TcpListenerWebSocketContext_t3782393199 * Ext_GetWebSocketContext_m3159873182 (Il2CppObject * __this /* static, unused */, TcpClient_t838416830 * ___tcpClient0, String_t* ___protocol1, bool ___secure2, ServerSslConfiguration_t1612362831 * ___sslConfig3, Logger_t3695440972 * ___logger4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt16,WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t4260760469* Ext_InternalToByteArray_m2316644041 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, int32_t ___order1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::InternalToByteArray(System.UInt64,WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t4260760469* Ext_InternalToByteArray_m3414700578 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, int32_t ___order1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsCompressionExtension(System.String,WebSocketSharp.CompressionMethod)
extern "C"  bool Ext_IsCompressionExtension_m2842948926 (Il2CppObject * __this /* static, unused */, String_t* ___value0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsControl(System.Byte)
extern "C"  bool Ext_IsControl_m512187337 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsControl(WebSocketSharp.Opcode)
extern "C"  bool Ext_IsControl_m3354512215 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsData(System.Byte)
extern "C"  bool Ext_IsData_m331959204 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsData(WebSocketSharp.Opcode)
extern "C"  bool Ext_IsData_m3262768498 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsPortNumber(System.Int32)
extern "C"  bool Ext_IsPortNumber_m3836782264 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsReserved(System.UInt16)
extern "C"  bool Ext_IsReserved_m627022511 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsReserved(WebSocketSharp.CloseStatusCode)
extern "C"  bool Ext_IsReserved_m4250492537 (Il2CppObject * __this /* static, unused */, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsSupported(System.Byte)
extern "C"  bool Ext_IsSupported_m2526050584 (Il2CppObject * __this /* static, unused */, uint8_t ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsText(System.String)
extern "C"  bool Ext_IsText_m2931158296 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsToken(System.String)
extern "C"  bool Ext_IsToken_m3698258628 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::Quote(System.String)
extern "C"  String_t* Ext_Quote_m37008518 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ReadBytes(System.IO.Stream,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* Ext_ReadBytes_m3416233938 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ReadBytes(System.IO.Stream,System.Int64,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* Ext_ReadBytes_m2955720804 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, int64_t ___length1, int32_t ___bufferLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
extern "C"  void Ext_ReadBytesAsync_m2558951989 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, int32_t ___length1, Action_1_t361609309 * ___completed2, Action_1_t92447661 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::ReadBytesAsync(System.IO.Stream,System.Int64,System.Int32,System.Action`1<System.Byte[]>,System.Action`1<System.Exception>)
extern "C"  void Ext_ReadBytesAsync_m1511904755 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, int64_t ___length1, int32_t ___bufferLength2, Action_1_t361609309 * ___completed3, Action_1_t92447661 * ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::RemovePrefix(System.String,System.String[])
extern "C"  String_t* Ext_RemovePrefix_m3868713732 (Il2CppObject * __this /* static, unused */, String_t* ___value0, StringU5BU5D_t4054002952* ___prefixes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> WebSocketSharp.Ext::SplitHeaderValue(System.String,System.Char[])
extern "C"  Il2CppObject* Ext_SplitHeaderValue_m1919670706 (Il2CppObject * __this /* static, unused */, String_t* ___value0, CharU5BU5D_t3324145743* ___separators1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ToByteArray(System.IO.Stream)
extern "C"  ByteU5BU5D_t4260760469* Ext_ToByteArray_m2177745510 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.CompressionMethod WebSocketSharp.Ext::ToCompressionMethod(System.String)
extern "C"  uint8_t Ext_ToCompressionMethod_m4243135028 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::ToExtensionString(WebSocketSharp.CompressionMethod,System.String[])
extern "C"  String_t* Ext_ToExtensionString_m2440693459 (Il2CppObject * __this /* static, unused */, uint8_t ___method0, StringU5BU5D_t4054002952* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress WebSocketSharp.Ext::ToIPAddress(System.String)
extern "C"  IPAddress_t3525271463 * Ext_ToIPAddress_m3970391693 (Il2CppObject * __this /* static, unused */, String_t* ___hostnameOrAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 WebSocketSharp.Ext::ToUInt16(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  uint16_t Ext_ToUInt16_m2711859920 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___source0, int32_t ___sourceOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 WebSocketSharp.Ext::ToUInt64(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  uint64_t Ext_ToUInt64_m2876712304 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___source0, int32_t ___sourceOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::TrimEndSlash(System.String)
extern "C"  String_t* Ext_TrimEndSlash_m3520082300 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::TryCreateWebSocketUri(System.String,System.Uri&,System.String&)
extern "C"  bool Ext_TryCreateWebSocketUri_m304807878 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, Uri_t1116831938 ** ___result1, String_t** ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::Unquote(System.String)
extern "C"  String_t* Ext_Unquote_m1840924767 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::UTF8Decode(System.Byte[])
extern "C"  String_t* Ext_UTF8Decode_m2608399240 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::UTF8Encode(System.String)
extern "C"  ByteU5BU5D_t4260760469* Ext_UTF8Encode_m2451363890 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::WriteBytes(System.IO.Stream,System.Byte[],System.Int32)
extern "C"  void Ext_WriteBytes_m292434770 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, ByteU5BU5D_t4260760469* ___bytes1, int32_t ___bufferLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::WriteBytesAsync(System.IO.Stream,System.Byte[],System.Int32,System.Action,System.Action`1<System.Exception>)
extern "C"  void Ext_WriteBytesAsync_m1426154261 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___stream0, ByteU5BU5D_t4260760469* ___bytes1, int32_t ___bufferLength2, Action_t3771233898 * ___completed3, Action_1_t92447661 * ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.String,System.Char[])
extern "C"  bool Ext_Contains_m664592357 (Il2CppObject * __this /* static, unused */, String_t* ___value0, CharU5BU5D_t3324145743* ___chars1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.Collections.Specialized.NameValueCollection,System.String)
extern "C"  bool Ext_Contains_m3564827271 (Il2CppObject * __this /* static, unused */, NameValueCollection_t2791941106 * ___collection0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::Contains(System.Collections.Specialized.NameValueCollection,System.String,System.String)
extern "C"  bool Ext_Contains_m1419354755 (Il2CppObject * __this /* static, unused */, NameValueCollection_t2791941106 * ___collection0, String_t* ___name1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Emit(System.EventHandler,System.Object,System.EventArgs)
extern "C"  void Ext_Emit_m3145536047 (Il2CppObject * __this /* static, unused */, EventHandler_t2463957060 * ___eventHandler0, Il2CppObject * ___sender1, EventArgs_t2540831021 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.CookieCollection WebSocketSharp.Ext::GetCookies(System.Collections.Specialized.NameValueCollection,System.Boolean)
extern "C"  CookieCollection_t1136277956 * Ext_GetCookies_m3428095575 (Il2CppObject * __this /* static, unused */, NameValueCollection_t2791941106 * ___headers0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetDescription(WebSocketSharp.Net.HttpStatusCode)
extern "C"  String_t* Ext_GetDescription_m3857643303 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::GetStatusDescription(System.Int32)
extern "C"  String_t* Ext_GetStatusDescription_m4235048679 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsCloseStatusCode(System.UInt16)
extern "C"  bool Ext_IsCloseStatusCode_m2305896408 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsEnclosedIn(System.String,System.Char)
extern "C"  bool Ext_IsEnclosedIn_m1475088994 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsHostOrder(WebSocketSharp.ByteOrder)
extern "C"  bool Ext_IsHostOrder_m1710141040 (Il2CppObject * __this /* static, unused */, int32_t ___order0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsLocal(System.Net.IPAddress)
extern "C"  bool Ext_IsLocal_m3007141843 (Il2CppObject * __this /* static, unused */, IPAddress_t3525271463 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsNullOrEmpty(System.String)
extern "C"  bool Ext_IsNullOrEmpty_m3465800922 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsPredefinedScheme(System.String)
extern "C"  bool Ext_IsPredefinedScheme_m2417699130 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::IsUpgradeTo(WebSocketSharp.Net.HttpListenerRequest,System.String)
extern "C"  bool Ext_IsUpgradeTo_m2990428257 (Il2CppObject * __this /* static, unused */, HttpListenerRequest_t3888821117 * ___request0, String_t* ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::MaybeUri(System.String)
extern "C"  bool Ext_MaybeUri_m2491409291 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int32,System.Action)
extern "C"  void Ext_Times_m1129685841 (Il2CppObject * __this /* static, unused */, int32_t ___n0, Action_t3771233898 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int64,System.Action)
extern "C"  void Ext_Times_m4168546578 (Il2CppObject * __this /* static, unused */, int64_t ___n0, Action_t3771233898 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.UInt32,System.Action)
extern "C"  void Ext_Times_m143450696 (Il2CppObject * __this /* static, unused */, uint32_t ___n0, Action_t3771233898 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.UInt64,System.Action)
extern "C"  void Ext_Times_m3182311433 (Il2CppObject * __this /* static, unused */, uint64_t ___n0, Action_t3771233898 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int32,System.Action`1<System.Int32>)
extern "C"  void Ext_Times_m536097901 (Il2CppObject * __this /* static, unused */, int32_t ___n0, Action_1_t1549654636 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.Int64,System.Action`1<System.Int64>)
extern "C"  void Ext_Times_m2849852621 (Il2CppObject * __this /* static, unused */, int64_t ___n0, Action_1_t1549654731 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.UInt32,System.Action`1<System.UInt32>)
extern "C"  void Ext_Times_m2120138553 (Il2CppObject * __this /* static, unused */, uint32_t ___n0, Action_1_t420484117 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::Times(System.UInt64,System.Action`1<System.UInt64>)
extern "C"  void Ext_Times_m829351991 (Il2CppObject * __this /* static, unused */, uint64_t ___n0, Action_1_t420484212 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.Ext::ToHostOrder(System.Byte[],WebSocketSharp.ByteOrder)
extern "C"  ByteU5BU5D_t4260760469* Ext_ToHostOrder_m1822174182 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___source0, int32_t ___sourceOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri WebSocketSharp.Ext::ToUri(System.String)
extern "C"  Uri_t1116831938 * Ext_ToUri_m1525749310 (Il2CppObject * __this /* static, unused */, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::UrlDecode(System.String)
extern "C"  String_t* Ext_UrlDecode_m251005989 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Ext::UrlEncode(System.String)
extern "C"  String_t* Ext_UrlEncode_m1077906173 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Ext::WriteContent(WebSocketSharp.Net.HttpListenerResponse,System.Byte[])
extern "C"  void Ext_WriteContent_m3014329667 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t1992878431 * ___response0, ByteU5BU5D_t4260760469* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Ext::<CheckIfValidProtocols>m__5(System.String)
extern "C"  bool Ext_U3CCheckIfValidProtocolsU3Em__5_m2477356725 (Il2CppObject * __this /* static, unused */, String_t* ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
