#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 2 member(s).
namespace DirectUI::TouchSelect {
class TouchSelectListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@TouchSelectListener@TouchSelect@DirectUI@@UEAAXPEAVElement@3@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@TouchSelectListener@TouchSelect@DirectUI@@UEAAXPEAVElement@3@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
};
} // namespace DirectUI::TouchSelect
