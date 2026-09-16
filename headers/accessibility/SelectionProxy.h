#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class SelectionProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@SelectionProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static SelectionProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@SelectionProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@SelectionProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectionProxy@DirectUI@@QEAA@$$QEAV01@@Z
    SelectionProxy(SelectionProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectionProxy@DirectUI@@QEAA@AEBV01@@Z
    SelectionProxy(SelectionProxy const &);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@SelectionProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectionProxy@DirectUI@@IEAA@XZ
    SelectionProxy();
};
} // namespace DirectUI
