#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace DirectUI {
class CritSecLock {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CritSecLock@DirectUI@@QEAA@PEAU_RTL_CRITICAL_SECTION@@@Z
    CritSecLock(_RTL_CRITICAL_SECTION *);
    // Category: Method | Source: PE Export
    // Symbol: ?Unlock@CritSecLock@DirectUI@@QEAAXXZ
    void Unlock();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CritSecLock@DirectUI@@QEAA@XZ
    ~CritSecLock();
};
} // namespace DirectUI
