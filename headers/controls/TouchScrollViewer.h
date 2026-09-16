#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 192 member(s).
// Base evidence: DirectUI::BaseScrollViewer (likely; classinfo-template-instantiation).
namespace DirectUI {
class TouchScrollViewer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?AllowArrowOutProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AllowArrowOutProp();
    // Category: Method | Source: PE Export
    // Symbol: ?CanPerformManualVisualSwap@TouchScrollViewer@DirectUI@@QEAA_NXZ
    bool CanPerformManualVisualSwap();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@TouchScrollViewer@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTile@TouchScrollViewer@DirectUI@@QEAAJPEBUtagRECT@@PEA_K@Z
    long CreateTile(tagRECT const *, uint64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?ExecuteManualSwapDeferredZoomToRect@TouchScrollViewer@DirectUI@@QEAAJ_N@Z
    long ExecuteManualSwapDeferredZoomToRect(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAllowArrowOut@TouchScrollViewer@DirectUI@@QEAA_NXZ
    bool GetAllowArrowOut();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@TouchScrollViewer@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@TouchScrollViewer@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentCrossfadeOpacity@TouchScrollViewer@DirectUI@@QEAAMXZ
    float GetContentCrossfadeOpacity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHScroll@TouchScrollViewer@DirectUI@@QEAAPEAVBaseScrollBar@2@XZ
    ::DirectUI::BaseScrollBar * GetHScroll();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHScrollbar@TouchScrollViewer@DirectUI@@QEAAJPEAPEAVElement@2@@Z
    long GetHScrollbar(::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInertiaEndpointVisibleRect@TouchScrollViewer@DirectUI@@QEAAXPEAUtagRECT@@@Z
    void GetInertiaEndpointVisibleRect(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInertiaEndpointZoomLevel@TouchScrollViewer@DirectUI@@QEAAMM@Z
    float GetInertiaEndpointZoomLevel(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetInteractionMode@TouchScrollViewer@DirectUI@@QEAAHXZ
    int GetInteractionMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLinkIndicatorsToContent@TouchScrollViewer@DirectUI@@QEAA_NXZ
    bool GetLinkIndicatorsToContent();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetManipulationCompositor@TouchScrollViewer@DirectUI@@QEAAPEAUIDirectManipulationCompositor@@XZ
    IDirectManipulationCompositor * GetManipulationCompositor();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetManipulationHorizontalAlignment@TouchScrollViewer@DirectUI@@QEAAHXZ
    int GetManipulationHorizontalAlignment();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetManipulationManager@TouchScrollViewer@DirectUI@@QEAAPEAUIDirectManipulationManager@@XZ
    IDirectManipulationManager * GetManipulationManager();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetManipulationVerticalAlignment@TouchScrollViewer@DirectUI@@QEAAHXZ
    int GetManipulationVerticalAlignment();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetManipulationViewport@TouchScrollViewer@DirectUI@@QEAAPEAUIDirectManipulationViewport@@_N@Z
    IDirectManipulationViewport * GetManipulationViewport(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMouseWithinHorizontalScrollRegion@TouchScrollViewer@DirectUI@@QEAA_NXZ
    bool GetMouseWithinHorizontalScrollRegion();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPredictedVisibleRect@TouchScrollViewer@DirectUI@@QEAAXPEAUtagRECT@@@Z
    void GetPredictedVisibleRect(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetScrollPadding@TouchScrollViewer@DirectUI@@QEAAPEBUtagRECT@@PEAPEAVValue@2@@Z
    tagRECT const * GetScrollPadding(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSnapIntervalX@TouchScrollViewer@DirectUI@@QEAAMXZ
    float GetSnapIntervalX();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSnapIntervalY@TouchScrollViewer@DirectUI@@QEAAMXZ
    float GetSnapIntervalY();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSnapMode@TouchScrollViewer@DirectUI@@QEAAHXZ
    int GetSnapMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSnapOffsetX@TouchScrollViewer@DirectUI@@QEAAMXZ
    float GetSnapOffsetX();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSnapOffsetY@TouchScrollViewer@DirectUI@@QEAAMXZ
    float GetSnapOffsetY();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSnapPointCollectionX@TouchScrollViewer@DirectUI@@QEAAPEAV?$DynamicArray@N$0A@@2@PEAPEAVValue@2@@Z
    WindissectOpaque * GetSnapPointCollectionX(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSnapPointCollectionY@TouchScrollViewer@DirectUI@@QEAAPEAV?$DynamicArray@N$0A@@2@PEAPEAVValue@2@@Z
    WindissectOpaque * GetSnapPointCollectionY(::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTranslatedTileRects@TouchScrollViewer@DirectUI@@QEAAXPEAUtagRECT@@PEAII@Z
    void GetTranslatedTileRects(tagRECT *, unsigned int *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVScroll@TouchScrollViewer@DirectUI@@QEAAPEAVBaseScrollBar@2@XZ
    ::DirectUI::BaseScrollBar * GetVScroll();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetVScrollbar@TouchScrollViewer@DirectUI@@QEAAJPEAPEAVElement@2@@Z
    long GetVScrollbar(::DirectUI::Element * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetVisibleRect@TouchScrollViewer@DirectUI@@QEAAXPEAUtagRECT@@@Z
    void GetVisibleRect(tagRECT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetZoomMaximum@TouchScrollViewer@DirectUI@@QEAAMXZ
    float GetZoomMaximum();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetZoomMinimum@TouchScrollViewer@DirectUI@@QEAAMXZ
    float GetZoomMinimum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TouchScrollViewer@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?InteractionModeProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * InteractionModeProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateChangedChildElements@TouchScrollViewer@DirectUI@@QEAAXXZ
    void InvalidateChangedChildElements();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsCrossfadeInProgress@TouchScrollViewer@DirectUI@@QEAA_NXZ
    bool IsCrossfadeInProgress();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationConfigured@TouchScrollViewer@DirectUI@@QEAA_NXZ
    bool IsManipulationConfigured();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsManualVisualSwapInProgress@TouchScrollViewer@DirectUI@@QEAA_NXZ
    bool IsManualVisualSwapInProgress();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsTileMember@TouchScrollViewer@DirectUI@@QEAA_NIPEAVElement@2@@Z
    bool IsTileMember(unsigned int, ::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?LinkIndicatorsToContentProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LinkIndicatorsToContentProp();
    // Category: Method | Source: PE Export
    // Symbol: ?ManipulationCompleted@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID ManipulationCompleted();
    // Category: Method | Source: PE Export
    // Symbol: ?ManipulationDelta@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID ManipulationDelta();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ManipulationHorizontalAlignmentProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ManipulationHorizontalAlignmentProp();
    // Category: Method | Source: PE Export
    // Symbol: ?ManipulationStarted@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID ManipulationStarted();
    // Category: Method | Source: PE Export
    // Symbol: ?ManipulationStarting@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID ManipulationStarting();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ManipulationVerticalAlignmentProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ManipulationVerticalAlignmentProp();
    // Category: Method | Source: PE Export
    // Symbol: ?MapContentVisuals@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID MapContentVisuals();
    // Category: Method | Source: PE Export
    // Symbol: ?NewChildElementsAdded@TouchScrollViewer@DirectUI@@QEAAXXZ
    void NewChildElementsAdded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentUpdated@TouchScrollViewer@DirectUI@@UEAAJPEAUIDirectManipulationViewport@@PEAUIDirectManipulationContent@@@Z
    virtual long OnContentUpdated(IDirectManipulationViewport *, IDirectManipulationContent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchScrollViewer@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@TouchScrollViewer@DirectUI@@UEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchScrollViewer@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportStatusChanged@TouchScrollViewer@DirectUI@@UEAAJPEAUIDirectManipulationViewport@@W4DIRECTMANIPULATION_STATUS@@1@Z
    virtual long OnViewportStatusChanged(IDirectManipulationViewport *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnViewportUpdated@TouchScrollViewer@DirectUI@@UEAAJPEAUIDirectManipulationViewport@@@Z
    virtual long OnViewportUpdated(IDirectManipulationViewport *);
    // Category: Method | Source: PE Export
    // Symbol: ?OverrideZoomThreshold@TouchScrollViewer@DirectUI@@QEAAJMMH@Z
    long OverrideZoomThreshold(float, float, int);
    // Category: Method | Source: PE Export
    // Symbol: ?PrepareManualSwapDeferredZoomToRect@TouchScrollViewer@DirectUI@@QEAAJPEBUtagRECT@@PEBM1PEAM2M@Z
    long PrepareManualSwapDeferredZoomToRect(tagRECT const *, float const *, float const *, float *, float *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAnimationEvent@TouchScrollViewer@DirectUI@@QEAAXPEAUAnimateScrollEvent@2@@Z
    void ProcessAnimationEvent(::DirectUI::AnimateScrollEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?ReleaseSnapshot@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID ReleaseSnapshot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@TouchScrollViewer@DirectUI@@QEAAJ_K@Z
    long RemoveTile(uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?ResetInputState@TouchScrollViewer@DirectUI@@QEAAJXZ
    long ResetInputState();
    // Category: Method | Source: PE Export
    // Symbol: ?ResetManipulations@TouchScrollViewer@DirectUI@@QEAAJXZ
    long ResetManipulations();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ScrollPaddingProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ScrollPaddingProp();
    // Category: Method | Source: PE Export
    // Symbol: ?SemanticChange@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID SemanticChange();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAllowArrowOut@TouchScrollViewer@DirectUI@@QEAAJ_N@Z
    long SetAllowArrowOut(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetContact@TouchScrollViewer@DirectUI@@QEAAJI_N@Z
    long SetContact(unsigned int, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetContactNeeded@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID SetContactNeeded();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetContactNotify@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID SetContactNotify();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDelegateEventHandler@TouchScrollViewer@DirectUI@@QEAAJPEAUIUnknown@@@Z
    long SetDelegateEventHandler(IUnknown *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDisableOffscreenCaching@TouchScrollViewer@DirectUI@@QEAAX_N@Z
    void SetDisableOffscreenCaching(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetInteractionMode@TouchScrollViewer@DirectUI@@QEAAJH@Z
    long SetInteractionMode(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLinkIndicatorsToContent@TouchScrollViewer@DirectUI@@QEAAJ_N@Z
    long SetLinkIndicatorsToContent(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetManipulationHorizontalAlignment@TouchScrollViewer@DirectUI@@QEAAJH@Z
    long SetManipulationHorizontalAlignment(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetManipulationVerticalAlignment@TouchScrollViewer@DirectUI@@QEAAJH@Z
    long SetManipulationVerticalAlignment(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetScrollControlHost@TouchScrollViewer@DirectUI@@QEAAJPEAVElement@2@@Z
    long SetScrollControlHost(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetScrollPadding@TouchScrollViewer@DirectUI@@QEAAJHHHH@Z
    long SetScrollPadding(int, int, int, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapIntervalX@TouchScrollViewer@DirectUI@@QEAAJM@Z
    long SetSnapIntervalX(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapIntervalY@TouchScrollViewer@DirectUI@@QEAAJM@Z
    long SetSnapIntervalY(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapMode@TouchScrollViewer@DirectUI@@QEAAJH@Z
    long SetSnapMode(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapOffsetX@TouchScrollViewer@DirectUI@@QEAAJM@Z
    long SetSnapOffsetX(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapOffsetY@TouchScrollViewer@DirectUI@@QEAAJM@Z
    long SetSnapOffsetY(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapPointCollectionX@TouchScrollViewer@DirectUI@@QEAAJPEBNH@Z
    long SetSnapPointCollectionX(double const *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapPointCollectionX@TouchScrollViewer@DirectUI@@QEAAJPEAV?$DynamicArray@N$0A@@2@@Z
    long SetSnapPointCollectionX(WindissectOpaque *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapPointCollectionY@TouchScrollViewer@DirectUI@@QEAAJPEAV?$DynamicArray@N$0A@@2@@Z
    long SetSnapPointCollectionY(WindissectOpaque *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSnapPointCollectionY@TouchScrollViewer@DirectUI@@QEAAJPEBNH@Z
    long SetSnapPointCollectionY(double const *, int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSuppressSetContact@TouchScrollViewer@DirectUI@@QEAAJ_N@Z
    long SetSuppressSetContact(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetVirtualizeElements@TouchScrollViewer@DirectUI@@QEAAJ_N@Z
    long SetVirtualizeElements(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetZoomMaximum@TouchScrollViewer@DirectUI@@QEAAJM@Z
    long SetZoomMaximum(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetZoomMinimum@TouchScrollViewer@DirectUI@@QEAAJM@Z
    long SetZoomMinimum(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SnapIntervalXProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SnapIntervalXProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SnapIntervalYProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SnapIntervalYProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SnapModeProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SnapModeProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SnapOffsetXProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SnapOffsetXProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SnapOffsetYProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SnapOffsetYProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SnapPointCollectionXProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SnapPointCollectionXProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SnapPointCollectionYProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * SnapPointCollectionYProp();
    // Category: Method | Source: PE Export
    // Symbol: ?SnapshotTransformElement@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID SnapshotTransformElement();
    // Category: Method | Source: PE Export
    // Symbol: ?TelemetrySetDescription@TouchScrollViewer@DirectUI@@QEAAJPEBG@Z
    long TelemetrySetDescription(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchScrollViewer@DirectUI@@QEAA@XZ
    TouchScrollViewer();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateContentSize@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID UpdateContentSize();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateView@TouchScrollViewer@DirectUI@@SA?AVUID@@XZ
    static UID UpdateView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ZoomMaximumProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ZoomMaximumProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ZoomMinimumProp@TouchScrollViewer@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ZoomMinimumProp();
    // Category: Method | Source: PE Export
    // Symbol: ?ZoomToRect@TouchScrollViewer@DirectUI@@QEAAJPEBUtagRECT@@_N@Z
    long ZoomToRect(tagRECT const *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?ZoomToRectManualVisualSwap@TouchScrollViewer@DirectUI@@QEAAJMMMMPEBHMMM_N@Z
    long ZoomToRectManualVisualSwap(float, float, float, float, int const *, float, float, float, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchScrollViewer@DirectUI@@UEAA@XZ
    virtual ~TouchScrollViewer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChildren@TouchScrollViewer@DirectUI@@MEAAJXZ
    virtual long AddChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScrollBars@TouchScrollViewer@DirectUI@@MEAAJXZ
    virtual long CreateScrollBars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableManipulations@TouchScrollViewer@DirectUI@@IEAAJ_N@Z
    long EnableManipulations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeManipulationHelper@TouchScrollViewer@DirectUI@@IEAAJXZ
    long InitializeManipulationHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeViewport@TouchScrollViewer@DirectUI@@IEAAJXZ
    long InitializeViewport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageCallback@TouchScrollViewer@DirectUI@@MEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@TouchScrollViewer@DirectUI@@MEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchScrollViewer@DirectUI@@MEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupChanged@TouchScrollViewer@DirectUI@@MEAAXH_N@Z
    virtual void OnGroupChanged(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@TouchScrollViewer@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@TouchScrollViewer@DirectUI@@MEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseFocusMoved@TouchScrollViewer@DirectUI@@MEAAXPEAVElement@2@0@Z
    virtual void OnMouseFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@TouchScrollViewer@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseViewport@TouchScrollViewer@DirectUI@@IEAAXXZ
    void ReleaseViewport();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMessage@TouchScrollViewer@DirectUI@@IEAAJPEBUtagMSG@@PEA_N@Z
    long SetMessage(tagMSG const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHideScrollbarTimer@TouchScrollViewer@DirectUI@@IEAAXXZ
    void _OnHideScrollbarTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnManipulationComplete@TouchScrollViewer@DirectUI@@IEAAXXZ
    void _OnManipulationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnManipulationDelta@TouchScrollViewer@DirectUI@@IEAAXMMMMM@Z
    void _OnManipulationDelta(float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnManipulationStart@TouchScrollViewer@DirectUI@@IEAAXXZ
    void _OnManipulationStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnManualVisualSwapComplete@TouchScrollViewer@DirectUI@@IEAAXXZ
    void _OnManualVisualSwapComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRequestManualVisualSwap@TouchScrollViewer@DirectUI@@IEAAXMMMMM@Z
    void _OnRequestManualVisualSwap(float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetManipulations@TouchScrollViewer@DirectUI@@IEAAXPEAVElement@2@@Z
    void _ResetManipulations(::DirectUI::Element *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTileRect@TouchScrollViewer@DirectUI@@AEAAJPEBUtagRECT@@PEAPEAUTILE@2@@Z
    long _AddTileRect(tagRECT const *, ::DirectUI::TILE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupSnapshotVisual@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _CleanupSnapshotVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearTiles@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _ClearTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CommitDCompDevice@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _CommitDCompDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateIndicatorContents@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _CreateIndicatorContents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteIndicatorContents@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _DeleteIndicatorContents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetectKeyboardInput@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _DetectKeyboardInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ElementExistsInRect@TouchScrollViewer@DirectUI@@AEAA_NPEAVElement@2@PEBUtagRECT@@@Z
    bool _ElementExistsInRect(::DirectUI::Element *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteZoomToRect@TouchScrollViewer@DirectUI@@AEAAJMMMM_N@Z
    long _ExecuteZoomToRect(float, float, float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FakeDirectManipulationCallbacksToResync@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _FakeDirectManipulationCallbacksToResync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushDeferList@TouchScrollViewer@DirectUI@@AEAAXPEAPEAV?$DynamicArray@PEAV?$CSafeElementPtr@VElement@DirectUI@@@@$0A@@2@@Z
    void _FlushDeferList(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GadgetExistsInRect@TouchScrollViewer@DirectUI@@AEAA_NPEAVElement@2@PEBUtagRECT@@@Z
    bool _GadgetExistsInRect(::DirectUI::Element *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContentExtent@TouchScrollViewer@DirectUI@@AEAAXPEAUtagSIZE@@@Z
    void _GetContentExtent(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContentRectFromScrollBars@TouchScrollViewer@DirectUI@@AEAAXPEAUtagRECT@@@Z
    void _GetContentRectFromScrollBars(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetManipulationConfiguration@TouchScrollViewer@DirectUI@@AEAA?AW4DIRECTMANIPULATION_CONFIGURATION@@H@Z
    int _GetManipulationConfiguration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMouseMovedDelta@TouchScrollViewer@DirectUI@@AEAAJPEAUMouseEvent@2@AEAUtagPOINT@@@Z
    long _GetMouseMovedDelta(::DirectUI::MouseEvent *, tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScreenPosition@TouchScrollViewer@DirectUI@@AEAA?AUtagPOINT@@PEAUMouseEvent@2@@Z
    tagPOINT _GetScreenPosition(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSemanticZoomDeltasForDirectManipulation@TouchScrollViewer@DirectUI@@AEAAXPEAM0@Z
    void _GetSemanticZoomDeltasForDirectManipulation(float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTransformedContentRect@TouchScrollViewer@DirectUI@@AEAAJQEBMPEAUtagRECT@@@Z
    long _GetTransformedContentRect(float const * const, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GoLayered@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _GoLayered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GoUnlayered@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _GoUnlayered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideScrollbarsForSemanticZoom@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _HideScrollbarsForSemanticZoom();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvalidateVirtualizedContainersEvent@TouchScrollViewer@DirectUI@@CA?AVUID@@XZ
    static UID _InvalidateVirtualizedContainersEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LayerContent@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _LayerContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LayerList@TouchScrollViewer@DirectUI@@AEAAXPEAV?$DynamicArray@PEAV?$CSafeElementPtr@VElement@DirectUI@@@@$0A@@2@_N0@Z
    void _LayerList(WindissectOpaque *, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LayerViewer@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _LayerViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapVisuals@TouchScrollViewer@DirectUI@@AEAAXMMMM_N@Z
    void _MapVisuals(float, float, float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareZoomToRect@TouchScrollViewer@DirectUI@@AEAAJMMMMPEBM0000_NPEAM222@Z
    long _PrepareZoomToRect(float, float, float, float, float const *, float const *, float const *, float const *, float const *, bool, float *, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecomputeTiles@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _RecomputeTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReinsertDManipIntoVisualTree@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _ReinsertDManipIntoVisualTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveOrRestoreSubpixelMappingOffset@TouchScrollViewer@DirectUI@@AEAAX_N@Z
    void _RemoveOrRestoreSubpixelMappingOffset(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveTileRect@TouchScrollViewer@DirectUI@@AEAAJ_K@Z
    long _RemoveTileRect(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreScrollbarsIfNeeded@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _RestoreScrollbarsIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetElementContentVisualTransform@TouchScrollViewer@DirectUI@@AEAA_NPEAVElement@2@MMMMMM@Z
    bool _SetElementContentVisualTransform(::DirectUI::Element *, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLayeredTiles@TouchScrollViewer@DirectUI@@AEAAX_N@Z
    void _SetLayeredTiles(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetManipulationHorizontalAlignment@TouchScrollViewer@DirectUI@@AEAAJW4DIRECTMANIPULATION_HORIZONTALALIGNMENT@@@Z
    long _SetManipulationHorizontalAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetManipulationVerticalAlignment@TouchScrollViewer@DirectUI@@AEAAJW4DIRECTMANIPULATION_VERTICALALIGNMENT@@@Z
    long _SetManipulationVerticalAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProcessContentSizeUpdates@TouchScrollViewer@DirectUI@@AEAAX_N0@Z
    void _SetProcessContentSizeUpdates(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScrollbarStates@TouchScrollViewer@DirectUI@@AEAAXW4ActiveState@2@_N@Z
    void _SetScrollbarStates(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSnapPointBehavior@TouchScrollViewer@DirectUI@@AEAAJPEAUIDirectManipulationPrimaryContent@@W4DIRECTMANIPULATION_MOTION_TYPES@@MM@Z
    long _SetSnapPointBehavior(IDirectManipulationPrimaryContent *, int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSnapPointCoordinate@TouchScrollViewer@DirectUI@@AEAAJPEAUIDirectManipulationPrimaryContent@@W4DIRECTMANIPULATION_MOTION_TYPES@@@Z
    long _SetSnapPointCoordinate(IDirectManipulationPrimaryContent *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupDeferList@TouchScrollViewer@DirectUI@@AEAAXPEAPEAV?$DynamicArray@PEAV?$CSafeElementPtr@VElement@DirectUI@@@@$0A@@2@@Z
    void _SetupDeferList(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowScrollbars@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _ShowScrollbars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SynchPendingDManipLayer@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _SynchPendingDManipLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TelemetryUpdateViewportDescription@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _TelemetryUpdateViewportDescription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TranslateSnapPoints@TouchScrollViewer@DirectUI@@AEAAXXZ
    void _TranslateSnapPoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateContentSize@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _UpdateContentSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateContentSnapInterval@TouchScrollViewer@DirectUI@@AEAAJW4DIRECTMANIPULATION_MOTION_TYPES@@PEBUPropertyInfo@2@1@Z
    long _UpdateContentSnapInterval(int, ::DirectUI::PropertyInfo const *, ::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateContentSnapPoints@TouchScrollViewer@DirectUI@@AEAAJW4DIRECTMANIPULATION_MOTION_TYPES@@PEBUPropertyInfo@2@@Z
    long _UpdateContentSnapPoints(int, ::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateContentSnapPoints@TouchScrollViewer@DirectUI@@AEAAJW4DIRECTMANIPULATION_MOTION_TYPES@@PEBUPropertyInfo@2@1@Z
    long _UpdateContentSnapPoints(int, ::DirectUI::PropertyInfo const *, ::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateManipulationConfiguration@TouchScrollViewer@DirectUI@@AEAAJHH@Z
    long _UpdateManipulationConfiguration(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSnapType@TouchScrollViewer@DirectUI@@AEAAJW4DIRECTMANIPULATION_MOTION_TYPES@@W4DIRECTMANIPULATION_SNAPPOINT_TYPE@@@Z
    long _UpdateSnapType(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTile@TouchScrollViewer@DirectUI@@AEAAJPEAUTILE@2@PEAV?$DynamicArray@PEAV?$CSafeElementPtr@VElement@DirectUI@@@@$0A@@2@@Z
    long _UpdateTile(::DirectUI::TILE *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTileCollectElements_Recursive@TouchScrollViewer@DirectUI@@AEAAJPEAVElement@2@PEBUtagRECT@@PEAV?$DynamicArray@PEAV?$CSafeElementPtr@VElement@DirectUI@@@@$0A@@2@_NH@Z
    long _UpdateTileCollectElements_Recursive(::DirectUI::Element *, tagRECT const *, WindissectOpaque *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTiles@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _UpdateTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateViewportSize@TouchScrollViewer@DirectUI@@AEAAJXZ
    long _UpdateViewportSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateZoomBoundaries@TouchScrollViewer@DirectUI@@AEAAJPEBUPropertyInfo@2@0@Z
    long _UpdateZoomBoundaries(::DirectUI::PropertyInfo const *, ::DirectUI::PropertyInfo const *);
};
} // namespace DirectUI
