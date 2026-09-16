#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 2 member(s).
namespace SWF {
class Definition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@Definition@SWF@@UEAAJAEAVStream@Library@@@Z
    virtual long read(::Library::Stream &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@Definition@SWF@@UEBAJAEAVStream@Library@@@Z
    virtual long write(::Library::Stream &) const;
};
} // namespace SWF
