#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace SWF {
class Unknown {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@Unknown@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PE Export
    // Symbol: ?tagID@Unknown@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
};
} // namespace SWF
