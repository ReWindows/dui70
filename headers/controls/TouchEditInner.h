#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 59 member(s).
// Base evidence: DirectUI::TouchEditBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchEditInner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContent@TouchEditInner@DirectUI@@QEAAXXZ
    void ClearContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeCurrentIMEComposition@TouchEditInner@DirectUI@@UEAAJXZ
    virtual long FinalizeCurrentIMEComposition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@TouchEditInner@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSize@TouchEditInner@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControllerFor@TouchEditInner@DirectUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetControllerFor(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementProviderImpl@TouchEditInner@DirectUI@@UEAAJPEAVInvokeHelper@2@PEAPEAVElementProvider@2@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ::DirectUI::ElementProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@TouchEditInner@DirectUI@@QEAAJPEAJ0@Z
    long GetSelection(long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextDocument@TouchEditInner@DirectUI@@UEAAJPEAPEAUITextDocument@@@Z
    virtual long GetTextDocument(ITextDocument * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextSelection@TouchEditInner@DirectUI@@QEAAJPEAPEAUITextSelection@@@Z
    long GetTextSelection(ITextSelection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextServices@TouchEditInner@DirectUI@@UEAAJPEAPEAVITextServices@@@Z
    virtual long GetTextServices(ITextServices * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAElementProvider@TouchEditInner@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetUIAElementProvider(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSelection@TouchEditInner@DirectUI@@QEAA_NXZ
    bool HasSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TouchEditInner@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchEditInner@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@TouchEditInner@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchEditInner@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchEditInner@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@TouchEditInner@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@TouchEditInner@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@TouchEditInner@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshContent@TouchEditInner@DirectUI@@UEAAJXZ
    virtual long RefreshContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPasswordReveal@TouchEditInner@DirectUI@@QEAAJW4PasswordReveal@TouchEditBase@2@@Z
    long SetPasswordReveal(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@TouchEditInner@DirectUI@@QEAAJJJ@Z
    long SetSelection(long, long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchEditInner@DirectUI@@QEAA@XZ
    TouchEditInner();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchEditInner@DirectUI@@UEAA@XZ
    virtual ~TouchEditInner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@TouchEditInner@DirectUI@@EEAAXPEAVElement@2@PEAUEvent@2@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddAdaptor@TouchEditInner@DirectUI@@AEAAJXZ
    long _CreateAndAddAdaptor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCaret@TouchEditInner@DirectUI@@AEAAXPEAUHBITMAP__@@HH@Z
    void _CreateCaret(HBITMAP__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyCaret@TouchEditInner@DirectUI@@AEAAXXZ
    void _DestroyCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayContextMenu@TouchEditInner@DirectUI@@AEAAJQEBU_getcontextmenuexex@@@Z
    long _DisplayContextMenu(_getcontextmenuexex const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisplayContextMenu@TouchEditInner@DirectUI@@AEAAJXZ
    long _DisplayContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireUserTextChangedEvent@TouchEditInner@DirectUI@@AEAAXXZ
    void _FireUserTextChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireUserTextUpdateNoChangeEvent@TouchEditInner@DirectUI@@AEAAXXZ
    void _FireUserTextUpdateNoChangeEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenuSelectionRect@TouchEditInner@DirectUI@@AEAAJGAEBUtagPOINT@@PEAUtagRECT@@PEAW4CONTEXT_MENU_DEVICE_ORIGIN@2@@Z
    long _GetContextMenuSelectionRect(unsigned short, tagPOINT const &, tagRECT *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElementToCHARFORMAT2@TouchEditInner@DirectUI@@AEAAXPEAUCHARFORMAT2W@@@Z
    void _GetElementToCHARFORMAT2(CHARFORMAT2W *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElementToPARAFORMAT2@TouchEditInner@DirectUI@@AEAAXPEAUPARAFORMAT2@@@Z
    void _GetElementToPARAFORMAT2(PARAFORMAT2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHWND@TouchEditInner@DirectUI@@AEAAPEAUHWND__@@XZ
    HWND__* _GetHWND();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRECText@TouchEditInner@DirectUI@@AEAAJPEAPEAG@Z
    long _GetRECText(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTextHeight@TouchEditInner@DirectUI@@AEAAJPEAUHDC__@@@Z
    long _GetTextHeight(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleContextMenu@TouchEditInner@DirectUI@@AEAAJGQEBU_getcontextmenuexex@@@Z
    long _HandleContextMenu(unsigned short, _getcontextmenuexex const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCaretPosValid@TouchEditInner@DirectUI@@AEAA_NXZ
    bool _IsCaretPosValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnKeyboardEvent@TouchEditInner@DirectUI@@AEAAXPEAUKeyboardEvent@2@@Z
    void _OnKeyboardEvent(::DirectUI::KeyboardEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseEvent@TouchEditInner@DirectUI@@AEAAXPEAUMouseEvent@2@@Z
    void _OnMouseEvent(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerEvent@TouchEditInner@DirectUI@@AEAAXPEAUPointerEvent@2@@Z
    void _OnPointerEvent(::DirectUI::PointerEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RECNotify@TouchEditInner@DirectUI@@AEAAJKPEAX@Z
    long _RECNotify(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReservedKeyboardEvent@TouchEditInner@DirectUI@@AEAA_NPEBUKeyboardEvent@2@@Z
    bool _ReservedKeyboardEvent(::DirectUI::KeyboardEvent const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScrollCaretIntoView@TouchEditInner@DirectUI@@AEAAXXZ
    void _ScrollCaretIntoView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncContent@TouchEditInner@DirectUI@@AEAAXXZ
    void _SyncContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncContentAlign@TouchEditInner@DirectUI@@AEAAX_N@Z
    void _SyncContentAlign(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncDirection@TouchEditInner@DirectUI@@AEAAX_N@Z
    void _SyncDirection(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncFont@TouchEditInner@DirectUI@@AEAAX_N@Z
    void _SyncFont(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncKeyFocused@TouchEditInner@DirectUI@@AEAAXXZ
    void _SyncKeyFocused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncRect@TouchEditInner@DirectUI@@AEAAX_N@Z
    void _SyncRect(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaret@TouchEditInner@DirectUI@@AEAAXXZ
    void _UpdateCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCharFormat@TouchEditInner@DirectUI@@AEAAXPEBUCHARFORMAT2W@@_N@Z
    void _UpdateCharFormat(CHARFORMAT2W const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInputScope@TouchEditInner@DirectUI@@AEAAJ_N@Z
    long _UpdateInputScope(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateParaFormat@TouchEditInner@DirectUI@@AEAAXPEBUPARAFORMAT2@@H@Z
    void _UpdateParaFormat(PARAFORMAT2const *, int);
};
} // namespace DirectUI
