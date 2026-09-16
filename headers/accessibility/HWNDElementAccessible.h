#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class HWNDElementAccessible {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@HWNDElementAccessible@DirectUI@@SAJPEAVHWNDElement@2@PEAPEAVDuiAccessible@2@@Z
    static long Create(::DirectUI::HWNDElement *, ::DirectUI::DuiAccessible * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Disconnect@HWNDElementAccessible@DirectUI@@UEAAJXZ
    virtual long Disconnect();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDElementAccessible@DirectUI@@QEAA@XZ
    HWNDElementAccessible();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@HWNDElementAccessible@DirectUI@@QEAAJPEAVHWNDElement@2@@Z
    long Initialize(::DirectUI::HWNDElement *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accParent@HWNDElementAccessible@DirectUI@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1HWNDElementAccessible@DirectUI@@UEAA@XZ
    virtual ~HWNDElementAccessible();
};
} // namespace DirectUI
