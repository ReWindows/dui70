#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 2 member(s).
namespace DirectUI {
class TouchTooltipTimings {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetTimingValue@TouchTooltipTimings@DirectUI@@CAHW4TOUCHTOOLTIP_INPUT@@QEBUTIMINGS@12@@Z
    static int s_GetTimingValue(int, WindissectOpaque const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetTimings@TouchTooltipTimings@DirectUI@@CAPEBUTIMINGS@12@W4TOUCHTOOLTIP_TYPE@@PEBU312@_K@Z
    static WindissectOpaque const * s_GetTimings(int, WindissectOpaque const *, uint64_t);
};
} // namespace DirectUI
