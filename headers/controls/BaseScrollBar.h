#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 22 member(s).
namespace DirectUI {
class BaseScrollBar {
public:
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BaseScrollBar@DirectUI@@QEAA@XZ
    BaseScrollBar();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BaseScrollBar@DirectUI@@QEAA@$$QEAV01@@Z
    BaseScrollBar(BaseScrollBar &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BaseScrollBar@DirectUI@@QEAA@AEBV01@@Z
    BaseScrollBar(BaseScrollBar const &);
    // Category: Method | Source: PE Export
    // Symbol: ?End@BaseScrollBar@DirectUI@@UEAAXXZ
    virtual void End();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPageInc@BaseScrollBar@DirectUI@@QEAAHXZ
    int GetPageInc();
    // Category: Method | Source: PE Export
    // Symbol: ?Home@BaseScrollBar@DirectUI@@UEAAXXZ
    virtual void Home();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPinned@BaseScrollBar@DirectUI@@QEAA_NXZ
    bool IsPinned();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsScrollable@BaseScrollBar@DirectUI@@QEAA_NXZ
    bool IsScrollable();
    // Category: Method | Source: PE Export
    // Symbol: ?LineDown@BaseScrollBar@DirectUI@@UEAAXI@Z
    virtual void LineDown(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?LineUp@BaseScrollBar@DirectUI@@UEAAXI@Z
    virtual void LineUp(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMaximumChanged@BaseScrollBar@DirectUI@@QEAAXPEAVValue@2@@Z
    void OnMaximumChanged(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMinimumChanged@BaseScrollBar@DirectUI@@QEAAXPEAVValue@2@@Z
    void OnMinimumChanged(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPageChanged@BaseScrollBar@DirectUI@@QEAAXPEAVValue@2@@Z
    void OnPageChanged(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPageChanging@BaseScrollBar@DirectUI@@QEAA_NPEAVValue@2@@Z
    bool OnPageChanging(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPositionChanged@BaseScrollBar@DirectUI@@QEAAXPEAVValue@2@@Z
    void OnPositionChanged(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPositionChanging@BaseScrollBar@DirectUI@@QEAA_NPEAVValue@2@@Z
    bool OnPositionChanging(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?PageDown@BaseScrollBar@DirectUI@@UEAAXI@Z
    virtual void PageDown(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PageUp@BaseScrollBar@DirectUI@@UEAAXI@Z
    virtual void PageUp(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Scroll@BaseScrollBar@DirectUI@@SA?AVUID@@XZ
    static UID Scroll();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPinned@BaseScrollBar@DirectUI@@QEAAX_N@Z
    void SetPinned(bool);
};
} // namespace DirectUI
