#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class HWNDHostClientAccessible {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@HWNDHostClientAccessible@DirectUI@@SAJPEAVElement@2@PEAUIAccessible@@PEAPEAVDuiAccessible@2@@Z
    static long Create(::DirectUI::Element *, IAccessible *, ::DirectUI::DuiAccessible * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDHostClientAccessible@DirectUI@@QEAA@XZ
    HWNDHostClientAccessible();
    // Category: Method | Source: PE Export
    // Symbol: ?accNavigate@HWNDHostClientAccessible@DirectUI@@UEAAJJUtagVARIANT@@PEAU3@@Z
    virtual long accNavigate(long, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accParent@HWNDHostClientAccessible@DirectUI@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accRole@HWNDHostClientAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAU3@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1HWNDHostClientAccessible@DirectUI@@UEAA@XZ
    virtual ~HWNDHostClientAccessible();
};
} // namespace DirectUI
