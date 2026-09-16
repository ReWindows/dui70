#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 21 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchRepeatButton {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchRepeatButton@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchRepeatButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DefaultAction@TouchRepeatButton@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PE Export
    // Symbol: ?DisableMouseInRectCheckProp@TouchRepeatButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DisableMouseInRectCheckProp();
    // Category: Method | Source: PE Export
    // Symbol: ?FireClickEvent@TouchRepeatButton@DirectUI@@UEAAXIIW4ClickDevice@TouchButton@2@PEAUtagPOINT@@@Z
    virtual void FireClickEvent(unsigned int, unsigned int, int, tagPOINT *);
    // Category: Method | Source: PE Export
    // Symbol: ?FireRightClickEvent@TouchRepeatButton@DirectUI@@UEAAXIPEAUtagPOINT@@@Z
    virtual void FireRightClickEvent(unsigned int, tagPOINT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchRepeatButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchRepeatButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDisableMouseInRectCheck@TouchRepeatButton@DirectUI@@QEAA_NXZ
    bool GetDisableMouseInRectCheck();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchRepeatButton@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchRepeatButton@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchRepeatButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?RepeatClick@TouchRepeatButton@DirectUI@@SA?AVUID@@XZ
    static UID RepeatClick();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDisableMouseInRectCheck@TouchRepeatButton@DirectUI@@QEAAJ_N@Z
    long SetDisableMouseInRectCheck(bool);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchRepeatButton@DirectUI@@QEAA@XZ
    TouchRepeatButton();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchRepeatButton@DirectUI@@UEAA@XZ
    virtual ~TouchRepeatButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ContinueRepeat@TouchRepeatButton@DirectUI@@AEAA_NXZ
    bool _ContinueRepeat();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireRepeatClickEvent@TouchRepeatButton@DirectUI@@AEAAXI@Z
    void _FireRepeatClickEvent(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRepeatClickTimer@TouchRepeatButton@DirectUI@@AEAAXXZ
    void _OnRepeatClickTimer();
};
} // namespace DirectUI
