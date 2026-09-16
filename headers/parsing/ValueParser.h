#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace DirectUI::ParserTools {
class ValueParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ValueParser@ParserTools@DirectUI@@SAJPEAPEAV123@@Z
    static long Create(::DirectUI::ParserTools::ValueParser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@ValueParser@ParserTools@DirectUI@@QEAAJPEBGPEAPEBUExprNode@23@@Z
    long Parse(unsigned short const *, ::DirectUI::ParserTools::ExprNode const * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ValueParser@ParserTools@DirectUI@@QEAA@XZ
    ~ValueParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishComplexNodeT@ValueParser@ParserTools@DirectUI@@AEAAJI@Z
    long FinishComplexNodeT(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExprNodeT@ValueParser@ParserTools@DirectUI@@AEAAJW4ExprNodeType@23@H@Z
    long InsertExprNodeT(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseFuncall@ValueParser@ParserTools@DirectUI@@AEAAJXZ
    long ParseFuncall();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseOr@ValueParser@ParserTools@DirectUI@@AEAAJXZ
    long ParseOr();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseWorker@ValueParser@ParserTools@DirectUI@@AEAAJXZ
    long ParseWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuf@ValueParser@ParserTools@DirectUI@@AEAAXXZ
    void ResetBuf();
};
} // namespace DirectUI::ParserTools
