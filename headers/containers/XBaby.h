#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 40 member(s).
// Base evidence: DirectUI::DialogElement (likely; classinfo-template-instantiation).
namespace DirectUI {
class XBaby {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CacheParser@XBaby@DirectUI@@UEAAXPEAVDUIXmlParser@2@@Z
    virtual void CacheParser(::DirectUI::DUIXmlParser *);
    // Category: Method | Source: PE Export
    // Symbol: ?CanSetFocus@XBaby@DirectUI@@UEAA_NXZ
    virtual bool CanSetFocus();
    // Category: Method | Source: PE Export
    // Symbol: ?ClickDefaultButton@XBaby@DirectUI@@UEAA_NXZ
    virtual bool ClickDefaultButton();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@XBaby@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@XBaby@DirectUI@@SAJPEAVIXElementCP@2@PEAVXProvider@2@PEAUHWND__@@PEAVElement@2@PEAKPEAPEAV62@@Z
    static long Create(::DirectUI::IXElementCP *, ::DirectUI::XProvider *, HWND__*, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateStyleParser@XBaby@DirectUI@@UEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long CreateStyleParser(::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ForceThemeChange@XBaby@DirectUI@@UEAAX_K_J@Z
    virtual void ForceThemeChange(uint64_t, int64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@XBaby@DirectUI@@UEAAPEAVElement@2@PEAV32@HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@XBaby@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@XBaby@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentDesiredSize@XBaby@DirectUI@@UEAA?AUtagSIZE@@HH@Z
    virtual tagSIZE GetContentDesiredSize(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultButtonTracking@XBaby@DirectUI@@UEAA_NXZ
    virtual bool GetDefaultButtonTracking();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementProviderImpl@XBaby@DirectUI@@UEAAJPEAVInvokeHelper@2@PEAPEAVElementProvider@2@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFocusableElement@XBaby@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetFocusableElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHostedElementID@XBaby@DirectUI@@UEAAJPEAG@Z
    virtual long GetHostedElementID(unsigned short *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXBabyElement@XBaby@DirectUI@@UEAAPEAVHWNDElement@2@XZ
    virtual ::DirectUI::HWNDElement * GetXBabyElement();
    // Category: Method | Source: PE Export
    // Symbol: ?OnChildLostFocus@XBaby@DirectUI@@UEAA_NPEAVElement@2@@Z
    virtual bool OnChildLostFocus(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnChildReceivedFocus@XBaby@DirectUI@@UEAA_NPEAVElement@2@@Z
    virtual bool OnChildReceivedFocus(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@XBaby@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNoChildWithShortcutFound@XBaby@DirectUI@@UEAAXPEAUKeyboardEvent@2@@Z
    virtual void OnNoChildWithShortcutFound(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnThemeChanged@XBaby@DirectUI@@UEAAXPEAUThemeChangedEvent@2@@Z
    virtual void OnThemeChanged(::DirectUI::ThemeChangedEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWmThemeChanged@XBaby@DirectUI@@UEAAX_K_J@Z
    virtual void OnWmThemeChanged(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@XBaby@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetButtonClassAcceptsEnterKey@XBaby@DirectUI@@UEAAJ_N@Z
    virtual long SetButtonClassAcceptsEnterKey(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@XBaby@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDefaultButtonTracking@XBaby@DirectUI@@UEAAJ_N@Z
    virtual long SetDefaultButtonTracking(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHandleEnterKey@XBaby@DirectUI@@UEAAJ_N@Z
    virtual long SetHandleEnterKey(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyFocus@XBaby@DirectUI@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRegisteredDefaultButton@XBaby@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetRegisteredDefaultButton(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetToHost@XBaby@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetToHost(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XBaby@DirectUI@@QEAA@AEBV01@@Z
    XBaby(XBaby const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XBaby@DirectUI@@QEAA@XZ
    XBaby();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1XBaby@DirectUI@@UEAA@XZ
    virtual ~XBaby();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@XBaby@DirectUI@@IEAAJPEAVIXElementCP@2@PEAVXProvider@2@PEAUHWND__@@PEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::IXElementCP *, ::DirectUI::XProvider *, HWND__*, ::DirectUI::Element *, unsigned long *);
};
} // namespace DirectUI
