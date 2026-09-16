#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 10 member(s).
namespace DirectUI {
class ToggleProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ToggleProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static ToggleProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ToggleProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@ToggleProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ToggleProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ToggleProxy(ToggleProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ToggleProxy@DirectUI@@QEAA@AEBV01@@Z
    ToggleProxy(ToggleProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ToggleProxy@DirectUI@@QEAA@XZ
    ToggleProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ToggleProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToggleState@ToggleProxy@DirectUI@@AEAAJPEAW4ToggleState@@@Z
    long GetToggleState(int *);
};
} // namespace DirectUI
