#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 65 member(s).
// Base evidence: DirectUI::TouchEditBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchEdit2 {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Add@TouchEdit2@DirectUI@@UEAAJPEAPEAVElement@2@I@Z
    virtual long Add(::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?ClearButtonClicked@TouchEdit2@DirectUI@@SA?AVUID@@XZ
    static UID ClearButtonClicked();
    // Category: Method | Source: PE Export
    // Symbol: ?ContextMenuRequested@TouchEdit2@DirectUI@@SA?AVUID@@XZ
    static UID ContextMenuRequested();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchEdit2@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DisableSelectionHandlesOnEmptyContent@TouchEdit2@DirectUI@@QEAAXXZ
    void DisableSelectionHandlesOnEmptyContent();
    // Category: Method | Source: PE Export
    // Symbol: ?FinalizeCurrentIMEComposition@TouchEdit2@DirectUI@@UEAAJXZ
    virtual long FinalizeCurrentIMEComposition();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccessibleImpl@TouchEdit2@DirectUI@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchEdit2@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchEdit2@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInnerBorderThickness@TouchEdit2@DirectUI@@QEAAPEBUtagRECT@@PEAPEAVValue@2@@Z
    tagRECT const * GetInnerBorderThickness(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInputScope@TouchEdit2@DirectUI@@QEAA?AW4__MIDL___MIDL_itf_inputscope_0000_0000_0001@@XZ
    int GetInputScope();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPasswordRevealMode@TouchEdit2@DirectUI@@QEAA?AW4TouchEditPasswordRevealMode@2@XZ
    int GetPasswordRevealMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPromptText@TouchEdit2@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetPromptText(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPromptWithCaret@TouchEdit2@DirectUI@@QEAA_NXZ
    bool GetPromptWithCaret();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelection@TouchEdit2@DirectUI@@QEAAJPEAJ0@Z
    long GetSelection(long *, long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetShowClearButtonMinWidth@TouchEdit2@DirectUI@@QEAAHXZ
    int GetShowClearButtonMinWidth();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSuppressClearButton@TouchEdit2@DirectUI@@QEAA_NXZ
    bool GetSuppressClearButton();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextDocument@TouchEdit2@DirectUI@@UEAAJPEAPEAUITextDocument@@@Z
    virtual long GetTextDocument(ITextDocument * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextHost@TouchEdit2@DirectUI@@QEAAJPEAPEAVITextHost@@@Z
    long GetTextHost(ITextHost * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextSelection@TouchEdit2@DirectUI@@QEAAJPEAPEAUITextSelection@@@Z
    long GetTextSelection(ITextSelection * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextServices@TouchEdit2@DirectUI@@UEAAJPEAPEAVITextServices@@@Z
    virtual long GetTextServices(ITextServices * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetUiaFocusDelegate@TouchEdit2@DirectUI@@UEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * GetUiaFocusDelegate();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasSelection@TouchEdit2@DirectUI@@QEAA_NXZ
    bool HasSelection();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchEdit2@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?InnerBorderThicknessProp@TouchEdit2@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * InnerBorderThicknessProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@TouchEdit2@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@TouchEdit2@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@TouchEdit2@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchEdit2@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@TouchEdit2@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@TouchEdit2@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PasswordRevealModeProp@TouchEdit2@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PasswordRevealModeProp();
    // Category: Method | Source: PE Export
    // Symbol: ?PasteText@TouchEdit2@DirectUI@@QEAAJPEBG@Z
    long PasteText(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PromptTextProp@TouchEdit2@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PromptTextProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PromptWithCaretProp@TouchEdit2@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PromptWithCaretProp();
    // Category: Method | Source: PE Export
    // Symbol: ?RefreshContent@TouchEdit2@DirectUI@@UEAAJXZ
    virtual long RefreshContent();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchEdit2@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?SelectAll@TouchEdit2@DirectUI@@QEAAJXZ
    long SelectAll();
    // Category: Method | Source: PE Export
    // Symbol: ?SelectNone@TouchEdit2@DirectUI@@QEAAJXZ
    long SelectNone();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCaretPosition@TouchEdit2@DirectUI@@QEAAJJ@Z
    long SetCaretPosition(long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetInnerBorderThickness@TouchEdit2@DirectUI@@QEAAJHHHH@Z
    long SetInnerBorderThickness(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetInputScope@TouchEdit2@DirectUI@@QEAAJW4__MIDL___MIDL_itf_inputscope_0000_0000_0001@@@Z
    long SetInputScope(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPasswordRevealMode@TouchEdit2@DirectUI@@QEAAJW4TouchEditPasswordRevealMode@2@@Z
    long SetPasswordRevealMode(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPromptText@TouchEdit2@DirectUI@@QEAAJPEBG@Z
    long SetPromptText(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPromptWithCaret@TouchEdit2@DirectUI@@QEAAJ_N@Z
    long SetPromptWithCaret(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelection@TouchEdit2@DirectUI@@QEAAJJJ@Z
    long SetSelection(long, long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetShowClearButtonMinWidth@TouchEdit2@DirectUI@@QEAAJH@Z
    long SetShowClearButtonMinWidth(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSuppressClearButton@TouchEdit2@DirectUI@@QEAAJ_N@Z
    long SetSuppressClearButton(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ShowClearButtonMinWidthProp@TouchEdit2@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ShowClearButtonMinWidthProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SuppressClearButtonProp@TouchEdit2@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SuppressClearButtonProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchEdit2@DirectUI@@QEAA@XZ
    TouchEdit2();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@TouchEdit2@DirectUI@@EEAAXPEAVElement@2@PEAUEvent@2@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@TouchEdit2@DirectUI@@EEAAXPEAVElement@2@PEAUInputEvent@2@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@TouchEdit2@DirectUI@@EEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanging@TouchEdit2@DirectUI@@EEAA_NPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@TouchEdit2@DirectUI@@EEAAXPEAVElement@2@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@TouchEdit2@DirectUI@@EEAAXPEAVElement@2@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDirectChildren@TouchEdit2@DirectUI@@AEAAJXZ
    long _CreateDirectChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTextElements@TouchEdit2@DirectUI@@AEAAJXZ
    long _CreateTextElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRevealButtonActive@TouchEdit2@DirectUI@@AEAA_NXZ
    bool _IsRevealButtonActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RevealPassword@TouchEdit2@DirectUI@@AEAAXW4PasswordReveal@TouchEditBase@2@@Z
    void _RevealPassword(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateButton@TouchEdit2@DirectUI@@AEAAXXZ
    void _UpdateButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePrompt@TouchEdit2@DirectUI@@AEAAXXZ
    void _UpdatePrompt();
};
} // namespace DirectUI
