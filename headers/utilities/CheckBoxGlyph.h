#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 14 member(s).
// Base evidence: DirectUI::Button (likely; classinfo-template-instantiation).
namespace DirectUI {
class CheckBoxGlyph {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CheckBoxGlyph@DirectUI@@QEAA@AEBV01@@Z
    CheckBoxGlyph(CheckBoxGlyph const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CheckBoxGlyph@DirectUI@@QEAA@XZ
    CheckBoxGlyph();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CheckBoxGlyph@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CheckBoxGlyph@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CheckBoxGlyph@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CheckBoxGlyph@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CheckBoxGlyph@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLostDialogFocus@CheckBoxGlyph@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnLostDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceivedDialogFocus@CheckBoxGlyph@DirectUI@@UEAA_NPEAUIDialogElement@2@@Z
    virtual bool OnReceivedDialogFocus(::DirectUI::IDialogElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CheckBoxGlyph@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CheckBoxGlyph@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CheckBoxGlyph@DirectUI@@UEAA@XZ
    virtual ~CheckBoxGlyph();
};
} // namespace DirectUI
