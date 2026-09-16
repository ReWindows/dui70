#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace DirectUI {
class RichTextShared {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@RichTextShared@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAliasedRenderingParams@RichTextShared@DirectUI@@QEAAJPEAPEAUIDWriteRenderingParams@@@Z
    long GetAliasedRenderingParams(IDWriteRenderingParams * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGdiNaturalRenderingParams@RichTextShared@DirectUI@@QEAAJPEAPEAUIDWriteRenderingParams@@@Z
    long GetGdiNaturalRenderingParams(IDWriteRenderingParams * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShared@RichTextShared@DirectUI@@SAJPEAPEAV12@@Z
    static long GetShared(RichTextShared * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RichTextShared@DirectUI@@QEAAJXZ
    long Initialize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RichTextShared@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RichTextShared@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RichTextShared@DirectUI@@UEAA@XZ
    virtual ~RichTextShared();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDWriteLoaded@RichTextShared@DirectUI@@AEAAJXZ
    long _EnsureDWriteLoaded();
};
} // namespace DirectUI
