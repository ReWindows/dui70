#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace DirectUI {
class CLightDismissNotifier {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CLightDismissNotifier@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLightDismissNotifier@DirectUI@@SAJPEAVTouchSelect@2@PEAPEAUILightDismissNotification@@@Z
    static long Create(::DirectUI::TouchSelect *, ILightDismissNotification * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CLightDismissNotifier@DirectUI@@UEAAJXZ
    virtual long OnDismiss();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLightDismissNotifier@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLightDismissNotifier@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLightDismissNotifier@DirectUI@@UEAA@XZ
    virtual ~CLightDismissNotifier();
};
} // namespace DirectUI
