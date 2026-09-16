#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 17 member(s).
namespace DirectUI {
class DialogElementCore {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ClickDefaultButton@DialogElementCore@DirectUI@@QEAA_NXZ
    bool ClickDefaultButton();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDefaultButton@DialogElementCore@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetDefaultButton();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@DialogElementCore@DirectUI@@QEAAXPEAUIDialogElement@2@PEAUIElementListener@2@@Z
    void Initialize(::DirectUI::IDialogElement *, ::DirectUI::IElementListener *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnChildLostFocus@DialogElementCore@DirectUI@@QEAA_NPEAVElement@2@@Z
    bool OnChildLostFocus(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnChildReceivedFocus@DialogElementCore@DirectUI@@QEAA_NPEAVElement@2@@Z
    bool OnChildReceivedFocus(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDefaultButtonTrackingChanged@DialogElementCore@DirectUI@@QEAAXPEAVValue@2@@Z
    void OnDefaultButtonTrackingChanged(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@DialogElementCore@DirectUI@@QEAAXXZ
    void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetDlgCode@DialogElementCore@DirectUI@@QEAAXPEAUtagMSG@@PEA_J@Z
    void OnGetDlgCode(tagMSG *, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@DialogElementCore@DirectUI@@QEAAXPEAUInputEvent@2@@Z
    void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyFocusMoved@DialogElementCore@DirectUI@@QEAAXPEAVElement@2@0@Z
    void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@DialogElementCore@DirectUI@@QEAAXPEAVElement@2@@Z
    void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRegisteredDefaultButtonChanged@DialogElementCore@DirectUI@@QEAAXPEAVValue@2@0@Z
    void OnRegisteredDefaultButtonChanged(::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateChildFocus@DialogElementCore@DirectUI@@QEAAXPEAVElement@2@0@Z
    void UpdateChildFocus(::DirectUI::Element *, ::DirectUI::Element *);
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsButtonEnabledAndVisible@DialogElementCore@DirectUI@@KA_NPEAVElement@2@@Z
    static bool IsButtonEnabledAndVisible(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRegisteredDefaultButtonSelectedState@DialogElementCore@DirectUI@@IEAAX_N@Z
    void SetRegisteredDefaultButtonSelectedState(bool);
};
} // namespace DirectUI
