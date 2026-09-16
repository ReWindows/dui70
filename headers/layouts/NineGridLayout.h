#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
namespace DirectUI {
class NineGridLayout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@NineGridLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@NineGridLayout@DirectUI@@SAJPEAPEAVLayout@2@@Z
    static long Create(::DirectUI::Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@NineGridLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@NineGridLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@NineGridLayout@DirectUI@@QEAAXXZ
    void Initialize();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0NineGridLayout@DirectUI@@QEAA@XZ
    NineGridLayout();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0NineGridLayout@DirectUI@@QEAA@AEBV01@@Z
    NineGridLayout(NineGridLayout const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnAdd@NineGridLayout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnAdd(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLayoutPosChanged@NineGridLayout@DirectUI@@UEAAXPEAVElement@2@0HH@Z
    virtual void OnLayoutPosChanged(::DirectUI::Element *, ::DirectUI::Element *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRemove@NineGridLayout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnRemove(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@NineGridLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1NineGridLayout@DirectUI@@UEAA@XZ
    virtual ~NineGridLayout();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?_UpdateTileList@NineGridLayout@DirectUI@@AEAAXHPEAVElement@2@@Z
    void _UpdateTileList(int, ::DirectUI::Element *);
};
} // namespace DirectUI
