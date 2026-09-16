#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::TouchHWNDElement (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchSelectPopup {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@TouchSelectPopup@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@TouchSelectPopup@DirectUI@@UEAAJPEAVInvokeHelper@2@PEAPEAVElementProvider@2@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TouchSelectPopup@DirectUI@@QEAAJPEAUHWND__@@PEAVTouchSelect@2@PEAVElement@2@PEAK@Z
    long Initialize(HWND__*, ::DirectUI::TouchSelect *, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@TouchSelectPopup@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchSelectPopup@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchSelectPopup@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
};
} // namespace DirectUI
