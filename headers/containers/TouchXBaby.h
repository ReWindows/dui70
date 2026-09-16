#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 33 member(s).
// Base evidence: DirectUI::TouchDialogElement (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchXBaby {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CacheParser@TouchXBaby@DirectUI@@UEAAXPEAVDUIXmlParser@2@@Z
    virtual void CacheParser(::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSetFocus@TouchXBaby@DirectUI@@UEAA_NXZ
    virtual bool CanSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickDefaultButton@TouchXBaby@DirectUI@@UEAA_NXZ
    virtual bool ClickDefaultButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TouchXBaby@DirectUI@@SAJPEAVIXElementCP@2@PEAVTouchXProvider@2@PEAUHWND__@@PEAVElement@2@PEAKPEAPEAV62@@Z
    static long Create(::DirectUI::IXElementCP *, ::DirectUI::TouchXProvider *, HWND__*, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStyleParser@TouchXBaby@DirectUI@@UEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long CreateStyleParser(::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceThemeChange@TouchXBaby@DirectUI@@UEAAX_K_J@Z
    virtual void ForceThemeChange(uint64_t, int64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@TouchXBaby@DirectUI@@UEAAPEAVElement@2@PEAV32@HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@TouchXBaby@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentDesiredSize@TouchXBaby@DirectUI@@UEAA?AUtagSIZE@@HH@Z
    virtual tagSIZE GetContentDesiredSize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultButtonTracking@TouchXBaby@DirectUI@@UEAA_NXZ
    virtual bool GetDefaultButtonTracking();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementProviderImpl@TouchXBaby@DirectUI@@UEAAJPEAVInvokeHelper@2@PEAPEAVElementProvider@2@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusableElement@TouchXBaby@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetFocusableElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHostedElementID@TouchXBaby@DirectUI@@UEAAJPEAG@Z
    virtual long GetHostedElementID(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXBabyElement@TouchXBaby@DirectUI@@UEAAPEAVHWNDElement@2@XZ
    virtual ::DirectUI::HWNDElement * GetXBabyElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildLostFocus@TouchXBaby@DirectUI@@UEAA_NPEAVElement@2@@Z
    virtual bool OnChildLostFocus(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildReceivedFocus@TouchXBaby@DirectUI@@UEAA_NPEAVElement@2@@Z
    virtual bool OnChildReceivedFocus(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchXBaby@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoChildWithShortcutFound@TouchXBaby@DirectUI@@UEAAXPEAUKeyboardEvent@2@@Z
    virtual void OnNoChildWithShortcutFound(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnThemeChanged@TouchXBaby@DirectUI@@UEAAXPEAUThemeChangedEvent@2@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWmThemeChanged@TouchXBaby@DirectUI@@UEAAX_K_J@Z
    virtual void OnWmThemeChanged(uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonClassAcceptsEnterKey@TouchXBaby@DirectUI@@UEAAJ_N@Z
    virtual long SetButtonClassAcceptsEnterKey(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultButtonTracking@TouchXBaby@DirectUI@@UEAAJ_N@Z
    virtual long SetDefaultButtonTracking(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleEnterKey@TouchXBaby@DirectUI@@UEAAJ_N@Z
    virtual long SetHandleEnterKey(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyFocus@TouchXBaby@DirectUI@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRegisteredDefaultButton@TouchXBaby@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetRegisteredDefaultButton(::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToHost@TouchXBaby@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetToHost(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchXBaby@DirectUI@@UEAA@XZ
    virtual ~TouchXBaby();
};
} // namespace DirectUI
