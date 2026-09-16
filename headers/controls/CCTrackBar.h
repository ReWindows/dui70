#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 29 member(s).
// Base evidence: DirectUI::CCBase (likely; classinfo-template-instantiation).
namespace DirectUI {
class CCTrackBar {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCTrackBar@DirectUI@@QEAA@$$QEAV01@@Z
    CCTrackBar(CCTrackBar &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCTrackBar@DirectUI@@QEAA@AEBV01@@Z
    CCTrackBar(CCTrackBar const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0CCTrackBar@DirectUI@@QEAA@XZ
    CCTrackBar();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCTrackBar@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@CCTrackBar@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@CCTrackBar@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@CCTrackBar@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLineSize@CCTrackBar@DirectUI@@QEAAHXZ
    int GetLineSize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRangeMax@CCTrackBar@DirectUI@@QEAAHXZ
    int GetRangeMax();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRangeMin@CCTrackBar@DirectUI@@QEAAHXZ
    int GetRangeMin();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetThumbPosition@CCTrackBar@DirectUI@@QEAAHXZ
    int GetThumbPosition();
    // Category: Accessor | Source: PE Export
    // Symbol: ?LineSizeProp@CCTrackBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LineSizeProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnMessage@CCTrackBar@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@CCTrackBar@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@CCTrackBar@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?RangeMaxProp@CCTrackBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * RangeMaxProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?RangeMinProp@CCTrackBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * RangeMinProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@CCTrackBar@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@CCTrackBar@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLineSize@CCTrackBar@DirectUI@@QEAAJH@Z
    long SetLineSize(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRangeMax@CCTrackBar@DirectUI@@QEAAJH@Z
    long SetRangeMax(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRangeMin@CCTrackBar@DirectUI@@QEAAJH@Z
    long SetRangeMin(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetThumbPosition@CCTrackBar@DirectUI@@QEAAJH@Z
    long SetThumbPosition(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ThumbPositionProp@CCTrackBar@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ThumbPositionProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CCTrackBar@DirectUI@@UEAA@XZ
    virtual ~CCTrackBar();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?PostCreate@CCTrackBar@DirectUI@@MEAAXPEAUHWND__@@@Z
    virtual void PostCreate(HWND__*);
};
} // namespace DirectUI
