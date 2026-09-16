#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 29 member(s).
// Base evidence: DirectUI::TouchHWNDElement (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchDialogElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ButtonClassAcceptsEnterKeyProp@TouchDialogElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ButtonClassAcceptsEnterKeyProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickDefaultButton@TouchDialogElement@DirectUI@@UEAA_NXZ
    virtual bool ClickDefaultButton();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?DefaultButtonTrackingProp@TouchDialogElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DefaultButtonTrackingProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonClassAcceptsEnterKey@TouchDialogElement@DirectUI@@UEAA_NXZ
    virtual bool GetButtonClassAcceptsEnterKey();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@TouchDialogElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultButton@TouchDialogElement@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetDefaultButton();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultButtonTracking@TouchDialogElement@DirectUI@@UEAA_NXZ
    virtual bool GetDefaultButtonTracking();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleEnterKey@TouchDialogElement@DirectUI@@UEAA_NXZ
    virtual bool GetHandleEnterKey();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyFocusedElement@TouchDialogElement@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetKeyFocusedElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegisteredDefaultButton@TouchDialogElement@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetRegisteredDefaultButton();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HandleEnterKeyProp@TouchDialogElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * HandleEnterKeyProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildLostFocus@TouchDialogElement@DirectUI@@UEAA_NPEAVElement@2@@Z
    virtual bool OnChildLostFocus(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildReceivedFocus@TouchDialogElement@DirectUI@@UEAA_NPEAVElement@2@@Z
    virtual bool OnChildReceivedFocus(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@TouchDialogElement@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetDlgCode@TouchDialogElement@DirectUI@@UEAAXPEAUtagMSG@@PEA_J@Z
    virtual void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchDialogElement@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@TouchDialogElement@DirectUI@@UEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@TouchDialogElement@DirectUI@@UEAAXPEAVElement@2@PEAUEvent@2@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@TouchDialogElement@DirectUI@@UEAAXPEAVElement@2@PEAUInputEvent@2@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@TouchDialogElement@DirectUI@@UEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanging@TouchDialogElement@DirectUI@@UEAA_NPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@TouchDialogElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@TouchDialogElement@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchDialogElement@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?RegisteredDefaultButtonProp@TouchDialogElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * RegisteredDefaultButtonProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultButtonTracking@TouchDialogElement@DirectUI@@UEAAJ_N@Z
    virtual long SetDefaultButtonTracking(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchDialogElement@DirectUI@@QEAA@XZ
    TouchDialogElement();
};
} // namespace DirectUI
