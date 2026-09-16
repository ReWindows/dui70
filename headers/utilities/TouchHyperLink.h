#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchHyperLink {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchHyperLink@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchHyperLink@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchHyperLink@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchHyperLink@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetImmersiveFocusRectOffsets@TouchHyperLink@DirectUI@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetVisited@TouchHyperLink@DirectUI@@QEAA_NXZ
    bool GetVisited();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchHyperLink@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchHyperLink@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetVisited@TouchHyperLink@DirectUI@@QEAAJ_N@Z
    long SetVisited(bool);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchHyperLink@DirectUI@@QEAA@XZ
    TouchHyperLink();
    // Category: Accessor | Source: PE Export
    // Symbol: ?VisitedProp@TouchHyperLink@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * VisitedProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TouchHyperLink@DirectUI@@UEAA@XZ
    virtual ~TouchHyperLink();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAccState@TouchHyperLink@DirectUI@@AEAAX_N0@Z
    void _UpdateAccState(bool, bool);
};
} // namespace DirectUI
