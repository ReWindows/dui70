#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class NavigatorSelectionItemProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@NavigatorSelectionItemProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0NavigatorSelectionItemProxy@DirectUI@@QEAA@$$QEAV01@@Z
    NavigatorSelectionItemProxy(NavigatorSelectionItemProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0NavigatorSelectionItemProxy@DirectUI@@QEAA@AEBV01@@Z
    NavigatorSelectionItemProxy(NavigatorSelectionItemProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0NavigatorSelectionItemProxy@DirectUI@@QEAA@XZ
    NavigatorSelectionItemProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@NavigatorSelectionItemProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?AddToSelection@NavigatorSelectionItemProxy@DirectUI@@AEAAJPEAVBrowser@2@@Z
    long AddToSelection(::DirectUI::Browser *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsSelected@NavigatorSelectionItemProxy@DirectUI@@AEAAJPEAVBrowser@2@PEAH@Z
    long GetIsSelected(::DirectUI::Browser *, int *);
};
} // namespace DirectUI
