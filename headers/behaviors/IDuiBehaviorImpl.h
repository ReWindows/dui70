#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
class IDuiBehaviorImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IDuiBehaviorImpl@@QEAA@XZ
    IDuiBehaviorImpl();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@IDuiBehaviorImpl@@EEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnAttach@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDetach@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDisplayNodeCallback@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@PEAUEventMsg@@@Z
    virtual long OnDisplayNodeCallback(::DirectUI::Element *, EventMsg *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDoLayout@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@HH@Z
    virtual long OnDoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGetAdjacent@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@HPEBUNavReference@3@KPEAPEAV23@@Z
    virtual long OnGetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyFocusMoved@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@00@Z
    virtual long OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPaint@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@PEAUHDC__@@PEBUtagRECT@@2@Z
    virtual long OnPaint(::DirectUI::Element *, HDC__*, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual long OnPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2PEAH@Z
    virtual long OnPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnUnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUpdateDesiredSize@IDuiBehaviorImpl@@EEAAJPEAVElement@DirectUI@@HHPEAVSurface@3@PEAUtagSIZE@@@Z
    virtual long OnUpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *, tagSIZE *);
};
