#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class SelectionItemProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@SelectionItemProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static SelectionItemProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@SelectionItemProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@SelectionItemProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectionItemProxy@DirectUI@@QEAA@$$QEAV01@@Z
    SelectionItemProxy(SelectionItemProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectionItemProxy@DirectUI@@QEAA@AEBV01@@Z
    SelectionItemProxy(SelectionItemProxy const &);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@SelectionItemProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectionItemProxy@DirectUI@@IEAA@XZ
    SelectionItemProxy();
};
} // namespace DirectUI
