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

// WebSocketSharp.WebSocketException
struct WebSocketException_t2311987812;
// System.Exception
struct Exception_t3991598821;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"

// System.Void WebSocketSharp.WebSocketException::.ctor()
extern "C"  void WebSocketException__ctor_m469025560 (WebSocketException_t2311987812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(System.Exception)
extern "C"  void WebSocketException__ctor_m2177180616 (WebSocketException_t2311987812 * __this, Exception_t3991598821 * ___innerException0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
extern "C"  void WebSocketException__ctor_m3830227690 (WebSocketException_t2311987812 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode)
extern "C"  void WebSocketException__ctor_m2511973100 (WebSocketException_t2311987812 * __this, uint16_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String,System.Exception)
extern "C"  void WebSocketException__ctor_m3461878668 (WebSocketException_t2311987812 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.Exception)
extern "C"  void WebSocketException__ctor_m2629816266 (WebSocketException_t2311987812 * __this, uint16_t ___code0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String)
extern "C"  void WebSocketException__ctor_m960972328 (WebSocketException_t2311987812 * __this, uint16_t ___code0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.WebSocketException::.ctor(WebSocketSharp.CloseStatusCode,System.String,System.Exception)
extern "C"  void WebSocketException__ctor_m1257018382 (WebSocketException_t2311987812 * __this, uint16_t ___code0, String_t* ___message1, Exception_t3991598821 * ___innerException2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::get_Code()
extern "C"  uint16_t WebSocketException_get_Code_m3592681969 (WebSocketException_t2311987812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
