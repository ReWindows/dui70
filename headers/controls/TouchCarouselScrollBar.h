#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 31 member(s).
// Base evidence: DirectUI::ScrollBar (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchCarouselScrollBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndThumbDrag@TouchCarouselScrollBar@DirectUI@@SA?AVUID@@XZ
    static UID EndThumbDrag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@TouchCarouselScrollBar@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TouchCarouselScrollBar@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThumbDragging@TouchCarouselScrollBar@DirectUI@@QEAA_NXZ
    bool IsThumbDragging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchCarouselScrollBar@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@TouchCarouselScrollBar@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchCarouselScrollBar@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@TouchCarouselScrollBar@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartThumbDrag@TouchCarouselScrollBar@DirectUI@@SA?AVUID@@XZ
    static UID StartThumbDrag();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchCarouselScrollBar@DirectUI@@QEAA@XZ
    TouchCarouselScrollBar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchCarouselScrollBar@DirectUI@@UEAA@XZ
    virtual ~TouchCarouselScrollBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDown@TouchCarouselScrollBar@DirectUI@@EEAAXI@Z
    virtual void LineDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUp@TouchCarouselScrollBar@DirectUI@@EEAAXI@Z
    virtual void LineUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@TouchCarouselScrollBar@DirectUI@@EEAAXPEAVElement@2@PEAUEvent@2@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@TouchCarouselScrollBar@DirectUI@@EEAAXPEAVElement@2@PEAUInputEvent@2@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@TouchCarouselScrollBar@DirectUI@@EEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDown@TouchCarouselScrollBar@DirectUI@@EEAAXI@Z
    virtual void PageDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUp@TouchCarouselScrollBar@DirectUI@@EEAAXI@Z
    virtual void PageUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddArrow@TouchCarouselScrollBar@DirectUI@@AEAAJPEAVElement@2@PEBG1@Z
    long _CreateAndAddArrow(::DirectUI::Element *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddParts@TouchCarouselScrollBar@DirectUI@@AEAAJXZ
    long _CreateAndAddParts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FadeAnimation@TouchCarouselScrollBar@DirectUI@@AEAAJPEAVElement@2@I@Z
    long _FadeAnimation(::DirectUI::Element *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPositionRestricted@TouchCarouselScrollBar@DirectUI@@AEAAHH@Z
    int _GetPositionRestricted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRange@TouchCarouselScrollBar@DirectUI@@AEAAHXZ
    int _GetRange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMouseCaptured@TouchCarouselScrollBar@DirectUI@@AEAA_NXZ
    bool _IsMouseCaptured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccNames@TouchCarouselScrollBar@DirectUI@@AEAAJXZ
    long _SetAccNames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetActiveState@TouchCarouselScrollBar@DirectUI@@AEAAXW4ActiveState@2@@Z
    void _SetActiveState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetButtonPart@TouchCarouselScrollBar@DirectUI@@AEAAJPEAVElement@2@PEBG1H@Z
    long _SetButtonPart(::DirectUI::Element *, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateThumbPosition@TouchCarouselScrollBar@DirectUI@@AEAAXXZ
    void _UpdateThumbPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateVisualState@TouchCarouselScrollBar@DirectUI@@AEAAXXZ
    void _UpdateVisualState();
};
} // namespace DirectUI
