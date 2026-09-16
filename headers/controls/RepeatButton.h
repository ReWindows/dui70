#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
namespace DirectUI {
class RepeatButton {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RepeatButton@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RepeatButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@RepeatButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@RepeatButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@RepeatButton@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@RepeatButton@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@RepeatButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RepeatButton@DirectUI@@QEAA@AEBV01@@Z
    RepeatButton(RepeatButton const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RepeatButton@DirectUI@@QEAA@XZ
    RepeatButton();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@RepeatButton@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetStopThumbBehavior@RepeatButton@DirectUI@@QEAAXXZ
    void SetStopThumbBehavior();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1RepeatButton@DirectUI@@UEAA@XZ
    virtual ~RepeatButton();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?_RepeatButtonActionCallback@RepeatButton@DirectUI@@CAXPEAUGMA_ACTIONINFO@@@Z
    static void _RepeatButtonActionCallback(GMA_ACTIONINFO *);
};
} // namespace DirectUI
