#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 17 member(s).
// Base evidence: DirectUI::CCBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCListBox {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AddString@CCListBox@DirectUI@@QEAAHPEBG@Z
    int AddString(unsigned short const *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCListBox@DirectUI@@QEAA@$$QEAV01@@Z
    CCListBox(CCListBox &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCListBox@DirectUI@@QEAA@AEBV01@@Z
    CCListBox(CCListBox const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCListBox@DirectUI@@QEAA@XZ
    CCListBox();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCListBox@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCListBox@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DeleteString@CCListBox@DirectUI@@QEAAHH@Z
    int DeleteString(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCListBox@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCListBox@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCListBox@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCount@CCListBox@DirectUI@@QEAAHXZ
    int GetCount();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCListBox@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCListBox@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCListBox@DirectUI@@UEAA@XZ
    virtual ~CCListBox();
};
} // namespace DirectUI
