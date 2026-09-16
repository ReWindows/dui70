#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 20 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class RefPointElement {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?ActualReferencePointProp@RefPointElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ActualReferencePointProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RefPointElement@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RefPointElement@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?FindRefPoint@RefPointElement@DirectUI@@SAPEAVElement@2@PEAV32@PEAUtagPOINT@@@Z
    static ::DirectUI::Element * FindRefPoint(::DirectUI::Element *, tagPOINT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetActualReferencePoint@RefPointElement@DirectUI@@QEAAPEBUtagPOINT@@PEAPEAVValue@2@@Z
    tagPOINT const * GetActualReferencePoint(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@RefPointElement@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@RefPointElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetReferencePoint@RefPointElement@DirectUI@@QEAAPEBUtagPOINT@@PEAPEAVValue@2@@Z
    tagPOINT const * GetReferencePoint(::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@RefPointElement@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Locate@RefPointElement@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static RefPointElement * Locate(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@RefPointElement@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RefPointElement@DirectUI@@QEAA@AEBV01@@Z
    RefPointElement(RefPointElement const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RefPointElement@DirectUI@@QEAA@XZ
    RefPointElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ReferencePointProp@RefPointElement@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ReferencePointProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@RefPointElement@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@RefPointElement@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetReferencePoint@RefPointElement@DirectUI@@QEAAJHH@Z
    long SetReferencePoint(int, int);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1RefPointElement@DirectUI@@UEAA@XZ
    virtual ~RefPointElement();
};
} // namespace DirectUI
