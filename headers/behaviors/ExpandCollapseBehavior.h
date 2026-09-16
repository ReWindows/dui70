#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI {
class ExpandCollapseBehavior {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ExpandCollapseBehavior@DirectUI@@SAJPEAPEAUIDuiBehavior@@@Z
    static long Create(IDuiBehavior * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExpandCollapseBehavior@DirectUI@@QEAA@XZ
    ExpandCollapseBehavior();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@ExpandCollapseBehavior@DirectUI@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ExpandCollapseBehavior@DirectUI@@UEAAJPEAVValue@2@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@ExpandCollapseBehavior@DirectUI@@UEAAJPEAVElement@2@PEAUEvent@2@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ExpandCollapseBehavior@DirectUI@@UEAAJPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual long OnPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
};
} // namespace DirectUI
