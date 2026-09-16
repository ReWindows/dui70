#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 38 member(s).
// Base evidence: DirectUI::CCBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCBaseScrollBar {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCBaseScrollBar@DirectUI@@QEAA@K@Z
    CCBaseScrollBar(unsigned long);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCBaseScrollBar@DirectUI@@QEAA@$$QEAV01@@Z
    CCBaseScrollBar(CCBaseScrollBar &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCBaseScrollBar@DirectUI@@QEAA@AEBV01@@Z
    CCBaseScrollBar(CCBaseScrollBar const &);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHWND@CCBaseScrollBar@DirectUI@@UEAAPEAUHWND__@@PEAU3@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCBaseScrollBar@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCBaseScrollBar@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElement@CCBaseScrollBar@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLine@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetLine();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMaximum@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetMaximum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMinimum@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetMinimum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPage@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetPage();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPosition@CCBaseScrollBar@DirectUI@@UEAAHXZ
    virtual int GetPosition();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProportional@CCBaseScrollBar@DirectUI@@UEAA_NXZ
    virtual bool GetProportional();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTracking@CCBaseScrollBar@DirectUI@@QEAA_NXZ
    bool GetTracking();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CCBaseScrollBar@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?LineProp@CCBaseScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LineProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MaximumProp@CCBaseScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MaximumProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MinimumProp@CCBaseScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MinimumProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnMessage@CCBaseScrollBar@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@CCBaseScrollBar@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@CCBaseScrollBar@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PageProp@CCBaseScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PageProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PositionProp@CCBaseScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PositionProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCBaseScrollBar@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCBaseScrollBar@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLine@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetLine(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMaximum@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetMaximum(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMinimum@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetMinimum(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPage@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetPage(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPosition@CCBaseScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetPosition(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTracking@CCBaseScrollBar@DirectUI@@QEAAJ_N@Z
    long SetTracking(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?SyncScrollBar@CCBaseScrollBar@DirectUI@@QEAAXXZ
    void SyncScrollBar();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TrackingProp@CCBaseScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TrackingProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCBaseScrollBar@DirectUI@@UEAA@XZ
    virtual ~CCBaseScrollBar();
};
} // namespace DirectUI
