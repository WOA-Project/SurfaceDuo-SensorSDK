#include <windows.h>
#include <wdf.h>

#include "InternalSensorUtils.h"

HRESULT
InitPropVariantFromCLSIDArray_Flip(
    _In_reads_(size) GUID *members,
    _In_ ULONG size,
    _Out_ PROPVARIANT *ppropvar)
{
    ppropvar->vt = 0;

    ppropvar->bstrblobVal.pData = (BYTE *)CoTaskMemAlloc(sizeof(GUID) * size);

    if (ppropvar->bstrblobVal.pData == NULL)
    {
        return E_OUTOFMEMORY;
    }

    ppropvar->vt = 0x1048;

    for (UINT32 i = 0; i < size; i++)
    {
        *(GUID *)(ppropvar->bstrblobVal.pData[sizeof(GUID) * i]) = members[i];
    }

    ppropvar->decVal.Lo32 = size;

    return S_OK;
}