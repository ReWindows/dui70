#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 20 member(s).
// Base evidence: DirectUI::AutoButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class PushButton {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@PushButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?EnforceSizeProp@PushButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * EnforceSizeProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@PushButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@PushButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@PushButton@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEnforceSize@PushButton@DirectUI@@QEAA_NXZ
    bool GetEnforceSize();
    // Category: Method | Source: PE Export
    // Symbol: ?Hosted@PushButton@DirectUI@@SA?AVUID@@XZ
    static UID Hosted();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@PushButton@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@PushButton@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0PushButton@DirectUI@@QEAA@$$QEAV01@@Z
    PushButton(PushButton &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0PushButton@DirectUI@@QEAA@AEBV01@@Z
    PushButton(PushButton const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0PushButton@DirectUI@@QEAA@XZ
    PushButton();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@PushButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@PushButton@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetEnforceSize@PushButton@DirectUI@@QEAAJ_N@Z
    long SetEnforceSize(bool);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1PushButton@DirectUI@@UEAA@XZ
    virtual ~PushButton();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?FireHostEvent@PushButton@DirectUI@@AEAAXPEAVElement@2@_N@Z
    void FireHostEvent(::DirectUI::Element *, bool);
};
} // namespace DirectUI
