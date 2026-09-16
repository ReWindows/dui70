#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 25 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Button {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Button@DirectUI@@QEAA@XZ
    Button();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Button@DirectUI@@QEAA@AEBV01@@Z
    Button(Button const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?CapturedProp@Button@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CapturedProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Click@Button@DirectUI@@SA?AVUID@@XZ
    static UID Click();
    // Category: Method | Source: PE Export
    // Symbol: ?Context@Button@DirectUI@@SA?AVUID@@XZ
    static UID Context();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Button@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Button@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DefaultAction@Button@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCaptured@Button@DirectUI@@QEAA_NXZ
    bool GetCaptured();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Button@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Button@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPressed@Button@DirectUI@@QEAA_NXZ
    bool GetPressed();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Button@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@Button@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLostDialogFocus@Button@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Button@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceivedDialogFocus@Button@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PressedProp@Button@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PressedProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Button@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCaptured@Button@DirectUI@@QEAAJ_N@Z
    long SetCaptured(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Button@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPressed@Button@DirectUI@@QEAAJ_N@Z
    long SetPressed(bool);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Button@DirectUI@@UEAA@XZ
    virtual ~Button();
};
} // namespace DirectUI
