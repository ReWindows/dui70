#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 34 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class AnimationStrip {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AnimationStrip@DirectUI@@QEAA@AEBV01@@Z
    AnimationStrip(AnimationStrip const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0AnimationStrip@DirectUI@@QEAA@XZ
    AnimationStrip();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@AnimationStrip@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?FrameDurationProp@AnimationStrip@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FrameDurationProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FrameIndexProp@AnimationStrip@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FrameIndexProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FrameWidthProp@AnimationStrip@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FrameWidthProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@AnimationStrip@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@AnimationStrip@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFrameDuration@AnimationStrip@DirectUI@@QEAAHXZ
    int GetFrameDuration();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFrameIndex@AnimationStrip@DirectUI@@QEAAHXZ
    int GetFrameIndex();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFrameWidth@AnimationStrip@DirectUI@@QEAAHXZ
    int GetFrameWidth();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPlay@AnimationStrip@DirectUI@@QEAA_NXZ
    bool GetPlay();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@AnimationStrip@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PlayProp@AnimationStrip@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PlayProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@AnimationStrip@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@AnimationStrip@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFrameDuration@AnimationStrip@DirectUI@@QEAAJH@Z
    long SetFrameDuration(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFrameIndex@AnimationStrip@DirectUI@@QEAAJH@Z
    long SetFrameIndex(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFrameWidth@AnimationStrip@DirectUI@@QEAAJH@Z
    long SetFrameWidth(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPlay@AnimationStrip@DirectUI@@QEAAJ_N@Z
    long SetPlay(bool);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1AnimationStrip@DirectUI@@UEAA@XZ
    virtual ~AnimationStrip();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?AdvanceFrame@AnimationStrip@DirectUI@@IEAAXXZ
    void AdvanceFrame();
    // Category: Method | Source: PE Export
    // Symbol: ?LoadImagesIntoAnimationStrip@AnimationStrip@DirectUI@@IEAAJXZ
    long LoadImagesIntoAnimationStrip();
    // Category: Method | Source: PE Export
    // Symbol: ?OnAction@AnimationStrip@DirectUI@@IEAAXPEAUGMA_ACTIONINFO@@@Z
    void OnAction(GMA_ACTIONINFO *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@AnimationStrip@DirectUI@@MEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@AnimationStrip@DirectUI@@MEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@AnimationStrip@DirectUI@@MEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?RawActionProc@AnimationStrip@DirectUI@@KAXPEAUGMA_ACTIONINFO@@@Z
    static void RawActionProc(GMA_ACTIONINFO *);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?LoadCommonControlExports@AnimationStrip@DirectUI@@AEAAJXZ
    long LoadCommonControlExports();
    // Category: Method | Source: PE Export
    // Symbol: ?Start@AnimationStrip@DirectUI@@AEAAJXZ
    long Start();
    // Category: Method | Source: PE Export
    // Symbol: ?Stop@AnimationStrip@DirectUI@@AEAAXXZ
    void Stop();
    // Category: Method | Source: PE Export
    // Symbol: ?UnloadCommonControlExports@AnimationStrip@DirectUI@@AEAAXXZ
    void UnloadCommonControlExports();
};
} // namespace DirectUI
