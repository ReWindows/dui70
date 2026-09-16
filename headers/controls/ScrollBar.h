#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 43 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class ScrollBar {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ScrollBar@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ScrollBar@DirectUI@@SAJ_NPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(bool, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@ScrollBar@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@ScrollBar@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElement@ScrollBar@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLine@ScrollBar@DirectUI@@UEAAHXZ
    virtual int GetLine();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMaximum@ScrollBar@DirectUI@@UEAAHXZ
    virtual int GetMaximum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMinimum@ScrollBar@DirectUI@@UEAAHXZ
    virtual int GetMinimum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetOrder@ScrollBar@DirectUI@@QEAAHXZ
    int GetOrder();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPage@ScrollBar@DirectUI@@UEAAHXZ
    virtual int GetPage();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPosition@ScrollBar@DirectUI@@UEAAHXZ
    virtual int GetPosition();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProportional@ScrollBar@DirectUI@@UEAA_NXZ
    virtual bool GetProportional();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetVertical@ScrollBar@DirectUI@@QEAA_NXZ
    bool GetVertical();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@ScrollBar@DirectUI@@QEAAJ_NPEAVElement@2@PEAK@Z
    long Initialize(bool, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?LineProp@ScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LineProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MaximumProp@ScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MaximumProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MinimumProp@ScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MinimumProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@ScrollBar@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@ScrollBar@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@ScrollBar@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?OrderProp@ScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * OrderProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PageProp@ScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PageProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PositionProp@ScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PositionProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ProportionalProp@ScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ProportionalProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@ScrollBar@DirectUI@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollBar@DirectUI@@QEAA@XZ
    ScrollBar();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ScrollBar@DirectUI@@QEAA@AEBV01@@Z
    ScrollBar(ScrollBar const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@ScrollBar@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLine@ScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetLine(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMaximum@ScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetMaximum(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMinimum@ScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetMinimum(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOrder@ScrollBar@DirectUI@@QEAAJH@Z
    long SetOrder(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPage@ScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetPage(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPosition@ScrollBar@DirectUI@@UEAAJH@Z
    virtual long SetPosition(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetProportional@ScrollBar@DirectUI@@QEAAJ_N@Z
    long SetProportional(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetVertical@ScrollBar@DirectUI@@QEAAJ_N@Z
    long SetVertical(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?VerticalProp@ScrollBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * VerticalProp();
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutDoLayout@ScrollBar@DirectUI@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutUpdateDesiredSize@ScrollBar@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ScrollBar@DirectUI@@UEAA@XZ
    virtual ~ScrollBar();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?CreateButtons@ScrollBar@DirectUI@@MEAAJXZ
    virtual long CreateButtons();
};
} // namespace DirectUI
