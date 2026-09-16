#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 20 member(s).
// Base evidence: DirectUI::PushButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class Navigator {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ActionInitiated@Navigator@DirectUI@@SA?AVUID@@XZ
    static UID ActionInitiated();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Navigator@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBrowser@Navigator@DirectUI@@QEAAPEAVBrowser@2@XZ
    ::DirectUI::Browser * GetBrowser();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Navigator@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Navigator@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTargetPage@Navigator@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetTargetPage(::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Navigator@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Navigator@DirectUI@@QEAA@$$QEAV01@@Z
    Navigator(Navigator &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Navigator@DirectUI@@QEAA@AEBV01@@Z
    Navigator(Navigator const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Navigator@DirectUI@@QEAA@XZ
    Navigator();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@Navigator@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Navigator@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Navigator@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTargetPage@Navigator@DirectUI@@QEAAJPEBG@Z
    long SetTargetPage(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?TargetPageProp@Navigator@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TargetPageProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Navigator@DirectUI@@UEAA@XZ
    virtual ~Navigator();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?FireNavigationEvent@Navigator@DirectUI@@AEAAXXZ
    void FireNavigationEvent();
};
} // namespace DirectUI
