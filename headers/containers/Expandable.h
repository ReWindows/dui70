#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Expandable {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Expandable@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Expandable@DirectUI@@QEAA@XZ
    Expandable();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Expandable@DirectUI@@QEAA@$$QEAV01@@Z
    Expandable(Expandable &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Expandable@DirectUI@@QEAA@AEBV01@@Z
    Expandable(Expandable const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ExpandedProp@Expandable@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ExpandedProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Expandable@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Expandable@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetExpanded@Expandable@DirectUI@@QEAA_NXZ
    bool GetExpanded();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Expandable@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Expandable@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetExpanded@Expandable@DirectUI@@QEAAJ_N@Z
    long SetExpanded(bool);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Expandable@DirectUI@@UEAA@XZ
    virtual ~Expandable();
};
} // namespace DirectUI
