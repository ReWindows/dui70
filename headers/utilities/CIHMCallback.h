#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
namespace DirectUI {
class CIHMCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIHMCallback@DirectUI@@QEAA@XZ
    CIHMCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CIHMCallback@DirectUI@@SAJPEAVElement@2@PEAPEAV12@@Z
    static long CreateInstance(::DirectUI::Element *, CIHMCallback * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@CIHMCallback@DirectUI@@QEAAXXZ
    void Detach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchKeyboardHiding@CIHMCallback@DirectUI@@UEAAX_N@Z
    virtual void TouchKeyboardHiding(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchKeyboardShowing@CIHMCallback@DirectUI@@UEAAXUtagRECT@@_N1@Z
    virtual void TouchKeyboardShowing(tagRECT, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unsubscribe@CIHMCallback@DirectUI@@QEAAXXZ
    void Unsubscribe();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIHMCallback@DirectUI@@UEAA@XZ
    virtual ~CIHMCallback();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAnimationTime@CIHMCallback@DirectUI@@AEAAMHHM@Z
    float _GetAnimationTime(int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnIHMTimer@CIHMCallback@DirectUI@@AEAAXXZ
    void _OnIHMTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartTimer@CIHMCallback@DirectUI@@AEAAXHHM@Z
    void _StartTimer(int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimer@CIHMCallback@DirectUI@@AEAAXXZ
    void _StopTimer();
};
} // namespace DirectUI
