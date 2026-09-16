#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI {
class GridItemProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@GridItemProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static GridItemProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@GridItemProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridItemProxy@DirectUI@@QEAA@$$QEAV01@@Z
    GridItemProxy(GridItemProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridItemProxy@DirectUI@@QEAA@AEBV01@@Z
    GridItemProxy(GridItemProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridItemProxy@DirectUI@@QEAA@XZ
    GridItemProxy();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@GridItemProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@GridItemProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColumn@GridItemProxy@DirectUI@@AEAAJPEAH@Z
    long GetColumn(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContainingGrid@GridItemProxy@DirectUI@@AEAAJPEAPEAUIRawElementProviderSimple@@@Z
    long GetContainingGrid(IRawElementProviderSimple * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRow@GridItemProxy@DirectUI@@AEAAJPEAH@Z
    long GetRow(int *);
};
} // namespace DirectUI
