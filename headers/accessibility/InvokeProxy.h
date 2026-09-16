#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class InvokeProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@InvokeProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static InvokeProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@InvokeProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0InvokeProxy@DirectUI@@QEAA@$$QEAV01@@Z
    InvokeProxy(InvokeProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0InvokeProxy@DirectUI@@QEAA@AEBV01@@Z
    InvokeProxy(InvokeProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0InvokeProxy@DirectUI@@QEAA@XZ
    InvokeProxy();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@InvokeProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@InvokeProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
};
} // namespace DirectUI
