#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace DirectUI {
class PVLLauncherAnimationTriggers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScale@PVLLauncherAnimationTriggers@DirectUI@@UEAAJHPEAVElement@2@U_POINTFLOAT@@1HH@Z
    virtual long AddScale(int, ::DirectUI::Element *, _POINTFLOAT, _POINTFLOAT, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@PVLLauncherAnimationTriggers@DirectUI@@SAPEAV12@XZ
    static PVLLauncherAnimationTriggers * GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerCrossfade@PVLLauncherAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@0_N111PEAK@Z
    virtual long TriggerCrossfade(WindissectOpaque *, WindissectOpaque *, bool, bool, bool, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDrag@PVLLauncherAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@00PEAV?$DynamicArray@PEAUClipRectWithElement@DirectUI@@$0A@@2@IUtagPOINT@@PEAK@Z
    virtual long TriggerDrag(::DirectUI::Element *, WindissectOpaque *, ::DirectUI::Element *, ::DirectUI::Element *, WindissectOpaque *, unsigned int, tagPOINT, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDrop@PVLLauncherAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@00PEAV?$DynamicArray@PEAUClipRectWithElement@DirectUI@@$0A@@2@0HHUtagPOINT@@PEAK@Z
    virtual long TriggerDrop(::DirectUI::Element *, WindissectOpaque *, ::DirectUI::Element *, ::DirectUI::Element *, WindissectOpaque *, ::DirectUI::Element *, int, int, tagPOINT, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?TriggerLaunch@PVLLauncherAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@PEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@PEAK@Z
    virtual long TriggerLaunch(::DirectUI::Element *, WindissectOpaque *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerLogonEntrance@PVLLauncherAnimationTriggers@DirectUI@@UEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@PEAV?$DynamicArray@UtagPOINT@@$0A@@2@PEAK@Z
    virtual long TriggerLogonEntrance(WindissectOpaque *, WindissectOpaque *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerTap@PVLLauncherAnimationTriggers@DirectUI@@UEAAJPEAVElement@2@IUtagPOINT@@IPEAK@Z
    virtual long TriggerTap(::DirectUI::Element *, unsigned int, tagPOINT, unsigned int, unsigned long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PVLLauncherAnimationTriggers@DirectUI@@IEAA@XZ
    PVLLauncherAnimationTriggers();
};
} // namespace DirectUI
