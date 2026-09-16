#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 17 member(s).
// Base evidence: DirectUI::CCBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCSysLink {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCSysLink@DirectUI@@QEAA@$$QEAV01@@Z
    CCSysLink(CCSysLink &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCSysLink@DirectUI@@QEAA@AEBV01@@Z
    CCSysLink(CCSysLink const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCSysLink@DirectUI@@QEAA@XZ
    CCSysLink();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCSysLink@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCSysLink@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCSysLink@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCSysLink@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCSysLink@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@CCSysLink@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLostDialogFocus@CCSysLink@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceivedDialogFocus@CCSysLink@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCSysLink@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCSysLink@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCSysLink@DirectUI@@UEAA@XZ
    virtual ~CCSysLink();
};
} // namespace DirectUI
