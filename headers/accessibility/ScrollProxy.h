#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 22 member(s).
namespace DirectUI {
class ScrollProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ScrollProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static ScrollProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ScrollProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@ScrollProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ScrollProxy(ScrollProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollProxy@DirectUI@@QEAA@AEBV01@@Z
    ScrollProxy(ScrollProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollProxy@DirectUI@@QEAA@XZ
    ScrollProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ScrollProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScrollBar@ScrollProxy@DirectUI@@AEAAPEAVBaseScrollBar@2@_N@Z
    ::DirectUI::BaseScrollBar * GetScrollBar(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScrollBarHelper@ScrollProxy@DirectUI@@AEAAPEAVBaseScrollBar@2@PEAVElement@2@_N@Z
    ::DirectUI::BaseScrollBar * GetScrollBarHelper(::DirectUI::Element *, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScrollPercent@ScrollProxy@DirectUI@@AEAAJ_NPEAN@Z
    long GetScrollPercent(bool, double *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScrollable@ScrollProxy@DirectUI@@AEAAJ_NPEAH@Z
    long GetScrollable(bool, int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetViewSize@ScrollProxy@DirectUI@@AEAAJ_NPEAN@Z
    long GetViewSize(bool, double *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetViewer@ScrollProxy@DirectUI@@AEAAJPEAPEAVViewer@2@@Z
    long GetViewer(::DirectUI::Viewer * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Scroll@ScrollProxy@DirectUI@@AEAAJW4ScrollAmount@@0@Z
    long Scroll(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?ScrollLine@ScrollProxy@DirectUI@@AEAAJ_N0@Z
    long ScrollLine(bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?ScrollPage@ScrollProxy@DirectUI@@AEAAJ_N0@Z
    long ScrollPage(bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?ScrollToHorizontalPosition@ScrollProxy@DirectUI@@AEAAJH_N@Z
    long ScrollToHorizontalPosition(int, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?ScrollToVerticalPosition@ScrollProxy@DirectUI@@AEAAJH_N@Z
    long ScrollToVerticalPosition(int, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPercent@ScrollProxy@DirectUI@@AEAAJPEAVBaseScrollBar@2@N@Z
    long SetPercent(::DirectUI::BaseScrollBar *, double);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetScrollPercent@ScrollProxy@DirectUI@@AEAAJNN@Z
    long SetScrollPercent(double, double);
};
} // namespace DirectUI
