#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace SWF {
class TagFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeTag@TagFactory@SWF@@SAJAEBV22@AEAVStream@Library@@QEAPEAVTag@2@@Z
    static long makeTag(SWF const &, ::Library::Stream &, ::SWF::Tag * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@TagFactory@SWF@@SAJAEAVStream@Library@@QEBVTag@2@QEA_N@Z
    static long write(::Library::Stream &, ::SWF::Tag const * const, bool * const);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeTag@TagFactory@SWF@@CAJAEBV22@AEAVStream@Library@@AEBW4TagID@Tag@2@AEBIQEAPEAV62@@Z
    static long makeTag(SWF const &, ::Library::Stream &, int const &, unsigned int const &, ::SWF::Tag * * const);
};
} // namespace SWF
