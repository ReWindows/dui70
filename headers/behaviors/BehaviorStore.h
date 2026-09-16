#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
namespace DirectUI {
class BehaviorStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@BehaviorStore@DirectUI@@QEAAJPEAUIDuiBehavior@@PEAVElement@2@@Z
    long Add(IDuiBehavior *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromElementAndDestroy@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@@Z
    void DetachFromElementAndDestroy(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnDisplayNodeCallback@BehaviorStore@DirectUI@@QEAAJPEAVElement@2@PEAUEventMsg@@@Z
    long NotifyOnDisplayNodeCallback(::DirectUI::Element *, EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnDoLayout@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@HH@Z
    void NotifyOnDoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnEvent@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@PEAUEvent@2@@Z
    void NotifyOnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnGetAdjacent@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@HPEBUNavReference@2@KPEAPEAV32@@Z
    void NotifyOnGetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnHosted@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@0@Z
    void NotifyOnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnInput@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@PEAUInputEvent@2@@Z
    void NotifyOnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnKeyFocusMoved@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@00@Z
    void NotifyOnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnPaint@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@PEAUHDC__@@PEBUtagRECT@@2@Z
    void NotifyOnPaint(::DirectUI::Element *, HDC__*, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnUnHosted@BehaviorStore@DirectUI@@QEAAXPEAVElement@2@0@Z
    void NotifyOnUnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@BehaviorStore@DirectUI@@QEAAJPEAUIDuiBehavior@@PEAVElement@2@@Z
    long Remove(IDuiBehavior *, ::DirectUI::Element *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexOf@BehaviorStore@DirectUI@@AEBAHPEBUIDuiBehavior@@@Z
    int GetIndexOf(IDuiBehavior const *) const;
};
} // namespace DirectUI
