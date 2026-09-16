#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI {
class ValueProxy {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@ValueProxy@DirectUI@@SAPEAV12@PEAVElement@2@@Z
    static ValueProxy * Create(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?DoMethod@ValueProxy@DirectUI@@UEAAJHPEAD@Z
    virtual long DoMethod(int, char *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPatternSupported@ValueProxy@DirectUI@@SA_NPEAVElement@2@@Z
    static bool IsPatternSupported(::DirectUI::Element *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ValueProxy@DirectUI@@QEAA@$$QEAV01@@Z
    ValueProxy(ValueProxy &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ValueProxy@DirectUI@@QEAA@AEBV01@@Z
    ValueProxy(ValueProxy const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ValueProxy@DirectUI@@QEAA@XZ
    ValueProxy();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?Init@ValueProxy@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void Init(::DirectUI::Element *);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIsReadOnly@ValueProxy@DirectUI@@AEAAJPEAH@Z
    long GetIsReadOnly(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetValue@ValueProxy@DirectUI@@AEAAJPEAPEAG@Z
    long GetValue(unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetValue@ValueProxy@DirectUI@@AEAAJPEBG@Z
    long SetValue(unsigned short const *);
};
} // namespace DirectUI
