#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class DCSurface {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DCSurface@DirectUI@@QEAA@PEAUHDC__@@@Z
    DCSurface(HDC__*);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DCSurface@DirectUI@@QEAA@AEBV01@@Z
    DCSurface(DCSurface const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHDC@DCSurface@DirectUI@@QEAAPEAUHDC__@@XZ
    HDC__* GetHDC();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetType@DCSurface@DirectUI@@UEBA?AW4EType@Surface@2@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PE Export
    // Symbol: ??1DCSurface@DirectUI@@UEAA@XZ
    virtual ~DCSurface();
};
} // namespace DirectUI
