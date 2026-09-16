#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace SWF {
class RemoveObject2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?execute@RemoveObject2@SWF@@UEAA_NAEAV22@AEAVMovie@2@@Z
    virtual bool execute(SWF &, void* &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@RemoveObject2@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@RemoveObject2@SWF@@UEAAJAEAVStream@Library@@@Z
    virtual long read(::Library::Stream &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@RemoveObject2@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@RemoveObject2@SWF@@UEBAJAEAVStream@Library@@@Z
    virtual long write(::Library::Stream &) const;
};
} // namespace SWF
