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

// WebSocketSharp.LogData
struct LogData_t3968197908;
// System.Diagnostics.StackFrame
struct StackFrame_t1034942277;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_LogLevel3842284188.h"
#include "mscorlib_System_Diagnostics_StackFrame1034942277.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_DateTime4283661327.h"

// System.Void WebSocketSharp.LogData::.ctor(WebSocketSharp.LogLevel,System.Diagnostics.StackFrame,System.String)
extern "C"  void LogData__ctor_m2980068401 (LogData_t3968197908 * __this, int32_t ___level0, StackFrame_t1034942277 * ___caller1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame WebSocketSharp.LogData::get_Caller()
extern "C"  StackFrame_t1034942277 * LogData_get_Caller_m2567943437 (LogData_t3968197908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime WebSocketSharp.LogData::get_Date()
extern "C"  DateTime_t4283661327  LogData_get_Date_m720763644 (LogData_t3968197908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.LogLevel WebSocketSharp.LogData::get_Level()
extern "C"  int32_t LogData_get_Level_m1317917001 (LogData_t3968197908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.LogData::get_Message()
extern "C"  String_t* LogData_get_Message_m2331883345 (LogData_t3968197908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.LogData::ToString()
extern "C"  String_t* LogData_ToString_m2995406843 (LogData_t3968197908 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
