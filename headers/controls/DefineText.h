#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace SWF {
class DefineText {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DefineText@SWF@@QEAA@XZ
    DefineText();
    // Category: Method | Source: PE Export
    // Symbol: ?mask@DefineText@SWF@@UEBAJQEAVGraphics@Gdiplus@@AEBW4CombineMode@4@@Z
    virtual long mask(::Gdiplus::Graphics * const, int const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@DefineText@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PE Export
    // Symbol: ?render@DefineText@SWF@@UEBAJQEAVGraphics@Gdiplus@@QEBUColorMatrix@4@_N@Z
    virtual long render(::Gdiplus::Graphics * const, ::Gdiplus::ColorMatrix const * const, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@DefineText@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefineText@SWF@@UEAA@XZ
    virtual ~DefineText();
};
} // namespace SWF
