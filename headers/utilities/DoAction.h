#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace SWF {
class DoAction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?execute@DoAction@SWF@@UEAA_NAEAV22@AEAVMovie@2@@Z
    virtual bool execute(SWF &, void* &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@DoAction@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@DoAction@SWF@@UEAAJAEAVStream@Library@@@Z
    virtual long read(::Library::Stream &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@DoAction@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@DoAction@SWF@@UEBAJAEAVStream@Library@@@Z
    virtual long write(::Library::Stream &) const;
};
} // namespace SWF
