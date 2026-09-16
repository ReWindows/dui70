#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class SelectionProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@SelectionProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@SelectionProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelection@SelectionProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSelection(tagSAFEARRAY * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@SelectionProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@SelectionProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectionProvider@DirectUI@@QEAA@XZ
    SelectionProvider();
    // Category: Method | Source: PE Export
    // Symbol: ?get_CanSelectMultiple@SelectionProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_CanSelectMultiple(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_IsSelectionRequired@SelectionProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_IsSelectionRequired(int *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1SelectionProvider@DirectUI@@UEAA@XZ
    virtual ~SelectionProvider();
};
} // namespace DirectUI
