#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
namespace DirectUI {
class GridLayout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@GridLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@GridLayout@DirectUI@@SAJHHPEAPEAVLayout@2@@Z
    static long Create(int, int, ::DirectUI::Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@GridLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@GridLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridLayout@DirectUI@@QEAA@AEBV01@@Z
    GridLayout(GridLayout const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0GridLayout@DirectUI@@QEAA@XZ
    GridLayout();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@GridLayout@DirectUI@@QEAAXHH@Z
    void Initialize(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@GridLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1GridLayout@DirectUI@@UEAA@XZ
    virtual ~GridLayout();
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentCols@GridLayout@DirectUI@@IEAAIH@Z
    unsigned int GetCurrentCols(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentCols@GridLayout@DirectUI@@IEAAIPEAVElement@2@@Z
    unsigned int GetCurrentCols(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentRows@GridLayout@DirectUI@@IEAAIH@Z
    unsigned int GetCurrentRows(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentRows@GridLayout@DirectUI@@IEAAIPEAVElement@2@@Z
    unsigned int GetCurrentRows(::DirectUI::Element *);
};
} // namespace DirectUI
