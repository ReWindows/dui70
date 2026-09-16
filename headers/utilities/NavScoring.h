#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace DirectUI {
class NavScoring {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@NavScoring@DirectUI@@QEAAXPEAVElement@2@HPEBUNavReference@2@@Z
    void Init(::DirectUI::Element *, int, ::DirectUI::NavReference const *);
    // Category: Method | Source: PE Export
    // Symbol: ?TrackScore@NavScoring@DirectUI@@QEAAHPEAVElement@2@0@Z
    int TrackScore(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Try@NavScoring@DirectUI@@QEAAHPEAVElement@2@HPEBUNavReference@2@K@Z
    int Try(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
};
} // namespace DirectUI
