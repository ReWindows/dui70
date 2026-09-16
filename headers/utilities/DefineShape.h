#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace SWF {
class DefineShape {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?mask@DefineShape@SWF@@UEBAJQEAVGraphics@Gdiplus@@AEBW4CombineMode@4@@Z
    virtual long mask(::Gdiplus::Graphics * const, int const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@DefineShape@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@DefineShape@SWF@@UEAAJAEAVStream@Library@@@Z
    virtual long read(::Library::Stream &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?render@DefineShape@SWF@@UEBAJQEAVGraphics@Gdiplus@@QEBUColorMatrix@4@_N@Z
    virtual long render(::Gdiplus::Graphics * const, ::Gdiplus::ColorMatrix const * const, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@DefineShape@SWF@@UEBAJAEAVStream@Library@@@Z
    virtual long write(::Library::Stream &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefineShape@SWF@@UEAA@XZ
    virtual ~DefineShape();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DefineShape@SWF@@IEAA@XZ
    DefineShape();
};
} // namespace SWF
