#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 27 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
namespace DirectUI {
class XElement {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@XElement@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@XElement@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHWND@XElement@DirectUI@@UEAAPEAUHWND__@@PEAU3@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?FreeProvider@XElement@DirectUI@@QEAAXXZ
    void FreeProvider();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@XElement@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@XElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCreationFlags@XElement@DirectUI@@UEAAIXZ
    virtual unsigned int GetCreationFlags();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInnerHWND@XElement@DirectUI@@QEAAPEAUHWND__@@XZ
    HWND__* GetInnerHWND();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetNotificationSinkHWND@XElement@DirectUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetNotificationSinkHWND();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProvider@XElement@DirectUI@@QEAAPEAUIXProvider@2@XZ
    ::DirectUI::IXProvider * GetProvider();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@XElement@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDescendent@XElement@DirectUI@@QEAA_NPEAVElement@2@@Z
    bool IsDescendent(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@XElement@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@XElement@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMessage@XElement@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSinkThemeChanged@XElement@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnSinkThemeChanged(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSysChar@XElement@DirectUI@@UEAA_NG@Z
    virtual bool OnSysChar(unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@XElement@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@XElement@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyFocus@XElement@DirectUI@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetProvider@XElement@DirectUI@@QEAAJPEAUIUnknown@@@Z
    long SetProvider(IUnknown *);
    // Category: Method | Source: PE Export
    // Symbol: ?UnhandledSyschar@XElement@DirectUI@@SA?AVUID@@XZ
    static UID UnhandledSyschar();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XElement@DirectUI@@QEAA@AEBV01@@Z
    XElement(XElement const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XElement@DirectUI@@QEAA@XZ
    XElement();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1XElement@DirectUI@@UEAA@XZ
    virtual ~XElement();
};
} // namespace DirectUI
