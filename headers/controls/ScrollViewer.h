#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
// Base evidence: DirectUI::BaseScrollViewer (likely; classinfo-template-instantiation).
namespace DirectUI {
class ScrollViewer {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ScrollViewer@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@ScrollViewer@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@ScrollViewer@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@ScrollViewer@DirectUI@@UEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@ScrollViewer@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@ScrollViewer@DirectUI@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollViewer@DirectUI@@QEAA@XZ
    ScrollViewer();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollViewer@DirectUI@@QEAA@AEBV01@@Z
    ScrollViewer(ScrollViewer const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@ScrollViewer@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ScrollViewer@DirectUI@@UEAA@XZ
    virtual ~ScrollViewer();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?AddChildren@ScrollViewer@DirectUI@@MEAAJXZ
    virtual long AddChildren();
    // Category: Method | Source: PE Export
    // Symbol: ?CreateScrollBars@ScrollViewer@DirectUI@@MEAAJXZ
    virtual long CreateScrollBars();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHScroll@ScrollViewer@DirectUI@@MEAAPEAVBaseScrollBar@2@XZ
    virtual ::DirectUI::BaseScrollBar * GetHScroll();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetVScroll@ScrollViewer@DirectUI@@MEAAPEAVBaseScrollBar@2@XZ
    virtual ::DirectUI::BaseScrollBar * GetVScroll();
};
} // namespace DirectUI
