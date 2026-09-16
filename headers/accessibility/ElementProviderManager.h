#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
namespace DirectUI {
class ElementProviderManager {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Add@ElementProviderManager@DirectUI@@SAJPEAVElementProvider@2@@Z
    static long Add(::DirectUI::ElementProvider *);
    // Category: Method | Source: PE Export
    // Symbol: ?Close@ElementProviderManager@DirectUI@@SAXXZ
    static void Close();
    // Category: Method | Source: PE Export
    // Symbol: ?Find@ElementProviderManager@DirectUI@@SAPEAVElementProvider@2@PEAVElement@2@@Z
    static ::DirectUI::ElementProvider * Find(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ElementProviderManager@DirectUI@@SAJXZ
    static long Init();
    // Category: Method | Source: PE Export
    // Symbol: ?Remove@ElementProviderManager@DirectUI@@SAXPEAVElementProvider@2@@Z
    static void Remove(::DirectUI::ElementProvider *);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?FindProviderCallback@ElementProviderManager@DirectUI@@CA_NPEAVElementProvider@2@PEAX@Z
    static bool FindProviderCallback(::DirectUI::ElementProvider *, void *);
};
} // namespace DirectUI
