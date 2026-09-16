#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI {
class RowLayoutSharedInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@RowLayoutSharedInfo@DirectUI@@SAJHPEAPEAV12@@Z
    static long Create(int, RowLayoutSharedInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RowLayoutSharedInfo@DirectUI@@QEAAJH@Z
    long Initialize(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RowLayoutSharedInfo@DirectUI@@QEAAXXZ
    void Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumCols@RowLayoutSharedInfo@DirectUI@@QEAAHI@Z
    int SetNumCols(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesiredSizes@RowLayoutSharedInfo@DirectUI@@QEAAXHPEAVSurface@2@@Z
    void UpdateDesiredSizes(int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RowLayoutSharedInfo@DirectUI@@QEAA@XZ
    ~RowLayoutSharedInfo();
};
} // namespace DirectUI
