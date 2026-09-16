#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 24 member(s).
// Base evidence: DirectUI::HWNDHost (likely; classinfo-template-instantiation).
namespace DirectUI {
class Combobox {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AddString@Combobox@DirectUI@@QEAAHPEBG@Z
    int AddString(unsigned short const *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Combobox@DirectUI@@QEAA@AEBV01@@Z
    Combobox(Combobox const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Combobox@DirectUI@@QEAA@XZ
    Combobox();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Combobox@DirectUI@@SAJIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Combobox@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHWND@Combobox@DirectUI@@UEAAPEAUHWND__@@PEAU3@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Combobox@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Combobox@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@Combobox@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelection@Combobox@DirectUI@@QEAAHXZ
    int GetSelection();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Combobox@DirectUI@@QEAAJIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnAdjustWindowSize@Combobox@DirectUI@@UEAAHHHI@Z
    virtual int OnAdjustWindowSize(int, int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@Combobox@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@Combobox@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@Combobox@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Combobox@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Combobox@DirectUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PE Export
    // Symbol: ?SelectionChange@Combobox@DirectUI@@SA?AVUID@@XZ
    static UID SelectionChange();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SelectionProp@Combobox@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SelectionProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Combobox@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelection@Combobox@DirectUI@@QEAAJH@Z
    long SetSelection(int);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Combobox@DirectUI@@UEAA@XZ
    virtual ~Combobox();
};
} // namespace DirectUI
