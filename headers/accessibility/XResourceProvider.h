#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace DirectUI {
class XResourceProvider {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Create@XResourceProvider@DirectUI@@SAJPEAPEAV12@@Z
    static long Create(XResourceProvider * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@XResourceProvider@DirectUI@@SAJPEAUHINSTANCE__@@PEBG11PEAPEAV12@@Z
    static long Create(HINSTANCE__*, unsigned short const *, unsigned short const *, unsigned short const *, XResourceProvider * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateDUICP@XResourceProvider@DirectUI@@UEAAJPEAVHWNDElement@2@PEAUHWND__@@1PEAPEAVElement@2@PEAPEAVDUIXmlParser@2@@Z
    virtual long CreateDUICP(::DirectUI::HWNDElement *, HWND__*, HWND__*, ::DirectUI::Element * *, ::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateParserCP@XResourceProvider@DirectUI@@UEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long CreateParserCP(::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyCP@XResourceProvider@DirectUI@@UEAAXXZ
    virtual void DestroyCP();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@XResourceProvider@DirectUI@@QEAAJPEAUHINSTANCE__@@PEBG11@Z
    long Initialize(HINSTANCE__*, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XResourceProvider@DirectUI@@QEAA@$$QEAV01@@Z
    XResourceProvider(XResourceProvider &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XResourceProvider@DirectUI@@QEAA@AEBV01@@Z
    XResourceProvider(XResourceProvider const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0XResourceProvider@DirectUI@@QEAA@XZ
    XResourceProvider();
};
} // namespace DirectUI
