#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 27 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCBase {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCBase@DirectUI@@QEAA@KPEBG@Z
    CCBase(unsigned long, unsigned short const *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCBase@DirectUI@@QEAA@AEBV01@@Z
    CCBase(CCBase const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCBase@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCBase@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHWND@CCBase@DirectUI@@UEAAPEAUHWND__@@PEAU3@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?DefaultAction@CCBase@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCBase@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCBase@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCBase@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWinStyle@CCBase@DirectUI@@QEAAHXZ
    int GetWinStyle();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CCBase@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCustomDraw@CCBase@DirectUI@@UEAA_NPEAUtagNMCUSTOMDRAWINFO@@PEA_J@Z
    virtual bool OnCustomDraw(tagNMCUSTOMDRAWINFO *, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@CCBase@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLostDialogFocus@CCBase@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@CCBase@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@CCBase@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceivedDialogFocus@CCBase@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCBase@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCBase@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNotifyHandler@CCBase@DirectUI@@QEAAXP6AHI_K_JPEA_JPEAX@Z3@Z
    void SetNotifyHandler(int ( *)(unsigned int, uint64_t, int64_t, int64_t *, void *), void *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWinStyle@CCBase@DirectUI@@QEAAJH@Z
    long SetWinStyle(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?WinStyleProp@CCBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * WinStyleProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCBase@DirectUI@@UEAA@XZ
    virtual ~CCBase();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?PostCreate@CCBase@DirectUI@@MEAAXPEAUHWND__@@@Z
    virtual void PostCreate(HWND__*);
};
} // namespace DirectUI
