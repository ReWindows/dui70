#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace DirectUI {
class InvokeProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@InvokeProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@InvokeProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Invoke@InvokeProvider@DirectUI@@UEAAJXZ
    virtual long Invoke();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0InvokeProvider@DirectUI@@QEAA@XZ
    InvokeProvider();
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@InvokeProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@InvokeProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1InvokeProvider@DirectUI@@UEAA@XZ
    virtual ~InvokeProvider();
};
} // namespace DirectUI
