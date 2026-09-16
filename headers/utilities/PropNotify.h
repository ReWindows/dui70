#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 2 member(s).
namespace DirectUI {
class PropNotify {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@PropNotify@DirectUI@@SA_NPEBUPropertyInfo@2@HP6APEBU32@XZ@Z
    static bool IsEqual(::DirectUI::PropertyInfo const *, int, ::DirectUI::PropertyInfo const * ( *)(void));
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@PropNotify@DirectUI@@QEAA_NP6APEBUPropertyInfo@2@XZ@Z
    bool IsEqual(::DirectUI::PropertyInfo const * ( *)(void));
};
} // namespace DirectUI
