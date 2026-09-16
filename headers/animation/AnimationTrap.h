#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
class AnimationTrap {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimationTrap@@QEAA@XZ
    AnimationTrap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@AnimationTrap@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@AnimationTrap@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@AnimationTrap@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@AnimationTrap@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayNodeCallback@AnimationTrap@@UEAAJPEAVElement@DirectUI@@PEAUEventMsg@@@Z
    virtual long OnDisplayNodeCallback(::DirectUI::Element *, EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@AnimationTrap@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckNotifyComplete@AnimationTrap@@AEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    long _CheckNotifyComplete(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckNotifyImplicit@AnimationTrap@@AEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    long _CheckNotifyImplicit(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckNotifyStart@AnimationTrap@@AEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    long _CheckNotifyStart(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerifyManualStoryboard@AnimationTrap@@AEAAJPEAUEvent@DirectUI@@@Z
    long _VerifyManualStoryboard(::DirectUI::Event *);
};
