#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace DirectUI {
class InvokeHelper {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?DoInvoke@InvokeHelper@DirectUI@@QEAAJHPEAVElementProvider@2@P6APEAVProviderProxy@2@PEAVElement@2@@ZPEAD@Z
    long DoInvoke(int, ::DirectUI::ElementProvider *, ::DirectUI::ProviderProxy * ( *)(::DirectUI::Element *), char *);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@InvokeHelper@DirectUI@@QEAAHK@Z
    int Init(unsigned long);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0InvokeHelper@DirectUI@@QEAA@XZ
    InvokeHelper();
    // Category: Method | Source: PE Export
    // Symbol: ?Uninit@InvokeHelper@DirectUI@@QEAAXXZ
    void Uninit();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1InvokeHelper@DirectUI@@UEAA@XZ
    virtual ~InvokeHelper();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?OnInvoke@InvokeHelper@DirectUI@@AEAAXPEAUInvokeArgs@12@@Z
    void OnInvoke(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?_WndProc@InvokeHelper@DirectUI@@CAHPEAXPEAUHWND__@@I_K_JPEA_J@Z
    static int _WndProc(void *, HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
};
} // namespace DirectUI
