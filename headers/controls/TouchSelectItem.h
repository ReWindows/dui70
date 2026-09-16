#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchSelectItem {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchSelectItem@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchSelectItem@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchSelectItem@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemData@TouchSelectItem@DirectUI@@QEAAJPEAPEAUIUnknown@@@Z
    long GetItemData(IUnknown * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextContentOverride@TouchSelectItem@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetTextContentOverride(::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchSelectItem@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetItemData@TouchSelectItem@DirectUI@@QEAAJPEAUIUnknown@@@Z
    long SetItemData(IUnknown *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTextContentOverride@TouchSelectItem@DirectUI@@QEAAJPEBG@Z
    long SetTextContentOverride(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?TextContentOverrideProp@TouchSelectItem@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TextContentOverrideProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchSelectItem@DirectUI@@QEAA@XZ
    TouchSelectItem();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TouchSelectItem@DirectUI@@UEAA@XZ
    virtual ~TouchSelectItem();
};
} // namespace DirectUI
