#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 89 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class RichText {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?AliasedRenderingProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * AliasedRenderingProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?BaselineProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * BaselineProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ColorFontPaletteIndexProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ColorFontPaletteIndexProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?ConstrainLayoutProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ConstrainLayoutProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@RichText@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateCache@RichText@DirectUI@@SAJIPEAPEAUIDUIRichTextCache@@@Z
    static long CreateCache(unsigned int, IDUIRichTextCache * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?DisableAccTextExtendProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * DisableAccTextExtendProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontColorRunsProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontColorRunsProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontSizeRunsProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontSizeRunsProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?FontWeightRunsProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * FontWeightRunsProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@RichText@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@RichText@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorFontPaletteIndex@RichText@DirectUI@@QEAAHXZ
    int GetColorFontPaletteIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstrainLayout@RichText@DirectUI@@QEAAHXZ
    int GetConstrainLayout();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContentSize@RichText@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFactory@RichText@DirectUI@@QEAAPEAUIDWriteFactory@@XZ
    IDWriteFactory * GetFactory();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetForegroundColorRef@RichText@DirectUI@@UEAAJPEAK@Z
    virtual long GetForegroundColorRef(unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLineCount@RichText@DirectUI@@QEAAKXZ
    unsigned long GetLineCount();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetShortcutChar@RichText@DirectUI@@QEAAGXZ
    unsigned short GetShortcutChar();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTrimmedLineCount@RichText@DirectUI@@QEAAKXZ
    unsigned long GetTrimmedLineCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalScript@RichText@DirectUI@@QEAA_NXZ
    bool GetVerticalScript();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@RichText@DirectUI@@QEAAJPEAVElement@2@PEAK@Z
    long Initialize(::DirectUI::Element *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?LineSpacingProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LineSpacingProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?LocaleProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * LocaleProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?MapRunsToClustersProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * MapRunsToClustersProp();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@RichText@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@RichText@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@RichText@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?OverhangOffsetProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * OverhangOffsetProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@RichText@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@RichText@DirectUI@@SAJXZ
    static long Register();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0RichText@DirectUI@@QEAA@XZ
    RichText();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetAliasedRendering@RichText@DirectUI@@QEAAJ_N@Z
    long SetAliasedRendering(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBaseline@RichText@DirectUI@@QEAAJH@Z
    long SetBaseline(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCache@RichText@DirectUI@@QEAAXKPEAUIDUIRichTextCache@@@Z
    void SetCache(unsigned long, IDUIRichTextCache *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetColorFontPaletteIndex@RichText@DirectUI@@QEAAJH@Z
    long SetColorFontPaletteIndex(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetConstrainLayout@RichText@DirectUI@@QEAAJH@Z
    long SetConstrainLayout(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDWriteFontCollection@RichText@DirectUI@@QEAAXPEAUIDWriteFontCollection@@@Z
    void SetDWriteFontCollection(IDWriteFontCollection *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDWriteTextLayout@RichText@DirectUI@@QEAAXPEAUIDWriteTextLayout@@@Z
    void SetDWriteTextLayout(IDWriteTextLayout *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDisableAccTextExtend@RichText@DirectUI@@QEAAJ_N@Z
    long SetDisableAccTextExtend(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFontColorRuns@RichText@DirectUI@@QEAAJPEBG@Z
    long SetFontColorRuns(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFontSizeRuns@RichText@DirectUI@@QEAAJPEBG@Z
    long SetFontSizeRuns(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFontWeightRuns@RichText@DirectUI@@QEAAJPEBG@Z
    long SetFontWeightRuns(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLineSpacing@RichText@DirectUI@@QEAAJH@Z
    long SetLineSpacing(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetLocale@RichText@DirectUI@@QEAAJPEBG@Z
    long SetLocale(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMapRunsToClusters@RichText@DirectUI@@QEAAJ_N@Z
    long SetMapRunsToClusters(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMaxLineCount@RichText@DirectUI@@QEAAXI@Z
    void SetMaxLineCount(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOverhangOffset@RichText@DirectUI@@QEAAJH@Z
    long SetOverhangOffset(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTypography@RichText@DirectUI@@QEAAJPEBG@Z
    long SetTypography(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTypographyRuns@RichText@DirectUI@@QEAAJPEBG@Z
    long SetTypographyRuns(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetVerticalScript@RichText@DirectUI@@QEAAJ_N@Z
    long SetVerticalScript(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?StopUsingCache@RichText@DirectUI@@QEAAXXZ
    void StopUsingCache();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TypographyProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TypographyProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TypographyRunsProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TypographyRunsProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?VerticalScriptProp@RichText@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * VerticalScriptProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1RichText@DirectUI@@UEAA@XZ
    virtual ~RichText();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustRangeForPathJoinCharacters@RichText@DirectUI@@AEAAXPEAUDWRITE_TEXT_RANGE@@@Z
    void _AdjustRangeForPathJoinCharacters(DWRITE_TEXT_RANGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyDrawTextFlags@RichText@DirectUI@@AEAAJXZ
    long _ApplyDrawTextFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyIntratextFormatting@RichText@DirectUI@@AEAAJXZ
    long _ApplyIntratextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BuildRenderStringForDWrite@RichText@DirectUI@@AEAAPEBGPEBGG_N@Z
    unsigned short const * _BuildRenderStringForDWrite(unsigned short const *, unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDWriteLayout@RichText@DirectUI@@AEAAJPEBUtagRECT@@PEAVValue@2@@Z
    long _CreateDWriteLayout(tagRECT const *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLeadDrawOffsetIsSet@RichText@DirectUI@@AEAAXXZ
    void _EnsureLeadDrawOffsetIsSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTextFormat@RichText@DirectUI@@AEAAJXZ
    long _EnsureTextFormat();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushDWrite@RichText@DirectUI@@AEAAXXZ
    void _FlushDWrite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDWFontWeight@RichText@DirectUI@@AEAA?AW4DWRITE_FONT_WEIGHT@@XZ
    int _GetDWFontWeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDWMetrics@RichText@DirectUI@@AEAAJPEAUDWRITE_TEXT_METRICS@@@Z
    long _GetDWMetrics(DWRITE_TEXT_METRICS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDWOverhangMetrics@RichText@DirectUI@@AEAAJPEAUDWRITE_OVERHANG_METRICS@@@Z
    long _GetDWOverhangMetrics(DWRITE_OVERHANG_METRICS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultOverhang@RichText@DirectUI@@AEAAHXZ
    int _GetDefaultOverhang();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMinSizeWidth@RichText@DirectUI@@AEAAHXZ
    int _GetMinSizeWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetScaledOverhangOffset@RichText@DirectUI@@AEAAHXZ
    int _GetScaledOverhangOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDWrite@RichText@DirectUI@@AEAAJXZ
    long _InitDWrite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintStringContentDWrite@RichText@DirectUI@@AEAAXPEAUHDC__@@PEBUtagRECT@@1PEAVValue@2@@Z
    void _PaintStringContentDWrite(HDC__*, tagRECT const *, tagRECT const *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareTextRender@RichText@DirectUI@@AEAAXXZ
    void _PrepareTextRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAcceleratorAccentIfAppropriate@RichText@DirectUI@@AEAAXXZ
    void _SetAcceleratorAccentIfAppropriate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontColorRun@RichText@DirectUI@@AEAAJPEBGUDWRITE_TEXT_RANGE@@@Z
    long _SetFontColorRun(unsigned short const *, DWRITE_TEXT_RANGE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontColorRunsInternal@RichText@DirectUI@@AEAAJXZ
    long _SetFontColorRunsInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontSizeRun@RichText@DirectUI@@AEAAJPEBGUDWRITE_TEXT_RANGE@@@Z
    long _SetFontSizeRun(unsigned short const *, DWRITE_TEXT_RANGE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontSizeRunsInternal@RichText@DirectUI@@AEAAJXZ
    long _SetFontSizeRunsInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontWeightRun@RichText@DirectUI@@AEAAJPEBGUDWRITE_TEXT_RANGE@@@Z
    long _SetFontWeightRun(unsigned short const *, DWRITE_TEXT_RANGE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontWeightRunsInternal@RichText@DirectUI@@AEAAJXZ
    long _SetFontWeightRunsInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetLineSpacingInternal@RichText@DirectUI@@AEAAJXZ
    long _SetLineSpacingInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRangedStringRunsWithValue@RichText@DirectUI@@AEAAJPEBGW4StringRunStyles@2@@Z
    long _SetRangedStringRunsWithValue(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStrikethrough@RichText@DirectUI@@AEAAJXZ
    long _SetStrikethrough();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTypographyInternal@RichText@DirectUI@@AEAAJXZ
    long _SetTypographyInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTypographyRun@RichText@DirectUI@@AEAAJPEBGUDWRITE_TEXT_RANGE@@@Z
    long _SetTypographyRun(unsigned short const *, DWRITE_TEXT_RANGE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTypographyRunsInternal@RichText@DirectUI@@AEAAJXZ
    long _SetTypographyRunsInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUnderline@RichText@DirectUI@@AEAAJXZ
    long _SetUnderline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateRangeForClusterMetrics@RichText@DirectUI@@AEAAXPEAUDWRITE_TEXT_RANGE@@@Z
    void _UpdateRangeForClusterMetrics(DWRITE_TEXT_RANGE *);
};
} // namespace DirectUI
