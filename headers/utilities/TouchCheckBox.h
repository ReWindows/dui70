#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 25 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchCheckBox {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?CheckedStateProp@TouchCheckBox@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CheckedStateProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchCheckBox@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchCheckBox@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCheckedState@TouchCheckBox@DirectUI@@QEAA?AW4CheckedStateFlags@2@XZ
    int GetCheckedState();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchCheckBox@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchCheckBox@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetImmersiveFocusRectOffsets@TouchCheckBox@DirectUI@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToggleOnClick@TouchCheckBox@DirectUI@@QEAA_NXZ
    bool GetToggleOnClick();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchCheckBox@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Insert@TouchCheckBox@DirectUI@@UEAAJPEAPEAVElement@2@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@TouchCheckBox@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchCheckBox@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@TouchCheckBox@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@TouchCheckBox@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchCheckBox@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCheckedState@TouchCheckBox@DirectUI@@QEAAJW4CheckedStateFlags@2@@Z
    long SetCheckedState(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetToggleOnClick@TouchCheckBox@DirectUI@@QEAAJ_N@Z
    long SetToggleOnClick(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ToggleOnClickProp@TouchCheckBox@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ToggleOnClickProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchCheckBox@DirectUI@@QEAA@XZ
    TouchCheckBox();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TouchCheckBox@DirectUI@@UEAA@XZ
    virtual ~TouchCheckBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddGlyph@TouchCheckBox@DirectUI@@AEAAJXZ
    long _CreateAndAddGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddLabel@TouchCheckBox@DirectUI@@AEAAJXZ
    long _CreateAndAddLabel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLabel@TouchCheckBox@DirectUI@@AEAAPEAVElement@2@XZ
    ::DirectUI::Element * _GetLabel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAccState@TouchCheckBox@DirectUI@@AEAAX_NW4CheckedStateFlags@2@@Z
    void _UpdateAccState(bool, int);
};
} // namespace DirectUI
