#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 19 member(s).
// Base evidence: DirectUI::Expandable (likely; classinfo-template-instantiation).
namespace DirectUI {
class Expando {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Add@Expando@DirectUI@@UEAAJPEAPEAVElement@2@I@Z
    virtual long Add(::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Expando@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Expando@DirectUI@@QEAA@XZ
    Expando();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Expando@DirectUI@@QEAA@$$QEAV01@@Z
    Expando(Expando &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Expando@DirectUI@@QEAA@AEBV01@@Z
    Expando(Expando const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Expando@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Expando@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Expando@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@Expando@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Expando@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Expando@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Expando@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Expando@DirectUI@@UEAA@XZ
    virtual ~Expando();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Arrow@Expando@DirectUI@@KAGXZ
    static unsigned short Arrow();
    // Category: Method | Source: PE Export
    // Symbol: ?Clipper@Expando@DirectUI@@KAGXZ
    static unsigned short Clipper();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateChildren@Expando@DirectUI@@IEAAXPEAVValue@2@@Z
    void UpdateChildren(::DirectUI::Value *);
};
} // namespace DirectUI
