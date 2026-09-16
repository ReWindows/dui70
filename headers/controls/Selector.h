#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 20 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Selector {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Selector@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@Selector@DirectUI@@UEAAPEAVElement@2@PEAV32@HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Selector@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Selector@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelection@Selector@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetSelection();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Selector@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@Selector@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@Selector@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyFocusMoved@Selector@DirectUI@@UEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Selector@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Selector@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?SelectionChange@Selector@DirectUI@@SA?AVUID@@XZ
    static UID SelectionChange();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SelectionProp@Selector@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SelectionProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Selector@DirectUI@@QEAA@XZ
    Selector();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Selector@DirectUI@@QEAA@AEBV01@@Z
    Selector(Selector const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Selector@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelection@Selector@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetSelection(::DirectUI::Element *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Selector@DirectUI@@UEAA@XZ
    virtual ~Selector();
};
} // namespace DirectUI
