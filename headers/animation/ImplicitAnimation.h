#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
class ImplicitAnimation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@ImplicitAnimation@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImplicitAnimation@@QEAA@XZ
    ImplicitAnimation();
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ImplicitAnimation@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@ImplicitAnimation@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@ImplicitAnimation@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@ImplicitAnimation@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@ImplicitAnimation@@UEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ImplicitAnimation@@UEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual long OnPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@ImplicitAnimation@@UEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2PEAH@Z
    virtual long OnPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@ImplicitAnimation@@UEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnUnHosted(::DirectUI::Element *, ::DirectUI::Element *);
};
