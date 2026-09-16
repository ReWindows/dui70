#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class FontCache {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0FontCache@DirectUI@@QEAA@$$QEAV01@@Z
    FontCache(FontCache &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0FontCache@DirectUI@@QEAA@AEBV01@@Z
    FontCache(FontCache const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0FontCache@DirectUI@@QEAA@XZ
    FontCache();
    // Category: Method | Source: PE Export
    // Symbol: ?InitProcess@FontCache@DirectUI@@SAJXZ
    static long InitProcess();
    // Category: Method | Source: PE Export
    // Symbol: ?InitThread@FontCache@DirectUI@@SAJXZ
    static long InitThread();
    // Category: Method | Source: PE Export
    // Symbol: ?UninitProcess@FontCache@DirectUI@@SAXXZ
    static void UninitProcess();
    // Category: Method | Source: PE Export
    // Symbol: ?UninitThread@FontCache@DirectUI@@SAXXZ
    static void UninitThread();
};
} // namespace DirectUI
