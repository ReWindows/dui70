#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 70 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchHWNDElement {
public:
    class ElementWithTooltipListener;
    class TooltipEventSink;
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ActivateTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchHWNDElement@DirectUI@@SAJPEAUHWND__@@_NIPEAVElement@2@PEAKPEAPEAV42@@Z
    static long Create(HWND__*, bool, unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DismissIHMAsync@TouchHWNDElement@DirectUI@@QEAAJXZ
    long DismissIHMAsync();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FlagsProp@TouchHWNDElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FlagsProp();
    // Category: Method | Source: PE Export
    // Symbol: ?ForwardingWindowMessage@TouchHWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID ForwardingWindowMessage();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchHWNDElement@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchHWNDElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFlags@TouchHWNDElement@DirectUI@@QEAA?AW4TouchHWNDElementFlags@2@XZ
    int GetFlags();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIHMRect@TouchHWNDElement@DirectUI@@QEAAJPEAUtagRECT@@@Z
    long GetIHMRect(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIHMState@TouchHWNDElement@DirectUI@@QEAA?AW4IHMState@2@XZ
    int GetIHMState();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLightDismissIHM@TouchHWNDElement@DirectUI@@QEAA_NXZ
    bool GetLightDismissIHM();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTooltipMaximumLineCount@TouchHWNDElement@DirectUI@@QEAAHXZ
    int GetTooltipMaximumLineCount();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWindowAccessGradientColor@TouchHWNDElement@DirectUI@@QEAAPEAVValue@2@XZ
    ::DirectUI::Value * GetWindowAccessGradientColor();
    // Category: Method | Source: PE Export
    // Symbol: ?HideTouchTooltip@TouchHWNDElement@DirectUI@@QEAAJXZ
    long HideTouchTooltip();
    // Category: Method | Source: PE Export
    // Symbol: ?IHMNotify@TouchHWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID IHMNotify();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchHWNDElement@DirectUI@@QEAAJPEAUHWND__@@_NIPEAVElement@2@PEAK@Z
    long Initialize(HWND__*, bool, unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMSAAEnabled@TouchHWNDElement@DirectUI@@UEAA_NXZ
    virtual bool IsMSAAEnabled();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsRegisteredForAnimationStatusChanges@TouchHWNDElement@DirectUI@@QEAA_NXZ
    bool IsRegisteredForAnimationStatusChanges();
    // Category: Accessor | Source: PE Export
    // Symbol: ?LightDismissIHMProp@TouchHWNDElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LightDismissIHMProp();
    // Category: Method | Source: PE Export
    // Symbol: ?MessageCallback@TouchHWNDElement@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?MonitorPowerSettingsChange@TouchHWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID MonitorPowerSettingsChange();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@TouchHWNDElement@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@TouchHWNDElement@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@TouchHWNDElement@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyFocusMoved@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchHWNDElement@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?ProcessingKeyboardNavigation@TouchHWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID ProcessingKeyboardNavigation();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchHWNDElement@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterForAnimationStatusChanges@TouchHWNDElement@DirectUI@@QEAAXXZ
    void RegisterForAnimationStatusChanges();
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterForIHMChanges@TouchHWNDElement@DirectUI@@QEAAJXZ
    long RegisterForIHMChanges();
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterForMonitorPowerChanges@TouchHWNDElement@DirectUI@@QEAAJXZ
    long RegisterForMonitorPowerChanges();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void RemoveTooltip(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?RichTooltipShowing@TouchHWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID RichTooltipShowing();
    // Category: Method | Source: PE Export
    // Symbol: ?ScaleChanged@TouchHWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID ScaleChanged();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFlags@TouchHWNDElement@DirectUI@@QEAAJW4TouchHWNDElementFlags@2@0@Z
    long SetFlags(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLightDismissIHM@TouchHWNDElement@DirectUI@@QEAAJ_N@Z
    long SetLightDismissIHM(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTooltipMaximumLineCount@TouchHWNDElement@DirectUI@@QEAAJH@Z
    long SetTooltipMaximumLineCount(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWindowAccessGradientColor@TouchHWNDElement@DirectUI@@QEAAJPEAVValue@2@@Z
    long SetWindowAccessGradientColor(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldUsePerMonitorScaling@TouchHWNDElement@DirectUI@@QEAA_NXZ
    bool ShouldUsePerMonitorScaling();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowRichTooltip@TouchHWNDElement@DirectUI@@QEAAJW4TOUCHTOOLTIP_INPUT@@W4TOUCHTOOLTIP_OPTION_FLAGS@@PEAVElement@2@@Z
    long ShowRichTooltip(int, int, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?StartRichTooltipTimer@TouchHWNDElement@DirectUI@@QEAAJW4TOUCHTOOLTIP_INPUT@@@Z
    long StartRichTooltipTimer(int);
    // Category: Method | Source: PE Export
    // Symbol: ?TextTooltipShowing@TouchHWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID TextTooltipShowing();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TooltipMaximumLineCountProp@TouchHWNDElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TooltipMaximumLineCountProp();
    // Category: Method | Source: PE Export
    // Symbol: ?TooltipTimerStarting@TouchHWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID TooltipTimerStarting();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchHWNDElement@DirectUI@@QEAA@XZ
    TouchHWNDElement();
    // Category: Method | Source: PE Export
    // Symbol: ?UnregisterForAnimationStatusChanges@TouchHWNDElement@DirectUI@@QEAAXXZ
    void UnregisterForAnimationStatusChanges();
    // Category: Method | Source: PE Export
    // Symbol: ?UnregisterForIHMChanges@TouchHWNDElement@DirectUI@@QEAAXXZ
    void UnregisterForIHMChanges();
    // Category: Method | Source: PE Export
    // Symbol: ?UnregisterForMonitorPowerChanges@TouchHWNDElement@DirectUI@@QEAAJXZ
    long UnregisterForMonitorPowerChanges();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateTooltip@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void UpdateTooltip(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?UsePerMonitorScaling@TouchHWNDElement@DirectUI@@QEAAXPEAUHMONITOR__@@@Z
    void UsePerMonitorScaling(HMONITOR__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?WindowAccessGradientColorProp@TouchHWNDElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * WindowAccessGradientColorProp();
    // Category: Method | Source: PE Export
    // Symbol: ?WndProc@TouchHWNDElement@DirectUI@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TouchHWNDElement@DirectUI@@UEAA@XZ
    virtual ~TouchHWNDElement();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?_ClearTooltipState@TouchHWNDElement@DirectUI@@IEAAXXZ
    void _ClearTooltipState();
    // Category: Method | Source: PE Export
    // Symbol: ?_DestroyTooltip@TouchHWNDElement@DirectUI@@IEAAXXZ
    void _DestroyTooltip();
    // Category: Method | Source: PE Export
    // Symbol: ?_OnUIStateChanged@TouchHWNDElement@DirectUI@@MEAAXGG@Z
    virtual void _OnUIStateChanged(unsigned short, unsigned short);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTooltip@TouchHWNDElement@DirectUI@@AEAAJXZ
    long _EnsureTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireScaleChangeEvent@TouchHWNDElement@DirectUI@@AEAAXXZ
    void _FireScaleChangeEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideFocusRect@TouchHWNDElement@DirectUI@@AEAAXXZ
    void _HideFocusRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsElementContentTruncated@TouchHWNDElement@DirectUI@@CA_NPEAVElement@2@@Z
    static bool _IsElementContentTruncated(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnIHMNotify@TouchHWNDElement@DirectUI@@AEAAXW4IHMState@2@@Z
    void _OnIHMNotify(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTooltipTimerFired@TouchHWNDElement@DirectUI@@AEAAXW4TOUCHTOOLTIP_INPUT@@W4TOUCHTOOLTIP_TYPE@@W4TOUCHTOOLTIP_DELAY@@@Z
    void _OnTooltipTimerFired(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetActiveTooltipElement@TouchHWNDElement@DirectUI@@AEAAXPEAVElement@2@W4TOUCHTOOLTIP_INPUT@@@Z
    void _SetActiveTooltipElement(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldUseImmersivePerWindowScaling@TouchHWNDElement@DirectUI@@AEAA_NXZ
    bool _ShouldUseImmersivePerWindowScaling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowTooltipForElement@TouchHWNDElement@DirectUI@@AEAAJW4TOUCHTOOLTIP_INPUT@@PEAVElement@2@@Z
    long _ShowTooltipForElement(int, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TargetElementFromEventInfo@TouchHWNDElement@DirectUI@@AEAAPEAVElement@2@PEAV32@PEBUtagPOINT@@@Z
    ::DirectUI::Element * _TargetElementFromEventInfo(::DirectUI::Element *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateChildrenForAcceleratorDisplayChange@TouchHWNDElement@DirectUI@@AEAAXPEAVElement@2@@Z
    void _UpdateChildrenForAcceleratorDisplayChange(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateImmersiveScaleFactor@TouchHWNDElement@DirectUI@@AEAA?AW4DEVICE_SCALE_FACTOR@@XZ
    int _UpdateImmersiveScaleFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateImmersiveScaleFactorAndMaybeFireScaleChangeEvent@TouchHWNDElement@DirectUI@@AEAAXXZ
    void _UpdateImmersiveScaleFactorAndMaybeFireScaleChangeEvent();
};
} // namespace DirectUI
