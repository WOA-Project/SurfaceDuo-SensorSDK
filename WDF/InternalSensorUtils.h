/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    InternalSensorsUtils.h

Abstract:

    This file contains utility functions for V2 Sensors

--*/

#if _MSC_VER > 1000
#pragma once
#endif

#include <SensorsStructures.h>
#include <SensorsCx.h>
#include <SensorsUtils.h>

#ifdef __cplusplus
extern "C" {
#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// Collection List Helper                                                    //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

HRESULT
InitPropVariantFromCLSIDArray_Flip(
    _In_reads_(size) GUID *members,
    _In_ ULONG size,
    _Out_ PROPVARIANT *ppropvar
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#ifdef __cplusplus
    }
#endif
