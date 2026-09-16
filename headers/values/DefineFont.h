#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace SWF {
class DefineFont {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?mask@DefineFont@SWF@@UEBAJQEAVGraphics@Gdiplus@@AEBW4CombineMode@4@@Z
    virtual long mask(::Gdiplus::Graphics * const, int const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@DefineFont@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PE Export
    // Symbol: ?render@DefineFont@SWF@@UEBAJQEAVGraphics@Gdiplus@@QEBUColorMatrix@4@_N@Z
    virtual long render(::Gdiplus::Graphics * const, ::Gdiplus::ColorMatrix const * const, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@DefineFont@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
};
} // namespace SWF
