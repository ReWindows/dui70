#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
namespace DirectUI {
class CallstackTracker {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CallstackTracker@DirectUI@@QEAA@XZ
    CallstackTracker();
    // Category: Method | Source: PE Export
    // Symbol: ?CaptureCallstackFrames@CallstackTracker@DirectUI@@QEAAHXZ
    int CaptureCallstackFrames();
    // Category: Method | Source: PE Export
    // Symbol: ?EnumCallstackFrames@CallstackTracker@DirectUI@@QEAAHP6AXPEBD0KK@Z@Z
    int EnumCallstackFrames(void ( *)(char const *, char const *, unsigned long, unsigned long));
    // Category: Method | Source: PE Export
    // Symbol: ?Init@CallstackTracker@DirectUI@@SAHXZ
    static int Init();
    // Category: Method | Source: PE Export
    // Symbol: ?Uninit@CallstackTracker@DirectUI@@SAXXZ
    static void Uninit();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CallstackTracker@DirectUI@@QEAA@XZ
    ~CallstackTracker();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?DllsLoaded@CallstackTracker@DirectUI@@CAHXZ
    static int DllsLoaded();
    // Category: Method | Source: PE Export
    // Symbol: ?FillSymbolInfo@CallstackTracker@DirectUI@@AEAAXPEAUSTACK_SYMBOL_INFO@12@_K@Z
    void FillSymbolInfo(WindissectOpaque *, uint64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetModuleBase@CallstackTracker@DirectUI@@AEAA_KPEAX_K@Z
    uint64_t GetModuleBase(void *, uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?InitOnceCallback@CallstackTracker@DirectUI@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitOnceCallback(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeDllInfo@CallstackTracker@DirectUI@@CAHXZ
    static int InitializeDllInfo();
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeSymbols@CallstackTracker@DirectUI@@CAHXZ
    static int InitializeSymbols();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsCorrectImageHlpVersion@CallstackTracker@DirectUI@@CAHXZ
    static int IsCorrectImageHlpVersion();
};
} // namespace DirectUI
