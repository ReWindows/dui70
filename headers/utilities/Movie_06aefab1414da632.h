#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 57 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Movie {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AdvanceFrame@Movie@DirectUI@@SA?AVUID@@XZ
    static UID AdvanceFrame();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AutoStartProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AutoStartProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AutoStopProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AutoStopProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?CompositingQualityProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CompositingQualityProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Movie@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Movie@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?DrawOutlinesProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DrawOutlinesProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Forward@Movie@DirectUI@@QEAAXXZ
    void Forward();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAutoStart@Movie@DirectUI@@QEAA_NXZ
    bool GetAutoStart();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAutoStop@Movie@DirectUI@@QEAA_NXZ
    bool GetAutoStop();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Movie@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Movie@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCompositingQuality@Movie@DirectUI@@QEAAHXZ
    int GetCompositingQuality();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDrawOutlines@Movie@DirectUI@@QEAA_NXZ
    bool GetDrawOutlines();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInterpolationMode@Movie@DirectUI@@QEAAHXZ
    int GetInterpolationMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPath@Movie@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetPath(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPixelOffsetMode@Movie@DirectUI@@QEAAHXZ
    int GetPixelOffsetMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPlayAllFramesMode@Movie@DirectUI@@QEAA_NXZ
    bool GetPlayAllFramesMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRepeat@Movie@DirectUI@@QEAA_NXZ
    bool GetRepeat();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSmoothingMode@Movie@DirectUI@@QEAAHXZ
    int GetSmoothingMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?InterpolationModeProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * InterpolationModeProp();
    // Category: Method | Source: PE Export
    // Symbol: ?LoadFromPath@Movie@DirectUI@@QEAAJPEBG@Z
    long LoadFromPath(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?LoadFromResource@Movie@DirectUI@@QEAAJPEAUHINSTANCE__@@H@Z
    long LoadFromResource(HINSTANCE__*, int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Movie@DirectUI@@QEAA@XZ
    Movie();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Movie@DirectUI@@QEAA@AEBV01@@Z
    Movie(Movie const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@Movie@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@Movie@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@Movie@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@Movie@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PathProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PathProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Pause@Movie@DirectUI@@QEAAXXZ
    void Pause();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PixelOffsetModeProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PixelOffsetModeProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Play@Movie@DirectUI@@QEAAXXZ
    void Play();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PlayAllFramesModeProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PlayAllFramesModeProp();
    // Category: Method | Source: PE Export
    // Symbol: ?RawActionProc@Movie@DirectUI@@SAXPEAUGMA_ACTIONINFO@@@Z
    static void RawActionProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Movie@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?RepeatProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * RepeatProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Resume@Movie@DirectUI@@QEAAXXZ
    void Resume();
    // Category: Method | Source: PE Export
    // Symbol: ?Rewind@Movie@DirectUI@@QEAAXXZ
    void Rewind();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAutoStart@Movie@DirectUI@@QEAAJ_N@Z
    long SetAutoStart(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAutoStop@Movie@DirectUI@@QEAAJ_N@Z
    long SetAutoStop(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Movie@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCompositingQuality@Movie@DirectUI@@QEAAJH@Z
    long SetCompositingQuality(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDrawOutlines@Movie@DirectUI@@QEAAJ_N@Z
    long SetDrawOutlines(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetInterpolationMode@Movie@DirectUI@@QEAAJH@Z
    long SetInterpolationMode(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPath@Movie@DirectUI@@QEAAJPEBG@Z
    long SetPath(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPixelOffsetMode@Movie@DirectUI@@QEAAJH@Z
    long SetPixelOffsetMode(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPlayAllFramesMode@Movie@DirectUI@@QEAAJ_N@Z
    long SetPlayAllFramesMode(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRepeat@Movie@DirectUI@@QEAAJ_N@Z
    long SetRepeat(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSmoothingMode@Movie@DirectUI@@QEAAJH@Z
    long SetSmoothingMode(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SmoothingModeProp@Movie@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SmoothingModeProp();
    // Category: Method | Source: PE Export
    // Symbol: ?doAction@Movie@DirectUI@@QEAAXPEAUGMA_ACTIONINFO@@@Z
    void doAction(GMA_ACTIONINFO *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Movie@DirectUI@@UEAA@XZ
    virtual ~Movie();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?advanceFrameActionStart@Movie@DirectUI@@AEAAXXZ
    void advanceFrameActionStart();
    // Category: Method | Source: PE Export
    // Symbol: ?advanceFrameActionStop@Movie@DirectUI@@AEAAXXZ
    void advanceFrameActionStop();
};
} // namespace DirectUI
