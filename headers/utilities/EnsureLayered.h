#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
class EnsureLayered {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnsureLayered@@QEAA@XZ
    EnsureLayered();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@EnsureLayered@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@EnsureLayered@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@EnsureLayered@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@EnsureLayered@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@EnsureLayered@@UEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@EnsureLayered@@UEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnUnHosted(::DirectUI::Element *, ::DirectUI::Element *);
};
