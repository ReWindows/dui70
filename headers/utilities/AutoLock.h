#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace DirectUI {
class AutoLock {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AutoLock@DirectUI@@QEAA@PEAU_RTL_CRITICAL_SECTION@@@Z
    AutoLock(_RTL_CRITICAL_SECTION *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1AutoLock@DirectUI@@QEAA@XZ
    ~AutoLock();
};
} // namespace DirectUI
