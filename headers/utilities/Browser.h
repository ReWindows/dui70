#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 22 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Browser {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Browser@DirectUI@@QEAA@$$QEAV01@@Z
    Browser(Browser &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Browser@DirectUI@@QEAA@AEBV01@@Z
    Browser(Browser const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Browser@DirectUI@@QEAA@XZ
    Browser();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Browser@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Entered@Browser@DirectUI@@SA?AVUID@@XZ
    static UID Entered();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Browser@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Browser@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentPage@Browser@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetCurrentPage();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentPageID@Browser@DirectUI@@QEAAGXZ
    unsigned short GetCurrentPageID();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPages@Browser@DirectUI@@QEAAPEAVPages@2@XZ
    ::DirectUI::Pages * GetPages();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Browser@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Leaving@Browser@DirectUI@@SA?AVUID@@XZ
    static UID Leaving();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@Browser@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Browser@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Browser@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Browser@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Method | Source: PE Export
    // Symbol: ?StartNavigate@Browser@DirectUI@@SA?AVUID@@XZ
    static UID StartNavigate();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Browser@DirectUI@@UEAA@XZ
    virtual ~Browser();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?FireNavigate@Browser@DirectUI@@AEAAHG@Z
    int FireNavigate(unsigned short);
};
} // namespace DirectUI
