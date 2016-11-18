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

// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t424195371;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void WebSocketSharp.ErrorEventArgs::.ctor(System.String)
extern "C"  void ErrorEventArgs__ctor_m1036100209 (ErrorEventArgs_t424195371 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.ErrorEventArgs::.ctor(System.String,System.Exception)
extern "C"  void ErrorEventArgs__ctor_m76493541 (ErrorEventArgs_t424195371 * __this, String_t* ___message0, Exception_t3991598821 * ___exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception WebSocketSharp.ErrorEventArgs::get_Exception()
extern "C"  Exception_t3991598821 * ErrorEventArgs_get_Exception_m115478562 (ErrorEventArgs_t424195371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.ErrorEventArgs::get_Message()
extern "C"  String_t* ErrorEventArgs_get_Message_m2729818384 (ErrorEventArgs_t424195371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
