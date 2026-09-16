#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace SWF {
class DefineSprite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@DefineSprite@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@DefineSprite@SWF@@UEAAJAEAVStream@Library@@@Z
    virtual long read(::Library::Stream &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?render@DefineSprite@SWF@@UEBAJQEAVGraphics@Gdiplus@@QEBUColorMatrix@4@_N@Z
    virtual long render(::Gdiplus::Graphics * const, ::Gdiplus::ColorMatrix const * const, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@DefineSprite@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@DefineSprite@SWF@@UEBAJAEAVStream@Library@@@Z
    virtual long write(::Library::Stream &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefineSprite@SWF@@UEAA@XZ
    virtual ~DefineSprite();
};
} // namespace SWF
