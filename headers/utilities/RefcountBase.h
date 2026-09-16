#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace DirectUI {
class RefcountBase {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@RefcountBase@DirectUI@@QEAAJXZ
    long AddRef();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RefcountBase@DirectUI@@QEAA@XZ
    RefcountBase();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@RefcountBase@DirectUI@@QEAAJXZ
    long Release();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1RefcountBase@DirectUI@@UEAA@XZ
    virtual ~RefcountBase();
};
} // namespace DirectUI
