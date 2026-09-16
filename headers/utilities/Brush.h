#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace Gdiplus {
class Brush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@Brush@Gdiplus@@UEBAPEAV12@XZ
    virtual ::Gdiplus::Brush * Clone() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@Brush@Gdiplus@@QEBA?AW4BrushType@2@XZ
    int GetType() const;
};
} // namespace Gdiplus
