#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace DirectUI {
class DeferCycle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DeferCycle@DirectUI@@SAJPEAPEAV12@@Z
    static long Create(DeferCycle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DeferCycle@DirectUI@@QEAAJXZ
    long Initialize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeferCycle@DirectUI@@QEAA_NPEAXW4ReferenceType@2@@Z
    bool Release(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@DeferCycle@DirectUI@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndDefer@DeferCycle@DirectUI@@QEAAXPEAVElement@2@@Z
    void _EndDefer(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferCycle@DirectUI@@UEAA@XZ
    virtual ~DeferCycle();
};
} // namespace DirectUI
