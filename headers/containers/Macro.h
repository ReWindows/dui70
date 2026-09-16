#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 27 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class Macro {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Add@Macro@DirectUI@@UEAAJPEAPEAVElement@2@I@Z
    virtual long Add(::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Macro@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ExpandProp@Macro@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ExpandProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Macro@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Macro@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDataEntry@Macro@DirectUI@@QEAAPEAUIDataEntry@2@XZ
    ::DirectUI::IDataEntry * GetDataEntry();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetExpand@Macro@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetExpand(::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Macro@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Macro@DirectUI@@QEAA@XZ
    Macro();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Macro@DirectUI@@QEAA@$$QEAV01@@Z
    Macro(Macro &&);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Macro@DirectUI@@QEAA@AEBV01@@Z
    Macro(Macro const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Macro@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Macro@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Macro@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDataEntry@Macro@DirectUI@@QEAAXPEAUIDataEntry@2@PEAVElement@2@@Z
    void SetDataEntry(::DirectUI::IDataEntry *, ::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDefaultGraphicType@Macro@DirectUI@@QEAAXE_N@Z
    void SetDefaultGraphicType(unsigned char, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetExpand@Macro@DirectUI@@QEAAJPEBG@Z
    long SetExpand(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetParser@Macro@DirectUI@@QEAAXPEAVDUIXmlParser@2@@Z
    void SetParser(::DirectUI::DUIXmlParser *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Macro@DirectUI@@UEAA@XZ
    virtual ~Macro();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?BuildElement@Macro@DirectUI@@MEAAJXZ
    virtual long BuildElement();
    // Category: Method | Source: PE Export
    // Symbol: ?ResolveBindings@Macro@DirectUI@@IEAAXXZ
    void ResolveBindings();
    // Category: Method | Source: PE Export
    // Symbol: ?_BitAccurateFillRect@Macro@DirectUI@@KAXPEAUHDC__@@HHHHEEEEK@Z
    static void _BitAccurateFillRect(HDC__*, int, int, int, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetBitmapSize@Macro@DirectUI@@KA_NPEAUHBITMAP__@@PEAUtagSIZE@@@Z
    static bool _GetBitmapSize(HBITMAP__*, tagSIZE *);
    // Category: Method | Source: PE Export
    // Symbol: ?_LoadImage32BitsPerPixel@Macro@DirectUI@@KAPEAVValue@2@PEBG@Z
    static ::DirectUI::Value * _LoadImage32BitsPerPixel(unsigned short const *);
};
} // namespace DirectUI
