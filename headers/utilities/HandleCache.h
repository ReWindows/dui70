#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace DirectUI {
class HandleCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushHandles@HandleCache@DirectUI@@QEAAXXZ
    void FlushHandles();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@HandleCache@DirectUI@@QEAAJPEAUHWND__@@PEBGHPEAPEAX@Z
    long GetHandle(HWND__*, unsigned short const *, int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HandleCache@DirectUI@@QEAAXXZ
    void Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnInit@HandleCache@DirectUI@@QEAAXXZ
    void UnInit();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyHandleMap@HandleCache@DirectUI@@AEAAXPEAV?$DynamicArray@UHANDLEMAP@HandleCache@DirectUI@@$0A@@2@@Z
    void DestroyHandleMap(WindissectOpaque *);
};
} // namespace DirectUI
