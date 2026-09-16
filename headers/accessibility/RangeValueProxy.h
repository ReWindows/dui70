#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class RangeValueProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RangeValueProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static RangeValueProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@RangeValueProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@RangeValueProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RangeValueProxy@DirectUI@@QEAA@$$QEAV01@@Z
    RangeValueProxy(RangeValueProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RangeValueProxy@DirectUI@@QEAA@AEBV01@@Z
    RangeValueProxy(RangeValueProxy const &);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@RangeValueProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RangeValueProxy@DirectUI@@IEAA@XZ
    RangeValueProxy();
};
} // namespace DirectUI
