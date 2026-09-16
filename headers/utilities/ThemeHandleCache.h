#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace DirectUI {
class ThemeHandleCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ThemeHandleCache@DirectUI@@UEAAXPEAX@Z
    virtual void Close(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushHandles@ThemeHandleCache@DirectUI@@QEAAX_K@Z
    void FlushHandles(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@ThemeHandleCache@DirectUI@@UEAAPEAXPEAUHWND__@@PEBGH@Z
    virtual void * Open(HWND__*, unsigned short const *, int);
};
} // namespace DirectUI
