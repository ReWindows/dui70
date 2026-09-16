#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace Gdiplus {
class Image {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@Image@Gdiplus@@UEAAPEAV12@XZ
    virtual ::Gdiplus::Image * Clone();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@Image@Gdiplus@@QEAAIXZ
    unsigned int GetHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@Image@Gdiplus@@QEAAIXZ
    unsigned int GetWidth();
};
} // namespace Gdiplus
