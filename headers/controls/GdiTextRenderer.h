#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 18 member(s).
namespace DirectUI {
class GdiTextRenderer {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@GdiTextRenderer@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@GdiTextRenderer@DirectUI@@QEAAJPEAUHDC__@@PEBUtagRECT@@1H_NKPEAVRichTextCache@2@@Z
    long Begin(HDC__*, tagRECT const *, tagRECT const *, int, bool, unsigned long, ::DirectUI::RichTextCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGlyphRun@GdiTextRenderer@DirectUI@@UEAAJPEAXMMW4DWRITE_MEASURING_MODE@@PEBUDWRITE_GLYPH_RUN@@PEBUDWRITE_GLYPH_RUN_DESCRIPTION@@PEAUIUnknown@@@Z
    virtual long DrawGlyphRun(void *, float, float, int, DWRITE_GLYPH_RUN const *, DWRITE_GLYPH_RUN_DESCRIPTION const *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInlineObject@GdiTextRenderer@DirectUI@@UEAAJPEAXMMPEAUIDWriteInlineObject@@HHPEAUIUnknown@@@Z
    virtual long DrawInlineObject(void *, float, float, IDWriteInlineObject *, int, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawStrikethrough@GdiTextRenderer@DirectUI@@UEAAJPEAXMMPEBUDWRITE_STRIKETHROUGH@@PEAUIUnknown@@@Z
    virtual long DrawStrikethrough(void *, float, float, DWRITE_STRIKETHROUGH const *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawUnderline@GdiTextRenderer@DirectUI@@UEAAJPEAXMMPEBUDWRITE_UNDERLINE@@PEAUIUnknown@@@Z
    virtual long DrawUnderline(void *, float, float, DWRITE_UNDERLINE const *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@GdiTextRenderer@DirectUI@@QEAAXXZ
    void End();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GdiTextRenderer@DirectUI@@QEAA@PEAVRichTextShared@1@@Z
    GdiTextRenderer(::DirectUI::RichTextShared *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransform@GdiTextRenderer@DirectUI@@UEAAJPEAXPEAUDWRITE_MATRIX@@@Z
    virtual long GetCurrentTransform(void *, DWRITE_MATRIX *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelsPerDip@GdiTextRenderer@DirectUI@@UEAAJPEAXPEAM@Z
    virtual long GetPixelsPerDip(void *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPixelSnappingDisabled@GdiTextRenderer@DirectUI@@UEAAJPEAXPEAH@Z
    virtual long IsPixelSnappingDisabled(void *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GdiTextRenderer@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GdiTextRenderer@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GdiTextRenderer@DirectUI@@QEAA@XZ
    ~GdiTextRenderer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawEffectRect@GdiTextRenderer@DirectUI@@AEAAXMMMMMPEAUIUnknown@@@Z
    void _DrawEffectRect(float, float, float, float, float, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRenderTarget@GdiTextRenderer@DirectUI@@AEAAJXZ
    long _EnsureRenderTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDCBrush@GdiTextRenderer@DirectUI@@AEAAXXZ
    void _InitDCBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDrawingEffects@GdiTextRenderer@DirectUI@@AEAAXPEAUIUnknown@@@Z
    void _UpdateDrawingEffects(IUnknown *);
};
} // namespace DirectUI
