#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::CCBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCListView {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCListView@DirectUI@@QEAA@$$QEAV01@@Z
    CCListView(CCListView &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCListView@DirectUI@@QEAA@AEBV01@@Z
    CCListView(CCListView const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCListView@DirectUI@@QEAA@XZ
    CCListView();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCListView@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCListView@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCListView@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCListView@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCListView@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CCListView@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCListView@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCListView@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCListView@DirectUI@@UEAA@XZ
    virtual ~CCListView();
};
} // namespace DirectUI
