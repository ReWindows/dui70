#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 40 member(s).
// Base evidence: DirectUI::ScrollBar (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchScrollBar {
public:
    class InnerTouchScrollBarListener;
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ActiveStateChanged@TouchScrollBar@DirectUI@@SA?AVUID@@XZ
    static UID ActiveStateChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?AnimateScroll@TouchScrollBar@DirectUI@@SA?AVUID@@XZ
    static UID AnimateScroll();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchScrollBar@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateButtons@TouchScrollBar@DirectUI@@UEAAJXZ
    virtual long CreateButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSecondaryContent@TouchScrollBar@DirectUI@@QEAAJPEAUIDirectManipulationManager@@PEAUIDirectManipulationCompositor@@PEAUIDirectManipulationViewport@@@Z
    long CreateSecondaryContent(IDirectManipulationManager *, IDirectManipulationCompositor *, IDirectManipulationViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSecondaryContent@TouchScrollBar@DirectUI@@QEAAJXZ
    long DeleteSecondaryContent();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetActiveState@TouchScrollBar@DirectUI@@QEAA?AW4ActiveState@2@XZ
    int GetActiveState();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchScrollBar@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchScrollBar@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetThumb@TouchScrollBar@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetThumb();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchScrollBar@DirectUI@@QEAAJ_NPEAVElement@2@PEAK@Z
    long Initialize(bool, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?InteractionEnd@TouchScrollBar@DirectUI@@SA?AVUID@@XZ
    static UID InteractionEnd();
    // Category: Method | Source: PE Export
    // Symbol: ?InteractionStart@TouchScrollBar@DirectUI@@SA?AVUID@@XZ
    static UID InteractionStart();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsThumbActive@TouchScrollBar@DirectUI@@QEAA_NXZ
    bool IsThumbActive();
    // Category: Method | Source: PE Export
    // Symbol: ?LineDown@TouchScrollBar@DirectUI@@UEAAXI@Z
    virtual void LineDown(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?LineUp@TouchScrollBar@DirectUI@@UEAAXI@Z
    virtual void LineUp(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@TouchScrollBar@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@TouchScrollBar@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@TouchScrollBar@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchScrollBar@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?PageDown@TouchScrollBar@DirectUI@@UEAAXI@Z
    virtual void PageDown(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PageUp@TouchScrollBar@DirectUI@@UEAAXI@Z
    virtual void PageUp(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchScrollBar@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetActiveState@TouchScrollBar@DirectUI@@QEAAXW4ActiveState@2@_N@Z
    void SetActiveState(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetDelta@TouchScrollBar@DirectUI@@QEAAJM@Z
    long SetOffsetDelta(float);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchScrollBar@DirectUI@@QEAA@XZ
    TouchScrollBar();
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutDoLayout@TouchScrollBar@DirectUI@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutUpdateDesiredSize@TouchScrollBar@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TouchScrollBar@DirectUI@@UEAA@XZ
    virtual ~TouchScrollBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddInnerRichText@TouchScrollBar@DirectUI@@AEAAJPEAVElement@2@PEBG1PEAPEAV32@@Z
    long _CreateAndAddInnerRichText(::DirectUI::Element *, unsigned short const *, unsigned short const *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FadeAnimation@TouchScrollBar@DirectUI@@AEAAJPEAVElement@2@I@Z
    long _FadeAnimation(::DirectUI::Element *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetThumbSize@TouchScrollBar@DirectUI@@AEAAXHPEAH0@Z
    void _GetThumbSize(int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasIndicatorTransformChanged@TouchScrollBar@DirectUI@@AEAA_NM@Z
    bool _HasIndicatorTransformChanged(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasViewportSizeChanged@TouchScrollBar@DirectUI@@AEAA_NXZ
    bool _HasViewportSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccNames@TouchScrollBar@DirectUI@@AEAAXXZ
    void _SetAccNames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPositionOrStop@TouchScrollBar@DirectUI@@AEAAXH@Z
    void _SetPositionOrStop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIndicatorTransforms@TouchScrollBar@DirectUI@@AEAAJ_N@Z
    long _UpdateIndicatorTransforms(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIndicatorTransforms@TouchScrollBar@DirectUI@@AEAAJM@Z
    long _UpdateIndicatorTransforms(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVisualState@TouchScrollBar@DirectUI@@AEAAXXZ
    void _UpdateVisualState();
};
} // namespace DirectUI
