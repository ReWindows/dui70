#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace SWF {
class DefineBitsJPEG3 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@DefineBitsJPEG3@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@DefineBitsJPEG3@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
};
} // namespace SWF
