#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI {
class SelectionItemProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@SelectionItemProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AddToSelection@SelectionItemProvider@DirectUI@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@SelectionItemProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@SelectionItemProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@SelectionItemProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveFromSelection@SelectionItemProvider@DirectUI@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PE Export
    // Symbol: ?Select@SelectionItemProvider@DirectUI@@UEAAJXZ
    virtual long Select();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0SelectionItemProvider@DirectUI@@QEAA@XZ
    SelectionItemProvider();
    // Category: Method | Source: PE Export
    // Symbol: ?get_IsSelected@SelectionItemProvider@DirectUI@@UEAAJPEAH@Z
    virtual long get_IsSelected(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_SelectionContainer@SelectionItemProvider@DirectUI@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_SelectionContainer(IRawElementProviderSimple * *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1SelectionItemProvider@DirectUI@@UEAA@XZ
    virtual ~SelectionItemProvider();
};
} // namespace DirectUI
