#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 3 member(s).
namespace DirectUI {
class XDummyProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDUICP@XDummyProvider@DirectUI@@UEAAJPEAVHWNDElement@2@PEAUHWND__@@1PEAPEAVElement@2@PEAPEAVDUIXmlParser@2@@Z
    virtual long CreateDUICP(::DirectUI::HWNDElement *, HWND__*, HWND__*, ::DirectUI::Element * *, ::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateParserCP@XDummyProvider@DirectUI@@UEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long CreateParserCP(::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyCP@XDummyProvider@DirectUI@@UEAAXXZ
    virtual void DestroyCP();
};
} // namespace DirectUI
