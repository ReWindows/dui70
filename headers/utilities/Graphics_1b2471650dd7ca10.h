#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace Gdiplus {
class Graphics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawPath@Graphics@Gdiplus@@QEAA?AW4Status@2@PEBVPen@2@PEBVGraphicsPath@2@@Z
    int DrawPath(::Gdiplus::Pen const *, ::Gdiplus::GraphicsPath const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@Graphics@Gdiplus@@QEBA?AW4Status@2@PEAVMatrix@2@@Z
    int GetTransform(::Gdiplus::Matrix *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Graphics@Gdiplus@@QEAA@PEAVImage@1@@Z
    Graphics(::Gdiplus::Image *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmoothingMode@Graphics@Gdiplus@@QEAA?AW4Status@2@W4SmoothingMode@2@@Z
    int SetSmoothingMode(int);
};
} // namespace Gdiplus
