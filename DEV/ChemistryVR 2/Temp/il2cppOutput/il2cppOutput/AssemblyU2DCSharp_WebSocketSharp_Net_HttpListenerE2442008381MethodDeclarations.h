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

// WebSocketSharp.Net.HttpListenerException
struct HttpListenerException_t2442008381;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.Net.HttpListenerException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpListenerException__ctor_m1024359685 (HttpListenerException_t2442008381 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerException::.ctor()
extern "C"  void HttpListenerException__ctor_m4049824196 (HttpListenerException_t2442008381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerException::.ctor(System.Int32)
extern "C"  void HttpListenerException__ctor_m1701615893 (HttpListenerException_t2442008381 * __this, int32_t ___errorCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.HttpListenerException::.ctor(System.Int32,System.String)
extern "C"  void HttpListenerException__ctor_m174438545 (HttpListenerException_t2442008381 * __this, int32_t ___errorCode0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.HttpListenerException::get_ErrorCode()
extern "C"  int32_t HttpListenerException_get_ErrorCode_m2693090048 (HttpListenerException_t2442008381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
