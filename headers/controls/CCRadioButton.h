#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 18 member(s).
// Base evidence: DirectUI::CCBaseCheckRadioButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCRadioButton {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?AutoGroupingProp@CCRadioButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AutoGroupingProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCRadioButton@DirectUI@@QEAA@$$QEAV01@@Z
    CCRadioButton(CCRadioButton &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCRadioButton@DirectUI@@QEAA@AEBV01@@Z
    CCRadioButton(CCRadioButton const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCRadioButton@DirectUI@@QEAA@XZ
    CCRadioButton();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCRadioButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCRadioButton@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAutoGrouping@CCRadioButton@DirectUI@@QEAA_NXZ
    bool GetAutoGrouping();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCRadioButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCRadioButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@CCRadioButton@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@CCRadioButton@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCRadioButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAutoGrouping@CCRadioButton@DirectUI@@QEAAJ_N@Z
    long SetAutoGrouping(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCRadioButton@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCRadioButton@DirectUI@@UEAA@XZ
    virtual ~CCRadioButton();
};
} // namespace DirectUI
