#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace DirectUI::TouchHWNDElement {
class TooltipEventSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@TooltipEventSink@TouchHWNDElement@DirectUI@@UEAAXPEAVElement@3@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTooltipHidden@TooltipEventSink@TouchHWNDElement@DirectUI@@UEAAJXZ
    virtual long OnTooltipHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTooltipTimerFired@TooltipEventSink@TouchHWNDElement@DirectUI@@UEAAJW4TOUCHTOOLTIP_INPUT@@W4TOUCHTOOLTIP_TYPE@@W4TOUCHTOOLTIP_DELAY@@@Z
    virtual long OnTooltipTimerFired(int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TooltipEventSink@TouchHWNDElement@DirectUI@@QEAA@XZ
    TooltipEventSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@TooltipEventSink@TouchHWNDElement@DirectUI@@SAJPEAV23@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(::DirectUI::TouchHWNDElement *, _GUID const &, void * *);
};
} // namespace DirectUI::TouchHWNDElement
