#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 23 member(s).
namespace DirectUI {
class Layout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Attach@Layout@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void Attach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Layout@DirectUI@@SAJPEAPEAV12@@Z
    static long Create(Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Destroy@Layout@DirectUI@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PE Export
    // Symbol: ?Detach@Layout@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void Detach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@Layout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@Layout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetChildFromLayoutIndex@Layout@DirectUI@@QEAAPEAVElement@2@PEAV32@HPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@@Z
    ::DirectUI::Element * GetChildFromLayoutIndex(::DirectUI::Element *, int, WindissectOpaque *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLayoutChildCount@Layout@DirectUI@@QEAAIPEAVElement@2@@Z
    unsigned int GetLayoutChildCount(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLayoutIndexFromChild@Layout@DirectUI@@QEAAHPEAVElement@2@0@Z
    int GetLayoutIndexFromChild(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Layout@DirectUI@@QEAAXXZ
    void Initialize();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Layout@DirectUI@@QEAA@XZ
    Layout();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Layout@DirectUI@@QEAA@AEBV01@@Z
    Layout(Layout const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnAdd@Layout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnAdd(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLayoutPosChanged@Layout@DirectUI@@UEAAXPEAVElement@2@0HH@Z
    virtual void OnLayoutPosChanged(::DirectUI::Element *, ::DirectUI::Element *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRemove@Layout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnRemove(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@Layout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateLayoutRect@Layout@DirectUI@@SAXPEAVElement@2@HH0HHHH@Z
    static void UpdateLayoutRect(::DirectUI::Element *, int, int, ::DirectUI::Element *, int, int, int, int);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Layout@DirectUI@@UEAA@XZ
    virtual ~Layout();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?ClearCacheDirty@Layout@DirectUI@@IEAAXXZ
    void ClearCacheDirty();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsCacheDirty@Layout@DirectUI@@IEAA_NXZ
    bool IsCacheDirty();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCacheDirty@Layout@DirectUI@@IEAAXXZ
    void SetCacheDirty();
};
} // namespace DirectUI
