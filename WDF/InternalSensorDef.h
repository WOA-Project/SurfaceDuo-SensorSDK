/*++

Module Name:

    InternalSensorsDef.h

Abstract:

    Internal Sensors definitions header file

--*/

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef __midl
#include <stdio.h>
#include <stdlib.h>
#include <initguid.h>
#include <propidl.h>
#include <propkeydef.h>
#include <devpropdef.h>
#include <propvarutil.h>
#endif

#include <winapifamily.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __midl

// {19d0d08a-f60a-4433-ba6d-824d5aa0ab2b}
DEFINE_PROPERTYKEY(PKEY_SensorData_ActivityId,
    0x19d0d08a, 0xf60a, 0x4433, 0xba, 0x6d, 0x82, 0x4d, 0x5a, 0xa0, 0xab, 0x2b, 1);

DEFINE_PROPERTYKEY(PKEY_SensorData_DetectedGesture,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 501);
DEFINE_PROPERTYKEY(PKEY_SensorData_DetectedGestureState,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 502);
DEFINE_PROPERTYKEY(PKEY_SensorData_GestureFold_ContributingPanel,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 503);
DEFINE_PROPERTYKEY(PKEY_SensorData_GestureFold_InitialAngle,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 504);
DEFINE_PROPERTYKEY(PKEY_SensorData_GestureFold_FinalAngle,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 505);
DEFINE_PROPERTYKEY(PKEY_SensorData_GestureFold_AngleIncreasing,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 506);
DEFINE_PROPERTYKEY(PKEY_SensorData_GestureThreshold_SubscribedGestures,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 507);

DEFINE_PROPERTYKEY(PKEY_SensorData_TwoPanelFolioHingeDevicePosture_Panel2Orientation,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 0x197);
DEFINE_PROPERTYKEY(PKEY_SensorData_TwoPanelFolioHingeDevicePosture_Panel1Orientation,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 0x196);
DEFINE_PROPERTYKEY(PKEY_SensorData_TwoPanelFolioHingeDevicePosture_Hinge2State,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 0x195);
DEFINE_PROPERTYKEY(PKEY_SensorData_TwoPanelFolioHingeDevicePosture_Hinge1State,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 0x194);
DEFINE_PROPERTYKEY(PKEY_SensorData_TwoPanelHingedDevicePosture_Panel2Orientation,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 0x193);
DEFINE_PROPERTYKEY(PKEY_SensorData_TwoPanelHingedDevicePosture_Panel1Orientation,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 0x192);
DEFINE_PROPERTYKEY(PKEY_SensorData_HingeState,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 0x191);

// {ba9f5fb0-086f-4d74-9ef6-595c39eb9f3f}
DEFINE_PROPERTYKEY(PKEY_Supported_PhysicalPostures,
    0xba9f5fb0, 0x086f, 0x4d74, 0x9e, 0xf6, 0x59, 0x5c, 0x39, 0xeb, 0x9f, 0x3f, 1);

// {f673fea4-9c5a-48bf-b0aa-3f9c07ba1343}
DEFINE_GUID(GUID_SensorType_TwoPanelFolioHingeDevicePosture, 0xf673fea4, 0x9c5a, 0x48bf, 0xb0, 0xaa, 0x3f, 0x9c, 0x07, 0xba, 0x13, 0x43);
// {0d49d945-fa83-4630-a22c-01387f906de6}
DEFINE_GUID(GUID_SensorType_TwoPanelHingedDevicePosture, 0x0d49d945, 0xfa83, 0x4630, 0xa2, 0x2c, 0x01, 0x38, 0x7f, 0x90, 0x6d, 0xe6);
// {c2965caf-d6cd-4b81-971b-1d05cb8891ec}
DEFINE_GUID(GUID_SensorType_GestureSensor, 0xc2965caf, 0xd6cd, 0x4b81, 0x97, 0x1b, 0x1d, 0x05, 0xcb, 0x88, 0x91, 0xec);
// {7c5f7377-f5b2-41d9-9e8f-f896ae224a82}
DEFINE_GUID(GUID_GestureSensor_HingeFold, 0x7c5f7377, 0xf5b2, 0x41d9, 0x9e, 0x8f, 0xf8, 0x96, 0xae, 0x22, 0x4a, 0x82);
// {05fa8752-0010-4617-9c5d-db6f68e13bbc}
DEFINE_GUID(GUID_GestureSensor_ChassisFlip, 0x05fa8752, 0x0010, 0x4617, 0x9c, 0x5d, 0xdb, 0x6f, 0x68, 0xe1, 0x3b, 0xbc);

