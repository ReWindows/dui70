#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class SemanticController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationDelta@SemanticController@DirectUI@@QEAAXMMMMM@Z
    void OnManipulationDelta(float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideZoomThreshold@SemanticController@DirectUI@@QEAAJMMH@Z
    long OverrideZoomThreshold(float, float, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SemanticController@DirectUI@@QEAA@MMPEAVElement@1@@Z
    SemanticController(float, float, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateZoomLevels@SemanticController@DirectUI@@QEAAJMM@Z
    long UpdateZoomLevels(float, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRequestVisualSwap@SemanticController@DirectUI@@AEAAXMMMM@Z
    void _OnRequestVisualSwap(float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessScaleFactorChange@SemanticController@DirectUI@@AEAAXMMMMM@Z
    void _ProcessScaleFactorChange(float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateThresholds@SemanticController@DirectUI@@AEAAXXZ
    void _UpdateThresholds();
};
} // namespace DirectUI
