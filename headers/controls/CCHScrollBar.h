#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
// Base evidence: DirectUI::CCBaseScrollBar (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCHScrollBar {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCHScrollBar@DirectUI@@QEAA@XZ
    CCHScrollBar();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCHScrollBar@DirectUI@@QEAA@$$QEAV01@@Z
    CCHScrollBar(CCHScrollBar &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCHScrollBar@DirectUI@@QEAA@AEBV01@@Z
    CCHScrollBar(CCHScrollBar const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCHScrollBar@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCHScrollBar@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCHScrollBar@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCHScrollBar@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCHScrollBar@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCHScrollBar@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCHScrollBar@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCHScrollBar@DirectUI@@UEAA@XZ
    virtual ~CCHScrollBar();
};
} // namespace DirectUI
