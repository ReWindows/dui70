#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::Expandable (likely; classinfo-template-instantiation).
namespace DirectUI {
class Clipper {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Clipper@DirectUI@@QEAA@XZ
    Clipper();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Clipper@DirectUI@@QEAA@$$QEAV01@@Z
    Clipper(Clipper &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Clipper@DirectUI@@QEAA@AEBV01@@Z
    Clipper(Clipper const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Clipper@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Clipper@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Clipper@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Clipper@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Clipper@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Clipper@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutDoLayout@Clipper@DirectUI@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutUpdateDesiredSize@Clipper@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Clipper@DirectUI@@UEAA@XZ
    virtual ~Clipper();
};
} // namespace DirectUI
