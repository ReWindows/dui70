#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class Surface {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSurfaceType@Surface@DirectUI@@SA?AW4EType@12@I@Z
    static int GetSurfaceType(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSurfaceType@Surface@DirectUI@@SAIW4EType@12@@Z
    static unsigned int GetSurfaceType(int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Surface@DirectUI@@QEAA@AEBV01@@Z
    Surface(Surface const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Surface@DirectUI@@QEAA@XZ
    Surface();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Surface@DirectUI@@UEAA@XZ
    virtual ~Surface();
};
} // namespace DirectUI
