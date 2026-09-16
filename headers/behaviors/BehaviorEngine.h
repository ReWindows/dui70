#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace DirectUI {
class BehaviorEngine {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@BehaviorEngine@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@BehaviorEngine@DirectUI@@SAJXZ
    static long Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBehavior@BehaviorEngine@DirectUI@@UEAAJPEBG0PEAVValue@2@PEAPEAUIDuiBehavior@@@Z
    virtual long CreateBehavior(unsigned short const *, unsigned short const *, ::DirectUI::Value *, IDuiBehavior * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BehaviorEngine@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBehaviorFactory@BehaviorEngine@DirectUI@@UEAAJPEBGPEAUIDuiBehaviorFactory@@@Z
    virtual long RegisterBehaviorFactory(unsigned short const *, IDuiBehaviorFactory *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BehaviorEngine@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterBehaviorFactory@BehaviorEngine@DirectUI@@UEAAJPEBGPEAUIDuiBehaviorFactory@@@Z
    virtual long UnregisterBehaviorFactory(unsigned short const *, IDuiBehaviorFactory *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BehaviorEngine@DirectUI@@AEAA@XZ
    BehaviorEngine();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BehaviorEngine@DirectUI@@EEAA@XZ
    virtual ~BehaviorEngine();
};
} // namespace DirectUI
