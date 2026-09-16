#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
class BehaviorEngineHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBehavior@BehaviorEngineHelper@@QEAAJPEBG0PEAVValue@DirectUI@@PEAPEAUIDuiBehavior@@@Z
    long CreateBehavior(unsigned short const *, unsigned short const *, ::DirectUI::Value *, IDuiBehavior * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BehaviorEngineHelper@@QEAA@XZ
    ~BehaviorEngineHelper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureObject@BehaviorEngineHelper@@IEAAJXZ
    long EnsureObject();
};
