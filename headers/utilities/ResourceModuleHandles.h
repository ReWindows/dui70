#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace DirectUI {
class ResourceModuleHandles {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHandle@ResourceModuleHandles@DirectUI@@QEAAJPEBGPEAPEAUHINSTANCE__@@@Z
    long GetHandle(unsigned short const *, HINSTANCE__* *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ResourceModuleHandles@DirectUI@@QEAA@XZ
    ResourceModuleHandles();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ResourceModuleHandles@DirectUI@@QEAA@XZ
    ~ResourceModuleHandles();
};
} // namespace DirectUI
