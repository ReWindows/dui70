#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 17 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class TextGraphic {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TextGraphic@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TextGraphic@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TextGraphic@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentStringAsDisplayed@TextGraphic@DirectUI@@UEAAPEBGPEAPEAVValue@2@@Z
    virtual unsigned short const * GetContentStringAsDisplayed(::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TextGraphic@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@TextGraphic@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@TextGraphic@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TextGraphic@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@TextGraphic@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SideGraphicProp@TextGraphic@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SideGraphicProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TextGraphic@DirectUI@@QEAA@$$QEAV01@@Z
    TextGraphic(TextGraphic &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TextGraphic@DirectUI@@QEAA@AEBV01@@Z
    TextGraphic(TextGraphic const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TextGraphic@DirectUI@@QEAA@XZ
    TextGraphic();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TextGraphic@DirectUI@@UEAA@XZ
    virtual ~TextGraphic();
};
} // namespace DirectUI
