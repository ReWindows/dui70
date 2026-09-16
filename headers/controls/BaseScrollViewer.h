#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 46 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class BaseScrollViewer {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Add@BaseScrollViewer@DirectUI@@UEAAJPEAPEAVElement@2@I@Z
    virtual long Add(::DirectUI::Element * *, unsigned int);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BaseScrollViewer@DirectUI@@QEAA@XZ
    BaseScrollViewer();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0BaseScrollViewer@DirectUI@@QEAA@AEBV01@@Z
    BaseScrollViewer(BaseScrollViewer const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@BaseScrollViewer@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@BaseScrollViewer@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPinning@BaseScrollViewer@DirectUI@@QEAAHXZ
    int GetPinning();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXBarVisibility@BaseScrollViewer@DirectUI@@QEAAHXZ
    int GetXBarVisibility();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXOffset@BaseScrollViewer@DirectUI@@QEAAHXZ
    int GetXOffset();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXScrollHeight@BaseScrollViewer@DirectUI@@QEAAHXZ
    int GetXScrollHeight();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXScrollable@BaseScrollViewer@DirectUI@@QEAA_NXZ
    bool GetXScrollable();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetYBarVisibility@BaseScrollViewer@DirectUI@@QEAAHXZ
    int GetYBarVisibility();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetYOffset@BaseScrollViewer@DirectUI@@QEAAHXZ
    int GetYOffset();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetYScrollWidth@BaseScrollViewer@DirectUI@@QEAAHXZ
    int GetYScrollWidth();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetYScrollable@BaseScrollViewer@DirectUI@@QEAA_NXZ
    bool GetYScrollable();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@BaseScrollViewer@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@BaseScrollViewer@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@BaseScrollViewer@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@BaseScrollViewer@DirectUI@@UEAAXPEAVElement@2@PEAUEvent@2@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@BaseScrollViewer@DirectUI@@UEAAXPEAVElement@2@PEAUInputEvent@2@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@BaseScrollViewer@DirectUI@@UEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanging@BaseScrollViewer@DirectUI@@UEAA_NPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@BaseScrollViewer@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@BaseScrollViewer@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@BaseScrollViewer@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@BaseScrollViewer@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?PinningProp@BaseScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PinningProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@BaseScrollViewer@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@BaseScrollViewer@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPinning@BaseScrollViewer@DirectUI@@QEAAJH@Z
    long SetPinning(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXBarVisibility@BaseScrollViewer@DirectUI@@QEAAJH@Z
    long SetXBarVisibility(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXOffset@BaseScrollViewer@DirectUI@@QEAAJH@Z
    long SetXOffset(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXScrollable@BaseScrollViewer@DirectUI@@QEAAJ_N@Z
    long SetXScrollable(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetYBarVisibility@BaseScrollViewer@DirectUI@@QEAAJH@Z
    long SetYBarVisibility(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetYOffset@BaseScrollViewer@DirectUI@@QEAAJH@Z
    long SetYOffset(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetYScrollable@BaseScrollViewer@DirectUI@@QEAAJ_N@Z
    long SetYScrollable(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?XBarVisibilityProp@BaseScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * XBarVisibilityProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?XOffsetProp@BaseScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * XOffsetProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?XScrollableProp@BaseScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * XScrollableProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?YBarVisibilityProp@BaseScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * YBarVisibilityProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?YOffsetProp@BaseScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * YOffsetProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?YScrollableProp@BaseScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * YScrollableProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1BaseScrollViewer@DirectUI@@UEAA@XZ
    virtual ~BaseScrollViewer();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?FireAnimationChangeEvent@BaseScrollViewer@DirectUI@@IEAAX_N@Z
    void FireAnimationChangeEvent(bool);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?CheckScroll@BaseScrollViewer@DirectUI@@AEAAXPEAVBaseScrollBar@2@HHH@Z
    void CheckScroll(::DirectUI::BaseScrollBar *, int, int, int);
};
} // namespace DirectUI
