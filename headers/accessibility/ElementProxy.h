#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 24 member(s).
namespace DirectUI {
class ElementProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ElementProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static ElementProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ElementProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ElementProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ElementProxy(ElementProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ElementProxy@DirectUI@@QEAA@AEBV01@@Z
    ElementProxy(ElementProxy const &);
protected:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ElementProxy@DirectUI@@IEAA@XZ
    ElementProxy();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAutomationId@ElementProxy@DirectUI@@IEAAJPEAUtagVARIANT@@@Z
    long GetAutomationId(tagVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBoundingRect@ElementProxy@DirectUI@@IEAAJPEAUUiaRect@@@Z
    long GetBoundingRect(UiaRect *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContent@ElementProxy@DirectUI@@IEAAJPEAUtagVARIANT@@PEAUIAccessible@@@Z
    long GetContent(tagVARIANT *, IAccessible *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetControlType@ElementProxy@DirectUI@@IEAAXPEAUtagVARIANT@@PEAUIAccessible@@@Z
    void GetControlType(tagVARIANT *, IAccessible *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFragmentRoot@ElementProxy@DirectUI@@IEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    long GetFragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHwnd@ElementProxy@DirectUI@@IEAAJPEAPEAUHWND__@@@Z
    long GetHwnd(HWND__* *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLabel@ElementProxy@DirectUI@@IEAAJPEAUtagVARIANT@@@Z
    long GetLabel(tagVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProperty@ElementProxy@DirectUI@@IEAAJPEAUtagVARIANT@@H@Z
    long GetProperty(tagVARIANT *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProviderOptions@ElementProxy@DirectUI@@IEAAJPEAW4ProviderOptions@@@Z
    long GetProviderOptions(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRuntimeId@ElementProxy@DirectUI@@IEAAJPEAPEAUtagSAFEARRAY@@@Z
    long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ElementProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@ElementProxy@DirectUI@@IEAAJW4Pattern@Schema@2@PEA_N@Z
    long IsPatternSupported(int, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?Navigate@ElementProxy@DirectUI@@IEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    long Navigate(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetString@ElementProxy@DirectUI@@IEAAJPEAUtagVARIANT@@P8Element@2@EAAPEBGPEAPEAVValue@2@@Z@Z
    long SetString(tagVARIANT *, unsigned short const * ( ::DirectUI::Element::*)(::DirectUI::Value * *));
    // Category: Method | Source: PE Export
    // Symbol: ?_UsesUIAProxies@ElementProxy@DirectUI@@IEAAHXZ
    int _UsesUIAProxies();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?_IsSemanticZoomControl@ElementProxy@DirectUI@@AEAA_NH@Z
    bool _IsSemanticZoomControl(int);
    // Category: Method | Source: PE Export
    // Symbol: ?_IsWindowHostUsingDoNotStealFocusFlag@ElementProxy@DirectUI@@AEAA_NXZ
    bool _IsWindowHostUsingDoNotStealFocusFlag();
};
} // namespace DirectUI
