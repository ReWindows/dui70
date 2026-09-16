#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 31 member(s).
// Base evidence: DirectUI::CCBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCPushButton {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCPushButton@DirectUI@@QEAA@K@Z
    CCPushButton(unsigned long);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCPushButton@DirectUI@@QEAA@$$QEAV01@@Z
    CCPushButton(CCPushButton &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCPushButton@DirectUI@@QEAA@AEBV01@@Z
    CCPushButton(CCPushButton const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCPushButton@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCPushButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DefaultAction@CCPushButton@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Method | Source: PE Export
    // Symbol: ?EstimateContentSize@CCPushButton@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE EstimateContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetButtonColor@CCPushButton@DirectUI@@UEAA_NPEAUHDC__@@PEAPEAUHBRUSH__@@@Z
    virtual bool GetButtonColor(HDC__*, HBRUSH__* *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCPushButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCPushButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCPushButton@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHasShield@CCPushButton@DirectUI@@QEAA_NXZ
    bool GetHasShield();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetOverrideButtonBackground@CCPushButton@DirectUI@@QEAA_NXZ
    bool GetOverrideButtonBackground();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasShieldProp@CCPushButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * HasShieldProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@CCPushButton@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLostDialogFocus@CCPushButton@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMessage@CCPushButton@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@CCPushButton@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@CCPushButton@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceivedDialogFocus@CCPushButton@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectedPropertyChanged@CCPushButton@DirectUI@@UEAAXXZ
    virtual void OnSelectedPropertyChanged();
    // Category: Accessor | Source: PE Export
    // Symbol: ?OverrideButtonBackgroundProp@CCPushButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * OverrideButtonBackgroundProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCPushButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCPushButton@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOverrideButtonBackground@CCPushButton@DirectUI@@QEAAJ_N@Z
    long SetOverrideButtonBackground(bool);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCPushButton@DirectUI@@UEAA@XZ
    virtual ~CCPushButton();
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDefaultState@CCPushButton@DirectUI@@IEAAXKK@Z
    void SetDefaultState(unsigned long, unsigned long);
};
} // namespace DirectUI
