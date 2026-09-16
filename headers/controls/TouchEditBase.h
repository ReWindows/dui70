#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 80 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchEditBase {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CaretMoved@TouchEditBase@DirectUI@@SA?AVUID@@XZ
    static UID CaretMoved();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchEditBase@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Cut@TouchEditBase@DirectUI@@SA?AVUID@@XZ
    static UID Cut();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ElementMovesOnIHMNotifyProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ElementMovesOnIHMNotifyProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Enter@TouchEditBase@DirectUI@@SA?AVUID@@XZ
    static UID Enter();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FilterOnPasteProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FilterOnPasteProp();
    // Category: Method | Source: PE Export
    // Symbol: ?FinalizeCurrentIMEComposition@TouchEditBase@DirectUI@@UEAAJXZ
    virtual long FinalizeCurrentIMEComposition();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ForceEditTextToLTRProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ForceEditTextToLTRProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchEditBase@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchEditBase@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentStringAsDisplayed@TouchEditBase@DirectUI@@UEAAPEBGPEAPEAVValue@2@@Z
    virtual unsigned short const * GetContentStringAsDisplayed(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetControllerFor@TouchEditBase@DirectUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetControllerFor(IUnknown * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementMovesOnIHMNotify@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetElementMovesOnIHMNotify();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFilterOnPaste@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetFilterOnPaste();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetForceEditTextToLTR@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetForceEditTextToLTR();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIMEComposing@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetIMEComposing();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIgnoredKeyCombos@TouchEditBase@DirectUI@@QEAA?AW4TouchEditFilteredKeyComboFlags@2@XZ
    int GetIgnoredKeyCombos();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIntegrateIMECandidateList@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetIntegrateIMECandidateList();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyboardNavigationCapture@TouchEditBase@DirectUI@@QEAA?AW4TouchEditKeyboardNavigationCapture@2@XZ
    int GetKeyboardNavigationCapture();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMaxLength@TouchEditBase@DirectUI@@QEAAHXZ
    int GetMaxLength();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMoveCaretToEndOnSyncContent@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetMoveCaretToEndOnSyncContent();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMultiline@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetMultiline();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPasswordCharacter@TouchEditBase@DirectUI@@QEAAHXZ
    int GetPasswordCharacter();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPreventFormatChangeUpdatingModifiedState@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetPreventFormatChangeUpdatingModifiedState();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetReadOnly@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetReadOnly();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelectionBackgroundColor@TouchEditBase@DirectUI@@QEAAPEAVValue@2@XZ
    ::DirectUI::Value * GetSelectionBackgroundColor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelectionForegroundColor@TouchEditBase@DirectUI@@QEAAPEAVValue@2@XZ
    ::DirectUI::Value * GetSelectionForegroundColor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSyncContentWhileIMEComposing@TouchEditBase@DirectUI@@QEAA_NXZ
    bool GetSyncContentWhileIMEComposing();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextDocument@TouchEditBase@DirectUI@@UEAAJPEAPEAUITextDocument@@@Z
    virtual long GetTextDocument(ITextDocument * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextMode@TouchEditBase@DirectUI@@QEAA?AW4TouchEditTextMode@2@XZ
    int GetTextMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextServices@TouchEditBase@DirectUI@@UEAAJPEAPEAVITextServices@@@Z
    virtual long GetTextServices(ITextServices * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IMEComposingProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IMEComposingProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IgnoredKeyCombosProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IgnoredKeyCombosProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Insert@TouchEditBase@DirectUI@@UEAAJPEAPEAVElement@2@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IntegrateIMECandidateListProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IntegrateIMECandidateListProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsContentProtected@TouchEditBase@DirectUI@@UEAA_NXZ
    virtual bool IsContentProtected();
    // Category: Accessor | Source: PE Export
    // Symbol: ?KeyboardNavigationCaptureProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * KeyboardNavigationCaptureProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MaxLengthProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MaxLengthProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MoveCaretToEndOnSyncContentProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MoveCaretToEndOnSyncContentProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MultilineProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MultilineProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchEditBase@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@TouchEditBase@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PasswordCharacterProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PasswordCharacterProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Paste@TouchEditBase@DirectUI@@SA?AVUID@@XZ
    static UID Paste();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PreventFormatChangeUpdatingModifiedStateProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PreventFormatChangeUpdatingModifiedStateProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ReadOnlyProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ReadOnlyProp();
    // Category: Method | Source: PE Export
    // Symbol: ?RefreshContent@TouchEditBase@DirectUI@@UEAAJXZ
    virtual long RefreshContent();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchEditBase@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SelectionBackgroundColorProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SelectionBackgroundColorProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SelectionForegroundColorProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SelectionForegroundColorProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetElementMovesOnIHMNotify@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetElementMovesOnIHMNotify(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFilterOnPaste@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetFilterOnPaste(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetForceEditTextToLTR@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetForceEditTextToLTR(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIMEComposing@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetIMEComposing(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIgnoredKeyCombos@TouchEditBase@DirectUI@@QEAAJW4TouchEditFilteredKeyComboFlags@2@0@Z
    long SetIgnoredKeyCombos(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIntegrateIMECandidateList@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetIntegrateIMECandidateList(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyFocus@TouchEditBase@DirectUI@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyboardNavigationCapture@TouchEditBase@DirectUI@@QEAAJW4TouchEditKeyboardNavigationCapture@2@@Z
    long SetKeyboardNavigationCapture(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMaxLength@TouchEditBase@DirectUI@@QEAAJH@Z
    long SetMaxLength(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMoveCaretToEndOnSyncContent@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetMoveCaretToEndOnSyncContent(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMultiline@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetMultiline(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPasswordCharacter@TouchEditBase@DirectUI@@QEAAJH@Z
    long SetPasswordCharacter(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPreventFormatChangeUpdatingModifiedState@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetPreventFormatChangeUpdatingModifiedState(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetReadOnly@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetReadOnly(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelectionBackgroundColor@TouchEditBase@DirectUI@@QEAAJPEAVValue@2@@Z
    long SetSelectionBackgroundColor(::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelectionForegroundColor@TouchEditBase@DirectUI@@QEAAJPEAVValue@2@@Z
    long SetSelectionForegroundColor(::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSyncContentWhileIMEComposing@TouchEditBase@DirectUI@@QEAAJ_N@Z
    long SetSyncContentWhileIMEComposing(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTextMode@TouchEditBase@DirectUI@@QEAAJW4TouchEditTextMode@2@@Z
    long SetTextMode(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SyncContentWhileIMEComposingProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SyncContentWhileIMEComposingProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TextModeProp@TouchEditBase@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TextModeProp();
    // Category: Method | Source: PE Export
    // Symbol: ?UserTextChanged@TouchEditBase@DirectUI@@SA?AVUID@@XZ
    static UID UserTextChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?UserTextUpdateNoChange@TouchEditBase@DirectUI@@SA?AVUID@@XZ
    static UID UserTextUpdateNoChange();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEncodedContentString@TouchEditBase@DirectUI@@IEAAJPEAPEAGPEA_K@Z
    long _GetEncodedContentString(unsigned short * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEncodedContentString@TouchEditBase@DirectUI@@IEAAJPEAVValue@2@PEAPEAGPEA_K@Z
    long _GetEncodedContentString(::DirectUI::Value *, unsigned short * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreModified@TouchEditBase@DirectUI@@IEAAJXZ
    long _RestoreModified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveModified@TouchEditBase@DirectUI@@IEAAJXZ
    long _SaveModified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SecureDelete@TouchEditBase@DirectUI@@IEAAXPEAG_K@Z
    void _SecureDelete(unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPasswordReveal@TouchEditBase@DirectUI@@IEAAXW4PasswordReveal@12@@Z
    void _SetPasswordReveal(int);
};
} // namespace DirectUI
