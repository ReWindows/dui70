#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class TSVVirtualizedContainerBehavior {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TSVVirtualizedContainerBehavior@DirectUI@@SAJPEAPEAUIDuiBehavior@@@Z
    static long Create(IDuiBehavior * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@TSVVirtualizedContainerBehavior@DirectUI@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@TSVVirtualizedContainerBehavior@DirectUI@@UEAAJPEAVValue@2@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@TSVVirtualizedContainerBehavior@DirectUI@@UEAAJPEAVElement@2@0@Z
    virtual long OnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TSVVirtualizedContainerBehavior@DirectUI@@UEAAJPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual long OnPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@TSVVirtualizedContainerBehavior@DirectUI@@UEAAJPEAVElement@2@0@Z
    virtual long OnUnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TSVVirtualizedContainerBehavior@DirectUI@@QEAA@XZ
    TSVVirtualizedContainerBehavior();
};
} // namespace DirectUI
