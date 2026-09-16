#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class ValueProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@ValueProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@ValueProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@ValueProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@ValueProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetValue@ValueProvider@DirectUI@@UEAAJPEBG@Z
    virtual long SetValue(unsigned short const *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ValueProvider@DirectUI@@QEAA@XZ
    ValueProvider();
    // Category: Method | Source: PE Export
    // Symbol: ?get_IsReadOnly@ValueProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_Value@ValueProvider@DirectUI@@UEAAJPEAPEAG@Z
    virtual long get_Value(unsigned short * *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ValueProvider@DirectUI@@UEAA@XZ
    virtual ~ValueProvider();
};
} // namespace DirectUI
