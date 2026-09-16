#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 20 member(s).
namespace DirectUI {
class HWNDElementProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@HWNDElementProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@HWNDElementProvider@DirectUI@@SAJPEAVHWNDElement@2@PEAVInvokeHelper@2@PEAPEAV12@@Z
    static long Create(::DirectUI::HWNDElement *, ::DirectUI::InvokeHelper *, HWNDElementProvider * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ElementProviderFromPoint@HWNDElementProvider@DirectUI@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    virtual long ElementProviderFromPoint(double, double, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFocus@HWNDElementProvider@DirectUI@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetFocus(IRawElementProviderFragment * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@HWNDElementProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDElementProvider@DirectUI@@QEAA@XZ
    HWNDElementProvider();
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@HWNDElementProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@HWNDElementProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1HWNDElementProvider@DirectUI@@UEAA@XZ
    virtual ~HWNDElementProvider();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@HWNDElementProvider@DirectUI@@MEAAJPEAVHWNDElement@2@PEAVInvokeHelper@2@@Z
    virtual long Init(::DirectUI::HWNDElement *, ::DirectUI::InvokeHelper *);
};
} // namespace DirectUI
