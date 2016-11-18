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

// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t2470319931;
// WebSocketSharp.PayloadData
struct PayloadData_t39926750;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"
#include "AssemblyU2DCSharp_WebSocketSharp_PayloadData39926750.h"
#include "mscorlib_System_String7231557.h"

// System.Void WebSocketSharp.CloseEventArgs::.ctor()
extern "C"  void CloseEventArgs__ctor_m2615411745 (CloseEventArgs_t2470319931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(System.UInt16)
extern "C"  void CloseEventArgs__ctor_m1643307891 (CloseEventArgs_t2470319931 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(WebSocketSharp.CloseStatusCode)
extern "C"  void CloseEventArgs__ctor_m2691708469 (CloseEventArgs_t2470319931 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(WebSocketSharp.PayloadData)
extern "C"  void CloseEventArgs__ctor_m287930004 (CloseEventArgs_t2470319931 * __this, PayloadData_t39926750 * ___payloadData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(System.UInt16,System.String)
extern "C"  void CloseEventArgs__ctor_m263423599 (CloseEventArgs_t2470319931 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::.ctor(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void CloseEventArgs__ctor_m264232369 (CloseEventArgs_t2470319931 * __this, uint16_t ___code0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.PayloadData WebSocketSharp.CloseEventArgs::get_PayloadData()
extern "C"  PayloadData_t39926750 * CloseEventArgs_get_PayloadData_m3981581534 (CloseEventArgs_t2470319931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 WebSocketSharp.CloseEventArgs::get_Code()
extern "C"  uint16_t CloseEventArgs_get_Code_m3997589060 (CloseEventArgs_t2470319931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.CloseEventArgs::get_Reason()
extern "C"  String_t* CloseEventArgs_get_Reason_m622438797 (CloseEventArgs_t2470319931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.CloseEventArgs::get_WasClean()
extern "C"  bool CloseEventArgs_get_WasClean_m1744442936 (CloseEventArgs_t2470319931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.CloseEventArgs::set_WasClean(System.Boolean)
extern "C"  void CloseEventArgs_set_WasClean_m3328282967 (CloseEventArgs_t2470319931 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
