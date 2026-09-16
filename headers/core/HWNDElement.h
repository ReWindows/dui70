#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 65 member(s).
// Base evidence: DirectUI::ElementWithHWND (likely; classinfo-template-instantiation).
namespace DirectUI {
class HWNDElement {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ActivateTooltip@HWNDElement@DirectUI@@UEAAXPEAVElement@2@K@Z
    virtual void ActivateTooltip(::DirectUI::Element *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?CanSetFocus@HWNDElement@DirectUI@@UEAA_NXZ
    virtual bool CanSetFocus();
    // Category: Method | Source: PE Export
    // Symbol: ?CompositionChange@HWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID CompositionChange();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@HWNDElement@DirectUI@@SAJPEAUHWND__@@_NIPEAVElement@2@PEAKPEAPEAV42@@Z
    static long Create(HWND__*, bool, unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateStyleParser@HWNDElement@DirectUI@@UEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long CreateStyleParser(::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DelayActivateTooltip@HWNDElement@DirectUI@@QEAAXXZ
    void DelayActivateTooltip();
    // Category: Method | Source: PE Export
    // Symbol: ?ElementFromPoint@HWNDElement@DirectUI@@QEAAPEAVElement@2@PEAUtagPOINT@@@Z
    ::DirectUI::Element * ElementFromPoint(tagPOINT *);
    // Category: Method | Source: PE Export
    // Symbol: ?FindShortcut@HWNDElement@DirectUI@@SA_NGPEAVElement@2@PEAPEAV32@PEAH2H@Z
    static bool FindShortcut(unsigned short, ::DirectUI::Element *, ::DirectUI::Element * *, int *, int *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?FlushWorkingSet@HWNDElement@DirectUI@@QEAAXXZ
    void FlushWorkingSet();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccessibleImpl@HWNDElement@DirectUI@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@HWNDElement@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@HWNDElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFocusedHWNDElement@HWNDElement@DirectUI@@SAPEAV12@XZ
    static HWNDElement * GetFocusedHWNDElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHWND@HWNDElement@DirectUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyFocusedElement@HWNDElement@DirectUI@@SAPEAVElement@2@XZ
    static ::DirectUI::Element * GetKeyFocusedElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetUIState@HWNDElement@DirectUI@@QEAAGXZ
    unsigned short GetUIState();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWindowClassNameAndStyle@HWNDElement@DirectUI@@UEAAXPEAPEBGPEAI@Z
    virtual void GetWindowClassNameAndStyle(unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWrapKeyboardNavigate@HWNDElement@DirectUI@@QEAA_NXZ
    bool GetWrapKeyboardNavigate();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDElement@DirectUI@@QEAA@XZ
    HWNDElement();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDElement@DirectUI@@QEAA@AEBV01@@Z
    HWNDElement(HWNDElement const &);
    // Category: Method | Source: PE Export
    // Symbol: ?ImmersiveColorSchemeChange@HWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID ImmersiveColorSchemeChange();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@HWNDElement@DirectUI@@QEAAJPEAUHWND__@@_NIPEAVElement@2@PEAK@Z
    long Initialize(HWND__*, bool, unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsFirstElement@HWNDElement@DirectUI@@QEAA_NPEAVElement@2@@Z
    bool IsFirstElement(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsLastElement@HWNDElement@DirectUI@@QEAA_NPEAVElement@2@@Z
    bool IsLastElement(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMSAAEnabled@HWNDElement@DirectUI@@UEAA_NXZ
    virtual bool IsMSAAEnabled();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCompositionChanged@HWNDElement@DirectUI@@UEAAXXZ
    virtual void OnCompositionChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@HWNDElement@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@HWNDElement@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDlgCode@HWNDElement@DirectUI@@UEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGroupChanged@HWNDElement@DirectUI@@UEAAXH_N@Z
    virtual void OnGroupChanged(int, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnImmersiveColorSchemeChanged@HWNDElement@DirectUI@@UEAAXXZ
    virtual void OnImmersiveColorSchemeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@HWNDElement@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNoChildWithShortcutFound@HWNDElement@DirectUI@@UEAAXPEAUKeyboardEvent@2@@Z
    virtual void OnNoChildWithShortcutFound(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@HWNDElement@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnThemeChanged@HWNDElement@DirectUI@@UEAAXPEAUThemeChangedEvent@2@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWmSettingChanged@HWNDElement@DirectUI@@UEAAX_K_J@Z
    virtual void OnWmSettingChanged(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWmThemeChanged@HWNDElement@DirectUI@@UEAAX_K_J@Z
    virtual void OnWmThemeChanged(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@HWNDElement@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveTooltip@HWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void RemoveTooltip(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@HWNDElement@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFocus@HWNDElement@DirectUI@@QEAAX_N@Z
    void SetFocus(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetParentSizeControl@HWNDElement@DirectUI@@QEAAX_N@Z
    void SetParentSizeControl(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetScreenCenter@HWNDElement@DirectUI@@QEAAX_N@Z
    void SetScreenCenter(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWrapKeyboardNavigate@HWNDElement@DirectUI@@QEAAJ_N@Z
    long SetWrapKeyboardNavigate(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldUseDesktopPerMonitorScaling@HWNDElement@DirectUI@@QEAA_NXZ
    bool ShouldUseDesktopPerMonitorScaling();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowAccel@HWNDElement@DirectUI@@QEAA_NXZ
    bool ShowAccel();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowFocus@HWNDElement@DirectUI@@QEAA_NXZ
    bool ShowFocus();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowUIState@HWNDElement@DirectUI@@QEAAX_N0@Z
    void ShowUIState(bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?StaticWndProc@HWNDElement@DirectUI@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t StaticWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?ThemeChange@HWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID ThemeChange();
    // Category: Method | Source: PE Export
    // Symbol: ?ToggleUIState@HWNDElement@DirectUI@@QEAAX_N0@Z
    void ToggleUIState(bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateTooltip@HWNDElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void UpdateTooltip(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?WindowDpiChanged@HWNDElement@DirectUI@@SA?AVUID@@XZ
    static UID WindowDpiChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?WndProc@HWNDElement@DirectUI@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?WrapKeyboardNavigateProp@HWNDElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * WrapKeyboardNavigateProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1HWNDElement@DirectUI@@UEAA@XZ
    virtual ~HWNDElement();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?FindShortcutRecursive@HWNDElement@DirectUI@@KA_NGPEAVElement@2@PEAPEAV32@PEAH2H@Z
    static bool FindShortcutRecursive(unsigned short, ::DirectUI::Element *, ::DirectUI::Element * *, int *, int *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateStyleSheets@HWNDElement@DirectUI@@IEAAXXZ
    void UpdateStyleSheets();
    // Category: Method | Source: PE Export
    // Symbol: ?_FireWindowDpiChangeEvent@HWNDElement@DirectUI@@IEAAXXZ
    void _FireWindowDpiChangeEvent();
    // Category: Method | Source: PE Export
    // Symbol: ?_GetPerMonitorScaleFactorForDesktopWindow@HWNDElement@DirectUI@@IEAAHPEAUHWND__@@@Z
    int _GetPerMonitorScaleFactorForDesktopWindow(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?_HandleImmersiveColorSchemeChange@HWNDElement@DirectUI@@IEAAXXZ
    void _HandleImmersiveColorSchemeChange();
    // Category: Method | Source: PE Export
    // Symbol: ?_OnUIStateChanged@HWNDElement@DirectUI@@MEAAXGG@Z
    virtual void _OnUIStateChanged(unsigned short, unsigned short);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?_UpdateDesktopScaleFactor@HWNDElement@DirectUI@@AEAAHXZ
    int _UpdateDesktopScaleFactor();
};
} // namespace DirectUI
