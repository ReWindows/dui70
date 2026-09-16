#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 19 member(s).
namespace SWF {
class Types {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeBrush@Types@SWF@@SAJAEAVStream@Library@@AEB_NAEBV22@QEAPEAVBrush@Gdiplus@@@Z
    static long makeBrush(::Library::Stream &, bool const &, SWF const &, ::Gdiplus::Brush * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeBrushes@Types@SWF@@SAJAEAVStream@Library@@AEAV?$SimpleVector@PEAVBrush@Gdiplus@@@4@AEB_N2AEBV22@@Z
    static long makeBrushes(::Library::Stream &, WindissectOpaque &, bool const &, bool const &, SWF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeColor@Types@SWF@@SAJAEAVStream@Library@@AEB_NQEAVColor@Gdiplus@@@Z
    static long makeColor(::Library::Stream &, bool const &, ::Gdiplus::Color * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeColorMatrix@Types@SWF@@SA?AUColorMatrix@Gdiplus@@XZ
    static ::Gdiplus::ColorMatrix makeColorMatrix();
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeColorRGB@Types@SWF@@SAJAEAVStream@Library@@QEAVColor@Gdiplus@@@Z
    static long makeColorRGB(::Library::Stream &, ::Gdiplus::Color * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeColorRGBA@Types@SWF@@SAJAEAVStream@Library@@QEAVColor@Gdiplus@@@Z
    static long makeColorRGBA(::Library::Stream &, ::Gdiplus::Color * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeColorTransform@Types@SWF@@SAJAEAVStream@Library@@AEB_NQEAUColorMatrix@Gdiplus@@@Z
    static long makeColorTransform(::Library::Stream &, bool const &, ::Gdiplus::ColorMatrix * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeInvalidBrush@Types@SWF@@SAJQEAPEAVBrush@Gdiplus@@@Z
    static long makeInvalidBrush(::Gdiplus::Brush * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeLinearGradientBrush@Types@SWF@@SAJQEAPEAVLinearGradientBrush@Gdiplus@@@Z
    static long makeLinearGradientBrush(::Gdiplus::LinearGradientBrush * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeMatrix@Types@SWF@@SAJAEAVStream@Library@@QEAVMatrix@Gdiplus@@@Z
    static long makeMatrix(::Library::Stream &, ::Gdiplus::Matrix * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makePathGradientBrush@Types@SWF@@SAJQEAPEAVPathGradientBrush@Gdiplus@@@Z
    static long makePathGradientBrush(::Gdiplus::PathGradientBrush * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makePen@Types@SWF@@SAJAEAVStream@Library@@AEB_NQEAPEAVPen@Gdiplus@@@Z
    static long makePen(::Library::Stream &, bool const &, ::Gdiplus::Pen * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makePens@Types@SWF@@SAJAEAVStream@Library@@AEAV?$SimpleVector@PEAVPen@Gdiplus@@@4@AEB_N2@Z
    static long makePens(::Library::Stream &, WindissectOpaque &, bool const &, bool const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeRECT@Types@SWF@@SAJAEAVStream@Library@@QEAVRect@Gdiplus@@@Z
    static long makeRECT(::Library::Stream &, ::Gdiplus::Rect * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?readLength@Types@SWF@@SAJAEAVStream@Library@@AEB_NQEAG@Z
    static long readLength(::Library::Stream &, bool const &, unsigned short * const);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeGradientBrush@Types@SWF@@CAJAEAVStream@Library@@AEB_NAEBV22@AEBW4BrushType@12@QEAPEAVBrush@Gdiplus@@@Z
    static long makeGradientBrush(::Library::Stream &, bool const &, SWF const &, int const &, ::Gdiplus::Brush * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeTextureBrush@Types@SWF@@CAJAEAVStream@Library@@AEB_NAEBV22@AEBW4BrushType@12@QEAPEAVBrush@Gdiplus@@@Z
    static long makeTextureBrush(::Library::Stream &, bool const &, SWF const &, int const &, ::Gdiplus::Brush * * const);
};
} // namespace SWF
