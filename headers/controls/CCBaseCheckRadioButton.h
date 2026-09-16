#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
// Base evidence: DirectUI::CCPushButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCBaseCheckRadioButton {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCBaseCheckRadioButton@DirectUI@@QEAA@$$QEAV01@@Z
    CCBaseCheckRadioButton(CCBaseCheckRadioButton &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCBaseCheckRadioButton@DirectUI@@QEAA@AEBV01@@Z
    CCBaseCheckRadioButton(CCBaseCheckRadioButton const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCBaseCheckRadioButton@DirectUI@@QEAA@K@Z
    CCBaseCheckRadioButton(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCBaseCheckRadioButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCBaseCheckRadioButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCBaseCheckRadioButton@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLostDialogFocus@CCBaseCheckRadioButton@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@CCBaseCheckRadioButton@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceivedDialogFocus@CCBaseCheckRadioButton@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCBaseCheckRadioButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCBaseCheckRadioButton@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCBaseCheckRadioButton@DirectUI@@UEAA@XZ
    virtual ~CCBaseCheckRadioButton();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?PostCreate@CCBaseCheckRadioButton@DirectUI@@MEAAXPEAUHWND__@@@Z
    virtual void PostCreate(HWND__*);
};
} // namespace DirectUI
