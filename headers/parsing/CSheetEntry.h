#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI::StyleSheetCache {
class CSheetEntry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSheet@CSheetEntry@StyleSheetCache@DirectUI@@QEAAJPEBGPEAPEAVValue@3@@Z
    long GetSheet(unsigned short const *, ::DirectUI::Value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSheet@CSheetEntry@StyleSheetCache@DirectUI@@QEAAJXZ
    long LoadSheet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matches@CSheetEntry@StyleSheetCache@DirectUI@@QEAA_NPEAUHINSTANCE__@@PEBGW4DynamicScaleParsing@3@M1@Z
    bool Matches(HINSTANCE__*, unsigned short const *, int, float, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Create@CSheetEntry@StyleSheetCache@DirectUI@@SAJPEAUHINSTANCE__@@0PEBGW4DynamicScaleParsing@3@MPEAPEAV123@@Z
    static long s_Create(HINSTANCE__*, HINSTANCE__*, unsigned short const *, int, float, ::DirectUI::StyleSheetCache::CSheetEntry * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSheetEntry@StyleSheetCache@DirectUI@@QEAA@XZ
    ~CSheetEntry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSheetEntry@StyleSheetCache@DirectUI@@AEAAJPEAUHINSTANCE__@@0PEBGW4DynamicScaleParsing@3@M@Z
    long Initialize(HINSTANCE__*, HINSTANCE__*, unsigned short const *, int, float);
};
} // namespace DirectUI::StyleSheetCache
