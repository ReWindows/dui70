#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
// Base evidence: DirectUI::TouchCheckBox (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchCheckBoxGlyph {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchCheckBoxGlyph@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchCheckBoxGlyph@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchCheckBoxGlyph@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@TouchCheckBoxGlyph@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Insert@TouchCheckBoxGlyph@DirectUI@@UEAAJPEAPEAVElement@2@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@TouchCheckBoxGlyph@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@TouchCheckBoxGlyph@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@TouchCheckBoxGlyph@DirectUI@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TouchCheckBoxGlyph@DirectUI@@QEAA@XZ
    TouchCheckBoxGlyph();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TouchCheckBoxGlyph@DirectUI@@UEAA@XZ
    virtual ~TouchCheckBoxGlyph();
};
} // namespace DirectUI
