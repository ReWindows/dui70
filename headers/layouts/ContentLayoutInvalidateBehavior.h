#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace DirectUI {
class ContentLayoutInvalidateBehavior {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentLayoutInvalidateBehavior@DirectUI@@QEAA@XZ
    ContentLayoutInvalidateBehavior();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ContentLayoutInvalidateBehavior@DirectUI@@SAJPEAVTouchScrollViewer@2@PEAVElement@2@PEAPEAUIDuiBehavior@@@Z
    static long Create(::DirectUI::TouchScrollViewer *, ::DirectUI::Element *, IDuiBehavior * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoLayout@ContentLayoutInvalidateBehavior@DirectUI@@UEAAJPEAVElement@2@HH@Z
    virtual long OnDoLayout(::DirectUI::Element *, int, int);
};
} // namespace DirectUI
