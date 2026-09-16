#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class ExpandCollapseProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@ExpandCollapseProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?Collapse@ExpandCollapseProvider@DirectUI@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PE Export
    // Symbol: ?Expand@ExpandCollapseProvider@DirectUI@@UEAAJXZ
    virtual long Expand();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ExpandCollapseProvider@DirectUI@@QEAA@XZ
    ExpandCollapseProvider();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@ExpandCollapseProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@ExpandCollapseProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@ExpandCollapseProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?get_ExpandCollapseState@ExpandCollapseProvider@DirectUI@@UEAAJPEAW4ExpandCollapseState@@@Z
    virtual long get_ExpandCollapseState(int *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ExpandCollapseProvider@DirectUI@@UEAA@XZ
    virtual ~ExpandCollapseProvider();
};
} // namespace DirectUI
