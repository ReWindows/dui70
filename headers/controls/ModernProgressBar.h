#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 60 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class ModernProgressBar {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ActivityOccuringProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ActivityOccuringProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?AddLayeredRefProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AddLayeredRefProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?AutoHeightProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AutoHeightProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ModernProgressBar@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?DeterminateProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DeterminateProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@ModernProgressBar@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@ModernProgressBar@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMaximum@ModernProgressBar@DirectUI@@QEAAHXZ
    int GetMaximum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMinimum@ModernProgressBar@DirectUI@@QEAAHXZ
    int GetMinimum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPosition@ModernProgressBar@DirectUI@@QEAAHXZ
    int GetPosition();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetState@ModernProgressBar@DirectUI@@QEAAHXZ
    int GetState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IndependentAnimationsProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IndependentAnimationsProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ModernProgressBar@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsActivityOccuring@ModernProgressBar@DirectUI@@QEAA_NXZ
    bool IsActivityOccuring();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsAddLayeredRef@ModernProgressBar@DirectUI@@QEAA_NXZ
    bool IsAddLayeredRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsAutoHeight@ModernProgressBar@DirectUI@@QEAA_NXZ
    bool IsAutoHeight();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDeterminate@ModernProgressBar@DirectUI@@QEAA_NXZ
    bool IsDeterminate();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsIndependentAnimations@ModernProgressBar@DirectUI@@QEAA_NXZ
    bool IsIndependentAnimations();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsSmoothFillAnimation@ModernProgressBar@DirectUI@@QEAA_NXZ
    bool IsSmoothFillAnimation();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MaximumProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MaximumProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MinimumProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MinimumProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ModernProgressBar@DirectUI@@QEAA@XZ
    ModernProgressBar();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PositionProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PositionProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@ModernProgressBar@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetActivityOccuring@ModernProgressBar@DirectUI@@QEAAJ_N@Z
    long SetActivityOccuring(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAddLayeredRef@ModernProgressBar@DirectUI@@QEAAJ_N@Z
    long SetAddLayeredRef(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAutoHeight@ModernProgressBar@DirectUI@@QEAAJ_N@Z
    long SetAutoHeight(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDeterminate@ModernProgressBar@DirectUI@@QEAAJ_N@Z
    long SetDeterminate(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIndependentAnimations@ModernProgressBar@DirectUI@@QEAAJ_N@Z
    long SetIndependentAnimations(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMaximum@ModernProgressBar@DirectUI@@QEAAJH@Z
    long SetMaximum(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMinimum@ModernProgressBar@DirectUI@@QEAAJH@Z
    long SetMinimum(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPosition@ModernProgressBar@DirectUI@@QEAAJH@Z
    long SetPosition(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSmoothFillAnimation@ModernProgressBar@DirectUI@@QEAAJ_N@Z
    long SetSmoothFillAnimation(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetState@ModernProgressBar@DirectUI@@QEAAJH@Z
    long SetState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SmoothFillAnimationProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SmoothFillAnimationProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?StateProp@ModernProgressBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * StateProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopIndicatorAnimation@ModernProgressBar@DirectUI@@QEAAXXZ
    void StopIndicatorAnimation();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ModernProgressBar@DirectUI@@UEAA@XZ
    virtual ~ModernProgressBar();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@ModernProgressBar@DirectUI@@MEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@ModernProgressBar@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@ModernProgressBar@DirectUI@@MEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@ModernProgressBar@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@ModernProgressBar@DirectUI@@MEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddLayeredRef@ModernProgressBar@DirectUI@@AEAAXXZ
    void _AddLayeredRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDotVisuals@ModernProgressBar@DirectUI@@AEAAXXZ
    void _CreateDotVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyAnimationsAndVisuals@ModernProgressBar@DirectUI@@AEAAXXZ
    void _DestroyAnimationsAndVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProgressAnimation@ModernProgressBar@DirectUI@@AEAAJPEAUIDCompositionDevice@@NMPEAPEAUIDCompositionAnimation@@@Z
    long _GetProgressAnimation(IDCompositionDevice *, double, float, IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitBarState@ModernProgressBar@DirectUI@@AEAAX_N@Z
    void _InitBarState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitIndicator@ModernProgressBar@DirectUI@@AEAAXXZ
    void _InitIndicator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RenderPrimaryDot@ModernProgressBar@DirectUI@@AEAAXPEAUHDC__@@PEBUtagRECT@@@Z
    void _RenderPrimaryDot(HDC__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccName@ModernProgressBar@DirectUI@@AEAAX_N@Z
    void _SetAccName(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccValue@ModernProgressBar@DirectUI@@AEAAXXZ
    void _SetAccValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetHeight@ModernProgressBar@DirectUI@@AEAAXXZ
    void _SetHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartIndicatorAnimation@ModernProgressBar@DirectUI@@AEAAJW4INDICATOR_ANIMATIONTYPE@12@@Z
    long _StartIndicatorAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TimerProc@ModernProgressBar@DirectUI@@CAXPEAUHWND__@@I_KK@Z
    static void _TimerProc(HWND__*, unsigned int, uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAnimations@ModernProgressBar@DirectUI@@AEAAJPEAUIDCompositionDevice@@PEAUIDCompositionVisual@@@Z
    long _UpdateAnimations(IDCompositionDevice *, IDCompositionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIndicatorPosition@ModernProgressBar@DirectUI@@AEAAMH@Z
    float _UpdateIndicatorPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTimerState@ModernProgressBar@DirectUI@@AEAAJXZ
    long _UpdateTimerState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PowerNotifyCallback@ModernProgressBar@DirectUI@@CAKPEAXK0@Z
    static unsigned long s_PowerNotifyCallback(void *, unsigned long, void *);
};
} // namespace DirectUI
