#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 28 member(s).
namespace DirectUI {
class XProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@XProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?CanSetFocus@XProvider@DirectUI@@UEAAJPEA_N@Z
    virtual long CanSetFocus(bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ClickDefaultButton@XProvider@DirectUI@@UEAAHXZ
    virtual int ClickDefaultButton();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@XProvider@DirectUI@@SAJPEAVElement@2@PEAVIXProviderCP@2@PEAPEAV12@@Z
    static long Create(::DirectUI::Element *, ::DirectUI::IXProviderCP *, XProvider * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateDUI@XProvider@DirectUI@@UEAAJPEAVIXElementCP@2@PEAPEAUHWND__@@@Z
    virtual long CreateDUI(::DirectUI::IXElementCP *, HWND__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateParser@XProvider@DirectUI@@QEAAJPEAPEAVDUIXmlParser@2@@Z
    long CreateParser(::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateXBaby@XProvider@DirectUI@@UEAAJPEAVIXElementCP@2@PEAUHWND__@@PEAVElement@2@PEAKPEAPEAUIXBaby@2@@Z
    virtual long CreateXBaby(::DirectUI::IXElementCP *, HWND__*, ::DirectUI::Element *, unsigned long *, ::DirectUI::IXBaby * *);
    // Category: Method | Source: PE Export
    // Symbol: ?FindElementWithShortcutAndDoDefaultAction@XProvider@DirectUI@@UEAAHGH@Z
    virtual int FindElementWithShortcutAndDoDefaultAction(unsigned short, int);
    // Category: Method | Source: PE Export
    // Symbol: ?ForceThemeChange@XProvider@DirectUI@@UEAAJ_K_J@Z
    virtual long ForceThemeChange(uint64_t, int64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDesiredSize@XProvider@DirectUI@@UEAAJHHPEAUtagSIZE@@@Z
    virtual long GetDesiredSize(int, int, tagSIZE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHostedElementID@XProvider@DirectUI@@UEAAJPEAG@Z
    virtual long GetHostedElementID(unsigned short *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@XProvider@DirectUI@@QEAAJPEAVElement@2@PEAVIXProviderCP@2@@Z
    long Initialize(::DirectUI::Element *, ::DirectUI::IXProviderCP *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDescendent@XProvider@DirectUI@@UEAAJPEAVElement@2@PEA_N@Z
    virtual long IsDescendent(::DirectUI::Element *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?Navigate@XProvider@DirectUI@@UEAAJHPEA_N@Z
    virtual long Navigate(int, bool *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@XProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@XProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetButtonClassAcceptsEnterKey@XProvider@DirectUI@@UEAAJ_N@Z
    virtual long SetButtonClassAcceptsEnterKey(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDefaultButtonTracking@XProvider@DirectUI@@UEAAJ_N@Z
    virtual long SetDefaultButtonTracking(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFocus@XProvider@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetFocus(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetParameter@XProvider@DirectUI@@UEAAJAEBU_GUID@@PEAX@Z
    virtual long SetParameter(_GUID const &, void *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRegisteredDefaultButton@XProvider@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetRegisteredDefaultButton(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XProvider@DirectUI@@QEAA@AEBV01@@Z
    XProvider(XProvider const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XProvider@DirectUI@@QEAA@XZ
    XProvider();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1XProvider@DirectUI@@UEAA@XZ
    virtual ~XProvider();
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRoot@XProvider@DirectUI@@IEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetRoot();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHandleEnterKey@XProvider@DirectUI@@IEAAX_N@Z
    void SetHandleEnterKey(bool);
};
} // namespace DirectUI
