#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 29 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchSwitch {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchSwitch@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?CurrentToggleValueProp@TouchSwitch@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CurrentToggleValueProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchSwitch@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchSwitch@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetOffText@TouchSwitch@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetOffText(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetOnText@TouchSwitch@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetOnText(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTitleText@TouchSwitch@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetTitleText(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToggleValue@TouchSwitch@DirectUI@@QEAAHXZ
    int GetToggleValue();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchSwitch@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?OffTextProp@TouchSwitch@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * OffTextProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchSwitch@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchSwitch@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchSwitch@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?OnTextProp@TouchSwitch@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * OnTextProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchSwitch@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOffText@TouchSwitch@DirectUI@@QEAAJPEBG@Z
    long SetOffText(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOnOffText@TouchSwitch@DirectUI@@QEAAXPEBG0@Z
    void SetOnOffText(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOnText@TouchSwitch@DirectUI@@QEAAJPEBG@Z
    long SetOnText(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTitleText@TouchSwitch@DirectUI@@QEAAJPEBG@Z
    long SetTitleText(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetToggleSwitchText@TouchSwitch@DirectUI@@QEAAXPEBG@Z
    void SetToggleSwitchText(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetToggleValue@TouchSwitch@DirectUI@@QEAAXH@Z
    void SetToggleValue(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetToggleValue@TouchSwitch@DirectUI@@QEAAXH_N0@Z
    void SetToggleValue(int, bool, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetToggleValue@TouchSwitch@DirectUI@@QEAAXH_N@Z
    void SetToggleValue(int, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?TitleTextProp@TouchSwitch@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TitleTextProp();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementCustomString@TouchSwitch@DirectUI@@AEAAXPEAVElement@2@PEBG@Z
    void SetElementCustomString(::DirectUI::Element *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncOnOffText@TouchSwitch@DirectUI@@AEAAXXZ
    void SyncOnOffText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetToggleValue@TouchSwitch@DirectUI@@AEAAXH@Z
    void _SetToggleValue(int);
};
} // namespace DirectUI
