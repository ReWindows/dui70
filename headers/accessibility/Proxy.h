#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace DirectUI {
class Proxy {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Proxy@DirectUI@@QEAA@XZ
    Proxy();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Proxy@DirectUI@@QEAA@AEBV01@@Z
    Proxy(Proxy const &);
    // Category: Method | Source: PE Export
    // Symbol: ?SyncCallback@Proxy@DirectUI@@SAJPEAUHGADGET__@@PEAXPEAUEventMsg@@@Z
    static long SyncCallback(HGADGET__*, void *, EventMsg *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Proxy@DirectUI@@UEAA@XZ
    virtual ~Proxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Invoke@Proxy@DirectUI@@IEAAXIPEAX@Z
    void Invoke(unsigned int, void *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInvoke@Proxy@DirectUI@@MEAAXIPEAX@Z
    virtual void OnInvoke(unsigned int, void *);
};
} // namespace DirectUI
