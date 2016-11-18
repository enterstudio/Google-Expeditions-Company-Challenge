#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.TcpClient
struct TcpClient_t838416830;
// WebSocketSharp.Server.WebSocketServer
struct WebSocketServer_t850384644;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Server.WebSocketServer/<receiveRequest>c__AnonStorey1C
struct  U3CreceiveRequestU3Ec__AnonStorey1C_t2730694814  : public Il2CppObject
{
public:
	// System.Net.Sockets.TcpClient WebSocketSharp.Server.WebSocketServer/<receiveRequest>c__AnonStorey1C::cl
	TcpClient_t838416830 * ___cl_0;
	// WebSocketSharp.Server.WebSocketServer WebSocketSharp.Server.WebSocketServer/<receiveRequest>c__AnonStorey1C::<>f__this
	WebSocketServer_t850384644 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_cl_0() { return static_cast<int32_t>(offsetof(U3CreceiveRequestU3Ec__AnonStorey1C_t2730694814, ___cl_0)); }
	inline TcpClient_t838416830 * get_cl_0() const { return ___cl_0; }
	inline TcpClient_t838416830 ** get_address_of_cl_0() { return &___cl_0; }
	inline void set_cl_0(TcpClient_t838416830 * value)
	{
		___cl_0 = value;
		Il2CppCodeGenWriteBarrier(&___cl_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CreceiveRequestU3Ec__AnonStorey1C_t2730694814, ___U3CU3Ef__this_1)); }
	inline WebSocketServer_t850384644 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline WebSocketServer_t850384644 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(WebSocketServer_t850384644 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
