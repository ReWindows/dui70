#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class ElementWithHWND {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ElementWithHWND@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ElementWithHWND@DirectUI@@QEAA@XZ
    ElementWithHWND();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ElementWithHWND@DirectUI@@QEAA@$$QEAV01@@Z
    ElementWithHWND(ElementWithHWND &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ElementWithHWND@DirectUI@@QEAA@AEBV01@@Z
    ElementWithHWND(ElementWithHWND const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@ElementWithHWND@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@ElementWithHWND@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@ElementWithHWND@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@ElementWithHWND@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ElementWithHWND@DirectUI@@UEAA@XZ
    virtual ~ElementWithHWND();
};
} // namespace DirectUI
