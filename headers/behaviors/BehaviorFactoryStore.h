#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace DirectUI {
class BehaviorFactoryStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@BehaviorFactoryStore@DirectUI@@QEAAJPEBGPEAUIDuiBehaviorFactory@@@Z
    long Add(unsigned short const *, IDuiBehaviorFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@BehaviorFactoryStore@DirectUI@@QEAAJPEBGPEAUIDuiBehaviorFactory@@@Z
    long Remove(unsigned short const *, IDuiBehaviorFactory *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BehaviorFactoryStore@DirectUI@@QEAA@XZ
    ~BehaviorFactoryStore();
};
} // namespace DirectUI
