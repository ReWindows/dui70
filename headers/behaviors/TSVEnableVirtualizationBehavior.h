#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI {
class TSVEnableVirtualizationBehavior {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TSVEnableVirtualizationBehavior@DirectUI@@SAJPEAPEAUIDuiBehavior@@@Z
    static long Create(IDuiBehavior * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@TSVEnableVirtualizationBehavior@DirectUI@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@TSVEnableVirtualizationBehavior@DirectUI@@UEAAJPEAVValue@2@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@TSVEnableVirtualizationBehavior@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@TSVEnableVirtualizationBehavior@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TSVEnableVirtualizationBehavior@DirectUI@@QEAA@XZ
    TSVEnableVirtualizationBehavior();
};
} // namespace DirectUI
