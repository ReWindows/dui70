#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 87 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchSlider {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?BufferingProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * BufferingProp();
    // Category: Method | Source: PE Export
    // Symbol: ?CancelCurrentDrag@TouchSlider@DirectUI@@QEAAXXZ
    void CancelCurrentDrag();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchSlider@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EraseFeedback@TouchSlider@DirectUI@@QEAAXXZ
    void EraseFeedback();
    // Category: Method | Source: PE Export
    // Symbol: ?FireEventOnMouseOrPointerRelease@TouchSlider@DirectUI@@QEAAXXZ
    void FireEventOnMouseOrPointerRelease();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBuffering@TouchSlider@DirectUI@@QEAAHXZ
    int GetBuffering();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchSlider@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchSlider@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFillpartElement@TouchSlider@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetFillpartElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveFocusRectOffsets@TouchSlider@DirectUI@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsContinuous@TouchSlider@DirectUI@@QEAA_NXZ
    bool GetIsContinuous();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsPressed@TouchSlider@DirectUI@@QEAA_NXZ
    bool GetIsPressed();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsShowOnOffFeedback@TouchSlider@DirectUI@@QEAA_NXZ
    bool GetIsShowOnOffFeedback();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsVertical@TouchSlider@DirectUI@@QEAA_NXZ
    bool GetIsVertical();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMetering@TouchSlider@DirectUI@@QEAAHXZ
    int GetMetering();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRangeMax@TouchSlider@DirectUI@@QEAAHXZ
    int GetRangeMax();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRangeMin@TouchSlider@DirectUI@@QEAAHXZ
    int GetRangeMin();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetShowTick@TouchSlider@DirectUI@@QEAA_NXZ
    bool GetShowTick();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetStepCount@TouchSlider@DirectUI@@QEAAHXZ
    int GetStepCount();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetThumbElement@TouchSlider@DirectUI@@QEAAPEAVButton@2@XZ
    ::DirectUI::Button * GetThumbElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbPosition@TouchSlider@DirectUI@@QEAAHXZ
    int GetThumbPosition();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetThumbValue@TouchSlider@DirectUI@@QEAAHXZ
    int GetThumbValue();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTickCount@TouchSlider@DirectUI@@QEAAHXZ
    int GetTickCount();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTrackElement@TouchSlider@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetTrackElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetVisualState@TouchSlider@DirectUI@@QEAAHXZ
    int GetVisualState();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchSlider@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsContinuousProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IsContinuousProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPressedProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IsPressedProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsShowOnOffFeedbackProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IsShowOnOffFeedbackProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsVerticalProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IsVerticalProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MeteringProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MeteringProp();
    // Category: Method | Source: PE Export
    // Symbol: ?MouseOrPointerReleased@TouchSlider@DirectUI@@SA?AVUID@@XZ
    static UID MouseOrPointerReleased();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchSlider@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@TouchSlider@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchSlider@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchSlider@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchSlider@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveRichDuiTooltip@TouchSlider@DirectUI@@QEAAXXZ
    void RemoveRichDuiTooltip();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBuffering@TouchSlider@DirectUI@@QEAAJH@Z
    long SetBuffering(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFireContinuousSliderEvent@TouchSlider@DirectUI@@QEAAX_N@Z
    void SetFireContinuousSliderEvent(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIsContinuous@TouchSlider@DirectUI@@QEAAJ_N@Z
    long SetIsContinuous(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIsPressed@TouchSlider@DirectUI@@QEAAJ_N@Z
    long SetIsPressed(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIsShowOnOffFeedback@TouchSlider@DirectUI@@QEAAJ_N@Z
    long SetIsShowOnOffFeedback(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIsVertical@TouchSlider@DirectUI@@QEAAJ_N@Z
    long SetIsVertical(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMetering@TouchSlider@DirectUI@@QEAAJH@Z
    long SetMetering(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRangeMax@TouchSlider@DirectUI@@QEAAXH@Z
    void SetRangeMax(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRangeMin@TouchSlider@DirectUI@@QEAAXH@Z
    void SetRangeMin(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRangeMinAndRangeMax@TouchSlider@DirectUI@@QEAAXHH@Z
    void SetRangeMinAndRangeMax(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRespectLanguageDirection@TouchSlider@DirectUI@@QEAAX_N@Z
    void SetRespectLanguageDirection(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRespondToMouseScroll@TouchSlider@DirectUI@@QEAAX_N@Z
    void SetRespondToMouseScroll(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetShowTick@TouchSlider@DirectUI@@QEAAJ_N@Z
    long SetShowTick(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetStepCount@TouchSlider@DirectUI@@QEAAXH@Z
    void SetStepCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbPosition@TouchSlider@DirectUI@@QEAAJH@Z
    long SetThumbPosition(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetThumbValue@TouchSlider@DirectUI@@QEAAXH_N0@Z
    void SetThumbValue(int, bool, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetThumbValue@TouchSlider@DirectUI@@QEAAXH_N@Z
    void SetThumbValue(int, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTickCount@TouchSlider@DirectUI@@QEAAJH@Z
    long SetTickCount(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTooltipText@TouchSlider@DirectUI@@QEAAXPEBG@Z
    void SetTooltipText(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ShowTickProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ShowTickProp();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowTooltipOnRightForLTRBuild@TouchSlider@DirectUI@@QEAAXXZ
    void ShowTooltipOnRightForLTRBuild();
    // Category: Method | Source: PE Export
    // Symbol: ?SliderUpdated@TouchSlider@DirectUI@@SA?AVUID@@XZ
    static UID SliderUpdated();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ThumbPositionProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ThumbPositionProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TickCountProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TickCountProp();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchSlider@DirectUI@@QEAA@XZ
    TouchSlider();
    // Category: Method | Source: PE Export
    // Symbol: ?TranslateThumbPositionToThumbValue@TouchSlider@DirectUI@@QEAAHH@Z
    int TranslateThumbPositionToThumbValue(int);
    // Category: Method | Source: PE Export
    // Symbol: ?UseFixedTooltipOffset@TouchSlider@DirectUI@@QEAAXXZ
    void UseFixedTooltipOffset();
    // Category: Accessor | Source: PE Export
    // Symbol: ?VisualStateProp@TouchSlider@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * VisualStateProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@TouchSlider@DirectUI@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@TouchSlider@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchSlider@DirectUI@@UEAA@XZ
    virtual ~TouchSlider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertRawPositionToThumbPosition@TouchSlider@DirectUI@@AEAAHH@Z
    int ConvertRawPositionToThumbPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDecrement@TouchSlider@DirectUI@@AEAAXXZ
    void DoDecrement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoIncrement@TouchSlider@DirectUI@@AEAAXXZ
    void DoIncrement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExcludeTopPadding@TouchSlider@DirectUI@@AEAAHH@Z
    int ExcludeTopPadding(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireSliderUpdatedEvent@TouchSlider@DirectUI@@AEAAX_N@Z
    void FireSliderUpdatedEvent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSnappedThumbPosition@TouchSlider@DirectUI@@AEAAHHN@Z
    int GetSnappedThumbPosition(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMouseClickOrTouch@TouchSlider@DirectUI@@AEAAHHH_N0@Z
    int HandleMouseClickOrTouch(int, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDirectManipulation@TouchSlider@DirectUI@@AEAAJXZ
    long InitializeDirectManipulation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSetThumbValue@TouchSlider@DirectUI@@AEAAXH_N@Z
    void InternalSetThumbValue(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContact@TouchSlider@DirectUI@@AEAAJI_N@Z
    long SetContact(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementCustomString@TouchSlider@DirectUI@@AEAAXPEAVElement@2@PEBG@Z
    void SetElementCustomString(::DirectUI::Element *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbValueWithTriggeredByKeyboardFlag@TouchSlider@DirectUI@@AEAAXH_N00@Z
    void SetThumbValueWithTriggeredByKeyboardFlag(int, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapThumb@TouchSlider@DirectUI@@AEAAHH@Z
    int SnapThumb(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapThumbValue@TouchSlider@DirectUI@@AEAAHH@Z
    int SnapThumbValue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateThumbValueToFeedbackText@TouchSlider@DirectUI@@AEAAXH@Z
    void TranslateThumbValueToFeedbackText(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateThumbValueToThumbPosition@TouchSlider@DirectUI@@AEAAHH@Z
    int TranslateThumbValueToThumbPosition(int);
};
} // namespace DirectUI
