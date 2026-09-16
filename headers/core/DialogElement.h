#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 40 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
namespace DirectUI {
class DialogElement {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?ButtonClassAcceptsEnterKeyProp@DialogElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ButtonClassAcceptsEnterKeyProp();
    // Category: Method | Source: PE Export
    // Symbol: ?ClickDefaultButton@DialogElement@DirectUI@@UEAA_NXZ
    virtual bool ClickDefaultButton();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@DialogElement@DirectUI@@SAJPEAUHWND__@@_NIPEAVElement@2@PEAKPEAPEAV42@@Z
    static long Create(HWND__*, bool, unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?DefaultButtonTrackingProp@DialogElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DefaultButtonTrackingProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DialogElement@DirectUI@@QEAA@$$QEAV01@@Z
    DialogElement(DialogElement &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DialogElement@DirectUI@@QEAA@AEBV01@@Z
    DialogElement(DialogElement const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DialogElement@DirectUI@@QEAA@XZ
    DialogElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetButtonClassAcceptsEnterKey@DialogElement@DirectUI@@UEAA_NXZ
    virtual bool GetButtonClassAcceptsEnterKey();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@DialogElement@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@DialogElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultButton@DialogElement@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetDefaultButton();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultButtonTracking@DialogElement@DirectUI@@UEAA_NXZ
    virtual bool GetDefaultButtonTracking();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHandleEnterKey@DialogElement@DirectUI@@UEAA_NXZ
    virtual bool GetHandleEnterKey();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyFocusedElement@DialogElement@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetKeyFocusedElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRegisteredDefaultButton@DialogElement@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetRegisteredDefaultButton();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HandleEnterKeyProp@DialogElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * HandleEnterKeyProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnChildLostFocus@DialogElement@DirectUI@@UEAA_NPEAVElement@2@@Z
    virtual bool OnChildLostFocus(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnChildReceivedFocus@DialogElement@DirectUI@@UEAA_NPEAVElement@2@@Z
    virtual bool OnChildReceivedFocus(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@DialogElement@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDlgCode@DialogElement@DirectUI@@UEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@DialogElement@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyFocusMoved@DialogElement@DirectUI@@UEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@DialogElement@DirectUI@@UEAAXPEAVElement@2@PEAUEvent@2@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@DialogElement@DirectUI@@UEAAXPEAVElement@2@PEAUInputEvent@2@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@DialogElement@DirectUI@@UEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanging@DialogElement@DirectUI@@UEAA_NPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@DialogElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@DialogElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@DialogElement@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@DialogElement@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?RegisteredDefaultButtonProp@DialogElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * RegisteredDefaultButtonProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetButtonClassAcceptsEnterKey@DialogElement@DirectUI@@QEAAJ_N@Z
    long SetButtonClassAcceptsEnterKey(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@DialogElement@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDefaultButtonTracking@DialogElement@DirectUI@@UEAAJ_N@Z
    virtual long SetDefaultButtonTracking(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHandleEnterKey@DialogElement@DirectUI@@QEAAJ_N@Z
    long SetHandleEnterKey(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRegisteredDefaultButton@DialogElement@DirectUI@@QEAAJPEAVElement@2@@Z
    long SetRegisteredDefaultButton(::DirectUI::Element *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1DialogElement@DirectUI@@UEAA@XZ
    virtual ~DialogElement();
};
} // namespace DirectUI
