#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 19 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Bind {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Bind@DirectUI@@QEAA@$$QEAV01@@Z
    Bind(Bind &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Bind@DirectUI@@QEAA@AEBV01@@Z
    Bind(Bind const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Bind@DirectUI@@QEAA@XZ
    Bind();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ConnectProp@Bind@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ConnectProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Bind@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Bind@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Bind@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetConnect@Bind@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetConnect(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProperty@Bind@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetProperty(::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Bind@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PropertyProp@Bind@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PropertyProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Bind@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Bind@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetConnect@Bind@DirectUI@@QEAAJPEBG@Z
    long SetConnect(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetProperty@Bind@DirectUI@@QEAAJPEBG@Z
    long SetProperty(unsigned short const *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Bind@DirectUI@@UEAA@XZ
    virtual ~Bind();
};
} // namespace DirectUI
