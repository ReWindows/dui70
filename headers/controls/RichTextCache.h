#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 21 member(s).
namespace DirectUI {
class RichTextCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGlyphRun@RichTextCache@DirectUI@@QEAAJKMMAEBUDWRITE_GLYPH_RUN@@W4DWRITE_MEASURING_MODE@@@Z
    long AddGlyphRun(unsigned long, float, float, DWRITE_GLYPH_RUN const &, int);
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@RichTextCache@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginGlyphRuns@RichTextCache@DirectUI@@QEAAJK@Z
    long BeginGlyphRuns(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMetrics@RichTextCache@DirectUI@@UEAAXPEAURichTextCacheMetrics@@@Z
    virtual void CalculateMetrics(RichTextCacheMetrics *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDraw@RichTextCache@DirectUI@@QEAAJK@Z
    long CanDraw(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@RichTextCache@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@RichTextCache@DirectUI@@SAJIPEAPEAV12@@Z
    static long Create(unsigned int, RichTextCache * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@RichTextCache@DirectUI@@QEAAJKPEAUIDWriteTextRenderer@@@Z
    long Draw(unsigned long, IDWriteTextRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enumerate@RichTextCache@DirectUI@@UEAAXP6AXKPEAX@Z0@Z
    virtual void Enumerate(void ( *)(unsigned long, void *), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedTextMetrics@RichTextCache@DirectUI@@QEAAJKPEAUDWRITE_TEXT_METRICS@@@Z
    long GetCachedTextMetrics(unsigned long, DWRITE_TEXT_METRICS *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RichTextCache@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RichTextCache@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@RichTextCache@DirectUI@@UEAAJK@Z
    virtual long Remove(unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RichTextCache@DirectUI@@QEAA@XZ
    RichTextCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutConstraints@RichTextCache@DirectUI@@QEAAJKHH@Z
    long SetLayoutConstraints(unsigned long, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@RichTextCache@DirectUI@@QEAAJKPEBG@Z
    long SetText(unsigned long, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyEntriesTable@RichTextCache@DirectUI@@AEAAXXZ
    void _DestroyEntriesTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureEntry@RichTextCache@DirectUI@@AEAAJKPEAPEAVRichTextCacheEntry@2@@Z
    long _EnsureEntry(unsigned long, RichTextCacheEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntry@RichTextCache@DirectUI@@AEAAJKPEAPEAVRichTextCacheEntry@2@@Z
    long _GetEntry(unsigned long, RichTextCacheEntry * *);
};
} // namespace DirectUI
