#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class ProgressRangeValueProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ProgressRangeValueProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ProgressRangeValueProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ProgressRangeValueProxy(ProgressRangeValueProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ProgressRangeValueProxy@DirectUI@@QEAA@AEBV01@@Z
    ProgressRangeValueProxy(ProgressRangeValueProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ProgressRangeValueProxy@DirectUI@@QEAA@XZ
    ProgressRangeValueProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ProgressRangeValueProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
};
} // namespace DirectUI
