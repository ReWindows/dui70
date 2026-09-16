#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class ExpandCollapseProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ExpandCollapseProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static ExpandCollapseProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ExpandCollapseProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ExpandCollapseProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ExpandCollapseProxy(ExpandCollapseProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ExpandCollapseProxy@DirectUI@@QEAA@AEBV01@@Z
    ExpandCollapseProxy(ExpandCollapseProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ExpandCollapseProxy@DirectUI@@QEAA@XZ
    ExpandCollapseProxy();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@ExpandCollapseProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ExpandCollapseProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
};
} // namespace DirectUI
