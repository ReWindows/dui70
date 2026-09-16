#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class SelectorSelectionItemProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@SelectorSelectionItemProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorSelectionItemProxy@DirectUI@@QEAA@$$QEAV01@@Z
    SelectorSelectionItemProxy(SelectorSelectionItemProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorSelectionItemProxy@DirectUI@@QEAA@AEBV01@@Z
    SelectorSelectionItemProxy(SelectorSelectionItemProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorSelectionItemProxy@DirectUI@@QEAA@XZ
    SelectorSelectionItemProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@SelectorSelectionItemProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?AddToSelection@SelectorSelectionItemProxy@DirectUI@@AEAAJXZ
    long AddToSelection();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelectionContainer@SelectorSelectionItemProxy@DirectUI@@AEAAJPEAPEAUIRawElementProviderSimple@@@Z
    long GetSelectionContainer(IRawElementProviderSimple * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Select@SelectorSelectionItemProxy@DirectUI@@AEAAJXZ
    long Select();
};
} // namespace DirectUI
