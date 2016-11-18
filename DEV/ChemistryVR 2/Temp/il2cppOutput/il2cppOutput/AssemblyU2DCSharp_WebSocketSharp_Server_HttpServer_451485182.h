#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebSocketSharp.Net.HttpListenerContext
struct HttpListenerContext_t3744659101;
// WebSocketSharp.Server.HttpServer
struct HttpServer_t2239471717;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.HttpServer/<receiveRequest>c__AnonStorey1B
struct  U3CreceiveRequestU3Ec__AnonStorey1B_t451485182  : public Il2CppObject
{
public:
	// WebSocketSharp.Net.HttpListenerContext WebSocketSharp.Server.HttpServer/<receiveRequest>c__AnonStorey1B::ctx
	HttpListenerContext_t3744659101 * ___ctx_0;
	// WebSocketSharp.Server.HttpServer WebSocketSharp.Server.HttpServer/<receiveRequest>c__AnonStorey1B::<>f__this
	HttpServer_t2239471717 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(U3CreceiveRequestU3Ec__AnonStorey1B_t451485182, ___ctx_0)); }
	inline HttpListenerContext_t3744659101 * get_ctx_0() const { return ___ctx_0; }
	inline HttpListenerContext_t3744659101 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(HttpListenerContext_t3744659101 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CreceiveRequestU3Ec__AnonStorey1B_t451485182, ___U3CU3Ef__this_1)); }
	inline HttpServer_t2239471717 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline HttpServer_t2239471717 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(HttpServer_t2239471717 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
