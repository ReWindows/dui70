#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class HWNDElementProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@HWNDElementProxy@DirectUI@@SAPEAV12@PEAVHWNDElement@2@@Z
    static HWNDElementProxy * Create(::DirectUI::HWNDElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@HWNDElementProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDElementProxy@DirectUI@@QEAA@$$QEAV01@@Z
    HWNDElementProxy(HWNDElementProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDElementProxy@DirectUI@@QEAA@AEBV01@@Z
    HWNDElementProxy(HWNDElementProxy const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@HWNDElementProxy@DirectUI@@UEAAXPEAVHWNDElement@2@@Z
    virtual void Init(::DirectUI::HWNDElement *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?ElementFromPoint@HWNDElementProxy@DirectUI@@IEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    long ElementFromPoint(double, double, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFocus@HWNDElementProxy@DirectUI@@IEAAJPEAPEAUIRawElementProviderFragment@@@Z
    long GetFocus(IRawElementProviderFragment * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDElementProxy@DirectUI@@IEAA@XZ
    HWNDElementProxy();
};
} // namespace DirectUI
