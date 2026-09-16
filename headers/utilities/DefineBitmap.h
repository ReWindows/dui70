#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace SWF {
class DefineBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?render@DefineBitmap@SWF@@UEBAJQEAVGraphics@Gdiplus@@QEBUColorMatrix@4@_N@Z
    virtual long render(::Gdiplus::Graphics * const, ::Gdiplus::ColorMatrix const * const, bool) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefineBitmap@SWF@@UEAA@XZ
    virtual ~DefineBitmap();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?assignBitmap@DefineBitmap@SWF@@IEAAJQEAVBitmap@Gdiplus@@AEBH@Z
    long assignBitmap(::Gdiplus::Bitmap * const, int const &);
};
} // namespace SWF
