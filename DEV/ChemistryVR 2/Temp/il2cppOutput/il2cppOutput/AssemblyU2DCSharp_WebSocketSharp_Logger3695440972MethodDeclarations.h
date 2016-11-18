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

// WebSocketSharp.Logger
struct Logger_t3695440972;
// System.String
struct String_t;
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t3165426332;
// WebSocketSharp.LogData
struct LogData_t3968197908;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_LogLevel3842284188.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_LogData3968197908.h"

// System.Void WebSocketSharp.Logger::.ctor()
extern "C"  void Logger__ctor_m3044192816 (Logger_t3695440972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::.ctor(WebSocketSharp.LogLevel)
extern "C"  void Logger__ctor_m2248370103 (Logger_t3695440972 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::.ctor(WebSocketSharp.LogLevel,System.String,System.Action`2<WebSocketSharp.LogData,System.String>)
extern "C"  void Logger__ctor_m110166589 (Logger_t3695440972 * __this, int32_t ___level0, String_t* ___file1, Action_2_t3165426332 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Logger::get_File()
extern "C"  String_t* Logger_get_File_m3524084054 (Logger_t3695440972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::set_File(System.String)
extern "C"  void Logger_set_File_m401044373 (Logger_t3695440972 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.LogLevel WebSocketSharp.Logger::get_Level()
extern "C"  int32_t Logger_get_Level_m1060503025 (Logger_t3695440972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::set_Level(WebSocketSharp.LogLevel)
extern "C"  void Logger_set_Level_m2485360594 (Logger_t3695440972 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::get_Output()
extern "C"  Action_2_t3165426332 * Logger_get_Output_m4109895693 (Logger_t3695440972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::set_Output(System.Action`2<WebSocketSharp.LogData,System.String>)
extern "C"  void Logger_set_Output_m2996023294 (Logger_t3695440972 * __this, Action_2_t3165426332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::defaultOutput(WebSocketSharp.LogData,System.String)
extern "C"  void Logger_defaultOutput_m3535799497 (Il2CppObject * __this /* static, unused */, LogData_t3968197908 * ___data0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::output(System.String,WebSocketSharp.LogLevel)
extern "C"  void Logger_output_m2505654734 (Logger_t3695440972 * __this, String_t* ___message0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::writeToFile(System.String,System.String)
extern "C"  void Logger_writeToFile_m554609082 (Il2CppObject * __this /* static, unused */, String_t* ___value0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Debug(System.String)
extern "C"  void Logger_Debug_m2108157889 (Logger_t3695440972 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Error(System.String)
extern "C"  void Logger_Error_m3981980524 (Logger_t3695440972 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Fatal(System.String)
extern "C"  void Logger_Fatal_m51902704 (Logger_t3695440972 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Info(System.String)
extern "C"  void Logger_Info_m861041664 (Logger_t3695440972 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Trace(System.String)
extern "C"  void Logger_Trace_m902107791 (Logger_t3695440972 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Logger::Warn(System.String)
extern "C"  void Logger_Warn_m1570757416 (Logger_t3695440972 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
