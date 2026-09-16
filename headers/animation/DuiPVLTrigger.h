#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace DirectUI {
class DuiPVLTrigger {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerCrossfade@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@0_N111PEAK@Z
    long TriggerCrossfade(::DirectUI::Element *, ::DirectUI::Element *, bool, bool, bool, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerFade@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@IPEAK@Z
    long TriggerFade(::DirectUI::Element *, unsigned int, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuiPVLTrigger@DirectUI@@QEAA@XZ
    ~DuiPVLTrigger();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureObject@DuiPVLTrigger@DirectUI@@IEAAJXZ
    long EnsureObject();
};
} // namespace DirectUI
