#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace Gdiplus {
class TextureBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@TextureBrush@Gdiplus@@QEAA?AW4Status@2@PEBVMatrix@2@@Z
    int SetTransform(::Gdiplus::Matrix const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextureBrush@Gdiplus@@QEAA@PEAVImage@1@W4WrapMode@1@@Z
    TextureBrush(::Gdiplus::Image *, int);
};
} // namespace Gdiplus
