#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
namespace DirectUI {
class ManipulationHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@ManipulationHelper@DirectUI@@QEAAJPEAUHWND__@@@Z
    long Activate(HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ManipulationHelper@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deactivate@ManipulationHelper@DirectUI@@QEAAJPEAUHWND__@@@Z
    long Deactivate(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentTiler@ManipulationHelper@DirectUI@@QEAAPEAVContentTiler@2@XZ
    ::DirectUI::ContentTiler * GetContentTiler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManagerNoAddref@ManipulationHelper@DirectUI@@QEAAPEAUIDirectManipulationManager@@XZ
    IDirectManipulationManager * GetManagerNoAddref();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentUpdated@ManipulationHelper@DirectUI@@UEAAJPEAUIDirectManipulationViewport@@PEAUIDirectManipulationContent@@@Z
    virtual long OnContentUpdated(IDirectManipulationViewport *, IDirectManipulationContent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportStatusChanged@ManipulationHelper@DirectUI@@UEAAJPEAUIDirectManipulationViewport@@W4DIRECTMANIPULATION_STATUS@@1@Z
    virtual long OnViewportStatusChanged(IDirectManipulationViewport *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportUpdated@ManipulationHelper@DirectUI@@UEAAJPEAUIDirectManipulationViewport@@@Z
    virtual long OnViewportUpdated(IDirectManipulationViewport *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ManipulationHelper@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ManipulationHelper@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@ManipulationHelper@DirectUI@@QEAAJPEAUIUnknown@@_K@Z
    long RemoveTile(IUnknown *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelegateEventHandler@ManipulationHelper@DirectUI@@QEAAJPEAUIUnknown@@@Z
    long SetDelegateEventHandler(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewportAndOwner@ManipulationHelper@DirectUI@@QEAAJPEAUIDirectManipulationViewport@@PEAUHWND__@@PEAVTouchScrollViewer@2@@Z
    long SetViewportAndOwner(IDirectManipulationViewport *, HWND__*, ::DirectUI::TouchScrollViewer *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@ManipulationHelper@DirectUI@@IEAAJXZ
    long EnsureInitialized();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ManipulationHelper@DirectUI@@IEAA@XZ
    ~ManipulationHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveDelegateEventHandler@ManipulationHelper@DirectUI@@AEAAXXZ
    void _RemoveDelegateEventHandler();
};
} // namespace DirectUI
