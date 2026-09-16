#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI {
class GridItemProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@GridItemProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@GridItemProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridItemProvider@DirectUI@@QEAA@XZ
    GridItemProvider();
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@GridItemProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@GridItemProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?get_Column@GridItemProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_Column(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_ColumnSpan@GridItemProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_ColumnSpan(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_ContainingGrid@GridItemProvider@DirectUI@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_ContainingGrid(IRawElementProviderSimple * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_Row@GridItemProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_Row(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_RowSpan@GridItemProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_RowSpan(int *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1GridItemProvider@DirectUI@@UEAA@XZ
    virtual ~GridItemProvider();
};
} // namespace DirectUI
