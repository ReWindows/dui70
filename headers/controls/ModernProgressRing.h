#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 27 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class ModernProgressRing {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ActivityOccuringProp@ModernProgressRing@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ActivityOccuringProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?AddLayeredRefProp@ModernProgressRing@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AddLayeredRefProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ModernProgressRing@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@ModernProgressRing@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@ModernProgressRing@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ModernProgressRing@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsActivityOccuring@ModernProgressRing@DirectUI@@QEAA_NXZ
    bool IsActivityOccuring();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsAddLayeredRef@ModernProgressRing@DirectUI@@QEAA_NXZ
    bool IsAddLayeredRef();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ModernProgressRing@DirectUI@@QEAA@XZ
    ModernProgressRing();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@ModernProgressRing@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetActivityOccuring@ModernProgressRing@DirectUI@@QEAAJ_N@Z
    long SetActivityOccuring(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAddLayeredRef@ModernProgressRing@DirectUI@@QEAAJ_N@Z
    long SetAddLayeredRef(bool);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ModernProgressRing@DirectUI@@UEAA@XZ
    virtual ~ModernProgressRing();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@ModernProgressRing@DirectUI@@MEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@ModernProgressRing@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@ModernProgressRing@DirectUI@@MEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@ModernProgressRing@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@ModernProgressRing@DirectUI@@MEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddLayeredRef@ModernProgressRing@DirectUI@@AEAAXXZ
    void _AddLayeredRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Start@ModernProgressRing@DirectUI@@AEAAXXZ
    void _Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Stop@ModernProgressRing@DirectUI@@AEAAXXZ
    void _Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TimerProc@ModernProgressRing@DirectUI@@CAXPEAUHWND__@@I_KK@Z
    static void _TimerProc(HWND__*, unsigned int, uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTimerState@ModernProgressRing@DirectUI@@AEAAXXZ
    void _UpdateTimerState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ComputeCircularFunc@ModernProgressRing@DirectUI@@CAMMW4FUNCMODE@12@@Z
    static float s_ComputeCircularFunc(float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetAngleEndpoint@ModernProgressRing@DirectUI@@CAXMMPEAM0@Z
    static void s_GetAngleEndpoint(float, float, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PowerNotifyCallback@ModernProgressRing@DirectUI@@CAKPEAXK0@Z
    static unsigned long s_PowerNotifyCallback(void *, unsigned long, void *);
};
} // namespace DirectUI
