#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
namespace DirectUI {
class ScrollProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@ScrollProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@ScrollProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@ScrollProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@ScrollProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Scroll@ScrollProvider@DirectUI@@UEAAJW4ScrollAmount@@0@Z
    virtual long Scroll(int, int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollProvider@DirectUI@@QEAA@XZ
    ScrollProvider();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetScrollPercent@ScrollProvider@DirectUI@@UEAAJNN@Z
    virtual long SetScrollPercent(double, double);
    // Category: Method | Source: PE Export
    // Symbol: ?get_HorizontalScrollPercent@ScrollProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalScrollPercent(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_HorizontalViewSize@ScrollProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalViewSize(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_HorizontallyScrollable@ScrollProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_HorizontallyScrollable(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_VerticalScrollPercent@ScrollProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalScrollPercent(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_VerticalViewSize@ScrollProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalViewSize(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_VerticallyScrollable@ScrollProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_VerticallyScrollable(int *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ScrollProvider@DirectUI@@UEAA@XZ
    virtual ~ScrollProvider();
};
} // namespace DirectUI
