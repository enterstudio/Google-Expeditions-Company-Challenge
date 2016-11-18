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

// WebSocketSharp.Net.ServerSslConfiguration
struct ServerSslConfiguration_t1612362831;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t160474609;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1894914657;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificate160474609.h"
#include "System_System_Security_Authentication_SslProtocols1694761299.h"
#include "System_System_Net_Security_RemoteCertificateValida1894914657.h"

// System.Void WebSocketSharp.Net.ServerSslConfiguration::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  void ServerSslConfiguration__ctor_m2361607112 (ServerSslConfiguration_t1612362831 * __this, X509Certificate2_t160474609 * ___serverCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ServerSslConfiguration::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void ServerSslConfiguration__ctor_m544172306 (ServerSslConfiguration_t1612362831 * __this, X509Certificate2_t160474609 * ___serverCertificate0, bool ___clientCertificateRequired1, int32_t ___enabledSslProtocols2, bool ___checkCertificateRevocation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.ServerSslConfiguration::get_ClientCertificateRequired()
extern "C"  bool ServerSslConfiguration_get_ClientCertificateRequired_m4078318070 (ServerSslConfiguration_t1612362831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ServerSslConfiguration::set_ClientCertificateRequired(System.Boolean)
extern "C"  void ServerSslConfiguration_set_ClientCertificateRequired_m2607148101 (ServerSslConfiguration_t1612362831 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.ServerSslConfiguration::get_ClientCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t1894914657 * ServerSslConfiguration_get_ClientCertificateValidationCallback_m3298595939 (ServerSslConfiguration_t1612362831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ServerSslConfiguration::set_ClientCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void ServerSslConfiguration_set_ClientCertificateValidationCallback_m2929787284 (ServerSslConfiguration_t1612362831 * __this, RemoteCertificateValidationCallback_t1894914657 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.ServerSslConfiguration::get_ServerCertificate()
extern "C"  X509Certificate2_t160474609 * ServerSslConfiguration_get_ServerCertificate_m3107691982 (ServerSslConfiguration_t1612362831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ServerSslConfiguration::set_ServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  void ServerSslConfiguration_set_ServerCertificate_m1473426973 (ServerSslConfiguration_t1612362831 * __this, X509Certificate2_t160474609 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
