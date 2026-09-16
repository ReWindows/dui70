#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
// Base evidence: DirectUI::CCBaseCheckRadioButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCCheckBox {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCCheckBox@DirectUI@@QEAA@$$QEAV01@@Z
    CCCheckBox(CCCheckBox &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCCheckBox@DirectUI@@QEAA@AEBV01@@Z
    CCCheckBox(CCCheckBox const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCCheckBox@DirectUI@@QEAA@K@Z
    CCCheckBox(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCCheckBox@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCCheckBox@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCCheckBox@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCCheckBox@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@CCCheckBox@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@CCCheckBox@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCCheckBox@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCCheckBox@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCCheckBox@DirectUI@@UEAA@XZ
    virtual ~CCCheckBox();
};
} // namespace DirectUI
