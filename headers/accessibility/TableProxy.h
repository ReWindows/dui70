#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class TableProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TableProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static TableProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@TableProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@TableProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableProxy@DirectUI@@QEAA@$$QEAV01@@Z
    TableProxy(TableProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableProxy@DirectUI@@QEAA@AEBV01@@Z
    TableProxy(TableProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableProxy@DirectUI@@QEAA@XZ
    TableProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@TableProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
};
} // namespace DirectUI
