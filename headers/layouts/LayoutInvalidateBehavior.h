#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace DirectUI {
class LayoutInvalidateBehavior {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@LayoutInvalidateBehavior@DirectUI@@SAJPEAVTouchScrollViewer@2@PEAPEAV12@@Z
    static long Create(::DirectUI::TouchScrollViewer *, LayoutInvalidateBehavior * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@LayoutInvalidateBehavior@DirectUI@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LayoutInvalidateBehavior@DirectUI@@QEAA@XZ
    LayoutInvalidateBehavior();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoLayout@LayoutInvalidateBehavior@DirectUI@@UEAAJPEAVElement@2@HH@Z
    virtual long OnDoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateDesiredSize@LayoutInvalidateBehavior@DirectUI@@UEAAJPEAVElement@2@HHPEAVSurface@2@PEAUtagSIZE@@@Z
    virtual long OnUpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *, tagSIZE *);
};
} // namespace DirectUI
