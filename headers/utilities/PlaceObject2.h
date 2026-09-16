#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace SWF {
class PlaceObject2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?execute@PlaceObject2@SWF@@UEAA_NAEAV22@AEAVMovie@2@@Z
    virtual bool execute(SWF &, void* &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?findRequiredDepth@PlaceObject2@SWF@@UEBAGXZ
    virtual unsigned short findRequiredDepth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@PlaceObject2@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@PlaceObject2@SWF@@UEAAJAEAVStream@Library@@@Z
    virtual long read(::Library::Stream &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@PlaceObject2@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@PlaceObject2@SWF@@UEBAJAEAVStream@Library@@@Z
    virtual long write(::Library::Stream &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PlaceObject2@SWF@@UEAA@XZ
    virtual ~PlaceObject2();
};
} // namespace SWF
