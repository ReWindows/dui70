#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
namespace DirectUI {
class AccessibleButton {
public:
    class ACCESSIBLEROLE;
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AccessibleButton@DirectUI@@QEAA@XZ
    AccessibleButton();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AccessibleButton@DirectUI@@QEAA@$$QEAV01@@Z
    AccessibleButton(AccessibleButton &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AccessibleButton@DirectUI@@QEAA@AEBV01@@Z
    AccessibleButton(AccessibleButton const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@AccessibleButton@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@AccessibleButton@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@AccessibleButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@AccessibleButton@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@AccessibleButton@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Recalc@AccessibleButton@DirectUI@@QEAAXXZ
    void Recalc();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@AccessibleButton@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@AccessibleButton@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1AccessibleButton@DirectUI@@UEAA@XZ
    virtual ~AccessibleButton();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?FindAccessibleRole@AccessibleButton@DirectUI@@CAPEBUACCESSIBLEROLE@12@H@Z
    static WindissectOpaque const * FindAccessibleRole(int);
};
} // namespace DirectUI
