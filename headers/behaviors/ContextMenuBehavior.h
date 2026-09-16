#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
namespace DirectUI {
class ContextMenuBehavior {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ContextMenuHintShowing@ContextMenuBehavior@DirectUI@@SA?AVUID@@XZ
    static UID ContextMenuHintShowing();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextMenuRequested@ContextMenuBehavior@DirectUI@@SA?AVUID@@XZ
    static UID ContextMenuRequested();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ContextMenuBehavior@DirectUI@@SAJPEAPEAUIDuiBehavior@@@Z
    static long Create(IDuiBehavior * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@ContextMenuBehavior@DirectUI@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ContextMenuBehavior@DirectUI@@UEAAJPEAVValue@2@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@ContextMenuBehavior@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@ContextMenuBehavior@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@ContextMenuBehavior@DirectUI@@UEAAJPEAVElement@2@PEAUEvent@2@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@ContextMenuBehavior@DirectUI@@UEAAJPEAVElement@2@PEAUInputEvent@2@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContextMenuBehavior@DirectUI@@IEAA@XZ
    ContextMenuBehavior();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireContextMenuRequested@ContextMenuBehavior@DirectUI@@AEAAXAEBUtagRECT@@W4CONTEXT_MENU_DEVICE_ORIGIN@2@@Z
    void _FireContextMenuRequested(tagRECT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireContextMenuRequestedFromKeyboard@ContextMenuBehavior@DirectUI@@AEAAXXZ
    void _FireContextMenuRequestedFromKeyboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireContextMenuRequestedFromMouse@ContextMenuBehavior@DirectUI@@AEAAXPEAVElement@2@AEBUtagPOINT@@@Z
    void _FireContextMenuRequestedFromMouse(::DirectUI::Element *, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseEvent@ContextMenuBehavior@DirectUI@@AEAAXPEAUMouseEvent@2@@Z
    void _OnMouseEvent(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerEvent@ContextMenuBehavior@DirectUI@@AEAAXPEAUPointerEvent@2@@Z
    void _OnPointerEvent(::DirectUI::PointerEvent *);
};
} // namespace DirectUI
