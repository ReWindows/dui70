#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 23 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchCarouselList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@TouchCarouselList@DirectUI@@UEAAJPEAPEAVElement@2@I@Z
    virtual long Add(::DirectUI::Element * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@TouchCarouselList@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TouchCarouselList@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Insert@TouchCarouselList@DirectUI@@UEAAJPEAPEAVElement@2@II@Z
    virtual long Insert(::DirectUI::Element * *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchCarouselList@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@TouchCarouselList@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchCarouselList@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollSelection@TouchCarouselList@DirectUI@@QEAAXPEBUtagRECT@@@Z
    void ScrollSelection(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWrappingList@TouchCarouselList@DirectUI@@QEAAJPEAVWrappingList@2@@Z
    long SetWrappingList(::DirectUI::WrappingList *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchCarouselList@DirectUI@@QEAA@XZ
    TouchCarouselList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchCarouselList@DirectUI@@UEAA@XZ
    virtual ~TouchCarouselList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@TouchCarouselList@DirectUI@@EEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoSyncChanges@TouchCarouselList@DirectUI@@AEAAXXZ
    void _DoSyncChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListHeight@TouchCarouselList@DirectUI@@AEAAHXZ
    int _GetListHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNormalizedScrollBarPosition@TouchCarouselList@DirectUI@@AEAAHXZ
    int _GetNormalizedScrollBarPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewPortHeight@TouchCarouselList@DirectUI@@AEAAHXZ
    int _GetViewPortHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnListFirstItemOffsetChanged@TouchCarouselList@DirectUI@@AEAAXH@Z
    void _OnListFirstItemOffsetChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFirstItemOffset@TouchCarouselList@DirectUI@@AEAA_NHHHH@Z
    bool _SetFirstItemOffset(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScrollBarPosition@TouchCarouselList@DirectUI@@AEAAXH@Z
    void _SetScrollBarPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncChanges@TouchCarouselList@DirectUI@@AEAAXXZ
    void _SyncChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSnapshots@TouchCarouselList@DirectUI@@AEAAXXZ
    void _UpdateSnapshots();
};
} // namespace DirectUI
