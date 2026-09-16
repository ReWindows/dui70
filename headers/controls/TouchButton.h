#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 52 member(s).
// Base evidence: DirectUI::RichText (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchButton {
public:
    class TouchButtonListenerHelper;
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CancelClick@TouchButton@DirectUI@@QEAA_NW4ClickDevice@12@@Z
    bool CancelClick(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?CapturedProp@TouchButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CapturedProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Click@TouchButton@DirectUI@@SA?AVUID@@XZ
    static UID Click();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchButton@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DefaultAction@TouchButton@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Method | Source: PE Export
    // Symbol: ?FireClickEvent@TouchButton@DirectUI@@UEAAXIIW4ClickDevice@12@PEAUtagPOINT@@@Z
    virtual void FireClickEvent(unsigned int, unsigned int, int, tagPOINT *);
    // Category: Method | Source: PE Export
    // Symbol: ?FireRightClickEvent@TouchButton@DirectUI@@UEAAXIPEAUtagPOINT@@@Z
    virtual void FireRightClickEvent(unsigned int, tagPOINT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCaptured@TouchButton@DirectUI@@QEAA_NXZ
    bool GetCaptured();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClickDevice@TouchButton@DirectUI@@QEAA?AW4ClickDevice@12@XZ
    int GetClickDevice();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetForegroundColorRef@TouchButton@DirectUI@@UEAAJPEAK@Z
    virtual long GetForegroundColorRef(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHandleEnter@TouchButton@DirectUI@@QEAA_NXZ
    bool GetHandleEnter();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHandleGlobalEnter@TouchButton@DirectUI@@QEAA_NXZ
    bool GetHandleGlobalEnter();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetImmersiveFocusRectOffsets@TouchButton@DirectUI@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPressed@TouchButton@DirectUI@@QEAA_NXZ
    bool GetPressed();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetShowKeyFocus@TouchButton@DirectUI@@QEAA_NXZ
    bool GetShowKeyFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTreatRightMouseButtonAsLeft@TouchButton@DirectUI@@QEAA_NXZ
    bool GetTreatRightMouseButtonAsLeft();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HandleEnterProp@TouchButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * HandleEnterProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HandleGlobalEnterProp@TouchButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * HandleGlobalEnterProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchButton@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?MultipleClick@TouchButton@DirectUI@@SA?AVUID@@XZ
    static UID MultipleClick();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@TouchButton@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@TouchButton@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@TouchButton@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchButton@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@TouchButton@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PressedProp@TouchButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PressedProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?RightClick@TouchButton@DirectUI@@SA?AVUID@@XZ
    static UID RightClick();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCaptured@TouchButton@DirectUI@@QEAAJ_N@Z
    long SetCaptured(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHandleEnter@TouchButton@DirectUI@@QEAAJ_N@Z
    long SetHandleEnter(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHandleGlobalEnter@TouchButton@DirectUI@@QEAAJ_N@Z
    long SetHandleGlobalEnter(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPressed@TouchButton@DirectUI@@QEAAJ_N@Z
    long SetPressed(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetShowKeyFocus@TouchButton@DirectUI@@QEAAJ_N@Z
    long SetShowKeyFocus(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTreatRightMouseButtonAsLeft@TouchButton@DirectUI@@QEAAJ_N@Z
    long SetTreatRightMouseButtonAsLeft(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ShowKeyFocusProp@TouchButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ShowKeyFocusProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchButton@DirectUI@@QEAA@XZ
    TouchButton();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TreatRightMouseButtonAsLeftProp@TouchButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TreatRightMouseButtonAsLeftProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TouchButton@DirectUI@@UEAA@XZ
    virtual ~TouchButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishClick@TouchButton@DirectUI@@AEAA_NW4ClickDevice@12@IIPEAUtagPOINT@@@Z
    bool _FinishClick(int, unsigned int, unsigned int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyboardEvent@TouchButton@DirectUI@@AEAAXPEAUKeyboardEvent@2@@Z
    void _OnKeyboardEvent(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseEvent@TouchButton@DirectUI@@AEAAXPEAUMouseEvent@2@@Z
    void _OnMouseEvent(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerEvent@TouchButton@DirectUI@@AEAAXPEAUPointerEvent@2@@Z
    void _OnPointerEvent(::DirectUI::PointerEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartClick@TouchButton@DirectUI@@AEAA_NW4ClickDevice@12@@Z
    bool _StartClick(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncDefaultEnterHandling@TouchButton@DirectUI@@AEAAXPEAVTouchHWNDElement@2@@Z
    void _SyncDefaultEnterHandling(::DirectUI::TouchHWNDElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TriggerRightClick@TouchButton@DirectUI@@AEAA_NIPEAUtagPOINT@@@Z
    bool _TriggerRightClick(unsigned int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAccState@TouchButton@DirectUI@@AEAAX_N0@Z
    void _UpdateAccState(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateClick@TouchButton@DirectUI@@AEAA_NW4ClickDevice@12@_N@Z
    bool _UpdateClick(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFocusVisibility@TouchButton@DirectUI@@CA?AVUID@@XZ
    static UID _UpdateFocusVisibility();
};
} // namespace DirectUI
