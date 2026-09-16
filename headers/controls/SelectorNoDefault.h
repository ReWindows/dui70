#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
// Base evidence: DirectUI::Selector (likely; classinfo-template-instantiation).
namespace DirectUI {
class SelectorNoDefault {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@SelectorNoDefault@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@SelectorNoDefault@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@SelectorNoDefault@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@SelectorNoDefault@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@SelectorNoDefault@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyFocusMoved@SelectorNoDefault@DirectUI@@UEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@SelectorNoDefault@DirectUI@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorNoDefault@DirectUI@@QEAA@XZ
    SelectorNoDefault();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorNoDefault@DirectUI@@QEAA@$$QEAV01@@Z
    SelectorNoDefault(SelectorNoDefault &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectorNoDefault@DirectUI@@QEAA@AEBV01@@Z
    SelectorNoDefault(SelectorNoDefault const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@SelectorNoDefault@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelection@SelectorNoDefault@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetSelection(::DirectUI::Element *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1SelectorNoDefault@DirectUI@@UEAA@XZ
    virtual ~SelectorNoDefault();
};
} // namespace DirectUI
