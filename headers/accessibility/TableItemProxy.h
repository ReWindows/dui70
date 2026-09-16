#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class TableItemProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TableItemProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static TableItemProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@TableItemProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@TableItemProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableItemProxy@DirectUI@@QEAA@$$QEAV01@@Z
    TableItemProxy(TableItemProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableItemProxy@DirectUI@@QEAA@AEBV01@@Z
    TableItemProxy(TableItemProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableItemProxy@DirectUI@@QEAA@XZ
    TableItemProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@TableItemProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
};
} // namespace DirectUI
