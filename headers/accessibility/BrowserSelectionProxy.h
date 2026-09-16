#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class BrowserSelectionProxy {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BrowserSelectionProxy@DirectUI@@QEAA@$$QEAV01@@Z
    BrowserSelectionProxy(BrowserSelectionProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BrowserSelectionProxy@DirectUI@@QEAA@AEBV01@@Z
    BrowserSelectionProxy(BrowserSelectionProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BrowserSelectionProxy@DirectUI@@QEAA@XZ
    BrowserSelectionProxy();
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@BrowserSelectionProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@BrowserSelectionProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsSelectionRequired@BrowserSelectionProxy@DirectUI@@AEAAJPEAH@Z
    long GetIsSelectionRequired(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelection@BrowserSelectionProxy@DirectUI@@AEAAJPEAPEAUtagSAFEARRAY@@@Z
    long GetSelection(tagSAFEARRAY * *);
};
} // namespace DirectUI
