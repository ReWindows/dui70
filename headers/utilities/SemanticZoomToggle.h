#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class SemanticZoomToggle {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@SemanticZoomToggle@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DefaultAction@SemanticZoomToggle@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@SemanticZoomToggle@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@SemanticZoomToggle@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@SemanticZoomToggle@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@SemanticZoomToggle@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?Toggle@SemanticZoomToggle@DirectUI@@SA?AVUID@@XZ
    static UID Toggle();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateToggleState@SemanticZoomToggle@DirectUI@@QEAAXW4SemanticZoomToggleState@@_N@Z
    void UpdateToggleState(int, bool);
};
} // namespace DirectUI
