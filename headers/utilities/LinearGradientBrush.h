#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace Gdiplus {
class LinearGradientBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterpolationColorCount@LinearGradientBrush@Gdiplus@@QEBAHXZ
    int GetInterpolationColorCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterpolationColors@LinearGradientBrush@Gdiplus@@QEBA?AW4Status@2@PEAVColor@2@PEAMH@Z
    int GetInterpolationColors(::Gdiplus::Color *, float *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@LinearGradientBrush@Gdiplus@@QEBA?AW4Status@2@PEAVMatrix@2@@Z
    int GetTransform(::Gdiplus::Matrix *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LinearGradientBrush@Gdiplus@@QEAA@AEBVPointF@1@0AEBVColor@1@1@Z
    LinearGradientBrush(::Gdiplus::PointF const &, ::Gdiplus::PointF const &, ::Gdiplus::Color const &, ::Gdiplus::Color const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGammaCorrection@LinearGradientBrush@Gdiplus@@QEAA?AW4Status@2@H@Z
    int SetGammaCorrection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterpolationColors@LinearGradientBrush@Gdiplus@@QEAA?AW4Status@2@PEBVColor@2@PEBMH@Z
    int SetInterpolationColors(::Gdiplus::Color const *, float const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@LinearGradientBrush@Gdiplus@@QEAA?AW4Status@2@PEBVMatrix@2@@Z
    int SetTransform(::Gdiplus::Matrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWrapMode@LinearGradientBrush@Gdiplus@@QEAA?AW4Status@2@W4WrapMode@2@@Z
    int SetWrapMode(int);
};
} // namespace Gdiplus
