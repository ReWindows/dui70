#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 22 member(s).
// Base evidence: DirectUI::CCPushButton (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCCommandLink {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCCommandLink@DirectUI@@QEAA@$$QEAV01@@Z
    CCCommandLink(CCCommandLink &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCCommandLink@DirectUI@@QEAA@AEBV01@@Z
    CCCommandLink(CCCommandLink const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCCommandLink@DirectUI@@QEAA@K@Z
    CCCommandLink(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCCommandLink@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCCommandLink@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCCommandLink@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCCommandLink@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@CCCommandLink@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetNote@CCCommandLink@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetNote(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?NoteProp@CCCommandLink@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * NoteProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@CCCommandLink@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSelectedPropertyChanged@CCCommandLink@DirectUI@@UEAAXXZ
    virtual void OnSelectedPropertyChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCCommandLink@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCCommandLink@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetNote@CCCommandLink@DirectUI@@QEAAJPEBG@Z
    long SetNote(unsigned short const *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCCommandLink@DirectUI@@UEAA@XZ
    virtual ~CCCommandLink();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?PostCreate@CCCommandLink@DirectUI@@MEAAXPEAUHWND__@@@Z
    virtual void PostCreate(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?SyncNoteAndGlyph@CCCommandLink@DirectUI@@IEAAXPEAUHWND__@@@Z
    void SyncNoteAndGlyph(HWND__*);
};
} // namespace DirectUI
