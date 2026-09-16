#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
class AcceleratorBehavior {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AcceleratorBehavior@@QEAA@XZ
    AcceleratorBehavior();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@AcceleratorBehavior@@SAJPEAPEAUIDuiBehavior@@@Z
    static long Create(IDuiBehavior * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@AcceleratorBehavior@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@AcceleratorBehavior@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@AcceleratorBehavior@@UEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
};
