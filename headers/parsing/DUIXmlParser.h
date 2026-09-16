#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 146 member(s).
namespace DirectUI {
class DUIXmlParser {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CopySheets@DUIXmlParser@DirectUI@@QEAAJPEAPEAV?$DynamicArray@PEAVValue@DirectUI@@$0A@@2@@Z
    long CopySheets(WindissectOpaque * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@DUIXmlParser@DirectUI@@SAJPEAPEAV12@P6APEAVValue@2@PEBGPEAX@Z2P6AX11H2@Z2@Z
    static long Create(DUIXmlParser * *, ::DirectUI::Value * ( *)(unsigned short const *, void *), void *, void ( *)(unsigned short const *, unsigned short const *, int, void *), void *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateElement@DUIXmlParser@DirectUI@@QEAAJPEBGPEAVElement@2@1PEAKPEAPEAV32@@Z
    long CreateElement(unsigned short const *, ::DirectUI::Element *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DUIXmlParser@DirectUI@@QEAA@XZ
    DUIXmlParser();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DUIXmlParser@DirectUI@@QEAA@AEBV01@@Z
    DUIXmlParser(DUIXmlParser const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Destroy@DUIXmlParser@DirectUI@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PE Export
    // Symbol: ?EnableDesignMode@DUIXmlParser@DirectUI@@QEAAXXZ
    void EnableDesignMode();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGetSheetCallback@DUIXmlParser@DirectUI@@QEAAP6APEAVValue@2@PEBGPEAX@ZXZ
    ::DirectUI::Value * (*GetGetSheetCallback())(unsigned short const *, void *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHInstance@DUIXmlParser@DirectUI@@QEAAPEAUHINSTANCE__@@XZ
    HINSTANCE__* GetHInstance();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetOverrideScaleFactor@DUIXmlParser@DirectUI@@QEBA_NPEAM@Z
    bool GetOverrideScaleFactor(float *) const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetResourceHInstance@DUIXmlParser@DirectUI@@QEAAPEAUHINSTANCE__@@XZ
    HINSTANCE__* GetResourceHInstance();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSheet@DUIXmlParser@DirectUI@@QEAAJPEBGPEAPEAVValue@2@@Z
    long GetSheet(unsigned short const *, ::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSheetContext@DUIXmlParser@DirectUI@@QEAAPEAXXZ
    void * GetSheetContext();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDynamicScaling@DUIXmlParser@DirectUI@@QEAA_NXZ
    bool IsDynamicScaling();
    // Category: Method | Source: PE Export
    // Symbol: ?LookupElement@DUIXmlParser@DirectUI@@QEAAJPEAUIXmlReader@@PEBGPEAUHINSTANCE__@@PEAPEAUIClassInfo@2@@Z
    long LookupElement(IXmlReader *, unsigned short const *, HINSTANCE__*, ::DirectUI::IClassInfo * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LookupElement@DUIXmlParser@DirectUI@@QEAAJULINEINFO@2@PEBGPEAUHINSTANCE__@@PEAPEAUIClassInfo@2@@Z
    long LookupElement(::DirectUI::LINEINFO, unsigned short const *, HINSTANCE__*, ::DirectUI::IClassInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDefaultHInstance@DUIXmlParser@DirectUI@@QEAAXPEAUHINSTANCE__@@@Z
    void SetDefaultHInstance(HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDynamicScaling@DUIXmlParser@DirectUI@@QEAAXW4DynamicScaleParsing@2@@Z
    void SetDynamicScaling(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetGetSheetCallback@DUIXmlParser@DirectUI@@QEAAXP6APEAVValue@2@PEBGPEAX@Z1@Z
    void SetGetSheetCallback(::DirectUI::Value * ( *)(unsigned short const *, void *), void *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOverrideScaleFactor@DUIXmlParser@DirectUI@@QEAAXM@Z
    void SetOverrideScaleFactor(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetParseErrorCallback@DUIXmlParser@DirectUI@@QEAAXP6AXPEBG0HPEAX@Z1@Z
    void SetParseErrorCallback(void ( *)(unsigned short const *, unsigned short const *, int, void *), void *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPreprocessedXML@DUIXmlParser@DirectUI@@QEAAJPEBGPEAUHINSTANCE__@@1@Z
    long SetPreprocessedXML(unsigned short const *, HINSTANCE__*, HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetRootWindowForTheming@DUIXmlParser@DirectUI@@QEAAXPEAUHWND__@@@Z
    void SetRootWindowForTheming(HWND__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetScaleFactor@DUIXmlParser@DirectUI@@QEAAXM@Z
    void SetScaleFactor(float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetUnavailableIcon@DUIXmlParser@DirectUI@@QEAAXPEAUHICON__@@@Z
    void SetUnavailableIcon(HICON__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetUnknownAttrCallback@DUIXmlParser@DirectUI@@QEAAXP6A_NPEBGPEAX@Z1@Z
    void SetUnknownAttrCallback(bool ( *)(unsigned short const *, void *), void *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXML@DUIXmlParser@DirectUI@@QEAAJPEBGPEAUHINSTANCE__@@1@Z
    long SetXML(unsigned short const *, HINSTANCE__*, HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXMLFromResource@DUIXmlParser@DirectUI@@QEAAJPEBG0PEAUHINSTANCE__@@1@Z
    long SetXMLFromResource(unsigned short const *, unsigned short const *, HINSTANCE__*, HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXMLFromResource@DUIXmlParser@DirectUI@@QEAAJPEBGPEAUHINSTANCE__@@1@Z
    long SetXMLFromResource(unsigned short const *, HINSTANCE__*, HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXMLFromResource@DUIXmlParser@DirectUI@@QEAAJIPEAUHINSTANCE__@@0@Z
    long SetXMLFromResource(unsigned int, HINSTANCE__*, HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXMLFromResource@DUIXmlParser@DirectUI@@QEAAJIPEBGPEAUHINSTANCE__@@1@Z
    long SetXMLFromResource(unsigned int, unsigned short const *, HINSTANCE__*, HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetXMLFromResourceWithTheme@DUIXmlParser@DirectUI@@QEAAJIPEAUHINSTANCE__@@00@Z
    long SetXMLFromResourceWithTheme(unsigned int, HINSTANCE__*, HINSTANCE__*, HINSTANCE__*);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateSheets@DUIXmlParser@DirectUI@@QEAAJPEAVElement@2@@Z
    long UpdateSheets(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?_DestroyTables@DUIXmlParser@DirectUI@@QEAAXXZ
    void _DestroyTables();
    // Category: Method | Source: PE Export
    // Symbol: ?_InitializeTables@DUIXmlParser@DirectUI@@QEAAJXZ
    long _InitializeTables();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1DUIXmlParser@DirectUI@@UEAA@XZ
    virtual ~DUIXmlParser();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?AddRulesToStyleSheet@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAVStyleSheet@2@PEBGPEAV?$DynamicArray@UXMLParserCond@DirectUI@@$0A@@2@PEAV?$DynamicArray@PEAG$0A@@2@@Z
    long AddRulesToStyleSheet(IXmlReader *, ::DirectUI::StyleSheet *, unsigned short const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateLayout@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@P6AJHPEAHPEAPEAVValue@2@@Z@Z
    long CreateLayout(::DirectUI::ParserTools::ExprNode const *, long ( *)(int, int *, ::DirectUI::Value * *));
    // Category: Method | Source: PE Export
    // Symbol: ?CreateStyleSheet@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEBGPEAPEAVStyleSheet@2@@Z
    long CreateStyleSheet(IXmlReader *, unsigned short const *, ::DirectUI::StyleSheet * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateXmlReader@DUIXmlParser@DirectUI@@IEAAJPEAPEAUIXmlReader@@@Z
    long CreateXmlReader(IXmlReader * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateXmlReaderFromHGLOBAL@DUIXmlParser@DirectUI@@IEAAJPEAXPEAPEAUIXmlReader@@@Z
    long CreateXmlReaderFromHGLOBAL(void *, IXmlReader * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateXmlReaderInputWithEncodingName@DUIXmlParser@DirectUI@@IEAAJPEAUIStream@@PEBGPEAPEAUIUnknown@@@Z
    long CreateXmlReaderInputWithEncodingName(IStream *, unsigned short const *, IUnknown * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetParserCommon@DUIXmlParser@DirectUI@@IEAAJPEAPEAV12@@Z
    long GetParserCommon(DUIXmlParser * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPropValPairInfo@DUIXmlParser@DirectUI@@IEAAJULINEINFO@2@PEAUIClassInfo@2@PEBG2PEAPEBUPropertyInfo@2@PEAPEAVValue@2@@Z
    long GetPropValPairInfo(::DirectUI::LINEINFO, ::DirectUI::IClassInfo *, unsigned short const *, unsigned short const *, ::DirectUI::PropertyInfo const * *, ::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPropValPairInfo@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAUIClassInfo@2@PEBG2PEAPEBUPropertyInfo@2@PEAPEAVValue@2@@Z
    long GetPropValPairInfo(IXmlReader *, ::DirectUI::IClassInfo *, unsigned short const *, unsigned short const *, ::DirectUI::PropertyInfo const * *, ::DirectUI::Value * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetValueParser@DUIXmlParser@DirectUI@@IEAAJPEAPEAVValueParser@ParserTools@2@@Z
    long GetValueParser(::DirectUI::ParserTools::ValueParser * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetXmlLiteDll@DUIXmlParser@DirectUI@@KAJPEAPEAUHINSTANCE__@@@Z
    static long GetXmlLiteDll(HINSTANCE__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@DUIXmlParser@DirectUI@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeParserFromXmlReader@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAUHINSTANCE__@@1@Z
    long InitializeParserFromXmlReader(IXmlReader *, HINSTANCE__*, HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsThemeClassName@DUIXmlParser@DirectUI@@KA_NPEBUExprNode@ParserTools@2@@Z
    static bool IsThemeClassName(::DirectUI::ParserTools::ExprNode const *);
    // Category: Method | Source: PE Export
    // Symbol: ?MapPropertyEnumValue@DUIXmlParser@DirectUI@@IEAAJPEBUEnumMap@2@PEBGPEAH@Z
    long MapPropertyEnumValue(::DirectUI::EnumMap const *, unsigned short const *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?MapPropertyNameToPropertyInfo@DUIXmlParser@DirectUI@@IEAAJULINEINFO@2@PEAUIClassInfo@2@PEBGPEAPEBUPropertyInfo@2@@Z
    long MapPropertyNameToPropertyInfo(::DirectUI::LINEINFO, ::DirectUI::IClassInfo *, unsigned short const *, ::DirectUI::PropertyInfo const * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseARGBColor@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAKPEA_N@Z
    long ParseARGBColor(::DirectUI::ParserTools::ExprNode const *, unsigned long *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseArgs@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEATParsedArg@12@IPEBD@Z
    long ParseArgs(::DirectUI::ParserTools::ExprNode const *, WindissectOpaque *, unsigned int, char const *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseAtomValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseAtomValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseBehavior@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@@Z
    long ParseBehavior(::DirectUI::ParserTools::ExprNode const *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseBehaviorArgValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseBehaviorArgValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseBoolValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseBoolValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseColor@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAK@Z
    long ParseColor(::DirectUI::ParserTools::ExprNode const *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDFCFill@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseDFCFill(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDTBFill@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseDTBFill(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseDoubleListValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseDoubleListValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseFillValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseFillValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseFloat@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAMPEA_N@Z
    long ParseFloat(::DirectUI::ParserTools::ExprNode const *, float *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseFloatValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseFloatValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseFunction@DUIXmlParser@DirectUI@@IEAAJPEBGPEBUExprNode@ParserTools@2@PEATParsedArg@12@IPEBD@Z
    long ParseFunction(unsigned short const *, ::DirectUI::ParserTools::ExprNode const *, WindissectOpaque *, unsigned int, char const *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGTCColor@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAKPEA_N@Z
    long ParseGTCColor(::DirectUI::ParserTools::ExprNode const *, unsigned long *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGTFStr@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseGTFStr(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGTMarRect@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAUScaledRECT@2@PEA_N@Z
    long ParseGTMarRect(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::ScaledRECT *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGTMetInt@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAHPEA_N@Z
    long ParseGTMetInt(::DirectUI::ParserTools::ExprNode const *, int *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGTPartSize@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAUScaledSIZE@2@PEA_N@Z
    long ParseGTPartSize(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::ScaledSIZE *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGradientFill@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseGradientFill(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGraphicGraphic@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseGraphicGraphic(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGraphicHelper@DUIXmlParser@DirectUI@@IEAAJ_NPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseGraphicHelper(bool, ::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseGraphicValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseGraphicValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseIconGraphic@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseIconGraphic(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseImageGraphic@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseImageGraphic(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseIntValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseIntValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseLayoutValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@@Z
    long ParseLayoutValue(::DirectUI::ParserTools::ExprNode const *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseLibrary@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAUHINSTANCE__@@@Z
    long ParseLibrary(::DirectUI::ParserTools::ExprNode const *, HINSTANCE__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseLiteral@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEBG@Z
    long ParseLiteral(::DirectUI::ParserTools::ExprNode const *, unsigned short const * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseLiteralColor@DUIXmlParser@DirectUI@@IEAAJPEBGPEAK@Z
    long ParseLiteralColor(unsigned short const *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseLiteralColorInt@DUIXmlParser@DirectUI@@IEAAJPEBGPEAH@Z
    long ParseLiteralColorInt(unsigned short const *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseLiteralNumber@DUIXmlParser@DirectUI@@IEAAJPEBGPEAHPEA_N@Z
    long ParseLiteralNumber(unsigned short const *, int *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseMagnitude@DUIXmlParser@DirectUI@@IEAAJPEBGPEAHPEA_N@Z
    long ParseMagnitude(unsigned short const *, int *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseMagnitudeFloat@DUIXmlParser@DirectUI@@IEAAJPEBGPEAMPEA_N@Z
    long ParseMagnitudeFloat(unsigned short const *, float *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseNumber@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAHPEA_N@Z
    long ParseNumber(::DirectUI::ParserTools::ExprNode const *, int *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParsePointValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParsePointValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseQuotedString@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEBG@Z
    long ParseQuotedString(::DirectUI::ParserTools::ExprNode const *, unsigned short const * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseRGBColor@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAKPEA_N@Z
    long ParseRGBColor(::DirectUI::ParserTools::ExprNode const *, unsigned long *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseRect@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAUScaledRECT@2@@Z
    long ParseRect(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::ScaledRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseRectRect@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAUScaledRECT@2@PEA_N@Z
    long ParseRectRect(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::ScaledRECT *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseRectValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseRectValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseResStr@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseResStr(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseResid@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEBG@Z
    long ParseResid(::DirectUI::ParserTools::ExprNode const *, unsigned short const * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseSGraphicGraphic@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseSGraphicGraphic(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseSGraphicHelper@DUIXmlParser@DirectUI@@IEAAJ_NPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseSGraphicHelper(bool, ::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseSize@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAUScaledSIZE@2@@Z
    long ParseSize(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::ScaledSIZE *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseSizeSize@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAUScaledSIZE@2@PEA_N@Z
    long ParseSizeSize(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::ScaledSIZE *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseSizeValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseSizeValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseStringValue@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@@Z
    long ParseStringValue(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseStyleSheets@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@@Z
    long ParseStyleSheets(IXmlReader *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseSysMetricInt@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAHPEA_N@Z
    long ParseSysMetricInt(::DirectUI::ParserTools::ExprNode const *, int *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseSysMetricStr@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@PEAPEAVValue@2@PEA_N@Z
    long ParseSysMetricStr(::DirectUI::ParserTools::ExprNode const *, ::DirectUI::Value * *, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParseTheme@DUIXmlParser@DirectUI@@IEAAJPEBUExprNode@ParserTools@2@_NPEAPEAX@Z
    long ParseTheme(::DirectUI::ParserTools::ExprNode const *, bool, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QuerySysMetric@DUIXmlParser@DirectUI@@IEAAHHPEA_N@Z
    int QuerySysMetric(int, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?QuerySysMetricStr@DUIXmlParser@DirectUI@@IEAAPEBGHPEAGI@Z
    unsigned short const * QuerySysMetricStr(int, unsigned short *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?ReturnValueParser@DUIXmlParser@DirectUI@@IEAAXPEAVValueParser@ParserTools@2@@Z
    void ReturnValueParser(::DirectUI::ParserTools::ValueParser *);
    // Category: Method | Source: PE Export
    // Symbol: ?SendParseError@DUIXmlParser@DirectUI@@IEAAXPEBG0PEAUIXmlReader@@J@Z
    void SendParseError(unsigned short const *, unsigned short const *, IXmlReader *, long);
    // Category: Method | Source: PE Export
    // Symbol: ?SendParseError@DUIXmlParser@DirectUI@@IEAAXPEBG0HHJ@Z
    void SendParseError(unsigned short const *, unsigned short const *, int, int, long);
    // Category: Method | Source: PE Export
    // Symbol: ?_BuildChildren@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAVElement@2@@Z
    long _BuildChildren(IXmlReader *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?_BuildElement@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAVElement@2@PEAPEAV42@@Z
    long _BuildElement(IXmlReader *, ::DirectUI::Element *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_BuildFromBinary@DUIXmlParser@DirectUI@@IEAAJPEAVElement@2@0PEBGPEAKPEAPEAV32@@Z
    long _BuildFromBinary(::DirectUI::Element *, ::DirectUI::Element *, unsigned short const *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_BuildStyles@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@@Z
    long _BuildStyles(IXmlReader *);
    // Category: Method | Source: PE Export
    // Symbol: ?_CreateValue@DUIXmlParser@DirectUI@@IEAAJPEBGPEBUPropertyInfo@2@PEAPEAVValue@2@@Z
    long _CreateValue(unsigned short const *, ::DirectUI::PropertyInfo const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_EnterOnCurrentThread@DUIXmlParser@DirectUI@@IEAAJXZ
    long _EnterOnCurrentThread();
    // Category: Method | Source: PE Export
    // Symbol: ?_GetClassForElement@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAPEAUIClassInfo@2@@Z
    long _GetClassForElement(IXmlReader *, ::DirectUI::IClassInfo * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetClassForElementByName@DUIXmlParser@DirectUI@@IEAAJPEBGPEAPEAUIClassInfo@2@@Z
    long _GetClassForElementByName(unsigned short const *, ::DirectUI::IClassInfo * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetLineInfo@DUIXmlParser@DirectUI@@IEAA?AULINEINFO@2@PEAUIXmlReader@@@Z
    ::DirectUI::LINEINFO _GetLineInfo(IXmlReader *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetPropertyForAttribute@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAUIClassInfo@2@PEAPEBUPropertyInfo@2@@Z
    long _GetPropertyForAttribute(IXmlReader *, ::DirectUI::IClassInfo *, ::DirectUI::PropertyInfo const * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_GetValueForStyleSheet@DUIXmlParser@DirectUI@@IEAAJPEAUIClassInfo@2@PEBG1PEAPEBUPropertyInfo@2@PEAPEAVValue@2@@Z
    long _GetValueForStyleSheet(::DirectUI::IClassInfo *, unsigned short const *, unsigned short const *, ::DirectUI::PropertyInfo const * *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_LeaveOnCurrentThread@DUIXmlParser@DirectUI@@IEAAXXZ
    void _LeaveOnCurrentThread();
    // Category: Method | Source: PE Export
    // Symbol: ?_ParseBehavior@DUIXmlParser@DirectUI@@IEAAJPEAVElement@2@PEBG@Z
    long _ParseBehavior(::DirectUI::Element *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_ParseLayout@DUIXmlParser@DirectUI@@IEAAJPEBGPEAPEAVValue@2@@Z
    long _ParseLayout(unsigned short const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_ParseValue@DUIXmlParser@DirectUI@@IEAAJPEBUPropertyInfo@2@PEBGPEAPEAVValue@2@@Z
    long _ParseValue(::DirectUI::PropertyInfo const *, unsigned short const *, ::DirectUI::Value * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_RecordElementBehaviors@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEBG@Z
    long _RecordElementBehaviors(IXmlReader *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_RecordElementLayout@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEBG@Z
    long _RecordElementLayout(IXmlReader *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_RecordElementStyleSheet@DUIXmlParser@DirectUI@@IEAAJPEBG_N@Z
    long _RecordElementStyleSheet(unsigned short const *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?_RecordElementTrees@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@@Z
    long _RecordElementTrees(IXmlReader *);
    // Category: Method | Source: PE Export
    // Symbol: ?_RecordElementWithChildren@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@_NPEAPEAG@Z
    long _RecordElementWithChildren(IXmlReader *, bool, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_RecordInstantiateElement@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAPEAG@Z
    long _RecordInstantiateElement(IXmlReader *, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?_RecordSetElementProperties@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@@Z
    long _RecordSetElementProperties(IXmlReader *);
    // Category: Method | Source: PE Export
    // Symbol: ?_RecordSetValue@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEBG1@Z
    long _RecordSetValue(IXmlReader *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?_ResolveStyleSheet@DUIXmlParser@DirectUI@@IEAAJPEBGPEAPEAVValue@2@PEAI@Z
    long _ResolveStyleSheet(unsigned short const *, ::DirectUI::Value * *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetBinaryXml@DUIXmlParser@DirectUI@@IEAAJPEBE_KPEAUHINSTANCE__@@@Z
    long _SetBinaryXml(unsigned char const *, uint64_t, HINSTANCE__*);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetProperties@DUIXmlParser@DirectUI@@IEAAJPEAUIXmlReader@@PEAUIClassInfo@2@PEAVElement@2@@Z
    long _SetProperties(IXmlReader *, ::DirectUI::IClassInfo *, ::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetXMLFromResource@DUIXmlParser@DirectUI@@IEAAJPEBG0PEAUHINSTANCE__@@11@Z
    long _SetXMLFromResource(unsigned short const *, unsigned short const *, HINSTANCE__*, HINSTANCE__*, HINSTANCE__*);
    // Category: Method | Source: PE Export
    // Symbol: ?_SetupParserState@DUIXmlParser@DirectUI@@IEAAJPEAUHINSTANCE__@@0@Z
    long _SetupParserState(HINSTANCE__*, HINSTANCE__*);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetParseState@DUIXmlParser@DirectUI@@AEAAXW4_DUI_PARSE_STATE@2@@Z
    void SetParseState(int);
    // Category: Method | Source: PE Export
    // Symbol: ?_ScalePointsToPixels@DUIXmlParser@DirectUI@@AEBAHH@Z
    int _ScalePointsToPixels(int) const;
    // Category: Method | Source: PE Export
    // Symbol: ?_ScalePointsToPixels@DUIXmlParser@DirectUI@@AEBAMM@Z
    float _ScalePointsToPixels(float) const;
    // Category: Method | Source: PE Export
    // Symbol: ?_ScaleRelativePixels@DUIXmlParser@DirectUI@@AEBAHH@Z
    int _ScaleRelativePixels(int) const;
    // Category: Method | Source: PE Export
    // Symbol: ?_ScaleRelativePixels@DUIXmlParser@DirectUI@@AEBAMM@Z
    float _ScaleRelativePixels(float) const;
};
} // namespace DirectUI
