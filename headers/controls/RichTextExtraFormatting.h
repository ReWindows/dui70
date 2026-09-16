#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class RichTextExtraFormatting {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RichTextExtraFormatting@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingOffset@RichTextExtraFormatting@DirectUI@@UEAAJPEAW4RenderOffset@@@Z
    virtual long GetRenderingOffset(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextColor@RichTextExtraFormatting@DirectUI@@UEAAJPEAK@Z
    virtual long GetTextColor(unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RichTextExtraFormatting@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RichTextExtraFormatting@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RichTextExtraFormatting@DirectUI@@QEAA@XZ
    RichTextExtraFormatting();
};
} // namespace DirectUI
