#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 43 member(s).
namespace DirectUI {
class TouchTooltip {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@TouchTooltip@DirectUI@@UEAAJPEAUITouchTooltipEventSink@@@Z
    virtual long Advise(ITouchTooltipEventSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@TouchTooltip@DirectUI@@UEAAJPEAW4TOUCHTOOLTIP_OPTION_FLAGS@@@Z
    virtual long GetOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@TouchTooltip@DirectUI@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWindow@TouchTooltip@DirectUI@@QEAAJXZ
    long InitializeWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@TouchTooltip@DirectUI@@UEAAJXZ
    virtual long IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@TouchTooltip@DirectUI@@UEAAXPEAVElement@2@PEAUEvent@2@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@TouchTooltip@DirectUI@@UEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@TouchTooltip@DirectUI@@UEAAJI_K_JPEA_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirection@TouchTooltip@DirectUI@@UEAAJW4TOUCHTOOLTIP_LAYOUT_DIRECTION@@@Z
    virtual long SetDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@TouchTooltip@DirectUI@@UEAAJW4TOUCHTOOLTIP_OPTION_FLAGS@@@Z
    virtual long SetOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgrammaticOffset@TouchTooltip@DirectUI@@UEAAJH@Z
    virtual long SetProgrammaticOffset(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRichTooltip@TouchTooltip@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetRichTooltip(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@TouchTooltip@DirectUI@@UEAAJPEBG@Z
    virtual long SetText(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextWithMaxLines@TouchTooltip@DirectUI@@UEAAJPEBGI@Z
    virtual long SetTextWithMaxLines(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@TouchTooltip@DirectUI@@UEAAJW4TOUCHTOOLTIP_INPUT@@PEBUtagRECT@@W4TOUCHTOOLTIP_PLACEMENT@@@Z
    virtual long Show(int, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNearMousePoint@TouchTooltip@DirectUI@@UEAAJPEBUtagPOINT@@W4TOUCHTOOLTIP_PLACEMENT@@@Z
    virtual long ShowNearMousePoint(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNearTouchPoint@TouchTooltip@DirectUI@@UEAAJPEBUtagPOINT@@W4TOUCHTOOLTIP_PLACEMENT@@@Z
    virtual long ShowNearTouchPoint(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShowTimer@TouchTooltip@DirectUI@@UEAAJW4TOUCHTOOLTIP_INPUT@@W4TOUCHTOOLTIP_TYPE@@@Z
    virtual long StartShowTimer(int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchTooltip@DirectUI@@QEAA@PEAUHWND__@@W4TOUCHTOOLTIP_CREATE_FLAGS@@@Z
    TouchTooltip(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@TouchTooltip@DirectUI@@UEAAJXZ
    virtual long Unadvise();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyOptionAndContentDependentTextProperties@TouchTooltip@DirectUI@@AEAAJPEAVRichText@2@@Z
    long _ApplyOptionAndContentDependentTextProperties(::DirectUI::RichText *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyOptionDependentTextProperties@TouchTooltip@DirectUI@@AEAAJPEAVRichText@2@@Z
    long _ApplyOptionDependentTextProperties(::DirectUI::RichText *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearHooks@TouchTooltip@DirectUI@@AEAAXXZ
    void _ClearHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateOffsetRect@TouchTooltip@DirectUI@@AEAAXAEBUtagPOINT@@AEBUtagSIZE@@1PEAUtagRECT@@@Z
    void _CreateOffsetRect(tagPOINT const &, tagSIZE const &, tagSIZE const &, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTooltipContainer@TouchTooltip@DirectUI@@AEAAJPEAVElement@2@@Z
    long _CreateTooltipContainer(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisableHooks@TouchTooltip@DirectUI@@AEAAXXZ
    void _DisableHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoPositioning@TouchTooltip@DirectUI@@AEAAXPEBUtagSIZE@@W4TOUCHTOOLTIP_INPUT@@PEBUtagRECT@@W4TOUCHTOOLTIP_PLACEMENT@@@Z
    void _DoPositioning(tagSIZE const *, int, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureHooksEnabled@TouchTooltip@DirectUI@@AEAAXXZ
    void _EnsureHooksEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSliderFont@TouchTooltip@DirectUI@@AEAAJXZ
    long _EnsureSliderFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTextElement@TouchTooltip@DirectUI@@AEAAJXZ
    long _EnsureTextElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTextFont@TouchTooltip@DirectUI@@AEAAJXZ
    long _EnsureTextFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseHookProc@TouchTooltip@DirectUI@@AEAA_JH_K_J@Z
    int64_t _MouseHookProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterWindowClass@TouchTooltip@DirectUI@@AEAAXXZ
    void _RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScaleRelativePixels@TouchTooltip@DirectUI@@AEAAHH@Z
    int _ScaleRelativePixels(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScaleFactor@TouchTooltip@DirectUI@@AEAAXXZ
    void _SetScaleFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTooltipContent@TouchTooltip@DirectUI@@AEAAJPEAVElement@2@W4TOUCHTOOLTIP_TYPE@@@Z
    long _SetTooltipContent(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowWorker@TouchTooltip@DirectUI@@AEAAJW4TOUCHTOOLTIP_INPUT@@PEBUtagRECT@@W4TOUCHTOOLTIP_PLACEMENT@@@Z
    long _ShowWorker(int, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_KeyboardHookProc@TouchTooltip@DirectUI@@CA_JH_K_J@Z
    static int64_t s_KeyboardHookProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MouseHookProc@TouchTooltip@DirectUI@@CA_JH_K_J@Z
    static int64_t s_MouseHookProc(int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchTooltip@DirectUI@@EEAA@XZ
    virtual ~TouchTooltip();
};
} // namespace DirectUI
