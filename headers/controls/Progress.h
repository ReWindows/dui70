#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 22 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Progress {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Progress@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Progress@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Progress@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@Progress@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMaximum@Progress@DirectUI@@QEAAHXZ
    int GetMaximum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMinimum@Progress@DirectUI@@QEAAHXZ
    int GetMinimum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPosition@Progress@DirectUI@@QEAAHXZ
    int GetPosition();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Progress@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?MaximumProp@Progress@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MaximumProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MinimumProp@Progress@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MinimumProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@Progress@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PositionProp@Progress@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PositionProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Progress@DirectUI@@QEAA@AEBV01@@Z
    Progress(Progress const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Progress@DirectUI@@QEAA@XZ
    Progress();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Progress@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Progress@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMaximum@Progress@DirectUI@@QEAAJH@Z
    long SetMaximum(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMinimum@Progress@DirectUI@@QEAAJH@Z
    long SetMinimum(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPosition@Progress@DirectUI@@QEAAJH@Z
    long SetPosition(int);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Progress@DirectUI@@UEAA@XZ
    virtual ~Progress();
};
} // namespace DirectUI
