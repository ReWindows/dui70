#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
namespace DirectUI {
class FlowLayout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@FlowLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@FlowLayout@DirectUI@@SAJ_NIIIPEAPEAVLayout@2@@Z
    static long Create(bool, unsigned int, unsigned int, unsigned int, ::DirectUI::Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@FlowLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0FlowLayout@DirectUI@@QEAA@XZ
    FlowLayout();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0FlowLayout@DirectUI@@QEAA@AEBV01@@Z
    FlowLayout(FlowLayout const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@FlowLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLine@FlowLayout@DirectUI@@QEAAHPEAVElement@2@0@Z
    int GetLine(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@FlowLayout@DirectUI@@QEAAX_NIII@Z
    void Initialize(bool, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@FlowLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1FlowLayout@DirectUI@@UEAA@XZ
    virtual ~FlowLayout();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?BuildCacheInfo@FlowLayout@DirectUI@@IEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@_N@Z
    tagSIZE BuildCacheInfo(::DirectUI::Element *, int, int, ::DirectUI::Surface *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?SizeZero@FlowLayout@DirectUI@@KA?AUtagSIZE@@XZ
    static tagSIZE SizeZero();
};
} // namespace DirectUI
