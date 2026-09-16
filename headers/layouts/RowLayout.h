#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI {
class RowLayout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RowLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RowLayout@DirectUI@@SAJHIIPEAPEAVLayout@2@@Z
    static long Create(int, unsigned int, unsigned int, ::DirectUI::Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RowLayout@DirectUI@@SAJIIPEAPEAVLayout@2@@Z
    static long Create(unsigned int, unsigned int, ::DirectUI::Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@RowLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@RowLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@RowLayout@DirectUI@@QEAAJHII@Z
    long Initialize(int, unsigned int, unsigned int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RowLayout@DirectUI@@QEAA@XZ
    RowLayout();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RowLayout@DirectUI@@QEAA@AEBV01@@Z
    RowLayout(RowLayout const &);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@RowLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1RowLayout@DirectUI@@UEAA@XZ
    virtual ~RowLayout();
};
} // namespace DirectUI
