#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
namespace DirectUI {
class BorderLayout {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BorderLayout@DirectUI@@QEAA@XZ
    BorderLayout();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BorderLayout@DirectUI@@QEAA@AEBV01@@Z
    BorderLayout(BorderLayout const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@BorderLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@BorderLayout@DirectUI@@SAJPEAPEAVLayout@2@@Z
    static long Create(::DirectUI::Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@BorderLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@BorderLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@BorderLayout@DirectUI@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PE Export
    // Symbol: ?OnAdd@BorderLayout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnAdd(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLayoutPosChanged@BorderLayout@DirectUI@@UEAAXPEAVElement@2@0HH@Z
    virtual void OnLayoutPosChanged(::DirectUI::Element *, ::DirectUI::Element *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRemove@BorderLayout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnRemove(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@BorderLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1BorderLayout@DirectUI@@UEAA@XZ
    virtual ~BorderLayout();
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClient@BorderLayout@DirectUI@@AEAAXPEAVElement@2@@Z
    void SetClient(::DirectUI::Element *);
};
} // namespace DirectUI
