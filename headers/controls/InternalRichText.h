#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
// Base evidence: DirectUI::RichText (likely; classinfo-template-instantiation).
namespace DirectUI {
class InternalRichText {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@InternalRichText@DirectUI@@SAJPEAVElement@2@PEAPEAV12@@Z
    static long Create(::DirectUI::Element *, InternalRichText * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@InternalRichText@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
};
} // namespace DirectUI
