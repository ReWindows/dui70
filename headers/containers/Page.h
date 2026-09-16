#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::Macro (likely; classinfo-template-instantiation).
namespace DirectUI {
class Page {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Page@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Page@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Page@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Page@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Page@DirectUI@@QEAA@XZ
    Page();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Page@DirectUI@@QEAA@$$QEAV01@@Z
    Page(Page &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Page@DirectUI@@QEAA@AEBV01@@Z
    Page(Page const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Page@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Page@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Page@DirectUI@@UEAA@XZ
    virtual ~Page();
};
} // namespace DirectUI
