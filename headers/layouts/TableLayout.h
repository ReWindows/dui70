#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI {
class TableLayout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TableLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@TableLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@TableLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCellInfo@TableLayout@DirectUI@@QEAAPEAUCellInfo@2@H@Z
    ::DirectUI::CellInfo * GetCellInfo(int);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TableLayout@DirectUI@@QEAAXHHHPEAH@Z
    void Initialize(int, int, int, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?InternalCreate@TableLayout@DirectUI@@SAJHHHPEAHPEAPEAVLayout@2@@Z
    static long InternalCreate(int, int, int, int *, ::DirectUI::Layout * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableLayout@DirectUI@@QEAA@AEBV01@@Z
    TableLayout(TableLayout const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TableLayout@DirectUI@@QEAA@XZ
    TableLayout();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@TableLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TableLayout@DirectUI@@UEAA@XZ
    virtual ~TableLayout();
};
} // namespace DirectUI
