#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
namespace DirectUI {
class VerticalFlowLayout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@VerticalFlowLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@VerticalFlowLayout@DirectUI@@SAJ_NIIIPEAPEAVLayout@2@@Z
    static long Create(bool, unsigned int, unsigned int, unsigned int, ::DirectUI::Layout * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoLayout@VerticalFlowLayout@DirectUI@@UEAAXPEAVElement@2@HH@Z
    virtual void DoLayout(::DirectUI::Element *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@VerticalFlowLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLine@VerticalFlowLayout@DirectUI@@QEAAHPEAVElement@2@0@Z
    int GetLine(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@VerticalFlowLayout@DirectUI@@QEAAX_NIII@Z
    void Initialize(bool, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateDesiredSize@VerticalFlowLayout@DirectUI@@UEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@@Z
    virtual tagSIZE UpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0VerticalFlowLayout@DirectUI@@QEAA@XZ
    VerticalFlowLayout();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0VerticalFlowLayout@DirectUI@@QEAA@AEBV01@@Z
    VerticalFlowLayout(VerticalFlowLayout const &);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1VerticalFlowLayout@DirectUI@@UEAA@XZ
    virtual ~VerticalFlowLayout();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?BuildCacheInfo@VerticalFlowLayout@DirectUI@@IEAA?AUtagSIZE@@PEAVElement@2@HHPEAVSurface@2@_N@Z
    tagSIZE BuildCacheInfo(::DirectUI::Element *, int, int, ::DirectUI::Surface *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?SizeZero@VerticalFlowLayout@DirectUI@@KA?AUtagSIZE@@XZ
    static tagSIZE SizeZero();
};
} // namespace DirectUI
