#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace DirectUI {
class SelectorSelectionProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@SelectorSelectionProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorSelectionProxy@DirectUI@@QEAA@$$QEAV01@@Z
    SelectorSelectionProxy(SelectorSelectionProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorSelectionProxy@DirectUI@@QEAA@AEBV01@@Z
    SelectorSelectionProxy(SelectorSelectionProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorSelectionProxy@DirectUI@@QEAA@XZ
    SelectorSelectionProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@SelectorSelectionProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsSelectionRequired@SelectorSelectionProxy@DirectUI@@AEAAJPEAH@Z
    long GetIsSelectionRequired(int *);
};
} // namespace DirectUI
