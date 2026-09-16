#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 41 member(s).
namespace DirectUI {
class PVLAnimationTriggers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFade@PVLAnimationTriggers@DirectUI@@UEAAJHPEAVElement@2@IH@Z
    virtual long AddFade(int, ::DirectUI::Element *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInputPaneSlide@PVLAnimationTriggers@DirectUI@@UEAAJHPEAVElement@2@PEBUtagPOINT@@1PEBUtagRECT@@HH@Z
    virtual long AddInputPaneSlide(int, ::DirectUI::Element *, tagPOINT const *, tagPOINT const *, tagRECT const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReposition@PVLAnimationTriggers@DirectUI@@UEAAJHPEAVElement@2@UtagPOINT@@H_NII@Z
    virtual long AddReposition(int, ::DirectUI::Element *, tagPOINT, int, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScale@PVLAnimationTriggers@DirectUI@@UEAAJHPEAVElement@2@U_POINTFLOAT@@1H@Z
    virtual long AddScale(int, ::DirectUI::Element *, _POINTFLOAT, _POINTFLOAT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@PVLAnimationTriggers@DirectUI@@SAXXZ
    static void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Startup@PVLAnimationTriggers@DirectUI@@SAJXZ
    static long Startup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerAdd@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@0IHPEAK@Z
    virtual long TriggerAdd(::DirectUI::Element *, ::DirectUI::Element *, unsigned int, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerAddGroup@PVLAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@PEAVElement@2@PEAV?$DynamicArray@I$0A@@2@H_NPEAK@Z
    virtual long TriggerAddGroup(WindissectOpaque *, ::DirectUI::Element *, WindissectOpaque *, int, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerAddGroupMultiParent@PVLAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@PEAV?$DynamicArray@PEAV?$DynamicArray@PEAUElementIndexPair@DirectUI@@$0A@@DirectUI@@$0A@@2@H_NPEAK@Z
    virtual long TriggerAddGroupMultiParent(WindissectOpaque *, WindissectOpaque *, int, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerBadgeUpdate@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@0UtagPOINT@@PEAK@Z
    virtual long TriggerBadgeUpdate(::DirectUI::Element *, ::DirectUI::Element *, tagPOINT, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerBeginStoryboard@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@PEAHPEAK@Z
    virtual long TriggerBeginStoryboard(::DirectUI::Element *, int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerCancelStoryboard@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@H@Z
    virtual long TriggerCancelStoryboard(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerCollapse@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@0PEAK@Z
    virtual long TriggerCollapse(::DirectUI::Element *, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerContentTransition@PVLAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@0PEAVElement@2@UtagPOINT@@HPEAK@Z
    virtual long TriggerContentTransition(WindissectOpaque *, WindissectOpaque *, ::DirectUI::Element *, tagPOINT, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerCrossfade@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@0_N111PEAK@Z
    virtual long TriggerCrossfade(::DirectUI::Element *, ::DirectUI::Element *, bool, bool, bool, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDelete@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@_NPEAK@Z
    virtual long TriggerDelete(::DirectUI::Element *, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDeleteGroup@PVLAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@_N1PEAK@Z
    virtual long TriggerDeleteGroup(WindissectOpaque *, bool, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDrag@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@IUtagPOINT@@PEAK@Z
    virtual long TriggerDrag(::DirectUI::Element *, WindissectOpaque *, unsigned int, tagPOINT, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDrop@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@0HHUtagPOINT@@_NU_POINTFLOAT@@4PEAK@Z
    virtual long TriggerDrop(::DirectUI::Element *, WindissectOpaque *, ::DirectUI::Element *, int, int, tagPOINT, bool, _POINTFLOAT, _POINTFLOAT, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerEndStoryboard@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@H@Z
    virtual long TriggerEndStoryboard(::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerEntrance@PVLAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@PEAV?$DynamicArray@UtagPOINT@@$0A@@2@PEAK@Z
    virtual long TriggerEntrance(WindissectOpaque *, WindissectOpaque *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerExpand@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@0HPEAK@Z
    virtual long TriggerExpand(::DirectUI::Element *, ::DirectUI::Element *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerFade@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@IPEAK@Z
    virtual long TriggerFade(::DirectUI::Element *, unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerFadeGroup@PVLAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@IPEAK@Z
    virtual long TriggerFadeGroup(WindissectOpaque *, unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerHide@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@000PEBUtagRECT@@PEAK@Z
    virtual long TriggerHide(::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *, tagRECT const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerMove@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@0H_NPEAK@Z
    virtual long TriggerMove(::DirectUI::Element *, ::DirectUI::Element *, int, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerNudge@PVLAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@PEAV?$DynamicArray@UtagPOINT@@$0A@@2@IPEAK@Z
    virtual long TriggerNudge(WindissectOpaque *, WindissectOpaque *, unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerPageTransition@PVLAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@0PEAVElement@2@UtagPOINT@@HPEAK@Z
    virtual long TriggerPageTransition(WindissectOpaque *, WindissectOpaque *, ::DirectUI::Element *, tagPOINT, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerPeekTileNotification@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@UtagPOINT@@PEAK@Z
    virtual long TriggerPeekTileNotification(::DirectUI::Element *, tagPOINT, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerPop@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@0IUtagPOINT@@1_N2PEAK@Z
    virtual long TriggerPop(::DirectUI::Element *, ::DirectUI::Element *, unsigned int, tagPOINT, tagPOINT, bool, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerReflow@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@_NPEAUtagSIZE@@PEAK@Z
    virtual long TriggerReflow(::DirectUI::Element *, bool, tagSIZE *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerReposition@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@UtagPOINT@@_NPEAK@Z
    virtual long TriggerReposition(::DirectUI::Element *, tagPOINT, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerResize@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@UtagSIZE@@PEAK@Z
    virtual long TriggerResize(::DirectUI::Element *, tagSIZE, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerReveal@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@000PEBUtagRECT@@PEAK@Z
    virtual long TriggerReveal(::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *, tagRECT const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerShowTileNotification@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@UtagPOINT@@01I00PEAK@Z
    virtual long TriggerShowTileNotification(::DirectUI::Element *, tagPOINT, ::DirectUI::Element *, tagPOINT, unsigned int, ::DirectUI::Element *, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerSlide@PVLAnimationTriggers@DirectUI@@UEAAJIPEAVElement@2@0IIUtagPOINT@@_N2PEAK@Z
    virtual long TriggerSlide(unsigned int, ::DirectUI::Element *, ::DirectUI::Element *, unsigned int, unsigned int, tagPOINT, bool, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerSwipe@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@IUtagPOINT@@0PEAK@Z
    virtual long TriggerSwipe(::DirectUI::Element *, unsigned int, tagPOINT, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerTap@PVLAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@IUtagPOINT@@PEAK@Z
    virtual long TriggerTap(::DirectUI::Element *, unsigned int, tagPOINT, unsigned long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PVLAnimationTriggers@DirectUI@@IEAA@XZ
    PVLAnimationTriggers();
};
} // namespace DirectUI
