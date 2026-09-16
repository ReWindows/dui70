#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 18 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchCommandButton {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchCommandButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchCommandButton@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchCommandButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchCommandButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSubContent@TouchCommandButton@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetSubContent(::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchCommandButton@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Insert@TouchCommandButton@DirectUI@@UEAAJPEAPEAVElement@2@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TouchCommandButton@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@TouchCommandButton@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@TouchCommandButton@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchCommandButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSubContent@TouchCommandButton@DirectUI@@QEAAJPEBG@Z
    long SetSubContent(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SubContentProp@TouchCommandButton@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SubContentProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchCommandButton@DirectUI@@QEAA@XZ
    TouchCommandButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContentElement@TouchCommandButton@DirectUI@@AEAAPEAVElement@2@XZ
    ::DirectUI::Element * _GetContentElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSubContentElement@TouchCommandButton@DirectUI@@AEAAPEAVElement@2@XZ
    ::DirectUI::Element * _GetSubContentElement();
};
} // namespace DirectUI
