// Flat C exports observed in DUI70.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef DUI70_C_H
#define DUI70_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: RegisterExtendedControls (ABI unverified)
// Export: RegisterCommonControls (ABI unverified)
// Export: RegisterStandardControls (ABI unverified)
// Export: RegisterMacroControls (ABI unverified)
// Export: RegisterMiscControls (ABI unverified)
// Export: RegisterBrowserControls (ABI unverified)
// Export: RegisterXControls (ABI unverified)
// Export: RegisterPVLBehaviorFactory (ABI unverified)
// Export: DuiCreateObject (ABI unverified)
// Export: RegisterBaseControls (ABI unverified)
// Export: RegisterAllControls (ABI unverified)
// Export: BrushFromEnumI (ABI unverified)
// Export: ARGBColorFromEnumI (ABI unverified)
// Export: HrSysAllocString (ABI unverified)
// Export: GetScaleFactor (ABI unverified)
// Export: GetDesktopDPI (ABI unverified)
// Export: PreprocessBuffer (ABI unverified)
// Export: HStrDup (ABI unverified)
// Export: NotifyAccessibilityEvent (ABI unverified)
// Export: CreateTouchTooltip (ABI unverified)
// Export: InitThread (ABI unverified)
// Export: UnInitThread (ABI unverified)
// Export: IsAnimationsEnabled (ABI unverified)
// Export: ElementFromGadget (ABI unverified)
// Export: UiaOnGetObject (ABI unverified)
// Export: UiaHideOnGetObject (ABI unverified)
// Export: UiaOnDestroySink (ABI unverified)
// Export: EnableAnimations (ABI unverified)
// Export: DisableAnimations (ABI unverified)
// Export: DUI70_DUIXmlParserDestroy (ABI unverified)
// Export: DUI70_RichTextCreate (ABI unverified)
// Export: ProcessAlphaBitmapI (ABI unverified)
// Export: GetFontCache (ABI unverified)
// Export: SetDefAction (ABI unverified)
// Export: StrToID (ABI unverified)
// Export: StartMessagePump (ABI unverified)
// Export: IsPalette (ABI unverified)
// Export: DisableInitCallstackTracking (ABI unverified)
// Export: ForceDebugBreak (ABI unverified)
// Export: InitPreprocessor (ABI unverified)
// Export: SkipDLLUnloadInitChecks (ABI unverified)
// Export: _guard_check_icall_nop (ABI unverified)
// Export: wil_StagingConfig_LogFeatureProcessUsage (ABI unverified)
// Export: InitProcessPriv (ABI unverified)
// Export: FlushThemeHandles (ABI unverified)
// Export: DirectUI::svDefaultBarVisibility (ABI unverified)
// Export: DirectUI::svDefaultCheckedState (ABI unverified)
// Export: DirectUI::svDefaultConstrainLayout (ABI unverified)
// Export: DirectUI::svDefaultFrameIndex (ABI unverified)
// Export: DirectUI::svDefaultFrameWidth (ABI unverified)
// Export: DirectUI::svDefaultRangeMin (ABI unverified)
// Export: DirectUI::svDefaultThumbPosition (ABI unverified)
// Export: DirectUI::svDefaultWinStyle (ABI unverified)
// Export: UnInitProcessPriv (ABI unverified)
// Export: IsUIAutomationProviderEnabled (ABI unverified)
// Export: GetThemeHandle (ABI unverified)
// Export: DUI70_DUIXmlParserSetXMLFromResource (ABI unverified)
// Export: PurgeThemeHandles (ABI unverified)
// Export: CreateDUIWrapperEx (ABI unverified)
// Export: DirectUI::svColorFontPaletteIndexMonochrome (ABI unverified)
// Export: DirectUI::svDefaultLayoutPos (ABI unverified)
// Export: ColorFromEnumI (ABI unverified)
// Export: SetDesktopDPIOverride (ABI unverified)
// Export: UnicodeToMultiByte (ABI unverified)
// Export: UiaOnToolTip (ABI unverified)
// Export: CreateDUIWrapper (ABI unverified)
// Export: DUIStopPVLAnimation (ABI unverified)
// Export: DUI70_DUIXmlParserCreate (ABI unverified)
// Export: DUI70_DUIXmlParserCreateElement (ABI unverified)
// Export: DUI70_ElementAddListener (ABI unverified)
// Export: DUI70_ElementDestroy (ABI unverified)
// Export: DUI70_ElementEndDefer (ABI unverified)
// Export: DUI70_ElementFindDescendent (ABI unverified)
// Export: DUI70_ElementGetChildren (ABI unverified)
// Export: DUI70_ElementGetRoot (ABI unverified)
// Export: DUI70_ElementRemoveListener (ABI unverified)
// Export: DUI70_ElementSetAccRole (ABI unverified)
// Export: DUI70_ElementSetAccessible (ABI unverified)
// Export: DUI70_ElementSetContentAlign (ABI unverified)
// Export: DUI70_ElementSetContentString (ABI unverified)
// Export: DUI70_ElementSetFont (ABI unverified)
// Export: DUI70_ElementSetID (ABI unverified)
// Export: DUI70_ElementSetLayoutPos (ABI unverified)
// Export: DUI70_ElementSetVisible (ABI unverified)
// Export: DUI70_ElementStartDefer (ABI unverified)
// Export: DUI70_IsTouchButtonClickEqual (ABI unverified)
// Export: DUI70_RichTextSetConstrainLayout (ABI unverified)
// Export: DUI70_ValueRelease (ABI unverified)
// Export: AllowAllScalingPlateaus (ABI unverified)
// Export: MultiByteToUnicode (ABI unverified)
// Export: BlurBitmap (ABI unverified)
// Export: DUIDrawShadowText (ABI unverified)
// Export: DrawShadowTextEx (ABI unverified)
// Export: StopMessagePump (ABI unverified)
// Export: CreateDUIWrapperTouchEx (ABI unverified)
// Export: CreateDUIWrapperFromResource (ABI unverified)
// Export: GetElementDataEntry (ABI unverified)
// Export: GetElementMacro (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // DUI70_C_H
