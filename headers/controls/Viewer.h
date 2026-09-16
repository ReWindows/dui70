#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 33 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Viewer {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Viewer@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EnsureVisible@Viewer@DirectUI@@UEAA_NHHHH@Z
    virtual bool EnsureVisible(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Viewer@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Viewer@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXOffset@Viewer@DirectUI@@QEAAHXZ
    int GetXOffset();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXScrollable@Viewer@DirectUI@@QEAA_NXZ
    bool GetXScrollable();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetYOffset@Viewer@DirectUI@@QEAAHXZ
    int GetYOffset();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetYScrollable@Viewer@DirectUI@@QEAA_NXZ
    bool GetYScrollable();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Viewer@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@Viewer@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@Viewer@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Viewer@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@Viewer@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Viewer@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Viewer@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetEnsureVisibleUseLayoutCoordinates@Viewer@DirectUI@@QEAAX_N@Z
    void SetEnsureVisibleUseLayoutCoordinates(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXOffset@Viewer@DirectUI@@QEAAJH@Z
    long SetXOffset(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXScrollable@Viewer@DirectUI@@QEAAJ_N@Z
    long SetXScrollable(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetYOffset@Viewer@DirectUI@@QEAAJH@Z
    long SetYOffset(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetYScrollable@Viewer@DirectUI@@QEAAJ_N@Z
    long SetYScrollable(bool);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Viewer@DirectUI@@QEAA@XZ
    Viewer();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Viewer@DirectUI@@QEAA@AEBV01@@Z
    Viewer(Viewer const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?XOffsetProp@Viewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * XOffsetProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?XScrollableProp@Viewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * XScrollableProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?YOffsetProp@Viewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * YOffsetProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?YScrollableProp@Viewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * YScrollableProp();
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutDoLayout@Viewer@DirectUI@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutUpdateDesiredSize@Viewer@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Viewer@DirectUI@@UEAA@XZ
    virtual ~Viewer();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?_GetContent@Viewer@DirectUI@@AEAAPEAVElement@2@XZ
    ::DirectUI::Element * _GetContent();
    // Category: Method | Source: PE Export
    // Symbol: ?_InternalEnsureVisible@Viewer@DirectUI@@AEAA_NHHHH@Z
    bool _InternalEnsureVisible(int, int, int, int);
};
} // namespace DirectUI
