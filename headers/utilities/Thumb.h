#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
namespace DirectUI {
class Thumb {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Thumb@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Thumb@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Drag@Thumb@DirectUI@@SA?AVUID@@XZ
    static UID Drag();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Thumb@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Thumb@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Thumb@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@Thumb@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Thumb@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Thumb@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Method | Source: PE Export
    // Symbol: ?SupressRightButtonDrag@Thumb@DirectUI@@QEAAX_N@Z
    void SupressRightButtonDrag(bool);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Thumb@DirectUI@@QEAA@XZ
    Thumb();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Thumb@DirectUI@@QEAA@AEBV01@@Z
    Thumb(Thumb const &);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Thumb@DirectUI@@UEAA@XZ
    virtual ~Thumb();
};
} // namespace DirectUI
