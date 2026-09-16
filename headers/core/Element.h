#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 420 member(s).
namespace DirectUI {
class Element {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?AbsorbsShortcutProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AbsorbsShortcutProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccDefActionProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccDefActionProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccDescProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccDescProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccHelpProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccHelpProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccItemStatusProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccItemStatusProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccItemTypeProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccItemTypeProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccNameProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccNameProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccRoleProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccRoleProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccStateProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccStateProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccValueProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccValueProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AccessibleProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AccessibleProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ActiveProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ActiveProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Add@Element@DirectUI@@UEAAJPEAPEAV12@I@Z
    virtual long Add(Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Add@Element@DirectUI@@QEAAJPEAV12@@Z
    long Add(Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Add@Element@DirectUI@@QEAAJPEAV12@P6AHPEBX1@Z@Z
    long Add(Element *, int ( *)(void const *, void const *));
    // Category: Method | Source: PE Export
    // Symbol: ?AddBehavior@Element@DirectUI@@UEAAJPEAUIDuiBehavior@@@Z
    virtual long AddBehavior(IDuiBehavior *);
    // Category: Method | Source: PE Export
    // Symbol: ?AddListener@Element@DirectUI@@QEAAJPEAUIElementListener@2@@Z
    long AddListener(::DirectUI::IElementListener *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@Element@DirectUI@@QEAAKXZ
    unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AlphaProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AlphaProp();
    // Category: Method | Source: PE Export
    // Symbol: ?AnimationChange@Element@DirectUI@@SA?AVUID@@XZ
    static UID AnimationChange();
    // Category: Accessor | Source: PE Export
    // Symbol: ?AnimationProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AnimationProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?BackgroundProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * BackgroundProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?BorderColorProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * BorderColorProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?BorderStyleProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * BorderStyleProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?BorderThicknessProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * BorderThicknessProp();
    // Category: Method | Source: PE Export
    // Symbol: ?BroadcastEvent@Element@DirectUI@@QEAAXPEAUEvent@2@@Z
    void BroadcastEvent(::DirectUI::Event *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ChildrenProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ChildrenProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ClassProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ClassProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?CompositedTextProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CompositedTextProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ContentAlignProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ContentAlignProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ContentProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ContentProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@Element@DirectUI@@SAJIPEAV12@PEAKPEAPEAV12@@Z
    static long Create(unsigned int, Element *, unsigned long *, Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?CursorProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CursorProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?CustomProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * CustomProp();
    // Category: Method | Source: PE Export
    // Symbol: ?DCompDeviceRebuilt@Element@DirectUI@@SA?AVUID@@XZ
    static UID DCompDeviceRebuilt();
    // Category: Accessor | Source: PE Export
    // Symbol: ?DPIProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DPIProp();
    // Category: Method | Source: PE Export
    // Symbol: ?DefaultAction@Element@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Accessor | Source: PE Export
    // Symbol: ?DesiredSizeProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DesiredSizeProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Destroy@Element@DirectUI@@QEAAJ_N@Z
    long Destroy(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyAll@Element@DirectUI@@QEAAJ_N@Z
    long DestroyAll(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?Detach@Element@DirectUI@@QEAAXPEAVDeferCycle@2@@Z
    void Detach(::DirectUI::DeferCycle *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?DirectionProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DirectionProp();
    // Category: Method | Source: PE Export
    // Symbol: ?DoubleBuffered@Element@DirectUI@@QEAAX_N@Z
    void DoubleBuffered(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?EdgeHighlightColorProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * EdgeHighlightColorProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?EdgeHighlightThicknessProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * EdgeHighlightThicknessProp();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Element@DirectUI@@QEAA@XZ
    Element();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0Element@DirectUI@@QEAA@AEBV01@@Z
    Element(Element const &);
    // Category: Method | Source: PE Export
    // Symbol: ?EnableUiaEvents@Element@DirectUI@@QEAAX_N@Z
    void EnableUiaEvents(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?EnabledProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * EnabledProp();
    // Category: Method | Source: PE Export
    // Symbol: ?EndDefer@Element@DirectUI@@QEAAXK@Z
    void EndDefer(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?EnsureVisible@Element@DirectUI@@QEAA_NXZ
    bool EnsureVisible();
    // Category: Method | Source: PE Export
    // Symbol: ?EnsureVisible@Element@DirectUI@@UEAA_NHHHH@Z
    virtual bool EnsureVisible(int, int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?EnsureVisible@Element@DirectUI@@QEAA_NI@Z
    bool EnsureVisible(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ExtentProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ExtentProp();
    // Category: Method | Source: PE Export
    // Symbol: ?FindDescendent@Element@DirectUI@@QEAAPEAV12@G@Z
    Element * FindDescendent(unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?FireEvent@Element@DirectUI@@QEAAXPEAUEvent@2@_N1@Z
    void FireEvent(::DirectUI::Event *, bool, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontFaceProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontFaceProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontQualityProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontQualityProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontSizeProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontSizeProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontStyleProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontStyleProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontWeightProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontWeightProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ForegroundProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ForegroundProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAbsorbsShortcut@Element@DirectUI@@QEAA_NXZ
    bool GetAbsorbsShortcut();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccDefAction@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetAccDefAction(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccDesc@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetAccDesc(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccHelp@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetAccHelp(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccItemStatus@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetAccItemStatus(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccItemType@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetAccItemType(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccName@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetAccName(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccNameAsDisplayed@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetAccNameAsDisplayed(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccRole@Element@DirectUI@@QEAAHXZ
    int GetAccRole();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccState@Element@DirectUI@@QEAAHXZ
    int GetAccState();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccValue@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetAccValue(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccessible@Element@DirectUI@@QEAA_NXZ
    bool GetAccessible();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccessibleImpl@Element@DirectUI@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetActive@Element@DirectUI@@QEAAHXZ
    int GetActive();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAdjacent@Element@DirectUI@@UEAAPEAV12@PEAV12@HPEBUNavReference@2@K@Z
    virtual Element * GetAdjacent(Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAlpha@Element@DirectUI@@QEAAHXZ
    int GetAlpha();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAnimation@Element@DirectUI@@QEAAHXZ
    int GetAnimation();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBackgroundColor@Element@DirectUI@@QEAAPEBUFill@2@PEAPEAVValue@2@@Z
    ::DirectUI::Fill const * GetBackgroundColor(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBackgroundStdColor@Element@DirectUI@@QEAAHXZ
    int GetBackgroundStdColor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBorderColor@Element@DirectUI@@QEAAPEBUFill@2@PEAPEAVValue@2@@Z
    ::DirectUI::Fill const * GetBorderColor(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBorderStdColor@Element@DirectUI@@QEAAHXZ
    int GetBorderStdColor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBorderStyle@Element@DirectUI@@QEAAHXZ
    int GetBorderStyle();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBorderThickness@Element@DirectUI@@QEAAPEBUtagRECT@@PEAPEAVValue@2@@Z
    tagRECT const * GetBorderThickness(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetChildren@Element@DirectUI@@QEAAPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@PEAPEAVValue@2@@Z
    WindissectOpaque * GetChildren(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClass@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetClass(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@Element@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@Element@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClickablePoint@Element@DirectUI@@QEAA_NPEAUtagPOINT@@@Z
    bool GetClickablePoint(tagPOINT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColorize@Element@DirectUI@@QEAAHXZ
    int GetColorize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentAlign@Element@DirectUI@@QEAAHXZ
    int GetContentAlign();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@Element@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentString@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetContentString(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentStringAsDisplayed@Element@DirectUI@@UEAAPEBGPEAPEAVValue@2@@Z
    virtual unsigned short const * GetContentStringAsDisplayed(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDPI@Element@DirectUI@@QEAAHXZ
    int GetDPI();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDeferObject@Element@DirectUI@@QEAAPEAVDeferCycle@2@XZ
    ::DirectUI::DeferCycle * GetDeferObject();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDesiredSize@Element@DirectUI@@QEAAPEBUtagSIZE@@XZ
    tagSIZE const * GetDesiredSize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDirection@Element@DirectUI@@QEAAHXZ
    int GetDirection();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDisplayNode@Element@DirectUI@@QEAAPEAUHGADGET__@@XZ
    HGADGET__* GetDisplayNode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEdgeHighlightColor@Element@DirectUI@@QEAAPEBUFill@2@PEAPEAVValue@2@@Z
    ::DirectUI::Fill const * GetEdgeHighlightColor(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEdgeHighlightThickness@Element@DirectUI@@QEAAPEBUtagRECT@@PEAPEAVValue@2@@Z
    tagRECT const * GetEdgeHighlightThickness(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementProviderImpl@Element@DirectUI@@UEAAJPEAVInvokeHelper@2@PEAPEAVElementProvider@2@@Z
    virtual long GetElementProviderImpl(::DirectUI::InvokeHelper *, ElementProvider * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElementScaleFactor@Element@DirectUI@@QEAAMXZ
    float GetElementScaleFactor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEnabled@Element@DirectUI@@QEAA_NXZ
    bool GetEnabled();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEncodedContentString@Element@DirectUI@@QEAAJPEAG_K@Z
    long GetEncodedContentString(unsigned short *, uint64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetEncodedContentStringLength@Element@DirectUI@@QEAA_KXZ
    uint64_t GetEncodedContentStringLength();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetExtent@Element@DirectUI@@QEAAPEBUtagSIZE@@PEAPEAVValue@2@@Z
    tagSIZE const * GetExtent(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFactoryLock@Element@DirectUI@@SAPEAU_RTL_CRITICAL_SECTION@@XZ
    static _RTL_CRITICAL_SECTION * GetFactoryLock();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFont@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetFont(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFontFace@Element@DirectUI@@QEAAPEBGPEAPEAVValue@2@@Z
    unsigned short const * GetFontFace(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFontQuality@Element@DirectUI@@QEAAHXZ
    int GetFontQuality();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFontSize@Element@DirectUI@@QEAAHXZ
    int GetFontSize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFontStyle@Element@DirectUI@@QEAAHXZ
    int GetFontStyle();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFontWeight@Element@DirectUI@@QEAAHXZ
    int GetFontWeight();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetForegroundColor@Element@DirectUI@@QEAAPEBUFill@2@PEAPEAVValue@2@@Z
    ::DirectUI::Fill const * GetForegroundColor(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetForegroundStdColor@Element@DirectUI@@QEAAHXZ
    int GetForegroundStdColor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHeight@Element@DirectUI@@QEAAHXZ
    int GetHeight();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHighDPI@Element@DirectUI@@QEAA_NXZ
    bool GetHighDPI();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetID@Element@DirectUI@@QEAAGXZ
    unsigned short GetID();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetImmediateChild@Element@DirectUI@@QEAAPEAV12@PEAV12@@Z
    Element * GetImmediateChild(Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetImmersiveFocusRectOffsets@Element@DirectUI@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIndex@Element@DirectUI@@QEAAHXZ
    int GetIndex();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyFocused@Element@DirectUI@@UEAA_NXZ
    virtual bool GetKeyFocused();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyWithin@Element@DirectUI@@QEAA_NXZ
    bool GetKeyWithin();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyWithinChild@Element@DirectUI@@QEAAPEAV12@XZ
    Element * GetKeyWithinChild();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLayout@Element@DirectUI@@QEAAPEAVLayout@2@PEAPEAVValue@2@@Z
    ::DirectUI::Layout * GetLayout(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLayoutPos@Element@DirectUI@@QEAAHXZ
    int GetLayoutPos();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLocation@Element@DirectUI@@QEAAPEBUtagPOINT@@PEAPEAVValue@2@@Z
    tagPOINT const * GetLocation(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMargin@Element@DirectUI@@QEAAPEBUtagRECT@@PEAPEAVValue@2@@Z
    tagRECT const * GetMargin(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMinSize@Element@DirectUI@@QEAAPEBUtagSIZE@@PEAPEAVValue@2@@Z
    tagSIZE const * GetMinSize(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMouseFocused@Element@DirectUI@@QEAA_NXZ
    bool GetMouseFocused();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMouseWithin@Element@DirectUI@@QEAA_NXZ
    bool GetMouseWithin();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMouseWithinChild@Element@DirectUI@@QEAAPEAV12@XZ
    Element * GetMouseWithinChild();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetOverhang@Element@DirectUI@@QEAA_NXZ
    bool GetOverhang();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPVLAnimationState@Element@DirectUI@@QEAAHXZ
    int GetPVLAnimationState();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPadding@Element@DirectUI@@QEAAPEBUtagRECT@@PEAPEAVValue@2@@Z
    tagRECT const * GetPadding(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetParent@Element@DirectUI@@QEAAPEAV12@XZ
    Element * GetParent();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPreserveAlphaChannel@Element@DirectUI@@QEBA_NXZ
    bool GetPreserveAlphaChannel() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRawValue@Element@DirectUI@@QEAAPEAVValue@2@PEBUPropertyInfo@2@HPEAUUpdateCache@2@@Z
    ::DirectUI::Value * GetRawValue(::DirectUI::PropertyInfo const *, int, ::DirectUI::UpdateCache *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRenderBorderThickness@Element@DirectUI@@QEAAXPEAUtagRECT@@@Z
    void GetRenderBorderThickness(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRenderEdgeHighlightThickness@Element@DirectUI@@QEAAXPEAUtagRECT@@@Z
    void GetRenderEdgeHighlightThickness(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRenderMargin@Element@DirectUI@@QEAAXPEAUtagRECT@@@Z
    void GetRenderMargin(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRenderMinSize@Element@DirectUI@@QEAAXPEAUtagSIZE@@@Z
    void GetRenderMinSize(tagSIZE *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRenderPadding@Element@DirectUI@@QEAAXPEAUtagRECT@@@Z
    void GetRenderPadding(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRoot@Element@DirectUI@@QEAAPEAV12@XZ
    Element * GetRoot();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRootRelativeBounds@Element@DirectUI@@QEAAJPEAUtagRECT@@@Z
    long GetRootRelativeBounds(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSelected@Element@DirectUI@@QEAA_NXZ
    bool GetSelected();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetShadowIntensity@Element@DirectUI@@QEAAHXZ
    int GetShadowIntensity();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSheet@Element@DirectUI@@QEAAPEAVStyleSheet@2@XZ
    ::DirectUI::StyleSheet * GetSheet();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetShortcut@Element@DirectUI@@QEAAHXZ
    int GetShortcut();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetShortcutChar@Element@DirectUI@@QEAAGXZ
    unsigned short GetShortcutChar();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTextGlowSize@Element@DirectUI@@QEAAHXZ
    int GetTextGlowSize();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTooltip@Element@DirectUI@@QEAA_NXZ
    bool GetTooltip();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTooltipMaxWidth@Element@DirectUI@@QEAAHXZ
    int GetTooltipMaxWidth();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTopLevel@Element@DirectUI@@QEAAPEAV12@XZ
    Element * GetTopLevel();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTreeAlphaLevel@Element@DirectUI@@QEAAMXZ
    float GetTreeAlphaLevel();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetUIAElementProvider@Element@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetUIAElementProvider(_GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetUiaFocusDelegate@Element@DirectUI@@UEAAPEAV12@XZ
    virtual Element * GetUiaFocusDelegate();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetValue@Element@DirectUI@@QEAAPEAVValue@2@PEBUPropertyInfo@2@HPEAUUpdateCache@2@@Z
    ::DirectUI::Value * GetValue(::DirectUI::PropertyInfo const *, int, ::DirectUI::UpdateCache *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetValue@Element@DirectUI@@QEAAPEAVValue@2@P6APEBUPropertyInfo@2@XZHPEAUUpdateCache@2@@Z
    ::DirectUI::Value * GetValue(::DirectUI::PropertyInfo const * ( *)(void), int, ::DirectUI::UpdateCache *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetVisible@Element@DirectUI@@QEAA_NXZ
    bool GetVisible();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWidth@Element@DirectUI@@QEAAHXZ
    int GetWidth();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWindowActive@Element@DirectUI@@QEAA_NXZ
    bool GetWindowActive();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetX@Element@DirectUI@@QEAAHXZ
    int GetX();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetY@Element@DirectUI@@QEAAHXZ
    int GetY();
    // Category: Method | Source: PE Export
    // Symbol: ?HandleUiaDestroyListener@Element@DirectUI@@UEAAXXZ
    virtual void HandleUiaDestroyListener();
    // Category: Method | Source: PE Export
    // Symbol: ?HandleUiaEventListener@Element@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void HandleUiaEventListener(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleUiaPropertyChangingListener@Element@DirectUI@@UEAAXPEBUPropertyInfo@2@@Z
    virtual void HandleUiaPropertyChangingListener(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PE Export
    // Symbol: ?HandleUiaPropertyListener@Element@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void HandleUiaPropertyListener(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasAnimation@Element@DirectUI@@QEAA_NXZ
    bool HasAnimation();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasBorder@Element@DirectUI@@QEAA_NXZ
    bool HasBorder();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasChildren@Element@DirectUI@@QEAA_NXZ
    bool HasChildren();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasContent@Element@DirectUI@@QEAA_NXZ
    bool HasContent();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasEdgeHighlight@Element@DirectUI@@QEAA_NXZ
    bool HasEdgeHighlight();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasLayout@Element@DirectUI@@QEAA_NXZ
    bool HasLayout();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasMargin@Element@DirectUI@@QEAA_NXZ
    bool HasMargin();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasPVLAnimationState@Element@DirectUI@@QEAA_NI@Z
    bool HasPVLAnimationState(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasPadding@Element@DirectUI@@QEAA_NXZ
    bool HasPadding();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HeightProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * HeightProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?HighDPIProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * HighDPIProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IDProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * IDProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@Element@DirectUI@@QEAAJIPEAV12@PEAK@Z
    long Initialize(unsigned int, Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Insert@Element@DirectUI@@UEAAJPEAPEAV12@II@Z
    virtual long Insert(Element * *, unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Insert@Element@DirectUI@@QEAAJPEAV12@I@Z
    long Insert(Element *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeAnimation@Element@DirectUI@@QEAAXHI@Z
    void InvokeAnimation(int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?InvokeAnimation@Element@DirectUI@@QEAAXIIMM_N@Z
    void InvokeAnimation(unsigned int, unsigned int, float, float, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsBehaviorLayout@Element@DirectUI@@QEBA_NXZ
    bool IsBehaviorLayout() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsCompositedText@Element@DirectUI@@QEAA_NXZ
    bool IsCompositedText();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsContentProtected@Element@DirectUI@@UEAA_NXZ
    virtual bool IsContentProtected();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDefaultCAlign@Element@DirectUI@@QEAA_NXZ
    bool IsDefaultCAlign();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDefaultCursor@Element@DirectUI@@QEAA_NXZ
    bool IsDefaultCursor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDescendent@Element@DirectUI@@QEAA_NPEAV12@@Z
    bool IsDescendent(Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDestroyed@Element@DirectUI@@QEAA_NXZ
    bool IsDestroyed();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsHosted@Element@DirectUI@@QEAA_NXZ
    bool IsHosted();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsRTL@Element@DirectUI@@QEAA_NXZ
    bool IsRTL();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsRTLReading@Element@DirectUI@@UEAA_NXZ
    virtual bool IsRTLReading();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsRoot@Element@DirectUI@@QEAAHXZ
    int IsRoot();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsSelfLayout@Element@DirectUI@@QEAA_NXZ
    bool IsSelfLayout();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsValidAccessor@Element@DirectUI@@QEAA_NPEBUPropertyInfo@2@H_N@Z
    bool IsValidAccessor(::DirectUI::PropertyInfo const *, int, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsValidValue@Element@DirectUI@@SA_NPEBUPropertyInfo@2@PEAVValue@2@@Z
    static bool IsValidValue(::DirectUI::PropertyInfo const *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsWordWrap@Element@DirectUI@@QEAA_NXZ
    bool IsWordWrap();
    // Category: Accessor | Source: PE Export
    // Symbol: ?KeyFocusedProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * KeyFocusedProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?KeyWithinProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * KeyWithinProp();
    // Category: Method | Source: PE Export
    // Symbol: ?KeyboardNavigate@Element@DirectUI@@SA?AVUID@@XZ
    static UID KeyboardNavigate();
    // Category: Accessor | Source: PE Export
    // Symbol: ?LastDSConstProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LastDSConstProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?LayoutPosProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LayoutPosProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?LayoutProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LayoutProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?LocationProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LocationProp();
    // Category: Method | Source: PE Export
    // Symbol: ?MapElementPoint@Element@DirectUI@@QEAAXPEAV12@PEBUtagPOINT@@PEAU3@@Z
    void MapElementPoint(Element *, tagPOINT const *, tagPOINT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?MarginProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MarginProp();
    // Category: Method | Source: PE Export
    // Symbol: ?MarkNeedsDSUpdate@Element@DirectUI@@QEAAXXZ
    void MarkNeedsDSUpdate();
    // Category: Method | Source: PE Export
    // Symbol: ?MessageCallback@Element@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?MinSizeProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MinSizeProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MouseFocusedProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MouseFocusedProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MouseWithinProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MouseWithinProp();
    // Category: Method | Source: PE Export
    // Symbol: ?NeedsDSUpdate@Element@DirectUI@@QEAA_NXZ
    bool NeedsDSUpdate();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@Element@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@Element@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGroupChanged@Element@DirectUI@@UEAAXH_N@Z
    virtual void OnGroupChanged(int, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@Element@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKeyFocusMoved@Element@DirectUI@@UEAAXPEAV12@0@Z
    virtual void OnKeyFocusMoved(Element *, Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMouseFocusMoved@Element@DirectUI@@UEAAXPEAV12@0@Z
    virtual void OnMouseFocusMoved(Element *, Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Element@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@Element@DirectUI@@UEAAXPEAUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@Element@DirectUI@@UEAA_NPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanging@Element@DirectUI@@UEAA_NPEAUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual bool OnPropertyChanging(::DirectUI::PropertyInfo *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?OverhangProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * OverhangProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PaddingProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PaddingProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@Element@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?PaintBackground@Element@DirectUI@@QEAAXPEAUHDC__@@PEAVValue@2@AEBUtagRECT@@222@Z
    void PaintBackground(HDC__*, ::DirectUI::Value *, tagRECT const &, tagRECT const &, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PE Export
    // Symbol: ?PaintBorder@Element@DirectUI@@QEAAXPEAUHDC__@@PEAVValue@2@PEAUtagRECT@@AEBU5@@Z
    void PaintBorder(HDC__*, ::DirectUI::Value *, tagRECT *, tagRECT const &);
    // Category: Method | Source: PE Export
    // Symbol: ?PaintContent@Element@DirectUI@@QEAAXPEAUHDC__@@PEBUtagRECT@@@Z
    void PaintContent(HDC__*, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PaintEdgeHighlight@Element@DirectUI@@QEAAXPEAUHDC__@@AEBUtagRECT@@1@Z
    void PaintEdgeHighlight(HDC__*, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PE Export
    // Symbol: ?PaintFocusRect@Element@DirectUI@@QEAAXPEAUHDC__@@PEBUtagRECT@@1@Z
    void PaintFocusRect(HDC__*, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?PaintStringContent@Element@DirectUI@@QEAAXPEAUHDC__@@PEBUtagRECT@@PEAVValue@2@H@Z
    void PaintStringContent(HDC__*, tagRECT const *, ::DirectUI::Value *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ParentProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ParentProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?PosInLayoutProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * PosInLayoutProp();
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@Element@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueueDefaultAction@Element@DirectUI@@QEAAJXZ
    long QueueDefaultAction();
    // Category: Method | Source: PE Export
    // Symbol: ?Register@Element@DirectUI@@SAJXZ
    static long Register();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@Element@DirectUI@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Remove@Element@DirectUI@@UEAAJPEAPEAV12@I@Z
    virtual long Remove(Element * *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Remove@Element@DirectUI@@QEAAJPEAV12@@Z
    long Remove(Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveAll@Element@DirectUI@@QEAAJXZ
    long RemoveAll();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveBehavior@Element@DirectUI@@UEAAJPEAUIDuiBehavior@@@Z
    virtual long RemoveBehavior(IDuiBehavior *);
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveListener@Element@DirectUI@@QEAAXPEAUIElementListener@2@@Z
    void RemoveListener(::DirectUI::IElementListener *);
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveLocalValue@Element@DirectUI@@QEAAJP6APEBUPropertyInfo@2@XZ@Z
    long RemoveLocalValue(::DirectUI::PropertyInfo const * ( *)(void));
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveLocalValue@Element@DirectUI@@QEAAJPEBUPropertyInfo@2@@Z
    long RemoveLocalValue(::DirectUI::PropertyInfo const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ScaleFactorProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ScaleFactorProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SelectedProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SelectedProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAbsorbsShortcut@Element@DirectUI@@QEAAJ_N@Z
    long SetAbsorbsShortcut(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccDefAction@Element@DirectUI@@QEAAJPEBG@Z
    long SetAccDefAction(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccDesc@Element@DirectUI@@QEAAJPEBG@Z
    long SetAccDesc(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccHelp@Element@DirectUI@@QEAAJPEBG@Z
    long SetAccHelp(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccItemStatus@Element@DirectUI@@QEAAJPEBG@Z
    long SetAccItemStatus(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccItemType@Element@DirectUI@@QEAAJPEBG@Z
    long SetAccItemType(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccName@Element@DirectUI@@QEAAJPEBG@Z
    long SetAccName(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccRole@Element@DirectUI@@QEAAJH@Z
    long SetAccRole(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccState@Element@DirectUI@@QEAAJH@Z
    long SetAccState(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccValue@Element@DirectUI@@QEAAJPEBG@Z
    long SetAccValue(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAccessible@Element@DirectUI@@QEAAJ_N@Z
    long SetAccessible(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetActive@Element@DirectUI@@QEAAJH@Z
    long SetActive(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAlpha@Element@DirectUI@@QEAAJH@Z
    long SetAlpha(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAnimation@Element@DirectUI@@QEAAJH@Z
    long SetAnimation(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBackgroundColor@Element@DirectUI@@QEAAJK@Z
    long SetBackgroundColor(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBackgroundColor@Element@DirectUI@@QEAAJAEBUFill@2@@Z
    long SetBackgroundColor(::DirectUI::Fill const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBackgroundColor@Element@DirectUI@@QEAAJKKE@Z
    long SetBackgroundColor(unsigned long, unsigned long, unsigned char);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBackgroundColor@Element@DirectUI@@QEAAJKKKE@Z
    long SetBackgroundColor(unsigned long, unsigned long, unsigned long, unsigned char);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBackgroundColor@Element@DirectUI@@QEAAJPEBGHH@Z
    long SetBackgroundColor(unsigned short const *, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBackgroundStdColor@Element@DirectUI@@QEAAJH@Z
    long SetBackgroundStdColor(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBorderColor@Element@DirectUI@@QEAAJK@Z
    long SetBorderColor(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBorderGradientColor@Element@DirectUI@@QEAAJKKE@Z
    long SetBorderGradientColor(unsigned long, unsigned long, unsigned char);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBorderStdColor@Element@DirectUI@@QEAAJH@Z
    long SetBorderStdColor(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBorderStyle@Element@DirectUI@@QEAAJH@Z
    long SetBorderStyle(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBorderThickness@Element@DirectUI@@QEAAJHHHH@Z
    long SetBorderThickness(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClass@Element@DirectUI@@QEAAJPEBG@Z
    long SetClass(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@Element@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCompositedText@Element@DirectUI@@QEAAJ_N@Z
    long SetCompositedText(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetContentAlign@Element@DirectUI@@QEAAJH@Z
    long SetContentAlign(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetContentGraphic@Element@DirectUI@@QEAAJPEBGEI@Z
    long SetContentGraphic(unsigned short const *, unsigned char, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetContentGraphic@Element@DirectUI@@QEAAJPEBGGG@Z
    long SetContentGraphic(unsigned short const *, unsigned short, unsigned short);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetContentString@Element@DirectUI@@QEAAJPEBG@Z
    long SetContentString(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCursor@Element@DirectUI@@QEAAJPEBG@Z
    long SetCursor(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCursorHandle@Element@DirectUI@@QEAAJPEAUHICON__@@@Z
    long SetCursorHandle(HICON__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDirection@Element@DirectUI@@QEAAJH@Z
    long SetDirection(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetEdgeHighlightColor@Element@DirectUI@@QEAAJK@Z
    long SetEdgeHighlightColor(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetEdgeHighlightThickness@Element@DirectUI@@QEAAJHHHH@Z
    long SetEdgeHighlightThickness(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetEnabled@Element@DirectUI@@QEAAJ_N@Z
    long SetEnabled(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetEncodedContentString@Element@DirectUI@@QEAAJPEBG@Z
    long SetEncodedContentString(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFont@Element@DirectUI@@QEAAJPEBG@Z
    long SetFont(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFontFace@Element@DirectUI@@QEAAJPEBG@Z
    long SetFontFace(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFontQuality@Element@DirectUI@@QEAAJH@Z
    long SetFontQuality(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFontSize@Element@DirectUI@@QEAAJH@Z
    long SetFontSize(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFontStyle@Element@DirectUI@@QEAAJH@Z
    long SetFontStyle(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFontWeight@Element@DirectUI@@QEAAJH@Z
    long SetFontWeight(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetForegroundColor@Element@DirectUI@@QEAAJK@Z
    long SetForegroundColor(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetForegroundColor@Element@DirectUI@@QEAAJKKE@Z
    long SetForegroundColor(unsigned long, unsigned long, unsigned char);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetForegroundColor@Element@DirectUI@@QEAAJKKKE@Z
    long SetForegroundColor(unsigned long, unsigned long, unsigned long, unsigned char);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetForegroundStdColor@Element@DirectUI@@QEAAJH@Z
    long SetForegroundStdColor(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHeight@Element@DirectUI@@QEAAJH@Z
    long SetHeight(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetID@Element@DirectUI@@QEAAJPEBG@Z
    long SetID(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyFocus@Element@DirectUI@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLayout@Element@DirectUI@@QEAAJPEAVLayout@2@@Z
    long SetLayout(::DirectUI::Layout *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLayoutCompletionNotify@Element@DirectUI@@QEAAX_N@Z
    void SetLayoutCompletionNotify(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLayoutPos@Element@DirectUI@@QEAAJH@Z
    long SetLayoutPos(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMargin@Element@DirectUI@@QEAAJHHHH@Z
    long SetMargin(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMinSize@Element@DirectUI@@QEAAJHH@Z
    long SetMinSize(int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOverhang@Element@DirectUI@@QEAAJ_N@Z
    long SetOverhang(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOverrideScaleFactor@Element@DirectUI@@QEAAXM@Z
    void SetOverrideScaleFactor(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPVLAnimationState@Element@DirectUI@@QEAAXH@Z
    void SetPVLAnimationState(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPadding@Element@DirectUI@@QEAAJHHHH@Z
    long SetPadding(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPreserveAlphaChannel@Element@DirectUI@@QEAAX_N@Z
    void SetPreserveAlphaChannel(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRelPixHeight@Element@DirectUI@@QEAAJH@Z
    long SetRelPixHeight(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRelPixMargin@Element@DirectUI@@QEAAJHHHH@Z
    long SetRelPixMargin(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRelPixPadding@Element@DirectUI@@QEAAJHHHH@Z
    long SetRelPixPadding(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRelPixWidth@Element@DirectUI@@QEAAJH@Z
    long SetRelPixWidth(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSelected@Element@DirectUI@@QEAAJ_N@Z
    long SetSelected(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetShadowIntensity@Element@DirectUI@@QEAAJH@Z
    long SetShadowIntensity(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSheet@Element@DirectUI@@QEAAJPEAVStyleSheet@2@@Z
    long SetSheet(::DirectUI::StyleSheet *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetShortcut@Element@DirectUI@@QEAAJH@Z
    long SetShortcut(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetStdCursor@Element@DirectUI@@QEAAJH@Z
    long SetStdCursor(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTextGlowSize@Element@DirectUI@@QEAAJH@Z
    long SetTextGlowSize(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTooltip@Element@DirectUI@@QEAAJ_N@Z
    long SetTooltip(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTooltipMaxWidth@Element@DirectUI@@QEAAJH@Z
    long SetTooltipMaxWidth(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetValue@Element@DirectUI@@QEAAJPEBUPropertyInfo@2@HPEAVValue@2@@Z
    long SetValue(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetValue@Element@DirectUI@@QEAAJP6APEBUPropertyInfo@2@XZHPEAVValue@2@@Z
    long SetValue(::DirectUI::PropertyInfo const * ( *)(void), int, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetVisible@Element@DirectUI@@QEAAJ_N@Z
    long SetVisible(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWidth@Element@DirectUI@@QEAAJH@Z
    long SetWidth(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWindowActive@Element@DirectUI@@QEAAJ_N@Z
    long SetWindowActive(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetX@Element@DirectUI@@QEAAJH@Z
    long SetX(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetY@Element@DirectUI@@QEAAJH@Z
    long SetY(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ShadowIntensityProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ShadowIntensityProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SheetProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SheetProp();
    // Category: Method | Source: PE Export
    // Symbol: ?ShiftChild@Element@DirectUI@@QEAAJII@Z
    long ShiftChild(unsigned int, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ShortcutProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ShortcutProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SizeInLayoutProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SizeInLayoutProp();
    // Category: Method | Source: PE Export
    // Symbol: ?SortChildren@Element@DirectUI@@QEAAJP6AHPEBX0@Z@Z
    long SortChildren(int ( *)(void const *, void const *));
    // Category: Method | Source: PE Export
    // Symbol: ?StartDefer@Element@DirectUI@@QEAAXPEAK@Z
    void StartDefer(unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?StopAnimation@Element@DirectUI@@QEAAXI@Z
    void StopAnimation(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?TestDeferObject@Element@DirectUI@@QEAAPEAVDeferCycle@2@XZ
    ::DirectUI::DeferCycle * TestDeferObject();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TextGlowSizeProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TextGlowSizeProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TooltipMaxWidthProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TooltipMaxWidthProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TooltipProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TooltipProp();
    // Category: Method | Source: PE Export
    // Symbol: ?UiaEvents@Element@DirectUI@@QEAA_NXZ
    bool UiaEvents();
    // Category: Method | Source: PE Export
    // Symbol: ?UnRegister@Element@DirectUI@@SAJPEAPEAUIClassInfo@2@@Z
    static long UnRegister(::DirectUI::IClassInfo * *);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateLayout@Element@DirectUI@@QEAAXXZ
    void UpdateLayout();
    // Category: Accessor | Source: PE Export
    // Symbol: ?UsesDesktopPerMonitorScalingProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * UsesDesktopPerMonitorScalingProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?VisibleProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * VisibleProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?WidthProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * WidthProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?WindowActiveProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * WindowActiveProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?XProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * XProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?YProp@Element@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * YProp();
    // Category: Method | Source: PE Export
    // Symbol: ?_AddDependency@Element@DirectUI@@SAXPEAV12@PEBUPropertyInfo@2@HPEAUDepRecs@2@PEAVDeferCycle@2@PEAJ@Z
    static void _AddDependency(Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::DepRecs *, ::DirectUI::DeferCycle *, long *);
    // Category: Method | Source: PE Export
    // Symbol: ?_ClearNeedsLayout@Element@DirectUI@@QEAAXXZ
    void _ClearNeedsLayout();
    // Category: Method | Source: PE Export
    // Symbol: ?_DisplayNodeCallback@Element@DirectUI@@SAJPEAUHGADGET__@@PEAXPEAUEventMsg@@@Z
    static long _DisplayNodeCallback(HGADGET__*, void *, EventMsg *);
    // Category: Method | Source: PE Export
    // Symbol: ?_EndOptimizedLayoutQ@Element@DirectUI@@QEAAXXZ
    void _EndOptimizedLayoutQ();
    // Category: Method | Source: PE Export
    // Symbol: ?_GetChangesUpdatePass@Element@DirectUI@@QEAAHXZ
    int _GetChangesUpdatePass();
    // Category: Method | Source: PE Export
    // Symbol: ?_GetNeedsLayout@Element@DirectUI@@QEAAIXZ
    unsigned int _GetNeedsLayout();
    // Category: Method | Source: PE Export
    // Symbol: ?_MarkElementForDS@Element@DirectUI@@SAHPEAV12@@Z
    static int _MarkElementForDS(Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?_MarkElementForLayout@Element@DirectUI@@SAHPEAV12@I@Z
    static int _MarkElementForLayout(Element *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetGroupChanges@Element@DirectUI@@SA_NPEAV12@HPEAVDeferCycle@2@@Z
    static bool _SetGroupChanges(Element *, int, ::DirectUI::DeferCycle *);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetNeedsLayout@Element@DirectUI@@QEAAHI@Z
    int _SetNeedsLayout(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?_StartOptimizedLayoutQ@Element@DirectUI@@QEAAXXZ
    void _StartOptimizedLayoutQ();
    // Category: Method | Source: PE Export
    // Symbol: ?_TransferGroupFlags@Element@DirectUI@@SAXPEAV12@H@Z
    static void _TransferGroupFlags(Element *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_UpdateDesiredSize@Element@DirectUI@@QEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    tagSIZE _UpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PE Export
    // Symbol: ?_UpdateLayoutPosition@Element@DirectUI@@QEAAXHH@Z
    void _UpdateLayoutPosition(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_UpdateLayoutSize@Element@DirectUI@@QEAAXHH@Z
    void _UpdateLayoutSize(int, int);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1Element@DirectUI@@UEAA@XZ
    virtual ~Element();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?ActivateTooltip@Element@DirectUI@@MEAAXPEAV12@K@Z
    virtual void ActivateTooltip(Element *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?MarkHosted@Element@DirectUI@@IEAAXXZ
    void MarkHosted();
    // Category: Method | Source: PE Export
    // Symbol: ?MarkSelfLayout@Element@DirectUI@@IEAAXXZ
    void MarkSelfLayout();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@Element@DirectUI@@MEAAXPEAV12@@Z
    virtual void OnHosted(Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@Element@DirectUI@@MEAAXPEAV12@@Z
    virtual void OnUnHosted(Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveTooltip@Element@DirectUI@@MEAAXPEAV12@@Z
    virtual void RemoveTooltip(Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateTooltip@Element@DirectUI@@MEAAXPEAV12@@Z
    virtual void UpdateTooltip(Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?_Fill@Element@DirectUI@@IEAAXPEAUHDC__@@KHHHH_N@Z
    void _Fill(HDC__*, unsigned long, int, int, int, int, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?_FlushLayout@Element@DirectUI@@KAXPEAV12@PEAVDeferCycle@2@@Z
    static void _FlushLayout(Element *, ::DirectUI::DeferCycle *);
    // Category: Method | Source: PE Export
    // Symbol: ?_InvalidateCachedDSConstraints@Element@DirectUI@@KAXPEAV12@@Z
    static void _InvalidateCachedDSConstraints(Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?_OnFontPropChanged@Element@DirectUI@@IEAAXPEAVValue@2@@Z
    void _OnFontPropChanged(::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?_RemoveLocalValue@Element@DirectUI@@IEAAJPEBUPropertyInfo@2@_N@Z
    long _RemoveLocalValue(::DirectUI::PropertyInfo const *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?_RemoveLocalValue@Element@DirectUI@@IEAAJP6APEBUPropertyInfo@2@XZ_N@Z
    long _RemoveLocalValue(::DirectUI::PropertyInfo const * ( *)(void), bool);
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutDoLayout@Element@DirectUI@@MEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_SelfLayoutUpdateDesiredSize@Element@DirectUI@@MEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetValue@Element@DirectUI@@IEAAJP6APEBUPropertyInfo@2@XZHPEAVValue@2@_N@Z
    long _SetValue(::DirectUI::PropertyInfo const * ( *)(void), int, ::DirectUI::Value *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetValue@Element@DirectUI@@IEAAJPEBUPropertyInfo@2@HPEAVValue@2@_N@Z
    long _SetValue(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, bool);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?FindDescendentWorker@Element@DirectUI@@AEAAPEAV12@G@Z
    Element * FindDescendentWorker(unsigned short);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCommonDrawTextFlags@Element@DirectUI@@AEAAIH@Z
    unsigned int GetCommonDrawTextFlags(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTheme@Element@DirectUI@@AEAAJPEBGPEAPEAX@Z
    long GetTheme(unsigned short const *, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPointValid@Element@DirectUI@@AEAA_NNN@Z
    bool IsPointValid(double, double);
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveShortcutFromName@Element@DirectUI@@AEAAPEAGPEBG@Z
    unsigned short * RemoveShortcutFromName(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?TryLinePattern@Element@DirectUI@@AEAA_NPEAUtagPOINT@@AEBUtagRECT@@@Z
    bool TryLinePattern(tagPOINT *, tagRECT const &);
    // Category: Method | Source: PE Export
    // Symbol: ?TryPattern@Element@DirectUI@@AEAA_NNNPEAUtagPOINT@@AEBUtagRECT@@@Z
    bool TryPattern(double, double, tagPOINT *, tagRECT const &);
    // Category: Method | Source: PE Export
    // Symbol: ?TrySparsePattern@Element@DirectUI@@AEAA_NPEAUtagPOINT@@AEBUtagRECT@@@Z
    bool TrySparsePattern(tagPOINT *, tagRECT const &);
    // Category: Method | Source: PE Export
    // Symbol: ?_BroadcastEventWorker@Element@DirectUI@@AEAAXPEAUEvent@2@@Z
    void _BroadcastEventWorker(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?_CachedValueIsEqual@Element@DirectUI@@AEAAHPEBUPropertyInfo@2@PEAV12@@Z
    int _CachedValueIsEqual(::DirectUI::PropertyInfo const *, Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?_FlushDS@Element@DirectUI@@AEAAXPEAVDeferCycle@2@@Z
    void _FlushDS(::DirectUI::DeferCycle *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetBuriedSheetDependencies@Element@DirectUI@@AEAAXPEBUPropertyInfo@2@PEAV12@PEAUDepRecs@2@PEAVDeferCycle@2@PEAJ@Z
    void _GetBuriedSheetDependencies(::DirectUI::PropertyInfo const *, Element *, ::DirectUI::DepRecs *, ::DirectUI::DeferCycle *, long *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetComputedValue@Element@DirectUI@@AEAAPEAVValue@2@PEBUPropertyInfo@2@PEAUUpdateCache@2@@Z
    ::DirectUI::Value * _GetComputedValue(::DirectUI::PropertyInfo const *, ::DirectUI::UpdateCache *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetDependencies@Element@DirectUI@@AEAAJPEBUPropertyInfo@2@HPEAUDepRecs@2@HPEAVValue@2@PEAVDeferCycle@2@@Z
    long _GetDependencies(::DirectUI::PropertyInfo const *, int, ::DirectUI::DepRecs *, int, ::DirectUI::Value *, ::DirectUI::DeferCycle *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetLocalValue@Element@DirectUI@@AEAAPEAVValue@2@PEBUPropertyInfo@2@@Z
    ::DirectUI::Value * _GetLocalValue(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetLocalValueFromVM@Element@DirectUI@@AEAAPEAVValue@2@PEBUPropertyInfo@2@@Z
    ::DirectUI::Value * _GetLocalValueFromVM(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetSpecifiedValue@Element@DirectUI@@AEAAPEAVValue@2@PEBUPropertyInfo@2@PEAUUpdateCache@2@@Z
    ::DirectUI::Value * _GetSpecifiedValue(::DirectUI::PropertyInfo const *, ::DirectUI::UpdateCache *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetSpecifiedValueIgnoreCache@Element@DirectUI@@AEAAPEAVValue@2@PEBUPropertyInfo@2@@Z
    ::DirectUI::Value * _GetSpecifiedValueIgnoreCache(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_InheritProperties@Element@DirectUI@@AEAAXXZ
    void _InheritProperties();
    // Category: Method | Source: PE Export
    // Symbol: ?_PostEvent@Element@DirectUI@@AEAAXPEAUEvent@2@H@Z
    void _PostEvent(::DirectUI::Event *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_PostSourceChange@Element@DirectUI@@AEAAJXZ
    long _PostSourceChange();
    // Category: Method | Source: PE Export
    // Symbol: ?_PreSourceChange@Element@DirectUI@@AEAAJPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    long _PreSourceChange(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?_PreSourceChange@Element@DirectUI@@AEAAJP6APEBUPropertyInfo@2@XZHPEAVValue@2@1@Z
    long _PreSourceChange(::DirectUI::PropertyInfo const * ( *)(void), int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetRelPixRect@Element@DirectUI@@AEAAJPEBUPropertyInfo@2@HHHH@Z
    long _SetRelPixRect(::DirectUI::PropertyInfo const *, int, int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetRelPixValue@Element@DirectUI@@AEAAJPEBUPropertyInfo@2@H@Z
    long _SetRelPixValue(::DirectUI::PropertyInfo const *, int);
    // Category: Method | Source: PE Export
    // Symbol: ?_SyncBackground@Element@DirectUI@@AEAAXXZ
    void _SyncBackground();
    // Category: Method | Source: PE Export
    // Symbol: ?_SyncRedrawStyle@Element@DirectUI@@AEAAXXZ
    void _SyncRedrawStyle();
    // Category: Method | Source: PE Export
    // Symbol: ?_SyncVisible@Element@DirectUI@@AEAAXXZ
    void _SyncVisible();
    // Category: Method | Source: PE Export
    // Symbol: ?_UpdatePropertyInCache@Element@DirectUI@@AEAAXPEBUPropertyInfo@2@@Z
    void _UpdatePropertyInCache(::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_VoidPCNotifyTree@Element@DirectUI@@CAXHPEAVDeferCycle@2@@Z
    static void _VoidPCNotifyTree(int, ::DirectUI::DeferCycle *);
    // Category: Method | Source: PE Export
    // Symbol: ?s_HandleDUIEventMessage@Element@DirectUI@@CA_NPEAV12@PEAUEventMsg@@@Z
    static bool s_HandleDUIEventMessage(Element *, EventMsg *);
};
} // namespace DirectUI
