#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
namespace DirectUI {
class XHost {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@XHost@DirectUI@@SAJPEAVIXElementCP@2@PEAPEAV12@@Z
    static long Create(::DirectUI::IXElementCP *, XHost * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Destroy@XHost@DirectUI@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyWindow@XHost@DirectUI@@QEAAXXZ
    void DestroyWindow();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElement@XHost@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHWND@XHost@DirectUI@@QEAAPEAUHWND__@@XZ
    HWND__* GetHWND();
    // Category: Method | Source: PE Export
    // Symbol: ?HideWindow@XHost@DirectUI@@QEAAXXZ
    void HideWindow();
    // Category: Method | Source: PE Export
    // Symbol: ?Host@XHost@DirectUI@@QEAAXPEAVElement@2@@Z
    void Host(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@XHost@DirectUI@@QEAAJPEAVIXElementCP@2@@Z
    long Initialize(::DirectUI::IXElementCP *);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowWindow@XHost@DirectUI@@QEAAXH@Z
    void ShowWindow(int);
    // Category: Method | Source: PE Export
    // Symbol: ?WndProc@XHost@DirectUI@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XHost@DirectUI@@QEAA@XZ
    XHost();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1XHost@DirectUI@@QEAA@XZ
    ~XHost();
};
} // namespace DirectUI
