#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace SWF {
class JPEGTables {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@JPEGTables@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?tagID@JPEGTables@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JPEGTables@SWF@@UEAA@XZ
    virtual ~JPEGTables();
};
} // namespace SWF
