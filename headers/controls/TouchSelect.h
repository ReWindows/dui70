#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 92 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchSelect {
public:
    class TouchSelectListener;
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Add@TouchSelect@DirectUI@@UEAAJPEAPEAVElement@2@I@Z
    virtual long Add(::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?AddElement@TouchSelect@DirectUI@@QEAAJPEAVElement@2@PEBG@Z
    long AddElement(::DirectUI::Element *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?AddString@TouchSelect@DirectUI@@QEAAJPEBG@Z
    long AddString(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?AddString@TouchSelect@DirectUI@@QEAAJPEBGPEAPEAVElement@2@@Z
    long AddString(unsigned short const *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?AddStringWithLabelOverride@TouchSelect@DirectUI@@QEAAJPEBG0PEAPEAVElement@2@@Z
    long AddStringWithLabelOverride(unsigned short const *, unsigned short const *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?AnimatePopupOnDismissProp@TouchSelect@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AnimatePopupOnDismissProp();
    // Category: Method | Source: PE Export
    // Symbol: ?ClosePopup@TouchSelect@DirectUI@@QEAAXXZ
    void ClosePopup();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchSelect@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirePopupChangeEvent@TouchSelect@DirectUI@@SAXPEAVElement@2@W4POPUPCHANGEEVENTTYPE@2@@Z
    static void FirePopupChangeEvent(::DirectUI::Element *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAnimatePopupOnDismiss@TouchSelect@DirectUI@@QEAA_NXZ
    bool GetAnimatePopupOnDismiss();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchSelect@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchSelect@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementProviderImpl@TouchSelect@DirectUI@@UEAAJPEAVInvokeHelper@2@PEAPEAVElementProvider@2@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemCount@TouchSelect@DirectUI@@QEAAKXZ
    unsigned long GetItemCount();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemData@TouchSelect@DirectUI@@QEAAJHPEAPEAUIUnknown@@@Z
    long GetItemData(int, IUnknown * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetItemHeightInPopup@TouchSelect@DirectUI@@QEAAHXZ
    int GetItemHeightInPopup();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPopupBounds@TouchSelect@DirectUI@@QEAAPEBUtagRECT@@PEAPEAVValue@2@@Z
    tagRECT const * GetPopupBounds(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelection@TouchSelect@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetSelection();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelectionIndex@TouchSelect@DirectUI@@QEAAHXZ
    int GetSelectionIndex();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchSelect@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Insert@TouchSelect@DirectUI@@UEAAJPEAPEAVElement@2@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPopupOpen@TouchSelect@DirectUI@@QEAA_NXZ
    bool IsPopupOpen();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ItemHeightInPopupProp@TouchSelect@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ItemHeightInPopupProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@TouchSelect@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@TouchSelect@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@TouchSelect@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchSelect@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@TouchSelect@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@TouchSelect@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OpenPopup@TouchSelect@DirectUI@@QEAAJXZ
    long OpenPopup();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PopupBoundsProp@TouchSelect@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PopupBoundsProp();
    // Category: Method | Source: PE Export
    // Symbol: ?PopupChange@TouchSelect@DirectUI@@SA?AVUID@@XZ
    static UID PopupChange();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchSelect@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveAll@TouchSelect@DirectUI@@QEAAXXZ
    void RemoveAll();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveItem@TouchSelect@DirectUI@@QEAAJH@Z
    long RemoveItem(int);
    // Category: Method | Source: PE Export
    // Symbol: ?SelectionChange@TouchSelect@DirectUI@@SA?AVUID@@XZ
    static UID SelectionChange();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SelectionProp@TouchSelect@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SelectionProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAnimatePopupOnDismiss@TouchSelect@DirectUI@@QEAAJ_N@Z
    long SetAnimatePopupOnDismiss(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetItemData@TouchSelect@DirectUI@@QEAAJHPEAUIUnknown@@@Z
    long SetItemData(int, IUnknown *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetItemHeightInPopup@TouchSelect@DirectUI@@QEAAJH@Z
    long SetItemHeightInPopup(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPopupBounds@TouchSelect@DirectUI@@QEAAJHHHH@Z
    long SetPopupBounds(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelection@TouchSelect@DirectUI@@QEAAJPEAVElement@2@@Z
    long SetSelection(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelectionIndex@TouchSelect@DirectUI@@QEAAJH@Z
    long SetSelectionIndex(int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchSelect@DirectUI@@QEAA@XZ
    TouchSelect();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateElement@TouchSelect@DirectUI@@QEAAJHPEAVElement@2@PEBG@Z
    long UpdateElement(int, ::DirectUI::Element *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateString@TouchSelect@DirectUI@@QEAAJHPEBG@Z
    long UpdateString(int, unsigned short const *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TouchSelect@DirectUI@@UEAA@XZ
    virtual ~TouchSelect();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPopupBorderHeight@TouchSelect@DirectUI@@AEAAXPEAUtagRECT@@@Z
    void _AddPopupBorderHeight(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTouchSelectItem@TouchSelect@DirectUI@@AEAAJPEAVTouchSelectItem@2@@Z
    long _AddTouchSelectItem(TouchSelectItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AsyncClose@TouchSelect@DirectUI@@CA?AVUID@@XZ
    static UID _AsyncClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AsyncOpen@TouchSelect@DirectUI@@CA?AVUID@@XZ
    static UID _AsyncOpen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearLabel@TouchSelect@DirectUI@@AEAAJXZ
    long _ClearLabel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearTouchSelectItem@TouchSelect@DirectUI@@AEAAJPEAVTouchSelectItem@2@@Z
    long _ClearTouchSelectItem(TouchSelectItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClosePopup@TouchSelect@DirectUI@@AEAAXW4POPUPFIREEVENTTYPE@12@@Z
    void _ClosePopup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFaceplate@TouchSelect@DirectUI@@AEAAJXZ
    long _CreateFaceplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePopup@TouchSelect@DirectUI@@AEAAJXZ
    long _CreatePopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyPopup@TouchSelect@DirectUI@@AEAAXXZ
    void _DestroyPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisableLightDismiss@TouchSelect@DirectUI@@AEAAXXZ
    void _DisableLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableLightDismiss@TouchSelect@DirectUI@@AEAAJXZ
    long _EnableLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindNextItem@TouchSelect@DirectUI@@AEAAPEAVElement@2@G@Z
    ::DirectUI::Element * _FindNextItem(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FullScreenWndProc@TouchSelect@DirectUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t _FullScreenWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAdjustedFaceplateAndSelectionRect@TouchSelect@DirectUI@@AEAAJPEAUtagRECT@@0@Z
    long _GetAdjustedFaceplateAndSelectionRect(tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFaceplateFromScreenRect@TouchSelect@DirectUI@@AEAAJPEAUtagRECT@@@Z
    long _GetFaceplateFromScreenRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemFromIndex@TouchSelect@DirectUI@@AEAAJHPEAPEAVTouchSelectItem@2@@Z
    long _GetItemFromIndex(int, TouchSelectItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetItemIndex@TouchSelect@DirectUI@@AEAAHPEAVElement@2@@Z
    int _GetItemIndex(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPopupBounds@TouchSelect@DirectUI@@AEAAJPEAUtagRECT@@@Z
    long _GetPopupBounds(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectionContentFromPopupRect@TouchSelect@DirectUI@@AEAAXPEAUtagRECT@@@Z
    void _GetSelectionContentFromPopupRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsScrollable@TouchSelect@DirectUI@@AEAAJPEBUtagRECT@@PEA_N@Z
    long _IsScrollable(tagRECT const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KeyboardHookProc@TouchSelect@DirectUI@@AEAA_JH_K_J@Z
    int64_t _KeyboardHookProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OffsetByPopupBorderHeight@TouchSelect@DirectUI@@AEAAXPEAUtagRECT@@@Z
    void _OffsetByPopupBorderHeight(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnListenedEvent@TouchSelect@DirectUI@@AEAAXPEAVElement@2@PEAUEvent@2@@Z
    void _OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenPopup@TouchSelect@DirectUI@@AEAAJW4ClickDevice@TouchButton@2@@Z
    long _OpenPopup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionCarouseling@TouchSelect@DirectUI@@AEAAJPEBUtagRECT@@PEAU3@@Z
    long _PositionCarouseling(tagRECT const *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionNonScrollable@TouchSelect@DirectUI@@AEAAJPEBUtagRECT@@@Z
    long _PositionNonScrollable(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionScrolling@TouchSelect@DirectUI@@AEAAJPEBUtagRECT@@PEAU3@@Z
    long _PositionScrolling(tagRECT const *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostCloseEvent@TouchSelect@DirectUI@@AEAAJXZ
    long _PostCloseEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareCarouselingPopup@TouchSelect@DirectUI@@AEAAJPEBUtagRECT@@@Z
    long _PrepareCarouselingPopup(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareListForPopup@TouchSelect@DirectUI@@AEAAJXZ
    long _PrepareListForPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreparePopup@TouchSelect@DirectUI@@AEAAJW4ClickDevice@TouchButton@2@@Z
    long _PreparePopup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareScrollingPopup@TouchSelect@DirectUI@@AEAAJPEBUtagRECT@@@Z
    long _PrepareScrollingPopup(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealClosePopup@TouchSelect@DirectUI@@AEAAXW4POPUPFIREEVENTTYPE@12@@Z
    void _RealClosePopup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreListToFaceplate@TouchSelect@DirectUI@@AEAAJXZ
    long _RestoreListToFaceplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@TouchSelect@DirectUI@@EEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@TouchSelect@DirectUI@@EEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLabel@TouchSelect@DirectUI@@AEAAJPEAVElement@2@@Z
    long _SetLabel(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTouchSelectItem@TouchSelect@DirectUI@@AEAAJPEAVTouchSelectItem@2@PEAVElement@2@PEBG@Z
    long _SetTouchSelectItem(TouchSelectItem *, ::DirectUI::Element *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTouchSelectItem@TouchSelect@DirectUI@@AEAAJPEAVTouchSelectItem@2@PEBG@Z
    long _SetTouchSelectItem(TouchSelectItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StaticKeyboardHookProc@TouchSelect@DirectUI@@CA_JH_K_J@Z
    static int64_t _StaticKeyboardHookProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncLabel@TouchSelect@DirectUI@@AEAAJPEAVElement@2@0@Z
    long _SyncLabel(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateClassPropForItems@TouchSelect@DirectUI@@AEAAXPEAVValue@2@@Z
    void _UpdateClassPropForItems(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ContentStartsWithChar@TouchSelect@DirectUI@@CA_NPEAVTouchSelectItem@2@G@Z
    static bool s_ContentStartsWithChar(TouchSelectItem *, unsigned short);
};
} // namespace DirectUI
