#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace Gdiplus {
class SolidBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@SolidBrush@Gdiplus@@QEBA?AW4Status@2@PEAVColor@2@@Z
    int GetColor(::Gdiplus::Color *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@SolidBrush@Gdiplus@@QEAA?AW4Status@2@AEBVColor@2@@Z
    int SetColor(::Gdiplus::Color const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SolidBrush@Gdiplus@@QEAA@AEBVColor@1@@Z
    SolidBrush(::Gdiplus::Color const &);
};
} // namespace Gdiplus
