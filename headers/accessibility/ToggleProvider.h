#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class ToggleProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@ToggleProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@ToggleProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@ToggleProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@ToggleProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Toggle@ToggleProvider@DirectUI@@UEAAJXZ
    virtual long Toggle();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ToggleProvider@DirectUI@@QEAA@XZ
    ToggleProvider();
    // Category: Method | Source: PE Export
    // Symbol: ?get_ToggleState@ToggleProvider@DirectUI@@UEAAJPEAW4ToggleState@@@Z
    virtual long get_ToggleState(int *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ToggleProvider@DirectUI@@UEAA@XZ
    virtual ~ToggleProvider();
};
} // namespace DirectUI
