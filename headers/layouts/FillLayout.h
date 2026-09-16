#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace DirectUI {
class FillLayout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@FillLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@FillLayout@DirectUI@@SAJPEAPEAVLayout@2@@Z
    static long Create(::DirectUI::Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@FillLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0FillLayout@DirectUI@@QEAA@XZ
    FillLayout();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0FillLayout@DirectUI@@QEAA@AEBV01@@Z
    FillLayout(FillLayout const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@FillLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@FillLayout@DirectUI@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@FillLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1FillLayout@DirectUI@@UEAA@XZ
    virtual ~FillLayout();
};
} // namespace DirectUI
