#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class ScrollBarRangeValueProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ScrollBarRangeValueProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollBarRangeValueProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ScrollBarRangeValueProxy(ScrollBarRangeValueProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollBarRangeValueProxy@DirectUI@@QEAA@AEBV01@@Z
    ScrollBarRangeValueProxy(ScrollBarRangeValueProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollBarRangeValueProxy@DirectUI@@QEAA@XZ
    ScrollBarRangeValueProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ScrollBarRangeValueProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
};
} // namespace DirectUI
