#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace DirectUI {
class DUIParseRecorder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DUIParseRecorder@DirectUI@@SAJPEAVDUIXmlParser@2@PEAPEAV12@@Z
    static long Create(::DirectUI::DUIXmlParser *, DUIParseRecorder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBehavior@DUIParseRecorder@DirectUI@@QEAAJULINEINFO@2@PEBG1PEAVValue@2@@Z
    long CreateBehavior(::DirectUI::LINEINFO, unsigned short const *, unsigned short const *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayout@DUIParseRecorder@DirectUI@@QEAAJULINEINFO@2@P6AJHPEAHPEAPEAVValue@2@@ZH1@Z
    long CreateLayout(::DirectUI::LINEINFO, long ( *)(int, int *, ::DirectUI::Value * *), int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSheet@DUIParseRecorder@DirectUI@@QEAAJULINEINFO@2@PEBGH@Z
    long GetSheet(::DirectUI::LINEINFO, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@DUIParseRecorder@DirectUI@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@DUIParseRecorder@DirectUI@@QEAAJULINEINFO@2@PEBG1@Z
    long SetValue(::DirectUI::LINEINFO, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DUIParseRecorder@DirectUI@@QEAA@XZ
    ~DUIParseRecorder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateByteCode@DUIParseRecorder@DirectUI@@AEAAJPEBGPEAPEAVByteCode@2@@Z
    long _CreateByteCode(unsigned short const *, ::DirectUI::ByteCode * *);
};
} // namespace DirectUI
