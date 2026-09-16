#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
// Base evidence: DirectUI::CCBaseScrollBar (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCVScrollBar {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCVScrollBar@DirectUI@@QEAA@XZ
    CCVScrollBar();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCVScrollBar@DirectUI@@QEAA@$$QEAV01@@Z
    CCVScrollBar(CCVScrollBar &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCVScrollBar@DirectUI@@QEAA@AEBV01@@Z
    CCVScrollBar(CCVScrollBar const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCVScrollBar@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCVScrollBar@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCVScrollBar@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCVScrollBar@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCVScrollBar@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCVScrollBar@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCVScrollBar@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCVScrollBar@DirectUI@@UEAA@XZ
    virtual ~CCVScrollBar();
};
} // namespace DirectUI
