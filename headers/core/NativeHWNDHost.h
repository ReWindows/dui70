#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 24 member(s).
namespace DirectUI {
class NativeHWNDHost {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@NativeHWNDHost@DirectUI@@SAJPEBGPEAUHWND__@@PEAUHICON__@@HHHHHHIPEAPEAV12@@Z
    static long Create(unsigned short const *, HWND__*, HICON__*, int, int, int, int, int, int, unsigned int, NativeHWNDHost * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@NativeHWNDHost@DirectUI@@SAJPEBG0PEAUHWND__@@PEAUHICON__@@HHHHHHPEAUHINSTANCE__@@IPEAPEAV12@@Z
    static long Create(unsigned short const *, unsigned short const *, HWND__*, HICON__*, int, int, int, int, int, int, HINSTANCE__*, unsigned int, NativeHWNDHost * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHostWindow@NativeHWNDHost@DirectUI@@UEAAPEAUHWND__@@KPEBG0KHHHHPEAU3@PEAUHMENU__@@PEAUHINSTANCE__@@PEAX@Z
    virtual HWND__* CreateHostWindow(unsigned long, unsigned short const *, unsigned short const *, unsigned long, int, int, int, int, HWND__*, HMENU__*, HINSTANCE__*, void *);
    // Category: Method | Source: PE Export
    // Symbol: ?Destroy@NativeHWNDHost@DirectUI@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyMsg@NativeHWNDHost@DirectUI@@SAIXZ
    static unsigned int DestroyMsg();
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyWindow@NativeHWNDHost@DirectUI@@QEAAXXZ
    void DestroyWindow();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElement@NativeHWNDHost@DirectUI@@QEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHWND@NativeHWNDHost@DirectUI@@QEAAPEAUHWND__@@XZ
    HWND__* GetHWND();
    // Category: Method | Source: PE Export
    // Symbol: ?HideWindow@NativeHWNDHost@DirectUI@@QEAAXXZ
    void HideWindow();
    // Category: Method | Source: PE Export
    // Symbol: ?Host@NativeHWNDHost@DirectUI@@QEAAXPEAVElement@2@@Z
    void Host(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@NativeHWNDHost@DirectUI@@QEAAJPEBG0PEAUHWND__@@PEAUHICON__@@HHHHHHPEAUHINSTANCE__@@I@Z
    long Initialize(unsigned short const *, unsigned short const *, HWND__*, HICON__*, int, int, int, int, int, int, HINSTANCE__*, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@NativeHWNDHost@DirectUI@@QEAAJPEBGPEAUHWND__@@PEAUHICON__@@HHHHHHI@Z
    long Initialize(unsigned short const *, HWND__*, HICON__*, int, int, int, int, int, int, unsigned int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0NativeHWNDHost@DirectUI@@QEAA@XZ
    NativeHWNDHost();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0NativeHWNDHost@DirectUI@@QEAA@AEBV01@@Z
    NativeHWNDHost(NativeHWNDHost const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMessage@NativeHWNDHost@DirectUI@@UEAAJI_K_JPEA_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?RestoreFocus@NativeHWNDHost@DirectUI@@QEAAHXZ
    int RestoreFocus();
    // Category: Method | Source: PE Export
    // Symbol: ?SaveFocus@NativeHWNDHost@DirectUI@@QEAAXXZ
    void SaveFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDefaultFocusID@NativeHWNDHost@DirectUI@@QEAAXPEBG@Z
    void SetDefaultFocusID(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowWindow@NativeHWNDHost@DirectUI@@QEAAXH@Z
    void ShowWindow(int);
    // Category: Method | Source: PE Export
    // Symbol: ?SyncDestroyWindow@NativeHWNDHost@DirectUI@@QEAAXXZ
    void SyncDestroyWindow();
    // Category: Method | Source: PE Export
    // Symbol: ?WndProc@NativeHWNDHost@DirectUI@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1NativeHWNDHost@DirectUI@@UEAA@XZ
    virtual ~NativeHWNDHost();
};
} // namespace DirectUI
