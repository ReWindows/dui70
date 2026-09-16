#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace Gdiplus {
class PathGradientBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterpolationColorCount@PathGradientBrush@Gdiplus@@QEBAHXZ
    int GetInterpolationColorCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterpolationColors@PathGradientBrush@Gdiplus@@QEBA?AW4Status@2@PEAVColor@2@PEAMH@Z
    int GetInterpolationColors(::Gdiplus::Color *, float *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@PathGradientBrush@Gdiplus@@QEBA?AW4Status@2@PEAVMatrix@2@@Z
    int GetTransform(::Gdiplus::Matrix *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PathGradientBrush@Gdiplus@@QEAA@PEBVGraphicsPath@1@@Z
    PathGradientBrush(::Gdiplus::GraphicsPath const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGammaCorrection@PathGradientBrush@Gdiplus@@QEAA?AW4Status@2@H@Z
    int SetGammaCorrection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterpolationColors@PathGradientBrush@Gdiplus@@QEAA?AW4Status@2@PEBVColor@2@PEBMH@Z
    int SetInterpolationColors(::Gdiplus::Color const *, float const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@PathGradientBrush@Gdiplus@@QEAA?AW4Status@2@PEBVMatrix@2@@Z
    int SetTransform(::Gdiplus::Matrix const *);
};
} // namespace Gdiplus
