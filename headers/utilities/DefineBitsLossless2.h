#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace SWF {
class DefineBitsLossless2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@DefineBitsLossless2@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@DefineBitsLossless2@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
};
} // namespace SWF
