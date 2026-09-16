#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
// Base evidence: DirectUI::TextGraphic (likely; classinfo-template-instantiation).
namespace DirectUI {
class PText {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@PText@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@PText@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@PText@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@PText@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@PText@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0PText@DirectUI@@QEAA@AEBV01@@Z
    PText(PText const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0PText@DirectUI@@QEAA@XZ
    PText();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@PText@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@PText@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDataEntry@PText@DirectUI@@QEAAXPEAUIDataEntry@2@@Z
    void SetDataEntry(::DirectUI::IDataEntry *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1PText@DirectUI@@UEAA@XZ
    virtual ~PText();
};
} // namespace DirectUI
