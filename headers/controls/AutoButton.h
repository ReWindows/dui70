#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::AccessibleButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class AutoButton {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AutoButton@DirectUI@@QEAA@$$QEAV01@@Z
    AutoButton(AutoButton &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AutoButton@DirectUI@@QEAA@AEBV01@@Z
    AutoButton(AutoButton const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AutoButton@DirectUI@@QEAA@XZ
    AutoButton();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@AutoButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@AutoButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@AutoButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@AutoButton@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@AutoButton@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@AutoButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@AutoButton@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Method | Source: PE Export
    // Symbol: ?Toggle@AutoButton@DirectUI@@SA?AVUID@@XZ
    static UID Toggle();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1AutoButton@DirectUI@@UEAA@XZ
    virtual ~AutoButton();
};
} // namespace DirectUI
