#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace DirectUI {
class TouchTooltipContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TouchTooltipContainer@DirectUI@@QEAAJPEBVTouchTooltipConstraint@2@PEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::TouchTooltipConstraint const *, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@TouchTooltipContainer@DirectUI@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@TouchTooltipContainer@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
};
} // namespace DirectUI
