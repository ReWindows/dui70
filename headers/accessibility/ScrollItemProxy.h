#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class ScrollItemProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ScrollItemProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static ScrollItemProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ScrollItemProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@ScrollItemProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollItemProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ScrollItemProxy(ScrollItemProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollItemProxy@DirectUI@@QEAA@AEBV01@@Z
    ScrollItemProxy(ScrollItemProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollItemProxy@DirectUI@@QEAA@XZ
    ScrollItemProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ScrollItemProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
};
} // namespace DirectUI
