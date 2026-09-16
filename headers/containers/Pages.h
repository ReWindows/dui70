#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 18 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Pages {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Add@Pages@DirectUI@@UEAAJPEAPEAVElement@2@I@Z
    virtual long Add(::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Pages@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Pages@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Pages@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCount@Pages@DirectUI@@QEAAIXZ
    unsigned int GetCount();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPage@Pages@DirectUI@@QEAAPEAVElement@2@I@Z
    ::DirectUI::Element * GetPage(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPage@Pages@DirectUI@@QEAAPEAVElement@2@PEBG@Z
    ::DirectUI::Element * GetPage(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Pages@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Pages@DirectUI@@QEAA@$$QEAV01@@Z
    Pages(Pages &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Pages@DirectUI@@QEAA@AEBV01@@Z
    Pages(Pages const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Pages@DirectUI@@QEAA@XZ
    Pages();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Pages@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Pages@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNoBrowseOnFirstAdd@Pages@DirectUI@@QEAAXXZ
    void SetNoBrowseOnFirstAdd();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Pages@DirectUI@@UEAA@XZ
    virtual ~Pages();
};
} // namespace DirectUI
