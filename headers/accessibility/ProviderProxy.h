#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI {
class ProviderProxy {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ProviderProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ProviderProxy(ProviderProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ProviderProxy@DirectUI@@QEAA@AEBV01@@Z
    ProviderProxy(ProviderProxy const &);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ProviderProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ProviderProxy@DirectUI@@IEAA@XZ
    ProviderProxy();
};
} // namespace DirectUI
