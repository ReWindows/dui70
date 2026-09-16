#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
namespace DirectUI {
class RangeValueProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@RangeValueProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@RangeValueProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@RangeValueProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RangeValueProvider@DirectUI@@QEAA@XZ
    RangeValueProvider();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@RangeValueProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetValue@RangeValueProvider@DirectUI@@UEAAJN@Z
    virtual long SetValue(double);
    // Category: Method | Source: PE Export
    // Symbol: ?get_IsReadOnly@RangeValueProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_LargeChange@RangeValueProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_LargeChange(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_Maximum@RangeValueProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_Maximum(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_Minimum@RangeValueProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_Minimum(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_SmallChange@RangeValueProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_SmallChange(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_Value@RangeValueProvider@DirectUI@@UEAAJPEAN@Z
    virtual long get_Value(double *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1RangeValueProvider@DirectUI@@UEAA@XZ
    virtual ~RangeValueProvider();
};
} // namespace DirectUI
