#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential>
struct Func_2_t4138449219;
// System.Func`1<System.Boolean>
struct Func_1_t1601960292;
// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext
struct TcpListenerWebSocketContext_t3782393199;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<Authenticate>c__AnonStorey1A
struct  U3CAuthenticateU3Ec__AnonStorey1A_t697144626  : public Il2CppObject
{
public:
	// System.Int32 WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<Authenticate>c__AnonStorey1A::retry
	int32_t ___retry_0;
	// WebSocketSharp.Net.AuthenticationSchemes WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<Authenticate>c__AnonStorey1A::scheme
	int32_t ___scheme_1;
	// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<Authenticate>c__AnonStorey1A::realm
	String_t* ___realm_2;
	// System.Func`2<System.Security.Principal.IIdentity,WebSocketSharp.Net.NetworkCredential> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<Authenticate>c__AnonStorey1A::credentialsFinder
	Func_2_t4138449219 * ___credentialsFinder_3;
	// System.String WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<Authenticate>c__AnonStorey1A::chal
	String_t* ___chal_4;
	// System.Func`1<System.Boolean> WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<Authenticate>c__AnonStorey1A::auth
	Func_1_t1601960292 * ___auth_5;
	// WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext WebSocketSharp.Net.WebSockets.TcpListenerWebSocketContext/<Authenticate>c__AnonStorey1A::<>f__this
	TcpListenerWebSocketContext_t3782393199 * ___U3CU3Ef__this_6;

public:
	inline static int32_t get_offset_of_retry_0() { return static_cast<int32_t>(offsetof(U3CAuthenticateU3Ec__AnonStorey1A_t697144626, ___retry_0)); }
	inline int32_t get_retry_0() const { return ___retry_0; }
	inline int32_t* get_address_of_retry_0() { return &___retry_0; }
	inline void set_retry_0(int32_t value)
	{
		___retry_0 = value;
	}

	inline static int32_t get_offset_of_scheme_1() { return static_cast<int32_t>(offsetof(U3CAuthenticateU3Ec__AnonStorey1A_t697144626, ___scheme_1)); }
	inline int32_t get_scheme_1() const { return ___scheme_1; }
	inline int32_t* get_address_of_scheme_1() { return &___scheme_1; }
	inline void set_scheme_1(int32_t value)
	{
		___scheme_1 = value;
	}

	inline static int32_t get_offset_of_realm_2() { return static_cast<int32_t>(offsetof(U3CAuthenticateU3Ec__AnonStorey1A_t697144626, ___realm_2)); }
	inline String_t* get_realm_2() const { return ___realm_2; }
	inline String_t** get_address_of_realm_2() { return &___realm_2; }
	inline void set_realm_2(String_t* value)
	{
		___realm_2 = value;
		Il2CppCodeGenWriteBarrier(&___realm_2, value);
	}

	inline static int32_t get_offset_of_credentialsFinder_3() { return static_cast<int32_t>(offsetof(U3CAuthenticateU3Ec__AnonStorey1A_t697144626, ___credentialsFinder_3)); }
	inline Func_2_t4138449219 * get_credentialsFinder_3() const { return ___credentialsFinder_3; }
	inline Func_2_t4138449219 ** get_address_of_credentialsFinder_3() { return &___credentialsFinder_3; }
	inline void set_credentialsFinder_3(Func_2_t4138449219 * value)
	{
		___credentialsFinder_3 = value;
		Il2CppCodeGenWriteBarrier(&___credentialsFinder_3, value);
	}

	inline static int32_t get_offset_of_chal_4() { return static_cast<int32_t>(offsetof(U3CAuthenticateU3Ec__AnonStorey1A_t697144626, ___chal_4)); }
	inline String_t* get_chal_4() const { return ___chal_4; }
	inline String_t** get_address_of_chal_4() { return &___chal_4; }
	inline void set_chal_4(String_t* value)
	{
		___chal_4 = value;
		Il2CppCodeGenWriteBarrier(&___chal_4, value);
	}

	inline static int32_t get_offset_of_auth_5() { return static_cast<int32_t>(offsetof(U3CAuthenticateU3Ec__AnonStorey1A_t697144626, ___auth_5)); }
	inline Func_1_t1601960292 * get_auth_5() const { return ___auth_5; }
	inline Func_1_t1601960292 ** get_address_of_auth_5() { return &___auth_5; }
	inline void set_auth_5(Func_1_t1601960292 * value)
	{
		___auth_5 = value;
		Il2CppCodeGenWriteBarrier(&___auth_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_6() { return static_cast<int32_t>(offsetof(U3CAuthenticateU3Ec__AnonStorey1A_t697144626, ___U3CU3Ef__this_6)); }
	inline TcpListenerWebSocketContext_t3782393199 * get_U3CU3Ef__this_6() const { return ___U3CU3Ef__this_6; }
	inline TcpListenerWebSocketContext_t3782393199 ** get_address_of_U3CU3Ef__this_6() { return &___U3CU3Ef__this_6; }
	inline void set_U3CU3Ef__this_6(TcpListenerWebSocketContext_t3782393199 * value)
	{
		___U3CU3Ef__this_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
