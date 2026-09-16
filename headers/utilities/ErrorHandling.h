#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 2 member(s).
namespace Library {
class ErrorHandling {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?convertStatus@ErrorHandling@Library@@SAJAEBW4Status@Gdiplus@@@Z
    static long convertStatus(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?convertWin32Result@ErrorHandling@Library@@SAJAEBH@Z
    static long convertWin32Result(int const &);
};
} // namespace Library
