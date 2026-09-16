#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 2 member(s).
namespace DirectUI {
class TouchTooltipConstraint {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstraint@TouchTooltipConstraint@DirectUI@@QEBA?AVCConstraint@Immersive@UI@Windows@@XZ
    ::Windows::UI::Immersive::CConstraint GetConstraint() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWorkspaceOrMonitorConstraint@TouchTooltipConstraint@DirectUI@@AEBA?AVCConstraint@Immersive@UI@Windows@@XZ
    ::Windows::UI::Immersive::CConstraint _GetWorkspaceOrMonitorConstraint() const;
};
} // namespace DirectUI
