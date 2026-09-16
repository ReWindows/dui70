#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
namespace DirectUI {
class ShellBorderLayout {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ShellBorderLayout@DirectUI@@SAJHPEAHPEAPEAVValue@2@@Z
    static long Create(int, int *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ShellBorderLayout@DirectUI@@SAJPEAPEAVLayout@2@@Z
    static long Create(::DirectUI::Layout * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@ShellBorderLayout@DirectUI@@UEAAPEAVElement@2@PEAV32@0HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, ::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnAdd@ShellBorderLayout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnAdd(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLayoutPosChanged@ShellBorderLayout@DirectUI@@UEAAXPEAVElement@2@0HH@Z
    virtual void OnLayoutPosChanged(::DirectUI::Element *, ::DirectUI::Element *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRemove@ShellBorderLayout@DirectUI@@UEAAXPEAVElement@2@PEAPEAV32@I@Z
    virtual void OnRemove(::DirectUI::Element *, ::DirectUI::Element * *, unsigned int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ShellBorderLayout@DirectUI@@QEAA@XZ
    ShellBorderLayout();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ShellBorderLayout@DirectUI@@QEAA@AEBV01@@Z
    ShellBorderLayout(ShellBorderLayout const &);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ShellBorderLayout@DirectUI@@UEAA@XZ
    virtual ~ShellBorderLayout();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?_CalcTabOrder@ShellBorderLayout@DirectUI@@AEAAJPEAVElement@2@@Z
    long _CalcTabOrder(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?_Reset@ShellBorderLayout@DirectUI@@AEAAXXZ
    void _Reset();
};
} // namespace DirectUI
