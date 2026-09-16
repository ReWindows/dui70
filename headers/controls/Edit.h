#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 42 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
namespace DirectUI {
class Edit {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Edit@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Edit@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?DirtyProp@Edit@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DirtyProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Edit@DirectUI@@QEAA@XZ
    Edit();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Edit@DirectUI@@QEAA@AEBV01@@Z
    Edit(Edit const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Enter@Edit@DirectUI@@SA?AVUID@@XZ
    static UID Enter();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Edit@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Edit@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@Edit@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentStringAsDisplayed@Edit@DirectUI@@UEAAPEBGPEAPEAVValue@2@@Z
    virtual unsigned short const * GetContentStringAsDisplayed(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDirty@Edit@DirectUI@@QEAA_NXZ
    bool GetDirty();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMaxLength@Edit@DirectUI@@QEAAHXZ
    int GetMaxLength();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMultiline@Edit@DirectUI@@QEAA_NXZ
    bool GetMultiline();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPasswordCharacter@Edit@DirectUI@@QEAAHXZ
    int GetPasswordCharacter();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetThemedBorder@Edit@DirectUI@@QEAA_NXZ
    bool GetThemedBorder();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWantTabs@Edit@DirectUI@@QEAA_NXZ
    bool GetWantTabs();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Edit@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsContentProtected@Edit@DirectUI@@UEAA_NXZ
    virtual bool IsContentProtected();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MaxLengthProp@Edit@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MaxLengthProp();
    // Category: Method | Source: PE Export
    // Symbol: ?MessageCallback@Edit@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?MultilineProp@Edit@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MultilineProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@Edit@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@Edit@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Edit@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PasswordCharacterProp@Edit@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PasswordCharacterProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Edit@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Edit@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDirty@Edit@DirectUI@@QEAAJ_N@Z
    long SetDirty(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMaxLength@Edit@DirectUI@@QEAAJH@Z
    long SetMaxLength(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMultiline@Edit@DirectUI@@QEAAJ_N@Z
    long SetMultiline(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPasswordCharacter@Edit@DirectUI@@QEAAJH@Z
    long SetPasswordCharacter(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetThemedBorder@Edit@DirectUI@@QEAAJ_N@Z
    long SetThemedBorder(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWantTabs@Edit@DirectUI@@QEAAJ_N@Z
    long SetWantTabs(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ThemedBorderProp@Edit@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ThemedBorderProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?WantTabsProp@Edit@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * WantTabsProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Edit@DirectUI@@UEAA@XZ
    virtual ~Edit();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHWND@Edit@DirectUI@@MEAAPEAUHWND__@@PEAU3@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHWND@Edit@DirectUI@@MEAAPEAUHWND__@@PEAU3@_N@Z
    virtual HWND__* CreateHWND(HWND__*, bool);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextHeight@Edit@DirectUI@@AEAAIXZ
    unsigned int GetTextHeight();
    // Category: Method | Source: PE Export
    // Symbol: ?PropertyChangedCore@Edit@DirectUI@@AEAAXPEBUPropertyInfo@2@HPEAVValue@2@PEAUHWND__@@@Z
    void PropertyChangedCore(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, HWND__*);
};
} // namespace DirectUI
