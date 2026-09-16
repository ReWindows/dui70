#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 34 member(s).
namespace DirectUI {
class ElementProvider {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@ElementProvider@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AdviseEventAdded@ElementProvider@DirectUI@@UEAAJHPEAUtagSAFEARRAY@@@Z
    virtual long AdviseEventAdded(int, tagSAFEARRAY *);
    // Category: Method | Source: PE Export
    // Symbol: ?AdviseEventRemoved@ElementProvider@DirectUI@@UEAAJHPEAUtagSAFEARRAY@@@Z
    virtual long AdviseEventRemoved(int, tagSAFEARRAY *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ElementProvider@DirectUI@@SAJPEAVElement@2@PEAVInvokeHelper@2@PEAPEAV12@@Z
    static long Create(::DirectUI::Element *, ::DirectUI::InvokeHelper *, ElementProvider * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoInvokeArgs@ElementProvider@DirectUI@@QEAAJHP6APEAVProviderProxy@2@PEAVElement@2@@ZPEAD@Z
    long DoInvokeArgs(int, ::DirectUI::ProviderProxy * ( *)(::DirectUI::Element *), char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ElementProvider@DirectUI@@QEAA@XZ
    ElementProvider();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElement@ElementProvider@DirectUI@@UEAAPEDVElement@2@XZ
    virtual ::DirectUI::Element const volatile * GetElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementKey@ElementProvider@DirectUI@@QEAAPEBVElement@2@XZ
    ::DirectUI::Element const * GetElementKey();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEmbeddedFragmentRoots@ElementProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPatternProvider@ElementProvider@DirectUI@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPropertyValue@ElementProvider@DirectUI@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProxyCreator@ElementProvider@DirectUI@@UEAAP6APEAVProviderProxy@2@PEAVElement@2@@ZXZ
    virtual ::DirectUI::ProviderProxy * (*GetProxyCreator())(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRuntimeId@ElementProvider@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Navigate@ElementProvider@DirectUI@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@ElementProvider@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@ElementProvider@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFocus@ElementProvider@DirectUI@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowContextMenu@ElementProvider@DirectUI@@UEAAJXZ
    virtual long ShowContextMenu();
    // Category: Method | Source: PE Export
    // Symbol: ?TossElement@ElementProvider@DirectUI@@UEAAXXZ
    virtual void TossElement();
    // Category: Method | Source: PE Export
    // Symbol: ?TossPatternProvider@ElementProvider@DirectUI@@QEAAXW4Pattern@Schema@2@@Z
    void TossPatternProvider(int);
    // Category: Method | Source: PE Export
    // Symbol: ?get_BoundingRectangle@ElementProvider@DirectUI@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_FragmentRoot@ElementProvider@DirectUI@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_HostRawElementProvider@ElementProvider@DirectUI@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_ProviderOptions@ElementProvider@DirectUI@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ElementProvider@DirectUI@@UEAA@XZ
    virtual ~ElementProvider();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?DoInvoke@ElementProvider@DirectUI@@IEAAJHZZ
    long DoInvoke(int, ...);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ElementProvider@DirectUI@@MEAAJPEAVElement@2@PEAVInvokeHelper@2@@Z
    virtual long Init(::DirectUI::Element *, ::DirectUI::InvokeHelper *);
};
} // namespace DirectUI
