#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class TableProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@TableProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColumnHeaders@TableProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetColumnHeaders(tagSAFEARRAY * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@TableProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRowHeaders@TableProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRowHeaders(tagSAFEARRAY * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@TableProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@TableProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableProvider@DirectUI@@QEAA@XZ
    TableProvider();
    // Category: Method | Source: PE Export
    // Symbol: ?get_RowOrColumnMajor@TableProvider@DirectUI@@UEAAJPEAW4RowOrColumnMajor@@@Z
    virtual long get_RowOrColumnMajor(int *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TableProvider@DirectUI@@UEAA@XZ
    virtual ~TableProvider();
};
} // namespace DirectUI
