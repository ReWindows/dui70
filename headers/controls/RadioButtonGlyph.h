#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
namespace DirectUI {
class RadioButtonGlyph {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RadioButtonGlyph@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RadioButtonGlyph@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@RadioButtonGlyph@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@RadioButtonGlyph@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@RadioButtonGlyph@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLostDialogFocus@RadioButtonGlyph@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceivedDialogFocus@RadioButtonGlyph@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RadioButtonGlyph@DirectUI@@QEAA@AEBV01@@Z
    RadioButtonGlyph(RadioButtonGlyph const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RadioButtonGlyph@DirectUI@@QEAA@XZ
    RadioButtonGlyph();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@RadioButtonGlyph@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@RadioButtonGlyph@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1RadioButtonGlyph@DirectUI@@UEAA@XZ
    virtual ~RadioButtonGlyph();
};
} // namespace DirectUI
