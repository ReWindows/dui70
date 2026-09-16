#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI {
class MaxSizeBehavior {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MaxSizeBehavior@DirectUI@@SAJPEAPEAUIDuiBehavior@@@Z
    static long Create(IDuiBehavior * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@MaxSizeBehavior@DirectUI@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@MaxSizeBehavior@DirectUI@@UEAAJPEAVValue@2@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MaxSizeBehavior@DirectUI@@QEAA@XZ
    MaxSizeBehavior();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoLayout@MaxSizeBehavior@DirectUI@@UEAAJPEAVElement@2@HH@Z
    virtual long OnDoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateDesiredSize@MaxSizeBehavior@DirectUI@@UEAAJPEAVElement@2@HHPEAVSurface@2@PEAUtagSIZE@@@Z
    virtual long OnUpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *, tagSIZE *);
};
} // namespace DirectUI
