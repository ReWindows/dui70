#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class AdaptorElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@AdaptorElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageCallback@AdaptorElement@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
};
} // namespace DirectUI
