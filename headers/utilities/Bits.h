#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace SWF {
class Bits {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?extendSign@Bits@SWF@@SAHAEBIAEB_K@Z
    static int extendSign(unsigned int const &, uint64_t const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?extract@Bits@SWF@@QEAAJAEB_KQEAI@Z
    long extract(uint64_t const &, unsigned int * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?extractFlag@Bits@SWF@@QEAAJQEA_N@Z
    long extractFlag(bool * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?extractSigned@Bits@SWF@@QEAAJAEB_KQEAH@Z
    long extractSigned(uint64_t const &, int * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?flush@Bits@SWF@@QEAAJXZ
    long flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?forceAlignment@Bits@SWF@@QEAAJXZ
    long forceAlignment();
};
} // namespace SWF
