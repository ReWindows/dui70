#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 42 member(s).
namespace DirectUI {
class EventManager {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AdviseEventAdded@EventManager@DirectUI@@SAJHPEAUtagSAFEARRAY@@@Z
    static long AdviseEventAdded(int, tagSAFEARRAY *);
    // Category: Method | Source: PE Export
    // Symbol: ?AdviseEventRemoved@EventManager@DirectUI@@SAJHPEAUtagSAFEARRAY@@@Z
    static long AdviseEventRemoved(int, tagSAFEARRAY *);
    // Category: Method | Source: PE Export
    // Symbol: ?Close@EventManager@DirectUI@@SAXXZ
    static void Close();
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyListener@EventManager@DirectUI@@SAXPEAVElement@2@@Z
    static void DestroyListener(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?EndDefer@EventManager@DirectUI@@SAJPEAVElement@2@@Z
    static long EndDefer(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?EventListener@EventManager@DirectUI@@SAJPEAVElement@2@PEAUEvent@2@@Z
    static long EventListener(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?FWantAnyEvent@EventManager@DirectUI@@SA_NPEAVElement@2@@Z
    static bool FWantAnyEvent(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?FireStructureChangedEvent@EventManager@DirectUI@@SAJPEAVElement@2@W4StructureChangeType@@@Z
    static long FireStructureChangedEvent(::DirectUI::Element *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@EventManager@DirectUI@@SAJXZ
    static long Init();
    // Category: Method | Source: PE Export
    // Symbol: ?OnToolTip@EventManager@DirectUI@@SAJPEAVElement@2@K@Z
    static long OnToolTip(::DirectUI::Element *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?PropertyChangingListener@EventManager@DirectUI@@SAJPEAVElement@2@PEBUPropertyInfo@2@PEA_N@Z
    static long PropertyChangingListener(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?PropertyListener@EventManager@DirectUI@@SAJPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    static long PropertyListener(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?WantEvent@EventManager@DirectUI@@SA_NW4Event@Schema@2@@Z
    static bool WantEvent(int);
    // Category: Method | Source: PE Export
    // Symbol: ?WantPropertyEvent@EventManager@DirectUI@@SA_NH@Z
    static bool WantPropertyEvent(int);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?AddRectangleChange@EventManager@DirectUI@@CAJPEAVElement@2@_N1@Z
    static long AddRectangleChange(::DirectUI::Element *, bool, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBool@EventManager@DirectUI@@CAJPEAUtagVARIANT@@PEAVValue@2@@Z
    static long GetBool(tagVARIANT *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetExpandCollapseState@EventManager@DirectUI@@CAXPEAUtagVARIANT@@@Z
    static void GetExpandCollapseState(tagVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInt@EventManager@DirectUI@@CAJPEAUtagVARIANT@@PEAVValue@2@@Z
    static long GetInt(tagVARIANT *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetString@EventManager@DirectUI@@CAJPEAUtagVARIANT@@PEAVValue@2@@Z
    static long GetString(tagVARIANT *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetToggleState@EventManager@DirectUI@@CAXPEAUtagVARIANT@@@Z
    static void GetToggleState(tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleAccChange@EventManager@DirectUI@@CAJPEAVElement@2@PEAUIRawElementProviderSimple@@PEAVValue@2@2@Z
    static long HandleAccChange(::DirectUI::Element *, IRawElementProviderSimple *, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleAccDesc@EventManager@DirectUI@@CAJPEAVElement@2@PEAUIRawElementProviderSimple@@PEAVValue@2@2@Z
    static long HandleAccDesc(::DirectUI::Element *, IRawElementProviderSimple *, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleAccPatternChange@EventManager@DirectUI@@CAJPEAVElement@2@PEAUIRawElementProviderSimple@@IIHPEAUtagVARIANT@@2P6AX2@Z@Z
    static long HandleAccPatternChange(::DirectUI::Element *, IRawElementProviderSimple *, unsigned int, unsigned int, int, tagVARIANT *, tagVARIANT *, void ( *)(tagVARIANT *));
    // Category: Method | Source: PE Export
    // Symbol: ?HandleAccRoleEvent@EventManager@DirectUI@@CAJPEAUIRawElementProviderSimple@@PEAVValue@2@1@Z
    static long HandleAccRoleEvent(IRawElementProviderSimple *, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleAccStateChange@EventManager@DirectUI@@CAJPEAUIRawElementProviderSimple@@IIHPEAUtagVARIANT@@1_N@Z
    static long HandleAccStateChange(IRawElementProviderSimple *, unsigned int, unsigned int, int, tagVARIANT *, tagVARIANT *, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?HandleBoolProp@EventManager@DirectUI@@CAJPEAVElement@2@P6A_N0@ZPEAUIRawElementProviderSimple@@HPEAVValue@2@3@Z
    static long HandleBoolProp(::DirectUI::Element *, bool ( *)(::DirectUI::Element *), IRawElementProviderSimple *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleChildrenEvent@EventManager@DirectUI@@CAJPEAVElement@2@PEAVValue@2@1@Z
    static long HandleChildrenEvent(::DirectUI::Element *, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleRangeValue@EventManager@DirectUI@@CAJPEAVElement@2@PEAUIRawElementProviderSimple@@PEAVValue@2@2@Z
    static long HandleRangeValue(::DirectUI::Element *, IRawElementProviderSimple *, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleScrollPos@EventManager@DirectUI@@CAJPEAVElement@2@PEAUIRawElementProviderSimple@@PEAVValue@2@2@Z
    static long HandleScrollPos(::DirectUI::Element *, IRawElementProviderSimple *, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleSelectedChange@EventManager@DirectUI@@CAJPEAUIRawElementProviderSimple@@PEAVValue@2@@Z
    static long HandleSelectedChange(IRawElementProviderSimple *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?HandleStringProp@EventManager@DirectUI@@CAJPEAUIRawElementProviderSimple@@HPEAVValue@2@1@Z
    static long HandleStringProp(IRawElementProviderSimple *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleToggleValue@EventManager@DirectUI@@CAJPEAVElement@2@PEAUIRawElementProviderSimple@@PEAVValue@2@2@Z
    static long HandleToggleValue(::DirectUI::Element *, IRawElementProviderSimple *, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleVisibilityChange@EventManager@DirectUI@@CAJPEAVElement@2@I@Z
    static long HandleVisibilityChange(::DirectUI::Element *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?RaiseChildRemovedEvent@EventManager@DirectUI@@CAJAEBUElementRuntimeId@2@PEAVElement@2@@Z
    static long RaiseChildRemovedEvent(::DirectUI::ElementRuntimeId const &, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?RaiseGeometryEventWorker@EventManager@DirectUI@@CAJPEAURectangleChange@2@_N111@Z
    static long RaiseGeometryEventWorker(::DirectUI::RectangleChange *, bool, bool, bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?RaiseGeometryEvents@EventManager@DirectUI@@CAJXZ
    static long RaiseGeometryEvents();
    // Category: Method | Source: PE Export
    // Symbol: ?RaiseStructureChangedEvent@EventManager@DirectUI@@CAJPEAVElement@2@W4StructureChangeType@@@Z
    static long RaiseStructureChangedEvent(::DirectUI::Element *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?RaiseStructureEvents@EventManager@DirectUI@@CAJXZ
    static long RaiseStructureEvents();
    // Category: Method | Source: PE Export
    // Symbol: ?RaiseVisibilityEvents@EventManager@DirectUI@@CAJXZ
    static long RaiseVisibilityEvents();
    // Category: Method | Source: PE Export
    // Symbol: ?WantEvent@EventManager@DirectUI@@CA_NW4Event@Schema@2@H@Z
    static bool WantEvent(int, int);
};
} // namespace DirectUI
