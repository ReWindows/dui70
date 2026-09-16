#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 43 member(s).
namespace DirectUI {
class TransitionHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLayeredContainer@TransitionHandler@DirectUI@@QEAAJHPEAVElement@2@@Z
    long AddLayeredContainer(int, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLocationPropChange@TransitionHandler@DirectUI@@QEAAJHPEAUPVLAnimationRepositionEvent@2@@Z
    long AddLocationPropChange(int, ::DirectUI::PVLAnimationRepositionEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddManualCompletionEvent@TransitionHandler@DirectUI@@QEAAJHPEAUPVLAnimationNotifyCompleteEvent@2@@Z
    long AddManualCompletionEvent(int, ::DirectUI::PVLAnimationNotifyCompleteEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddParentChange@TransitionHandler@DirectUI@@QEAAJHPEAUPVLAnimationParentChangeEvent@2@@Z
    long AddParentChange(int, ::DirectUI::PVLAnimationParentChangeEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransition@TransitionHandler@DirectUI@@QEAAJHPEAUGTRANS_DESC@@@Z
    long AddTransition(int, GTRANS_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearLocationPropChanges@TransitionHandler@DirectUI@@QEAAJH@Z
    long ClearLocationPropChanges(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearLostStoryboards@TransitionHandler@DirectUI@@QEAAJPEAVElement@2@@Z
    long ClearLostStoryboards(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearParentChanges@TransitionHandler@DirectUI@@QEAAJH@Z
    long ClearParentChanges(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseStoryboard@TransitionHandler@DirectUI@@QEAAJHPEAIPEAPEAUGTRANS_DESC@@@Z
    long CloseStoryboard(int, unsigned int *, GTRANS_DESC * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteStoryboard@TransitionHandler@DirectUI@@QEAAJH_N0@Z
    long CompleteStoryboard(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboard@TransitionHandler@DirectUI@@QEAAJH_NPEAHPEAKH@Z
    long CreateStoryboard(int, bool, int *, unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@TransitionHandler@DirectUI@@SAJXZ
    static long EnsureInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveStoryboardType@TransitionHandler@DirectUI@@QEAAHXZ
    int GetActiveStoryboardType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookie@TransitionHandler@DirectUI@@QEAAJHPEAK@Z
    long GetCookie(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextOrderNumber@TransitionHandler@DirectUI@@QEAAJHPEAH@Z
    long GetNextOrderNumber(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentChange@TransitionHandler@DirectUI@@QEAAPEAUPVLAnimationParentChangeEvent@2@HPEAVElement@2@@Z
    ::DirectUI::PVLAnimationParentChangeEvent * GetParentChange(int, ::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousTotalDelay@TransitionHandler@DirectUI@@QEAAJHPEAM@Z
    long GetPreviousTotalDelay(int, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardLength@TransitionHandler@DirectUI@@QEAAJHPEAM@Z
    long GetStoryboardLength(int, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTriggerEvent@TransitionHandler@DirectUI@@QEAAJHPEAPEAUPVLAnimationNotifyEvent@2@@Z
    long GetTriggerEvent(int, ::DirectUI::PVLAnimationNotifyEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTransition@TransitionHandler@DirectUI@@QEAAJHPEAUGTRANS_DESC@@H@Z
    long InsertTransition(int, GTRANS_DESC *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalStoryboardSuccess@TransitionHandler@DirectUI@@QEAAJH@Z
    long InternalStoryboardSuccess(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetNextOrderNumberForActive@TransitionHandler@DirectUI@@QEAAJXZ
    long ResetNextOrderNumberForActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveStoryboardIdFromManualId@TransitionHandler@DirectUI@@QEAAJHPEAH@Z
    long RetrieveStoryboardIdFromManualId(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveStoryboard@TransitionHandler@DirectUI@@QEAAJH@Z
    long SetActiveStoryboard(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveStoryboardType@TransitionHandler@DirectUI@@QEAAJH@Z
    long SetActiveStoryboardType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompletionEvent@TransitionHandler@DirectUI@@QEAAJHPEAUPVLAnimationNotifyCompleteEvent@2@@Z
    long SetCompletionEvent(int, ::DirectUI::PVLAnimationNotifyCompleteEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviousTotalDelay@TransitionHandler@DirectUI@@QEAAJHM@Z
    long SetPreviousTotalDelay(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviousTotalDelayInActive@TransitionHandler@DirectUI@@QEAAJM@Z
    long SetPreviousTotalDelayInActive(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStoryboardLength@TransitionHandler@DirectUI@@QEAAJHM@Z
    long SetStoryboardLength(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTriggerEvent@TransitionHandler@DirectUI@@QEAAJHPEAUPVLAnimationNotifyEvent@2@@Z
    long SetTriggerEvent(int, ::DirectUI::PVLAnimationNotifyEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerContainers@TransitionHandler@DirectUI@@QEAAJH@Z
    long UnlayerContainers(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateGadgetTicket@TransitionHandler@DirectUI@@QEAAJKPEAUHGADGET__@@@Z
    long ValidateGadgetTicket(unsigned long, HGADGET__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyActiveStoryboard@TransitionHandler@DirectUI@@QEAA_NXZ
    bool VerifyActiveStoryboard();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionHandler@DirectUI@@QEAA@XZ
    ~TransitionHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTransition@TransitionHandler@DirectUI@@AEAAJHPEAUGTRANS_DESC@@@Z
    long _AddTransition(int, GTRANS_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckUniqueChangeInList@TransitionHandler@DirectUI@@AEAAHPEAVElement@2@_NH@Z
    int _CheckUniqueChangeInList(::DirectUI::Element *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseStoryboard@TransitionHandler@DirectUI@@AEAAJHPEAIPEAPEAUGTRANS_DESC@@@Z
    long _CloseStoryboard(int, unsigned int *, GTRANS_DESC * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DumpStoryboard@TransitionHandler@DirectUI@@AEAAJPEAV?$DynamicArray@PEAUGTRANS_DESC@@$0A@@2@PEAIPEAPEAUGTRANS_DESC@@@Z
    long _DumpStoryboard(WindissectOpaque *, unsigned int *, GTRANS_DESC * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindStoryboard@TransitionHandler@DirectUI@@AEAAHH@Z
    int _FindStoryboard(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ForceGadgetUpdate@TransitionHandler@DirectUI@@AEAAXPEAUHGADGET__@@_NK@Z
    void _ForceGadgetUpdate(HGADGET__*, bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextOrderNumber@TransitionHandler@DirectUI@@AEAAJHPEAH@Z
    long _GetNextOrderNumber(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPreviousTotalDelay@TransitionHandler@DirectUI@@AEAAJHPEAM@Z
    long _GetPreviousTotalDelay(int, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPreviousTotalDelay@TransitionHandler@DirectUI@@AEAAJHM@Z
    long _SetPreviousTotalDelay(int, float);
};
} // namespace DirectUI
