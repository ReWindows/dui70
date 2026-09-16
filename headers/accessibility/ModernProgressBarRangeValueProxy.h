#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class ModernProgressBarRangeValueProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ModernProgressBarRangeValueProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ModernProgressBarRangeValueProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ModernProgressBarRangeValueProxy(ModernProgressBarRangeValueProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ModernProgressBarRangeValueProxy@DirectUI@@QEAA@AEBV01@@Z
    ModernProgressBarRangeValueProxy(ModernProgressBarRangeValueProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ModernProgressBarRangeValueProxy@DirectUI@@QEAA@XZ
    ModernProgressBarRangeValueProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ModernProgressBarRangeValueProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
};
} // namespace DirectUI
