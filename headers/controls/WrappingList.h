#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 19 member(s).
// Base evidence: DirectUI::ItemList (likely; classinfo-template-instantiation).
namespace DirectUI {
class WrappingList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTopIndex@WrappingList@DirectUI@@QEAAIW4MeasureDirection@12@H@Z
    unsigned int CalculateTopIndex(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CircularProp@WrappingList@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CircularProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?FirstItemOffsetProp@WrappingList@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FirstItemOffsetProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@WrappingList@DirectUI@@UEAAPEAVElement@2@PEAV32@HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCircular@WrappingList@DirectUI@@QEAA_NXZ
    bool GetCircular();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@WrappingList@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemHeight@WrappingList@DirectUI@@QEAAHXZ
    int GetItemHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSeparatorHeight@WrappingList@DirectUI@@QEAAHXZ
    int GetSeparatorHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopIndex@WrappingList@DirectUI@@QEAAHXZ
    int GetTopIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@WrappingList@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@WrappingList@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@WrappingList@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SeparatorHeightProp@WrappingList@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SeparatorHeightProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTopIndex@WrappingList@DirectUI@@QEAAJH@Z
    long SetTopIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?TopIndexProp@WrappingList@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TopIndexProp();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@WrappingList@DirectUI@@EEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@WrappingList@DirectUI@@EEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
};
} // namespace DirectUI
