#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 2 member(s).
namespace DirectUI {
class ResourceHandleCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ResourceHandleCache@DirectUI@@UEAAXPEAX@Z
    virtual void Close(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@ResourceHandleCache@DirectUI@@UEAAPEAXPEAUHWND__@@PEBGH@Z
    virtual void * Open(HWND__*, unsigned short const *, int);
};
} // namespace DirectUI
