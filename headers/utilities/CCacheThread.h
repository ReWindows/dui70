#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace DirectUI::StyleSheetCache {
class CCacheThread {
public:
    class Invoke;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCacheThread@StyleSheetCache@DirectUI@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOn@CCacheThread@StyleSheetCache@DirectUI@@QEBA_NXZ
    bool IsOn() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThread@CCacheThread@StyleSheetCache@DirectUI@@QEAAJXZ
    long RegisterThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThread@CCacheThread@StyleSheetCache@DirectUI@@QEAAJK@Z
    long UnregisterThread(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForExit@CCacheThread@StyleSheetCache@DirectUI@@QEAAXXZ
    void WaitForExit();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCacheThread@StyleSheetCache@DirectUI@@QEAA@XZ
    ~CCacheThread();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureThread@CCacheThread@StyleSheetCache@DirectUI@@AEAAJXZ
    long _EnsureThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Execute@CCacheThread@StyleSheetCache@DirectUI@@AEAAJPEBVInvoke@123@@Z
    long _Execute(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeTarget@CCacheThread@StyleSheetCache@DirectUI@@AEBAXXZ
    void _InvokeTarget() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsThreadExitPending@CCacheThread@StyleSheetCache@DirectUI@@AEBA_NXZ
    bool _IsThreadExitPending() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ThreadProc@CCacheThread@StyleSheetCache@DirectUI@@CAKPEAX@Z
    static unsigned long s_ThreadProc(void *);
};
} // namespace DirectUI::StyleSheetCache
