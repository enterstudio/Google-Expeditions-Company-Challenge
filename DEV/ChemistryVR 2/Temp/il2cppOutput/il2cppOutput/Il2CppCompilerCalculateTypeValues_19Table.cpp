#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A926435919.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3710907716.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3989687101.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent200175493.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent3065328481.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager622010154.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1752883023.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1207501038.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnTo970385655.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnO2004619270.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnB1240547244.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_U3C2571948932.h"
#include "AssemblyU2DCSharp_proto_Proto_PhoneEvent4294543246.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent1948414762.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types1856670140.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type923828173.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2659645585.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1994437979.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEven190725481.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1865844949.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2183502845.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Gyroscope2921203048.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Gyroscope3312050644.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerome148610782.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1359586634.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3758135118.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3987156410.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati3825228477.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati3974107689.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent2095740558.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent_1063111930.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Builder2932595742.h"
#include "AssemblyU2DCSharp_GazeInputModule2064533489.h"
#include "AssemblyU2DCSharp_GvrViewer671349045.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye643876407.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion2578366935.h"
#include "AssemblyU2DCSharp_GvrViewer_StereoScreenChangeDele2614477363.h"
#include "AssemblyU2DCSharp_Pose3D2396367586.h"
#include "AssemblyU2DCSharp_MutablePose3D1273683304.h"
#include "AssemblyU2DCSharp_GvrGaze2073985384.h"
#include "AssemblyU2DCSharp_GvrReticle4275820913.h"
#include "AssemblyU2DCSharp_GvrFPS2145111206.h"
#include "AssemblyU2DCSharp_GvrIntent304217535.h"
#include "AssemblyU2DCSharp_Networking1515242260.h"
#include "AssemblyU2DCSharp_Networking_U3CScreenshotEncodeU3E497591906.h"
#include "AssemblyU2DCSharp_WebSocketSharp_ByteOrder422296044.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseEventArgs2470319931.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CloseStatusCode3936110621.h"
#include "AssemblyU2DCSharp_WebSocketSharp_CompressionMethod2226596781.h"
#include "AssemblyU2DCSharp_WebSocketSharp_ErrorEventArgs424195371.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Ext3262160039.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Ext_U3CSplitHeade3710267827.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Ext_U3CContainsTw3299461620.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Ext_U3CCopyToAsyn3710281490.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Ext_U3CReadBytesAsy99258834.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Ext_U3CReadBytesAsy99258835.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Ext_U3CReadBytesA2095674895.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Ext_U3CWriteBytesA366640406.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Fin3262160529.h"
#include "AssemblyU2DCSharp_WebSocketSharp_HttpBase1712924533.h"
#include "AssemblyU2DCSharp_WebSocketSharp_HttpBase_U3CreadH2643480234.h"
#include "AssemblyU2DCSharp_WebSocketSharp_HttpRequest1080673901.h"
#include "AssemblyU2DCSharp_WebSocketSharp_HttpResponse273810277.h"
#include "AssemblyU2DCSharp_WebSocketSharp_LogData3968197908.h"
#include "AssemblyU2DCSharp_WebSocketSharp_LogLevel3842284188.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Logger3695440972.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Mask3422653544.h"
#include "AssemblyU2DCSharp_WebSocketSharp_MessageEventArgs36945740.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio1650711563.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio1782907061.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio2112712571.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Authenticatio3190130368.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Chunk1399190359.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ChunkStream4213968439.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ChunkedRequest849747493.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_ClientSslConfi224487639.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_Cookie2077085446.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_CookieCollect1136277956.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_CookieExceptio967178805.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_EndPointListe3188089579.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_EndPointManag3612541026.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpBasicIden3688512078.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpConnection602292776.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpDigestIde2083794924.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpHeaderInf3355144229.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpHeaderTyp3355482801.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListener398944510.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerAs183645863.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerAs216851188.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerC3744659101.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerE2442008381.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerP3906063792.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerP1379363822.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerR3888821117.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerR1992878431.h"
#include "AssemblyU2DCSharp_WebSocketSharp_Net_HttpListenerR2190951134.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (Action_t926435919)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1900[10] = 
{
	Action_t926435919::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (Pointer_t3710907716)+ sizeof (Il2CppObject), sizeof(Pointer_t3710907716_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1901[3] = 
{
	Pointer_t3710907716::get_offset_of_fingerId_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3710907716::get_offset_of_normalizedX_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3710907716::get_offset_of_normalizedY_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (EmulatorOrientationEvent_t3989687101)+ sizeof (Il2CppObject), sizeof(EmulatorOrientationEvent_t3989687101_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1902[2] = 
{
	EmulatorOrientationEvent_t3989687101::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorOrientationEvent_t3989687101::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (EmulatorButtonEvent_t200175493)+ sizeof (Il2CppObject), sizeof(EmulatorButtonEvent_t200175493_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1903[2] = 
{
	EmulatorButtonEvent_t200175493::get_offset_of_code_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorButtonEvent_t200175493::get_offset_of_down_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (ButtonCode_t3065328481)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1904[7] = 
{
	ButtonCode_t3065328481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (EmulatorManager_t622010154), -1, sizeof(EmulatorManager_t622010154_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1905[16] = 
{
	EmulatorManager_t622010154::get_offset_of_emulatorUpdate_2(),
	EmulatorManager_t622010154::get_offset_of_waitForEndOfFrame_3(),
	EmulatorManager_t622010154_StaticFields::get_offset_of_instance_4(),
	EmulatorManager_t622010154::get_offset_of_currentGyroEvent_5(),
	EmulatorManager_t622010154::get_offset_of_currentAccelEvent_6(),
	EmulatorManager_t622010154::get_offset_of_currentTouchEvent_7(),
	EmulatorManager_t622010154::get_offset_of_currentOrientationEvent_8(),
	EmulatorManager_t622010154::get_offset_of_currentButtonEvent_9(),
	EmulatorManager_t622010154::get_offset_of_pendingEvents_10(),
	EmulatorManager_t622010154::get_offset_of_socket_11(),
	EmulatorManager_t622010154::get_offset_of_lastDownTimeMs_12(),
	EmulatorManager_t622010154::get_offset_of_gyroEventListenersInternal_13(),
	EmulatorManager_t622010154::get_offset_of_accelEventListenersInternal_14(),
	EmulatorManager_t622010154::get_offset_of_touchEventListenersInternal_15(),
	EmulatorManager_t622010154::get_offset_of_orientationEventListenersInternal_16(),
	EmulatorManager_t622010154::get_offset_of_buttonEventListenersInternal_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (OnGyroEvent_t1752883023), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (OnAccelEvent_t1207501038), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (OnTouchEvent_t970385655), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (OnOrientationEvent_t2004619270), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (OnButtonEvent_t1240547244), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (U3CEndOfFrameU3Ec__Iterator1_t2571948932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[5] = 
{
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U3CphoneEventU3E__0_0(),
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U3CU24s_4U3E__1_1(),
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U24PC_2(),
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U24current_3(),
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (PhoneEvent_t4294543246), -1, sizeof(PhoneEvent_t4294543246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1912[1] = 
{
	PhoneEvent_t4294543246_StaticFields::get_offset_of_Descriptor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (PhoneEvent_t1948414762), -1, sizeof(PhoneEvent_t1948414762_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1913[25] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	PhoneEvent_t1948414762_StaticFields::get_offset_of_defaultInstance_7(),
	PhoneEvent_t1948414762_StaticFields::get_offset_of__phoneEventFieldNames_8(),
	PhoneEvent_t1948414762_StaticFields::get_offset_of__phoneEventFieldTags_9(),
	PhoneEvent_t1948414762::get_offset_of_hasType_10(),
	PhoneEvent_t1948414762::get_offset_of_type__11(),
	PhoneEvent_t1948414762::get_offset_of_hasMotionEvent_12(),
	PhoneEvent_t1948414762::get_offset_of_motionEvent__13(),
	PhoneEvent_t1948414762::get_offset_of_hasGyroscopeEvent_14(),
	PhoneEvent_t1948414762::get_offset_of_gyroscopeEvent__15(),
	PhoneEvent_t1948414762::get_offset_of_hasAccelerometerEvent_16(),
	PhoneEvent_t1948414762::get_offset_of_accelerometerEvent__17(),
	PhoneEvent_t1948414762::get_offset_of_hasDepthMapEvent_18(),
	PhoneEvent_t1948414762::get_offset_of_depthMapEvent__19(),
	PhoneEvent_t1948414762::get_offset_of_hasOrientationEvent_20(),
	PhoneEvent_t1948414762::get_offset_of_orientationEvent__21(),
	PhoneEvent_t1948414762::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t1948414762::get_offset_of_keyEvent__23(),
	PhoneEvent_t1948414762::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (Types_t1856670140), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (Type_t923828173)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1915[7] = 
{
	Type_t923828173::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (MotionEvent_t2659645585), -1, sizeof(MotionEvent_t2659645585_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1916[12] = 
{
	0,
	0,
	0,
	MotionEvent_t2659645585_StaticFields::get_offset_of_defaultInstance_3(),
	MotionEvent_t2659645585_StaticFields::get_offset_of__motionEventFieldNames_4(),
	MotionEvent_t2659645585_StaticFields::get_offset_of__motionEventFieldTags_5(),
	MotionEvent_t2659645585::get_offset_of_hasTimestamp_6(),
	MotionEvent_t2659645585::get_offset_of_timestamp__7(),
	MotionEvent_t2659645585::get_offset_of_hasAction_8(),
	MotionEvent_t2659645585::get_offset_of_action__9(),
	MotionEvent_t2659645585::get_offset_of_pointers__10(),
	MotionEvent_t2659645585::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (Types_t1994437979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (Pointer_t190725481), -1, sizeof(Pointer_t190725481_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1918[13] = 
{
	0,
	0,
	0,
	Pointer_t190725481_StaticFields::get_offset_of_defaultInstance_3(),
	Pointer_t190725481_StaticFields::get_offset_of__pointerFieldNames_4(),
	Pointer_t190725481_StaticFields::get_offset_of__pointerFieldTags_5(),
	Pointer_t190725481::get_offset_of_hasId_6(),
	Pointer_t190725481::get_offset_of_id__7(),
	Pointer_t190725481::get_offset_of_hasNormalizedX_8(),
	Pointer_t190725481::get_offset_of_normalizedX__9(),
	Pointer_t190725481::get_offset_of_hasNormalizedY_10(),
	Pointer_t190725481::get_offset_of_normalizedY__11(),
	Pointer_t190725481::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (Builder_t1865844949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1919[2] = 
{
	Builder_t1865844949::get_offset_of_resultIsReadOnly_0(),
	Builder_t1865844949::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (Builder_t2183502845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1920[2] = 
{
	Builder_t2183502845::get_offset_of_resultIsReadOnly_0(),
	Builder_t2183502845::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (GyroscopeEvent_t2921203048), -1, sizeof(GyroscopeEvent_t2921203048_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1921[16] = 
{
	0,
	0,
	0,
	0,
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of_defaultInstance_4(),
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of__gyroscopeEventFieldNames_5(),
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of__gyroscopeEventFieldTags_6(),
	GyroscopeEvent_t2921203048::get_offset_of_hasTimestamp_7(),
	GyroscopeEvent_t2921203048::get_offset_of_timestamp__8(),
	GyroscopeEvent_t2921203048::get_offset_of_hasX_9(),
	GyroscopeEvent_t2921203048::get_offset_of_x__10(),
	GyroscopeEvent_t2921203048::get_offset_of_hasY_11(),
	GyroscopeEvent_t2921203048::get_offset_of_y__12(),
	GyroscopeEvent_t2921203048::get_offset_of_hasZ_13(),
	GyroscopeEvent_t2921203048::get_offset_of_z__14(),
	GyroscopeEvent_t2921203048::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (Builder_t3312050644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1922[2] = 
{
	Builder_t3312050644::get_offset_of_resultIsReadOnly_0(),
	Builder_t3312050644::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (AccelerometerEvent_t148610782), -1, sizeof(AccelerometerEvent_t148610782_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1923[16] = 
{
	0,
	0,
	0,
	0,
	AccelerometerEvent_t148610782_StaticFields::get_offset_of_defaultInstance_4(),
	AccelerometerEvent_t148610782_StaticFields::get_offset_of__accelerometerEventFieldNames_5(),
	AccelerometerEvent_t148610782_StaticFields::get_offset_of__accelerometerEventFieldTags_6(),
	AccelerometerEvent_t148610782::get_offset_of_hasTimestamp_7(),
	AccelerometerEvent_t148610782::get_offset_of_timestamp__8(),
	AccelerometerEvent_t148610782::get_offset_of_hasX_9(),
	AccelerometerEvent_t148610782::get_offset_of_x__10(),
	AccelerometerEvent_t148610782::get_offset_of_hasY_11(),
	AccelerometerEvent_t148610782::get_offset_of_y__12(),
	AccelerometerEvent_t148610782::get_offset_of_hasZ_13(),
	AccelerometerEvent_t148610782::get_offset_of_z__14(),
	AccelerometerEvent_t148610782::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (Builder_t1359586634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1924[2] = 
{
	Builder_t1359586634::get_offset_of_resultIsReadOnly_0(),
	Builder_t1359586634::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (DepthMapEvent_t3758135118), -1, sizeof(DepthMapEvent_t3758135118_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1925[16] = 
{
	0,
	0,
	0,
	0,
	DepthMapEvent_t3758135118_StaticFields::get_offset_of_defaultInstance_4(),
	DepthMapEvent_t3758135118_StaticFields::get_offset_of__depthMapEventFieldNames_5(),
	DepthMapEvent_t3758135118_StaticFields::get_offset_of__depthMapEventFieldTags_6(),
	DepthMapEvent_t3758135118::get_offset_of_hasTimestamp_7(),
	DepthMapEvent_t3758135118::get_offset_of_timestamp__8(),
	DepthMapEvent_t3758135118::get_offset_of_hasWidth_9(),
	DepthMapEvent_t3758135118::get_offset_of_width__10(),
	DepthMapEvent_t3758135118::get_offset_of_hasHeight_11(),
	DepthMapEvent_t3758135118::get_offset_of_height__12(),
	DepthMapEvent_t3758135118::get_offset_of_zDistancesMemoizedSerializedSize_13(),
	DepthMapEvent_t3758135118::get_offset_of_zDistances__14(),
	DepthMapEvent_t3758135118::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (Builder_t3987156410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1926[2] = 
{
	Builder_t3987156410::get_offset_of_resultIsReadOnly_0(),
	Builder_t3987156410::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (OrientationEvent_t3825228477), -1, sizeof(OrientationEvent_t3825228477_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1927[19] = 
{
	0,
	0,
	0,
	0,
	0,
	OrientationEvent_t3825228477_StaticFields::get_offset_of_defaultInstance_5(),
	OrientationEvent_t3825228477_StaticFields::get_offset_of__orientationEventFieldNames_6(),
	OrientationEvent_t3825228477_StaticFields::get_offset_of__orientationEventFieldTags_7(),
	OrientationEvent_t3825228477::get_offset_of_hasTimestamp_8(),
	OrientationEvent_t3825228477::get_offset_of_timestamp__9(),
	OrientationEvent_t3825228477::get_offset_of_hasX_10(),
	OrientationEvent_t3825228477::get_offset_of_x__11(),
	OrientationEvent_t3825228477::get_offset_of_hasY_12(),
	OrientationEvent_t3825228477::get_offset_of_y__13(),
	OrientationEvent_t3825228477::get_offset_of_hasZ_14(),
	OrientationEvent_t3825228477::get_offset_of_z__15(),
	OrientationEvent_t3825228477::get_offset_of_hasW_16(),
	OrientationEvent_t3825228477::get_offset_of_w__17(),
	OrientationEvent_t3825228477::get_offset_of_memoizedSerializedSize_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (Builder_t3974107689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1928[2] = 
{
	Builder_t3974107689::get_offset_of_resultIsReadOnly_0(),
	Builder_t3974107689::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (KeyEvent_t2095740558), -1, sizeof(KeyEvent_t2095740558_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1929[10] = 
{
	0,
	0,
	KeyEvent_t2095740558_StaticFields::get_offset_of_defaultInstance_2(),
	KeyEvent_t2095740558_StaticFields::get_offset_of__keyEventFieldNames_3(),
	KeyEvent_t2095740558_StaticFields::get_offset_of__keyEventFieldTags_4(),
	KeyEvent_t2095740558::get_offset_of_hasAction_5(),
	KeyEvent_t2095740558::get_offset_of_action__6(),
	KeyEvent_t2095740558::get_offset_of_hasCode_7(),
	KeyEvent_t2095740558::get_offset_of_code__8(),
	KeyEvent_t2095740558::get_offset_of_memoizedSerializedSize_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (Builder_t1063111930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1930[2] = 
{
	Builder_t1063111930::get_offset_of_resultIsReadOnly_0(),
	Builder_t1063111930::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (Builder_t2932595742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1931[2] = 
{
	Builder_t2932595742::get_offset_of_resultIsReadOnly_0(),
	Builder_t2932595742::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (GazeInputModule_t2064533489), -1, sizeof(GazeInputModule_t2064533489_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1932[6] = 
{
	0,
	GazeInputModule_t2064533489::get_offset_of_vrModeOnly_7(),
	GazeInputModule_t2064533489_StaticFields::get_offset_of_gazePointer_8(),
	GazeInputModule_t2064533489::get_offset_of_pointerData_9(),
	GazeInputModule_t2064533489::get_offset_of_lastHeadPose_10(),
	GazeInputModule_t2064533489::get_offset_of_isActive_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (GvrViewer_t671349045), -1, sizeof(GvrViewer_t671349045_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1933[19] = 
{
	0,
	GvrViewer_t671349045_StaticFields::get_offset_of_instance_3(),
	GvrViewer_t671349045_StaticFields::get_offset_of_currentController_4(),
	GvrViewer_t671349045_StaticFields::get_offset_of_currentMainCamera_5(),
	GvrViewer_t671349045::get_offset_of_vrModeEnabled_6(),
	GvrViewer_t671349045::get_offset_of_distortionCorrectionEnabled_7(),
	GvrViewer_t671349045::get_offset_of_neckModelScale_8(),
	GvrViewer_t671349045_StaticFields::get_offset_of_device_9(),
	GvrViewer_t671349045::get_offset_of_stereoScreenScale_10(),
	GvrViewer_t671349045_StaticFields::get_offset_of_stereoScreen_11(),
	GvrViewer_t671349045::get_offset_of_defaultComfortableViewingRange_12(),
	GvrViewer_t671349045::get_offset_of_DefaultDeviceProfile_13(),
	GvrViewer_t671349045::get_offset_of_updatedToFrame_14(),
	GvrViewer_t671349045::get_offset_of_OnStereoScreenChanged_15(),
	GvrViewer_t671349045::get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_16(),
	GvrViewer_t671349045::get_offset_of_U3CTriggeredU3Ek__BackingField_17(),
	GvrViewer_t671349045::get_offset_of_U3CTiltedU3Ek__BackingField_18(),
	GvrViewer_t671349045::get_offset_of_U3CProfileChangedU3Ek__BackingField_19(),
	GvrViewer_t671349045::get_offset_of_U3CBackButtonPressedU3Ek__BackingField_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (Eye_t643876407)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1934[4] = 
{
	Eye_t643876407::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (Distortion_t2578366935)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1935[3] = 
{
	Distortion_t2578366935::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (StereoScreenChangeDelegate_t2614477363), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (Pose3D_t2396367586), -1, sizeof(Pose3D_t2396367586_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1937[4] = 
{
	Pose3D_t2396367586_StaticFields::get_offset_of_flipZ_0(),
	Pose3D_t2396367586::get_offset_of_U3CPositionU3Ek__BackingField_1(),
	Pose3D_t2396367586::get_offset_of_U3COrientationU3Ek__BackingField_2(),
	Pose3D_t2396367586::get_offset_of_U3CMatrixU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (MutablePose3D_t1273683304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (GvrGaze_t2073985384), -1, sizeof(GvrGaze_t2073985384_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1939[10] = 
{
	GvrGaze_t2073985384::get_offset_of_pointerObject_2(),
	GvrGaze_t2073985384::get_offset_of_pointer_3(),
	GvrGaze_t2073985384::get_offset_of_mask_4(),
	GvrGaze_t2073985384::get_offset_of_currentTarget_5(),
	GvrGaze_t2073985384::get_offset_of_currentGazeObject_6(),
	GvrGaze_t2073985384::get_offset_of_lastIntersectPosition_7(),
	GvrGaze_t2073985384::get_offset_of_isTriggered_8(),
	GvrGaze_t2073985384::get_offset_of_U3CcamU3Ek__BackingField_9(),
	GvrGaze_t2073985384_StaticFields::get_offset_of_U3CU3Ef__amU24cache8_10(),
	GvrGaze_t2073985384_StaticFields::get_offset_of_U3CU3Ef__amU24cache9_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (GvrReticle_t4275820913), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[14] = 
{
	0,
	0,
	0,
	0,
	0,
	GvrReticle_t4275820913::get_offset_of_reticleSegments_7(),
	GvrReticle_t4275820913::get_offset_of_reticleGrowthSpeed_8(),
	GvrReticle_t4275820913::get_offset_of_materialComp_9(),
	GvrReticle_t4275820913::get_offset_of_targetObj_10(),
	GvrReticle_t4275820913::get_offset_of_reticleInnerAngle_11(),
	GvrReticle_t4275820913::get_offset_of_reticleOuterAngle_12(),
	GvrReticle_t4275820913::get_offset_of_reticleDistanceInMeters_13(),
	GvrReticle_t4275820913::get_offset_of_reticleInnerDiameter_14(),
	GvrReticle_t4275820913::get_offset_of_reticleOuterDiameter_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (GvrFPS_t2145111206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1943[6] = 
{
	0,
	0,
	0,
	GvrFPS_t2145111206::get_offset_of_textField_5(),
	GvrFPS_t2145111206::get_offset_of_fps_6(),
	GvrFPS_t2145111206::get_offset_of_cam_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (GvrIntent_t304217535), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (Networking_t1515242260), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1945[3] = 
{
	Networking_t1515242260::get_offset_of_frames_2(),
	Networking_t1515242260::get_offset_of_refreshInterval_3(),
	Networking_t1515242260::get_offset_of_count_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (U3CScreenshotEncodeU3Ec__Iterator2_t497591906), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1946[4] = 
{
	U3CScreenshotEncodeU3Ec__Iterator2_t497591906::get_offset_of_U3CtextureU3E__0_0(),
	U3CScreenshotEncodeU3Ec__Iterator2_t497591906::get_offset_of_U3CbytesU3E__1_1(),
	U3CScreenshotEncodeU3Ec__Iterator2_t497591906::get_offset_of_U24PC_2(),
	U3CScreenshotEncodeU3Ec__Iterator2_t497591906::get_offset_of_U24current_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (ByteOrder_t422296044)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1947[3] = 
{
	ByteOrder_t422296044::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (CloseEventArgs_t2470319931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1948[2] = 
{
	CloseEventArgs_t2470319931::get_offset_of__clean_1(),
	CloseEventArgs_t2470319931::get_offset_of__payloadData_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (CloseStatusCode_t3936110621)+ sizeof (Il2CppObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1949[14] = 
{
	CloseStatusCode_t3936110621::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (CompressionMethod_t2226596781)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1950[3] = 
{
	CompressionMethod_t2226596781::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (ErrorEventArgs_t424195371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1951[2] = 
{
	ErrorEventArgs_t424195371::get_offset_of__exception_1(),
	ErrorEventArgs_t424195371::get_offset_of__message_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (Ext_t3262160039), -1, sizeof(Ext_t3262160039_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1952[4] = 
{
	0,
	Ext_t3262160039_StaticFields::get_offset_of__last_1(),
	Ext_t3262160039_StaticFields::get_offset_of__retry_2(),
	Ext_t3262160039_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { sizeof (U3CSplitHeaderValueU3Ec__Iterator3_t3710267827), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1953[13] = 
{
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_value_0(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3ClenU3E__0_1(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_separators_2(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3CsepsU3E__1_3(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3CbuffU3E__2_4(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3CescapedU3E__3_5(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3CquotedU3E__4_6(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3CiU3E__5_7(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3CcU3E__6_8(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U24PC_9(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U24current_10(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3CU24U3Evalue_11(),
	U3CSplitHeaderValueU3Ec__Iterator3_t3710267827::get_offset_of_U3CU24U3Eseparators_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (U3CContainsTwiceU3Ec__AnonStoreyC_t3299461620), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1954[3] = 
{
	U3CContainsTwiceU3Ec__AnonStoreyC_t3299461620::get_offset_of_len_0(),
	U3CContainsTwiceU3Ec__AnonStoreyC_t3299461620::get_offset_of_values_1(),
	U3CContainsTwiceU3Ec__AnonStoreyC_t3299461620::get_offset_of_contains_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1955[7] = 
{
	U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490::get_offset_of_source_0(),
	U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490::get_offset_of_completed_1(),
	U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490::get_offset_of_destination_2(),
	U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490::get_offset_of_buff_3(),
	U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490::get_offset_of_bufferLength_4(),
	U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490::get_offset_of_callback_5(),
	U3CCopyToAsyncU3Ec__AnonStoreyD_t3710281490::get_offset_of_error_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1956[8] = 
{
	U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834::get_offset_of_stream_0(),
	U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834::get_offset_of_retry_1(),
	U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834::get_offset_of_buff_2(),
	U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834::get_offset_of_offset_3(),
	U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834::get_offset_of_length_4(),
	U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834::get_offset_of_callback_5(),
	U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834::get_offset_of_completed_6(),
	U3CReadBytesAsyncU3Ec__AnonStoreyE_t99258834::get_offset_of_error_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1957[8] = 
{
	U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835::get_offset_of_bufferLength_0(),
	U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835::get_offset_of_stream_1(),
	U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835::get_offset_of_buff_2(),
	U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835::get_offset_of_dest_3(),
	U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835::get_offset_of_retry_4(),
	U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835::get_offset_of_read_5(),
	U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835::get_offset_of_completed_6(),
	U3CReadBytesAsyncU3Ec__AnonStoreyF_t99258835::get_offset_of_error_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (U3CReadBytesAsyncU3Ec__AnonStorey10_t2095674895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1958[2] = 
{
	U3CReadBytesAsyncU3Ec__AnonStorey10_t2095674895::get_offset_of_len_0(),
	U3CReadBytesAsyncU3Ec__AnonStorey10_t2095674895::get_offset_of_U3CU3Ef__refU2415_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { sizeof (U3CWriteBytesAsyncU3Ec__AnonStorey11_t366640406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1959[3] = 
{
	U3CWriteBytesAsyncU3Ec__AnonStorey11_t366640406::get_offset_of_completed_0(),
	U3CWriteBytesAsyncU3Ec__AnonStorey11_t366640406::get_offset_of_input_1(),
	U3CWriteBytesAsyncU3Ec__AnonStorey11_t366640406::get_offset_of_error_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1960[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { sizeof (Fin_t3262160529)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1961[3] = 
{
	Fin_t3262160529::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (HttpBase_t1712924533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1962[5] = 
{
	0,
	0,
	HttpBase_t1712924533::get_offset_of__headers_2(),
	HttpBase_t1712924533::get_offset_of__version_3(),
	HttpBase_t1712924533::get_offset_of_EntityBodyData_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (U3CreadHeadersU3Ec__AnonStorey13_t2643480234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1963[2] = 
{
	U3CreadHeadersU3Ec__AnonStorey13_t2643480234::get_offset_of_buff_0(),
	U3CreadHeadersU3Ec__AnonStorey13_t2643480234::get_offset_of_cnt_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1964[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (HttpRequest_t1080673901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1965[4] = 
{
	HttpRequest_t1080673901::get_offset_of__method_5(),
	HttpRequest_t1080673901::get_offset_of__uri_6(),
	HttpRequest_t1080673901::get_offset_of__websocketRequest_7(),
	HttpRequest_t1080673901::get_offset_of__websocketRequestSet_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { sizeof (HttpResponse_t273810277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1966[2] = 
{
	HttpResponse_t273810277::get_offset_of__code_5(),
	HttpResponse_t273810277::get_offset_of__reason_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { sizeof (LogData_t3968197908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1967[4] = 
{
	LogData_t3968197908::get_offset_of__caller_0(),
	LogData_t3968197908::get_offset_of__date_1(),
	LogData_t3968197908::get_offset_of__level_2(),
	LogData_t3968197908::get_offset_of__message_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (LogLevel_t3842284188)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1968[7] = 
{
	LogLevel_t3842284188::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (Logger_t3695440972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1969[4] = 
{
	Logger_t3695440972::get_offset_of__file_0(),
	Logger_t3695440972::get_offset_of__level_1(),
	Logger_t3695440972::get_offset_of__output_2(),
	Logger_t3695440972::get_offset_of__sync_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (Mask_t3422653544)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1970[3] = 
{
	Mask_t3422653544::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (MessageEventArgs_t36945740), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1971[4] = 
{
	MessageEventArgs_t36945740::get_offset_of__data_1(),
	MessageEventArgs_t36945740::get_offset_of__dataSet_2(),
	MessageEventArgs_t36945740::get_offset_of__opcode_3(),
	MessageEventArgs_t36945740::get_offset_of__rawData_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (AuthenticationBase_t1650711563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1972[2] = 
{
	AuthenticationBase_t1650711563::get_offset_of__scheme_0(),
	AuthenticationBase_t1650711563::get_offset_of_Parameters_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (AuthenticationChallenge_t1782907061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (AuthenticationResponse_t2112712571), -1, sizeof(AuthenticationResponse_t2112712571_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1974[2] = 
{
	AuthenticationResponse_t2112712571::get_offset_of__nonceCount_2(),
	AuthenticationResponse_t2112712571_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (AuthenticationSchemes_t3190130368)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1975[5] = 
{
	AuthenticationSchemes_t3190130368::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { sizeof (Chunk_t1399190359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1976[2] = 
{
	Chunk_t1399190359::get_offset_of__data_0(),
	Chunk_t1399190359::get_offset_of__offset_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (ChunkStream_t4213968439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1977[9] = 
{
	ChunkStream_t4213968439::get_offset_of__chunkRead_0(),
	ChunkStream_t4213968439::get_offset_of__chunkSize_1(),
	ChunkStream_t4213968439::get_offset_of__chunks_2(),
	ChunkStream_t4213968439::get_offset_of__gotIt_3(),
	ChunkStream_t4213968439::get_offset_of__headers_4(),
	ChunkStream_t4213968439::get_offset_of__saved_5(),
	ChunkStream_t4213968439::get_offset_of__sawCr_6(),
	ChunkStream_t4213968439::get_offset_of__state_7(),
	ChunkStream_t4213968439::get_offset_of__trailerState_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (ChunkedRequestStream_t849747493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1978[5] = 
{
	0,
	ChunkedRequestStream_t849747493::get_offset_of__context_8(),
	ChunkedRequestStream_t849747493::get_offset_of__decoder_9(),
	ChunkedRequestStream_t849747493::get_offset_of__disposed_10(),
	ChunkedRequestStream_t849747493::get_offset_of__noMoreData_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (ClientSslConfiguration_t224487639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1979[2] = 
{
	ClientSslConfiguration_t224487639::get_offset_of__certs_6(),
	ClientSslConfiguration_t224487639::get_offset_of__host_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (Cookie_t2077085446), -1, sizeof(Cookie_t2077085446_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1980[17] = 
{
	Cookie_t2077085446::get_offset_of__comment_0(),
	Cookie_t2077085446::get_offset_of__commentUri_1(),
	Cookie_t2077085446::get_offset_of__discard_2(),
	Cookie_t2077085446::get_offset_of__domain_3(),
	Cookie_t2077085446::get_offset_of__expires_4(),
	Cookie_t2077085446::get_offset_of__httpOnly_5(),
	Cookie_t2077085446::get_offset_of__name_6(),
	Cookie_t2077085446::get_offset_of__path_7(),
	Cookie_t2077085446::get_offset_of__port_8(),
	Cookie_t2077085446::get_offset_of__ports_9(),
	Cookie_t2077085446_StaticFields::get_offset_of__reservedCharsForName_10(),
	Cookie_t2077085446_StaticFields::get_offset_of__reservedCharsForValue_11(),
	Cookie_t2077085446::get_offset_of__secure_12(),
	Cookie_t2077085446::get_offset_of__timestamp_13(),
	Cookie_t2077085446::get_offset_of__value_14(),
	Cookie_t2077085446::get_offset_of__version_15(),
	Cookie_t2077085446::get_offset_of_U3CExactDomainU3Ek__BackingField_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { sizeof (CookieCollection_t1136277956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1981[2] = 
{
	CookieCollection_t1136277956::get_offset_of__list_0(),
	CookieCollection_t1136277956::get_offset_of__sync_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { sizeof (CookieException_t967178805), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { sizeof (EndPointListener_t3188089579), -1, sizeof(EndPointListener_t3188089579_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1983[10] = 
{
	EndPointListener_t3188089579::get_offset_of__all_0(),
	EndPointListener_t3188089579_StaticFields::get_offset_of__defaultCertFolderPath_1(),
	EndPointListener_t3188089579::get_offset_of__endpoint_2(),
	EndPointListener_t3188089579::get_offset_of__prefixes_3(),
	EndPointListener_t3188089579::get_offset_of__secure_4(),
	EndPointListener_t3188089579::get_offset_of__socket_5(),
	EndPointListener_t3188089579::get_offset_of__sslConfig_6(),
	EndPointListener_t3188089579::get_offset_of__unhandled_7(),
	EndPointListener_t3188089579::get_offset_of__unregistered_8(),
	EndPointListener_t3188089579::get_offset_of__unregisteredSync_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (EndPointManager_t3612541026), -1, sizeof(EndPointManager_t3612541026_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1984[1] = 
{
	EndPointManager_t3612541026_StaticFields::get_offset_of__endpoints_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (HttpBasicIdentity_t3688512078), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1985[1] = 
{
	HttpBasicIdentity_t3688512078::get_offset_of__password_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (HttpConnection_t602292776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1986[21] = 
{
	0,
	HttpConnection_t602292776::get_offset_of__buffer_1(),
	HttpConnection_t602292776::get_offset_of__context_2(),
	HttpConnection_t602292776::get_offset_of__contextRegistered_3(),
	HttpConnection_t602292776::get_offset_of__currentLine_4(),
	HttpConnection_t602292776::get_offset_of__inputState_5(),
	HttpConnection_t602292776::get_offset_of__inputStream_6(),
	HttpConnection_t602292776::get_offset_of__lastListener_7(),
	HttpConnection_t602292776::get_offset_of__lineState_8(),
	HttpConnection_t602292776::get_offset_of__listener_9(),
	HttpConnection_t602292776::get_offset_of__outputStream_10(),
	HttpConnection_t602292776::get_offset_of__position_11(),
	HttpConnection_t602292776::get_offset_of__requestBuffer_12(),
	HttpConnection_t602292776::get_offset_of__reuses_13(),
	HttpConnection_t602292776::get_offset_of__secure_14(),
	HttpConnection_t602292776::get_offset_of__socket_15(),
	HttpConnection_t602292776::get_offset_of__stream_16(),
	HttpConnection_t602292776::get_offset_of__sync_17(),
	HttpConnection_t602292776::get_offset_of__timeout_18(),
	HttpConnection_t602292776::get_offset_of__timeoutCanceled_19(),
	HttpConnection_t602292776::get_offset_of__timer_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { sizeof (HttpDigestIdentity_t2083794924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1987[1] = 
{
	HttpDigestIdentity_t2083794924::get_offset_of__parameters_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (HttpHeaderInfo_t3355144229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1988[2] = 
{
	HttpHeaderInfo_t3355144229::get_offset_of__name_0(),
	HttpHeaderInfo_t3355144229::get_offset_of__type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (HttpHeaderType_t3355482801)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1989[8] = 
{
	HttpHeaderType_t3355482801::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (HttpListener_t398944510), -1, sizeof(HttpListener_t398944510_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1990[21] = 
{
	HttpListener_t398944510::get_offset_of__authSchemes_0(),
	HttpListener_t398944510::get_offset_of__authSchemeSelector_1(),
	HttpListener_t398944510::get_offset_of__certFolderPath_2(),
	HttpListener_t398944510::get_offset_of__connections_3(),
	HttpListener_t398944510::get_offset_of__connectionsSync_4(),
	HttpListener_t398944510::get_offset_of__ctxQueue_5(),
	HttpListener_t398944510::get_offset_of__ctxQueueSync_6(),
	HttpListener_t398944510::get_offset_of__ctxRegistry_7(),
	HttpListener_t398944510::get_offset_of__ctxRegistrySync_8(),
	HttpListener_t398944510_StaticFields::get_offset_of__defaultRealm_9(),
	HttpListener_t398944510::get_offset_of__disposed_10(),
	HttpListener_t398944510::get_offset_of__ignoreWriteExceptions_11(),
	HttpListener_t398944510::get_offset_of__listening_12(),
	HttpListener_t398944510::get_offset_of__logger_13(),
	HttpListener_t398944510::get_offset_of__prefixes_14(),
	HttpListener_t398944510::get_offset_of__realm_15(),
	HttpListener_t398944510::get_offset_of__reuseAddress_16(),
	HttpListener_t398944510::get_offset_of__sslConfig_17(),
	HttpListener_t398944510::get_offset_of__userCredFinder_18(),
	HttpListener_t398944510::get_offset_of__waitQueue_19(),
	HttpListener_t398944510::get_offset_of__waitQueueSync_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (HttpListenerAsyncResult_t183645863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1991[10] = 
{
	HttpListenerAsyncResult_t183645863::get_offset_of__callback_0(),
	HttpListenerAsyncResult_t183645863::get_offset_of__completed_1(),
	HttpListenerAsyncResult_t183645863::get_offset_of__context_2(),
	HttpListenerAsyncResult_t183645863::get_offset_of__endCalled_3(),
	HttpListenerAsyncResult_t183645863::get_offset_of__exception_4(),
	HttpListenerAsyncResult_t183645863::get_offset_of__inGet_5(),
	HttpListenerAsyncResult_t183645863::get_offset_of__state_6(),
	HttpListenerAsyncResult_t183645863::get_offset_of__sync_7(),
	HttpListenerAsyncResult_t183645863::get_offset_of__syncCompleted_8(),
	HttpListenerAsyncResult_t183645863::get_offset_of__waitHandle_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (U3CcompleteU3Ec__AnonStorey15_t216851188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1992[2] = 
{
	U3CcompleteU3Ec__AnonStorey15_t216851188::get_offset_of_callback_0(),
	U3CcompleteU3Ec__AnonStorey15_t216851188::get_offset_of_asyncResult_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (HttpListenerContext_t3744659101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1993[8] = 
{
	HttpListenerContext_t3744659101::get_offset_of__connection_0(),
	HttpListenerContext_t3744659101::get_offset_of__error_1(),
	HttpListenerContext_t3744659101::get_offset_of__errorStatus_2(),
	HttpListenerContext_t3744659101::get_offset_of__listener_3(),
	HttpListenerContext_t3744659101::get_offset_of__request_4(),
	HttpListenerContext_t3744659101::get_offset_of__response_5(),
	HttpListenerContext_t3744659101::get_offset_of__user_6(),
	HttpListenerContext_t3744659101::get_offset_of__websocketContext_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (HttpListenerException_t2442008381), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (HttpListenerPrefix_t3906063792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1995[7] = 
{
	HttpListenerPrefix_t3906063792::get_offset_of__host_0(),
	HttpListenerPrefix_t3906063792::get_offset_of__listener_1(),
	HttpListenerPrefix_t3906063792::get_offset_of__original_2(),
	HttpListenerPrefix_t3906063792::get_offset_of__path_3(),
	HttpListenerPrefix_t3906063792::get_offset_of__port_4(),
	HttpListenerPrefix_t3906063792::get_offset_of__prefix_5(),
	HttpListenerPrefix_t3906063792::get_offset_of__secure_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (HttpListenerPrefixCollection_t1379363822), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1996[2] = 
{
	HttpListenerPrefixCollection_t1379363822::get_offset_of__listener_0(),
	HttpListenerPrefixCollection_t1379363822::get_offset_of__prefixes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (HttpListenerRequest_t3888821117), -1, sizeof(HttpListenerRequest_t3888821117_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1997[22] = 
{
	HttpListenerRequest_t3888821117_StaticFields::get_offset_of__100continue_0(),
	HttpListenerRequest_t3888821117::get_offset_of__acceptTypes_1(),
	HttpListenerRequest_t3888821117::get_offset_of__chunked_2(),
	HttpListenerRequest_t3888821117::get_offset_of__contentEncoding_3(),
	HttpListenerRequest_t3888821117::get_offset_of__contentLength_4(),
	HttpListenerRequest_t3888821117::get_offset_of__contentLengthSet_5(),
	HttpListenerRequest_t3888821117::get_offset_of__context_6(),
	HttpListenerRequest_t3888821117::get_offset_of__cookies_7(),
	HttpListenerRequest_t3888821117::get_offset_of__headers_8(),
	HttpListenerRequest_t3888821117::get_offset_of__identifier_9(),
	HttpListenerRequest_t3888821117::get_offset_of__inputStream_10(),
	HttpListenerRequest_t3888821117::get_offset_of__keepAlive_11(),
	HttpListenerRequest_t3888821117::get_offset_of__keepAliveSet_12(),
	HttpListenerRequest_t3888821117::get_offset_of__method_13(),
	HttpListenerRequest_t3888821117::get_offset_of__queryString_14(),
	HttpListenerRequest_t3888821117::get_offset_of__referer_15(),
	HttpListenerRequest_t3888821117::get_offset_of__uri_16(),
	HttpListenerRequest_t3888821117::get_offset_of__url_17(),
	HttpListenerRequest_t3888821117::get_offset_of__userLanguages_18(),
	HttpListenerRequest_t3888821117::get_offset_of__version_19(),
	HttpListenerRequest_t3888821117::get_offset_of__websocketRequest_20(),
	HttpListenerRequest_t3888821117::get_offset_of__websocketRequestSet_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (HttpListenerResponse_t1992878431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1998[16] = 
{
	HttpListenerResponse_t1992878431::get_offset_of__closeConnection_0(),
	HttpListenerResponse_t1992878431::get_offset_of__contentEncoding_1(),
	HttpListenerResponse_t1992878431::get_offset_of__contentLength_2(),
	HttpListenerResponse_t1992878431::get_offset_of__contentType_3(),
	HttpListenerResponse_t1992878431::get_offset_of__context_4(),
	HttpListenerResponse_t1992878431::get_offset_of__cookies_5(),
	HttpListenerResponse_t1992878431::get_offset_of__disposed_6(),
	HttpListenerResponse_t1992878431::get_offset_of__headers_7(),
	HttpListenerResponse_t1992878431::get_offset_of__headersSent_8(),
	HttpListenerResponse_t1992878431::get_offset_of__keepAlive_9(),
	HttpListenerResponse_t1992878431::get_offset_of__location_10(),
	HttpListenerResponse_t1992878431::get_offset_of__outputStream_11(),
	HttpListenerResponse_t1992878431::get_offset_of__sendChunked_12(),
	HttpListenerResponse_t1992878431::get_offset_of__statusCode_13(),
	HttpListenerResponse_t1992878431::get_offset_of__statusDescription_14(),
	HttpListenerResponse_t1992878431::get_offset_of__version_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (U3CfindCookieU3Ec__Iterator4_t2190951134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1999[10] = 
{
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_cookie_0(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U3CnameU3E__0_1(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U3CdomainU3E__1_2(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U3CpathU3E__2_3(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U3CU24s_78U3E__3_4(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U3CcU3E__4_5(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U24PC_6(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U24current_7(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U3CU24U3Ecookie_8(),
	U3CfindCookieU3Ec__Iterator4_t2190951134::get_offset_of_U3CU3Ef__this_9(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
