#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
namespace DirectUI {
class CStyleSheetManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStyleSheetManager@DirectUI@@QEAA@XZ
    CStyleSheetManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSheet@CStyleSheetManager@DirectUI@@QEAAXI@Z
    void ReleaseSheet(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CStyleSheetManager@DirectUI@@QEAAJPEAUHINSTANCE__@@0PEBG1W4DynamicScaleParsing@2@MPEAPEAVValue@2@PEAI@Z
    long Resolve(HINSTANCE__*, HINSTANCE__*, unsigned short const *, unsigned short const *, int, float, ::DirectUI::Value * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Get@CStyleSheetManager@DirectUI@@SAPEAV12@XZ
    static CStyleSheetManager * s_Get();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetThreadLanguage@CStyleSheetManager@DirectUI@@SAJPEAG_K@Z
    static long s_GetThreadLanguage(unsigned short *, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEntry@CStyleSheetManager@DirectUI@@AEAAJPEAUHINSTANCE__@@0PEBGW4DynamicScaleParsing@2@MPEAPEAVCSheetEntry@StyleSheetCache@2@@Z
    long _CreateEntry(HINSTANCE__*, HINSTANCE__*, unsigned short const *, int, float, ::DirectUI::StyleSheetCache::CSheetEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Destroy@CStyleSheetManager@DirectUI@@AEAAXPEAVCSheetEntry@StyleSheetCache@2@@Z
    void _Destroy(::DirectUI::StyleSheetCache::CSheetEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindEntry@CStyleSheetManager@DirectUI@@AEBAPEAVCSheetEntry@StyleSheetCache@2@PEAUHINSTANCE__@@PEBGW4DynamicScaleParsing@2@M@Z
    ::DirectUI::StyleSheetCache::CSheetEntry * _FindEntry(HINSTANCE__*, unsigned short const *, int, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLock@CStyleSheetManager@DirectUI@@AEAAPEAVCriticalSection@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::CriticalSection * _GetLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScaleFactor@CStyleSheetManager@DirectUI@@AEBAMXZ
    float _GetScaleFactor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OneTimeInit@CStyleSheetManager@DirectUI@@AEAA_NXZ
    bool _OneTimeInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Parse@CStyleSheetManager@DirectUI@@AEAAJPEAVCSheetEntry@StyleSheetCache@2@@Z
    long _Parse(::DirectUI::StyleSheetCache::CSheetEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveEntryById@CStyleSheetManager@DirectUI@@AEAAXI@Z
    void _RemoveEntryById(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OneTimeInit@CStyleSheetManager@DirectUI@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int s_OneTimeInit(_RTL_RUN_ONCE *, void *, void * *);
};
} // namespace DirectUI
