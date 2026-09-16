#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace DirectUI {
class ScrollItemProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@ScrollItemProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@ScrollItemProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@ScrollItemProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@ScrollItemProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ScrollIntoView@ScrollItemProvider@DirectUI@@UEAAJXZ
    virtual long ScrollIntoView();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollItemProvider@DirectUI@@QEAA@XZ
    ScrollItemProvider();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ScrollItemProvider@DirectUI@@UEAA@XZ
    virtual ~ScrollItemProvider();
};
} // namespace DirectUI
