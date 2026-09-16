#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace DirectUI {
class TouchSelectHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TouchSelectHost@DirectUI@@SAJPEAUHWND__@@PEBUtagRECT@@PEAPEAV12@@Z
    static long Create(HWND__*, tagRECT const *, TouchSelectHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@TouchSelectHost@DirectUI@@UEAAJI_K_JPEA_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
};
} // namespace DirectUI
