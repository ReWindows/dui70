#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace Gdiplus {
class Pen {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@Pen@Gdiplus@@QEBA?AW4Status@2@PEAVColor@2@@Z
    int GetColor(::Gdiplus::Color *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Pen@Gdiplus@@QEAA@AEBVColor@1@M@Z
    Pen(::Gdiplus::Color const &, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@Pen@Gdiplus@@QEAA?AW4Status@2@AEBVColor@2@@Z
    int SetColor(::Gdiplus::Color const &);
};
} // namespace Gdiplus
