#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace DirectUI {
class DUIParsePlayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DUIParsePlayer@DirectUI@@SAJPEAVDUIXmlParser@2@PEAPEAV12@@Z
    static long Create(::DirectUI::DUIXmlParser *, DUIParsePlayer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElement@DUIParsePlayer@DirectUI@@QEAAJPEAVDUIParseRecorder@2@PEBGPEAVElement@2@2PEAKPEAPEAV42@@Z
    long CreateElement(::DirectUI::DUIParseRecorder *, unsigned short const *, ::DirectUI::Element *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementStyleSheet@DUIParsePlayer@DirectUI@@SAJPEAVDUIXmlParser@2@PEAVElement@2@PEBGH@Z
    static long SetElementStyleSheet(::DirectUI::DUIXmlParser *, ::DirectUI::Element *, unsigned short const *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddArgs@DUIParsePlayer@DirectUI@@AEAAJULINEINFO@2@@Z
    long _AddArgs(::DirectUI::LINEINFO);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBehavior@DUIParsePlayer@DirectUI@@AEAAJULINEINFO@2@PEBG1PEAVValue@2@@Z
    long _CreateBehavior(::DirectUI::LINEINFO, unsigned short const *, unsigned short const *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentFrame@DUIParsePlayer@DirectUI@@AEAAPEAUReplayStackFrame@2@XZ
    ::DirectUI::ReplayStackFrame * _GetCurrentFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InstantiateElement@DUIParsePlayer@DirectUI@@AEAAJULINEINFO@2@PEAVElement@2@PEAKPEAUIClassInfo@2@@Z
    long _InstantiateElement(::DirectUI::LINEINFO, ::DirectUI::Element *, unsigned long *, ::DirectUI::IClassInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopToArgs@DUIParsePlayer@DirectUI@@AEAAJULINEINFO@2@@Z
    long _PopToArgs(::DirectUI::LINEINFO);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetComputedValue@DUIParsePlayer@DirectUI@@AEAAJULINEINFO@2@PEBUPropertyInfo@2@@Z
    long _SetComputedValue(::DirectUI::LINEINFO, ::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetValue@DUIParsePlayer@DirectUI@@AEAAJULINEINFO@2@PEBUPropertyInfo@2@PEAVValue@2@@Z
    long _SetValue(::DirectUI::LINEINFO, ::DirectUI::PropertyInfo const *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSheet@DUIParsePlayer@DirectUI@@CAJPEAVDUIXmlParser@2@ULINEINFO@2@PEBGHPEAPEAVValue@2@@Z
    static long s_GetSheet(::DirectUI::DUIXmlParser *, ::DirectUI::LINEINFO, unsigned short const *, int, ::DirectUI::Value * *);
};
} // namespace DirectUI
