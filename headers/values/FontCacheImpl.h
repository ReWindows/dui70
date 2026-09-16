#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class FontCacheImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireBrush@FontCacheImpl@DirectUI@@UEAAPEAUHBRUSH__@@PEAUHBITMAP__@@PEAX@Z
    virtual HBRUSH__* AcquireBrush(HBITMAP__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckInFont@FontCacheImpl@DirectUI@@UEAAXXZ
    virtual void CheckInFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOutFont@FontCacheImpl@DirectUI@@UEAAPEAUHFONT__@@PEBGHHHHH@Z
    virtual HFONT__* CheckOutFont(unsigned short const *, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanCache@FontCacheImpl@DirectUI@@QEAAXXZ
    void CleanCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FontCacheImpl@DirectUI@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBrush@FontCacheImpl@DirectUI@@UEAAXXZ
    virtual void ReleaseBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBrushes@FontCacheImpl@DirectUI@@QEAAXXZ
    void ReleaseBrushes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseFonts@FontCacheImpl@DirectUI@@QEAAXXZ
    void ReleaseFonts();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FontCacheImpl@DirectUI@@QEAA@XZ
    ~FontCacheImpl();
};
} // namespace DirectUI
