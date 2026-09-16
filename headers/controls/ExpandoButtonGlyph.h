#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
namespace DirectUI {
class ExpandoButtonGlyph {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ExpandoButtonGlyph@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ExpandoButtonGlyph@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ExpandoButtonGlyph@DirectUI@@QEAA@AEBV01@@Z
    ExpandoButtonGlyph(ExpandoButtonGlyph const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ExpandoButtonGlyph@DirectUI@@QEAA@XZ
    ExpandoButtonGlyph();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@ExpandoButtonGlyph@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@ExpandoButtonGlyph@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@ExpandoButtonGlyph@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLostDialogFocus@ExpandoButtonGlyph@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceivedDialogFocus@ExpandoButtonGlyph@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@ExpandoButtonGlyph@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@ExpandoButtonGlyph@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ExpandoButtonGlyph@DirectUI@@UEAA@XZ
    virtual ~ExpandoButtonGlyph();
};
} // namespace DirectUI