// {c458f8a7-4ae8-4777-9607-2e9bdd65110a}
DEFINE_PROPERTYKEY(DEVPKEY_Sensor_SupportedGestures,
    0xc458f8a7, 0x4ae8, 0x4777, 0x96, 0x07, 0x2e, 0x9b, 0xdd, 0x65, 0x11, 0x0a, 0x1F4);

// {db7c5747-2127-4d1c-a62c-fbd713d97bb7}
//DEFINE_GUID(DEVPKEY_DevicePanel_Group,
//    0xdb7c5747, 0x2127, 0x4d1c, 0xa6, 0x2c, 0xfb, 0xd7, 0x13, 0xd9, 0x7b, 0xb7);

//DEVPKEY_Device_PanelId

// {f01cf460-c75f-4643-bfb0-9815e2ddbf0d}
//DEFINE_GUID(DEVPKEY_DevicePanel_JointTargetPanelId,
//    0xf01cf460, 0xc75f, 0x4643, 0xbf, 0xb0, 0x98, 0x15, 0xe2, 0xdd, 0xbf, 0x0d);

//DEVPKEY_DevicePanel_ContainerId
//DEVPKEY_DevicePanel_Side

#endif //__midl

typedef enum FOLD_TYPE_COUNT
{
    FoldTypeCount = 3,
} FOLD_TYPE_COUNT;

typedef enum FOLD_TYPE
{
    FoldType_NotDetected = 0x00000000,
    FoldType_Closing = 0x00000001,
    FoldType_Opening = 0x00000002,
    FoldType_Max = 1 << FoldTypeCount,

    FoldType_Force_Dword = 0xFFFFFFFF // Make sure the enum is 32bit
} FOLD_TYPE;

typedef enum GESTURE_STATE_COUNT
{
    GestureStateCount = 4,
} GESTURE_STATE_COUNT;

typedef enum GESTURE_STATE
{
    GestureState_Completed = 0x00000000,
    GestureState_Started = 0x00000001,
    GestureState_Cancelled = 0x00000002,
    GestureState_Unknown = 0x00000003,
    GestureState_Max = 1 << GestureStateCount,

    GestureState_Force_Dword = 0xFFFFFFFF // Make sure the enum is 32bit
} GESTURE_STATE;

typedef enum HINGE_STATE_COUNT
{
    HingeStateCount = 6,
} HINGE_STATE_COUNT;

typedef enum HINGE_STATE
{
    /* The hinge state is unknown. */
    HingeState_Unknown = 0x00000000,
    /* The device is closed. */
    HingeState_Closed = 0x00000001,
    /* The device is opened more than 180 degrees. */
    HingeState_Concave = 0x00000002,
    /* The device is opened 180 degrees. */
    HingeState_Flat = 0x00000003,
    /* The device is opened less than 180 degrees. */
    HingeState_Convex = 0x00000004,
    /* The device is fully opened. */
    HingeState_Full = 0x00000005,
    
    HingeState_Max = 1 << HingeStateCount,

    HingeState_Force_Dword = 0xFFFFFFFF // Make sure the enum is 32bit
} HINGE_STATE;

#ifdef __cplusplus
}
#endif