#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI {
class TableItemProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@TableItemProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColumnHeaderItems@TableItemProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetColumnHeaderItems(tagSAFEARRAY * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@TableItemProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRowHeaderItems@TableItemProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRowHeaderItems(tagSAFEARRAY * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@TableItemProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@TableItemProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableItemProvider@DirectUI@@QEAA@XZ
    TableItemProvider();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TableItemProvider@DirectUI@@UEAA@XZ
    virtual ~TableItemProvider();
};
} // namespace DirectUI
