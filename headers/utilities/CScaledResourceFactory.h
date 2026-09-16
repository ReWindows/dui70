#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
class CScaledResourceFactory {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CScaledResourceFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAndScale@CScaledResourceFactory@@QEAAJPEAPEAUHBITMAP__@@@Z
    long LoadAndScale(HBITMAP__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScaledResourceFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScaledResourceFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResource@CScaledResourceFactory@@QEAAJPEAUHINSTANCE__@@PEBG@Z
    long SetResource(HINSTANCE__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CScaledResourceFactory@@SAJPEAUIWICImagingFactory@@PEAPEAV1@@Z
    static long s_CreateInstance(IWICImagingFactory *, CScaledResourceFactory * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureFactory@CScaledResourceFactory@@AEAAJXZ
    long _EnsureFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadAndScaleWIC@CScaledResourceFactory@@AEAAJPEAPEAUHBITMAP__@@@Z
    long _LoadAndScaleWIC(HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadUsingUSER@CScaledResourceFactory@@AEAAJPEAIAEBU_GUID@@PEAPEAX@Z
    long _LoadUsingUSER(unsigned int *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadUsingWIC@CScaledResourceFactory@@AEAAJPEAIAEBU_GUID@@PEAPEAX@Z
    long _LoadUsingWIC(unsigned int *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScaleSource@CScaledResourceFactory@@AEAAJPEAUIWICBitmapSource@@HHPEAPEAUHBITMAP__@@@Z
    long _ScaleSource(IWICBitmapSource *, int, int, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectFrameByDPI@CScaledResourceFactory@@AEAAJPEAUIWICBitmapDecoder@@PEAPEAUIWICBitmapFrameDecode@@PEAI@Z
    long _SelectFrameByDPI(IWICBitmapDecoder *, IWICBitmapFrameDecode * *, unsigned int *);
};
