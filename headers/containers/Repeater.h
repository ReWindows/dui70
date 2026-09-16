#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
// Base evidence: DirectUI::Macro (likely; classinfo-template-instantiation).
namespace DirectUI {
class Repeater {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Repeater@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Repeater@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Repeater@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Repeater@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Repeater@DirectUI@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Repeater@DirectUI@@QEAA@$$QEAV01@@Z
    Repeater(Repeater &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Repeater@DirectUI@@QEAA@AEBV01@@Z
    Repeater(Repeater const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Repeater@DirectUI@@QEAA@XZ
    Repeater();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Repeater@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDataEngine@Repeater@DirectUI@@QEAAXPEAUIDataEngine@2@@Z
    void SetDataEngine(::DirectUI::IDataEngine *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetGraphicType@Repeater@DirectUI@@QEAAXE@Z
    void SetGraphicType(unsigned char);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Repeater@DirectUI@@UEAA@XZ
    virtual ~Repeater();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?BuildElement@Repeater@DirectUI@@MEAAJXZ
    virtual long BuildElement();
};
} // namespace DirectUI
