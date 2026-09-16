#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace DirectUI {
class RichTextCacheEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGlyphRun@RichTextCacheEntry@DirectUI@@QEAAJMMAEBUDWRITE_GLYPH_RUN@@W4DWRITE_MEASURING_MODE@@@Z
    long AddGlyphRun(float, float, DWRITE_GLYPH_RUN const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@RichTextCacheEntry@DirectUI@@QEAAJPEAUIDWriteTextRenderer@@@Z
    long Draw(IDWriteTextRenderer *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RichTextCacheEntry@DirectUI@@QEAA@XZ
    ~RichTextCacheEntry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearGlyphRuns@RichTextCacheEntry@DirectUI@@AEAAXXZ
    void _ClearGlyphRuns();
};
} // namespace DirectUI
