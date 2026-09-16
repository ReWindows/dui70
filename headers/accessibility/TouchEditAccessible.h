#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace DirectUI {
class TouchEditAccessible {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TouchEditAccessible@DirectUI@@SAJPEAVElement@2@PEAPEAVDuiAccessible@2@@Z
    static long Create(::DirectUI::Element *, ::DirectUI::DuiAccessible * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_accState@TouchEditAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAU3@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_accValue@TouchEditAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accValue(tagVARIANT, unsigned short *);
};
} // namespace DirectUI
