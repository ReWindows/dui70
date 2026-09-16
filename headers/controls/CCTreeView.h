#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 24 member(s).
// Base evidence: DirectUI::CCBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCTreeView {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCTreeView@DirectUI@@QEAA@$$QEAV01@@Z
    CCTreeView(CCTreeView &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCTreeView@DirectUI@@QEAA@AEBV01@@Z
    CCTreeView(CCTreeView const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCTreeView@DirectUI@@QEAA@K@Z
    CCTreeView(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCTreeView@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCTreeView@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCTreeView@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCTreeView@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCTreeView@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemState@CCTreeView@DirectUI@@QEAAIQEAU_TREEITEM@@@Z
    unsigned int GetItemState(_TREEITEM * const);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetStyle@CCTreeView@DirectUI@@QEAAKXZ
    unsigned long GetStyle();
    // Category: Method | Source: PE Export
    // Symbol: ?InsertItem@CCTreeView@DirectUI@@QEAAPEAU_TREEITEM@@PEAGIQEAU3@1@Z
    _TREEITEM * InsertItem(unsigned short *, unsigned int, _TREEITEM * const, _TREEITEM * const);
    // Category: Method | Source: PE Export
    // Symbol: ?InsertItem@CCTreeView@DirectUI@@QEAAPEAU_TREEITEM@@PEBUtagTVINSERTSTRUCTW@@@Z
    _TREEITEM * InsertItem(tagTVINSERTSTRUCTW const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@CCTreeView@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCTreeView@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCTreeView@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetItemState@CCTreeView@DirectUI@@QEAAXPEAU_TREEITEM@@I@Z
    void SetItemState(_TREEITEM *, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetStyle@CCTreeView@DirectUI@@QEAAKK@Z
    unsigned long SetStyle(unsigned long);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCTreeView@DirectUI@@UEAA@XZ
    virtual ~CCTreeView();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?_OnGetInfoTip@CCTreeView@DirectUI@@MEAAJPEBUtagNMTVGETINFOTIPW@@@Z
    virtual long _OnGetInfoTip(tagNMTVGETINFOTIPW const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_OnItemChanged@CCTreeView@DirectUI@@MEAAJPEBUtagTVITEMCHANGE@@@Z
    virtual long _OnItemChanged(tagTVITEMCHANGE const *);
};
} // namespace DirectUI
