#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class GridProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@GridProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItem@GridProvider@DirectUI@@UEAAJHHPEAPEAUIRawElementProviderSimple@@@Z
    virtual long GetItem(int, int, IRawElementProviderSimple * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@GridProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridProvider@DirectUI@@QEAA@XZ
    GridProvider();
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@GridProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@GridProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?get_ColumnCount@GridProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_ColumnCount(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_RowCount@GridProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_RowCount(int *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1GridProvider@DirectUI@@UEAA@XZ
    virtual ~GridProvider();
};
} // namespace DirectUI
