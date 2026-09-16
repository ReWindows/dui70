#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI {
class TouchTooltipProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@TouchTooltipProxy@DirectUI@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@TouchTooltipProxy@DirectUI@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@TouchTooltipProxy@DirectUI@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@TouchTooltipProxy@DirectUI@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@TouchTooltipProxy@DirectUI@@SAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(HWND__*, _GUID const &, void * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchTooltipProxy@DirectUI@@IEAA@XZ
    TouchTooltipProxy();
};
} // namespace DirectUI
