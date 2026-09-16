#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
class ScrubBehavior {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ScrubBehavior@@SAJPEAPEAUIDuiBehavior@@@Z
    static long Create(IDuiBehavior * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@ScrubBehavior@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ScrubBehavior@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@ScrubBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@ScrubBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@ScrubBehavior@@UEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@ScrubBehavior@@UEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ScrubBehavior@@UEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual long OnPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseInput@ScrubBehavior@@AEAAXPEAVElement@DirectUI@@PEAUMouseEvent@3@@Z
    void _OnMouseInput(::DirectUI::Element *, ::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerInput@ScrubBehavior@@AEAAXPEAVElement@DirectUI@@PEAUPointerEvent@3@@Z
    void _OnPointerInput(::DirectUI::Element *, ::DirectUI::PointerEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSelectedItem@ScrubBehavior@@AEAAXPEAVElement@DirectUI@@0@Z
    void _SetSelectedItem(::DirectUI::Element *, ::DirectUI::Element *);
};
