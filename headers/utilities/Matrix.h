#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace Gdiplus {
class Matrix {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElements@Matrix@Gdiplus@@QEBA?AW4Status@2@PEAM@Z
    int GetElements(float *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Matrix@Gdiplus@@QEAA@MMMMMM@Z
    Matrix(float, float, float, float, float, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Matrix@Gdiplus@@QEAA@XZ
    Matrix();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Matrix@Gdiplus@@QEAA?AW4Status@2@XZ
    int Reset();
};
} // namespace Gdiplus
