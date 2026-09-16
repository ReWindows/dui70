#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace DirectUI {
class InvokeManager {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Close@InvokeManager@DirectUI@@SAXXZ
    static void Close();
    // Category: Method | Source: PE Export
    // Symbol: ?CloseThread@InvokeManager@DirectUI@@SAXXZ
    static void CloseThread();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInvokeHelper@InvokeManager@DirectUI@@SAJPEAPEAVInvokeHelper@2@@Z
    static long GetInvokeHelper(::DirectUI::InvokeHelper * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@InvokeManager@DirectUI@@SAJXZ
    static long Init();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?FindInvokeHelper@InvokeManager@DirectUI@@CAPEAVInvokeHelper@2@PEAI@Z
    static ::DirectUI::InvokeHelper * FindInvokeHelper(unsigned int *);
};
} // namespace DirectUI
