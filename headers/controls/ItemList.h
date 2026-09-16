#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
// Base evidence: DirectUI::Selector (likely; classinfo-template-instantiation).
namespace DirectUI {
class ItemList {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ItemList@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@ItemList@DirectUI@@UEAAPEAVElement@2@PEAV32@HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@ItemList@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@ItemList@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsReorderable@ItemList@DirectUI@@QEAA_NXZ
    bool IsReorderable();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ItemList@DirectUI@@QEAA@XZ
    ItemList();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@ItemList@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@ItemList@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ReorderableProp@ItemList@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ReorderableProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetReorderable@ItemList@DirectUI@@QEAAJ_N@Z
    long SetReorderable(bool);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ItemList@DirectUI@@UEAA@XZ
    virtual ~ItemList();
};
} // namespace DirectUI
