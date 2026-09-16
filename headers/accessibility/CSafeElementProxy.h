#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
class CSafeElementProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CreateInstance@CSafeElementProxy@@SAJPEAVElement@DirectUI@@PEAPEAV1@@Z
    static long CreateInstance(::DirectUI::Element *, CSafeElementProxy * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Detach@CSafeElementProxy@@QEAAXXZ
    void Detach();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSafeElementProxy@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?s_SyncCallback@CSafeElementProxy@@SAJPEAUHGADGET__@@PEAXPEAUEventMsg@@@Z
    static long s_SyncCallback(HGADGET__*, void *, EventMsg *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSafeElementProxy@@IEAA@XZ
    CSafeElementProxy();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CSafeElementProxy@@IEAAJPEAVElement@DirectUI@@@Z
    long Initialize(::DirectUI::Element *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDUserContext@CSafeElementProxy@@AEAAJPEAPEAUHDCONTEXT__@@@Z
    long _InitDUserContext(HDCONTEXT__* *);
};
