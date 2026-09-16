#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 17 member(s).
// Base evidence: DirectUI::CCBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCAVI {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCAVI@DirectUI@@QEAA@$$QEAV01@@Z
    CCAVI(CCAVI &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCAVI@DirectUI@@QEAA@AEBV01@@Z
    CCAVI(CCAVI const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCAVI@DirectUI@@QEAA@XZ
    CCAVI();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCAVI@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCAVI@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCAVI@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCAVI@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PE Export
    // Symbol: ?Play@CCAVI@DirectUI@@QEAAXPEAUHWND__@@@Z
    void Play(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCAVI@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCAVI@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Method | Source: PE Export
    // Symbol: ?Stop@CCAVI@DirectUI@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCAVI@DirectUI@@UEAA@XZ
    virtual ~CCAVI();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?PostCreate@CCAVI@DirectUI@@MEAAXPEAUHWND__@@@Z
    virtual void PostCreate(HWND__*);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?OpenAnimation@CCAVI@DirectUI@@AEAAXPEAUHWND__@@@Z
    void OpenAnimation(HWND__*);
};
} // namespace DirectUI
