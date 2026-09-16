#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::BaseScrollViewer (likely; classinfo-template-instantiation).
namespace DirectUI {
class StyledScrollViewer {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@StyledScrollViewer@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@StyledScrollViewer@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@StyledScrollViewer@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@StyledScrollViewer@DirectUI@@UEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@StyledScrollViewer@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@StyledScrollViewer@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0StyledScrollViewer@DirectUI@@QEAA@AEBV01@@Z
    StyledScrollViewer(StyledScrollViewer const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0StyledScrollViewer@DirectUI@@QEAA@XZ
    StyledScrollViewer();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1StyledScrollViewer@DirectUI@@UEAA@XZ
    virtual ~StyledScrollViewer();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?AddChildren@StyledScrollViewer@DirectUI@@MEAAJXZ
    virtual long AddChildren();
    // Category: Method | Source: PE Export
    // Symbol: ?CreateScrollBars@StyledScrollViewer@DirectUI@@MEAAJXZ
    virtual long CreateScrollBars();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHScroll@StyledScrollViewer@DirectUI@@MEAAPEAVBaseScrollBar@2@XZ
    virtual ::DirectUI::BaseScrollBar * GetHScroll();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetVScroll@StyledScrollViewer@DirectUI@@MEAAPEAVBaseScrollBar@2@XZ
    virtual ::DirectUI::BaseScrollBar * GetVScroll();
};
} // namespace DirectUI
