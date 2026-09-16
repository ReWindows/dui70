#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI::Impl {
class CParserCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLayout@CParserCache@Impl@DirectUI@@UEAAJKP6AJHPEAHPEAPEAVValue@3@@ZH0@Z
    virtual long AddLayout(unsigned long, long ( *)(int, int *, ::DirectUI::Value * *), int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStoredClasses@CParserCache@Impl@DirectUI@@UEAAJXZ
    virtual long ClearStoredClasses();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayout@CParserCache@Impl@DirectUI@@UEAAJKPEAPEAVValue@3@@Z
    virtual long CreateLayout(unsigned long, ::DirectUI::Value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CParserCache@Impl@DirectUI@@UEAAJKPEAPEAVValue@3@@Z
    virtual long Find(unsigned long, ::DirectUI::Value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CParserCache@Impl@DirectUI@@UEAAJKPEAPEAUIClassInfo@3@@Z
    virtual long Find(unsigned long, ::DirectUI::IClassInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CParserCache@Impl@DirectUI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Store@CParserCache@Impl@DirectUI@@UEAAJKPEAVValue@3@@Z
    virtual long Store(unsigned long, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Store@CParserCache@Impl@DirectUI@@UEAAJKPEAUIClassInfo@3@@Z
    virtual long Store(unsigned long, ::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CParserCache@Impl@DirectUI@@UEAA@XZ
    virtual ~CParserCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBucket@CParserCache@Impl@DirectUI@@AEAAJKPEAPEAV?$DynamicArray@UParserCacheEntry@Impl@DirectUI@@$0A@@3@@Z
    long _GetBucket(unsigned long, WindissectOpaque * *);
};
} // namespace DirectUI::Impl
