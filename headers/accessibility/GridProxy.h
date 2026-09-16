#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI {
class GridProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@GridProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static GridProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@GridProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridProxy@DirectUI@@QEAA@$$QEAV01@@Z
    GridProxy(GridProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridProxy@DirectUI@@QEAA@AEBV01@@Z
    GridProxy(GridProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridProxy@DirectUI@@QEAA@XZ
    GridProxy();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@GridProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@GridProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColumnCount@GridProxy@DirectUI@@AEAAJPEAH@Z
    long GetColumnCount(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItem@GridProxy@DirectUI@@AEAAJIIPEAPEAUIRawElementProviderSimple@@@Z
    long GetItem(unsigned int, unsigned int, IRawElementProviderSimple * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRowCount@GridProxy@DirectUI@@AEAAJPEAH@Z
    long GetRowCount(int *);
};
} // namespace DirectUI
