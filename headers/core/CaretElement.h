#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class CaretElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CaretElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideCaret@CaretElement@DirectUI@@QEAA_NXZ
    bool HideCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CaretElement@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CaretElement@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaret@CaretElement@DirectUI@@QEAAXPEAUHBITMAP__@@KHH@Z
    void UpdateCaret(HBITMAP__*, unsigned long, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CaretElement@DirectUI@@UEAA@XZ
    virtual ~CaretElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddLinearAnimationSegmentToDCompBlinkAnimation@CaretElement@DirectUI@@AEAAJMMMM@Z
    long _AddLinearAnimationSegmentToDCompBlinkAnimation(float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAnimation@CaretElement@DirectUI@@AEAAJXZ
    long _CreateAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAnimationEffect@CaretElement@DirectUI@@AEAAJXZ
    long _CreateAnimationEffect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasAnimation@CaretElement@DirectUI@@AEAA_NXZ
    bool _HasAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartAnimation@CaretElement@DirectUI@@AEAAJXZ
    long _StartAnimation();
};
} // namespace DirectUI
