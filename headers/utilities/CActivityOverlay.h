#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace DirectUI {
class CActivityOverlay {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CActivityOverlay@DirectUI@@QEAA@PEAVModernProgressBar@1@@Z
    CActivityOverlay(::DirectUI::ModernProgressBar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CActivityOverlay@DirectUI@@QEAAXPEAUHDC__@@PEBUtagRECT@@1I@Z
    void Paint(HDC__*, tagRECT const *, tagRECT const *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ComputeSinFunc@CActivityOverlay@DirectUI@@CAMMW4FUNCMODE@12@@Z
    static float s_ComputeSinFunc(float, int);
};
} // namespace DirectUI
