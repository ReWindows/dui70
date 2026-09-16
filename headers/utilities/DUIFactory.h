#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 12 member(s).
namespace DirectUI {
class DUIFactory {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CreateParser@DUIFactory@DirectUI@@QEAAJXZ
    long CreateParser();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DUIFactory@DirectUI@@QEAA@PEAUHWND__@@@Z
    DUIFactory(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?DetachParser@DUIFactory@DirectUI@@QEAAPEAVDUIXmlParser@2@XZ
    ::DirectUI::DUIXmlParser * DetachParser();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetParser@DUIFactory@DirectUI@@QEAAPEAVDUIXmlParser@2@XZ
    ::DirectUI::DUIXmlParser * GetParser();
    // Category: Method | Source: PE Export
    // Symbol: ?LoadFromBuffer@DUIFactory@DirectUI@@QEAAJPEBG_K0PEAVElement@2@PEAKPEAPEAV32@@Z
    long LoadFromBuffer(unsigned short const *, uint64_t, unsigned short const *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LoadFromFile@DUIFactory@DirectUI@@QEAAJPEBG0PEAVElement@2@PEAKPEAPEAV32@@Z
    long LoadFromFile(unsigned short const *, unsigned short const *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LoadFromResource@DUIFactory@DirectUI@@QEAAJPEAUHINSTANCE__@@PEBG1PEAVElement@2@PEAKPEAPEAV42@1@Z
    long LoadFromResource(HINSTANCE__*, unsigned short const *, unsigned short const *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *, unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetError@DUIFactory@DirectUI@@QEAAXPEBGZZ
    void SetError(unsigned short const *, ...);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1DUIFactory@DirectUI@@QEAA@XZ
    ~DUIFactory();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?ClearParser@DUIFactory@DirectUI@@AEAAXXZ
    void ClearParser();
    // Category: Method | Source: PE Export
    // Symbol: ?s_XMLParseError@DUIFactory@DirectUI@@CAXPEBG0HPEAX@Z
    static void s_XMLParseError(unsigned short const *, unsigned short const *, int, void *);
};
} // namespace DirectUI
