#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 18 member(s).
namespace SWF {
class Shape {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?mask@Shape@SWF@@QEBAJQEAVGraphics@Gdiplus@@AEBW4CombineMode@4@@Z
    long mask(::Gdiplus::Graphics * const, int const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?parse@Shape@SWF@@QEAAJAEAVStream@Library@@@Z
    long parse(::Library::Stream &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?render@Shape@SWF@@QEBAJQEAVGraphics@Gdiplus@@QEBUColorMatrix@4@_N@Z
    long render(::Gdiplus::Graphics * const, ::Gdiplus::ColorMatrix const * const, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@Shape@SWF@@QEBAJAEAVStream@Library@@@Z
    long write(::Library::Stream &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Shape@SWF@@UEAA@XZ
    virtual ~Shape();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLineSegment@Shape@SWF@@IEAAXAEAV?$SimpleVector@ULineSegment@Shape@SWF@@@Library@@AEBUtagPOINT@@PEBU5@1HHH@Z
    void AddLineSegment(WindissectOpaque &, tagPOINT const &, tagPOINT const *, tagPOINT const &, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustBrushTransform@Shape@SWF@@IEBA_NQEAVGraphics@Gdiplus@@PEAVPathGradientBrush@4@AEAVMatrix@4@@Z
    bool AdjustBrushTransform(::Gdiplus::Graphics * const, ::Gdiplus::PathGradientBrush *, ::Gdiplus::Matrix &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToPaths@Shape@SWF@@IEAAXAEAV?$SimpleVector@ULineSegment@Shape@SWF@@@Library@@@Z
    void ConvertToPaths(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePath@Shape@SWF@@IEAAJAEAULineSegment@12@@Z
    long CreatePath(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintActionDetails@Shape@SWF@@IEAAXXZ
    void PrintActionDetails();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintBrushDetails@Shape@SWF@@IEAAXXZ
    void PrintBrushDetails();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintPathDetails@Shape@SWF@@IEAAXXZ
    void PrintPathDetails();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCurve@Shape@SWF@@IEAAJAEAVBits@2@IPEAUtagPOINT@@1@Z
    long ReadCurve(void* &, unsigned int, tagPOINT *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLine@Shape@SWF@@IEAAJAEAVBits@2@IPEAUtagPOINT@@@Z
    long ReadLine(void* &, unsigned int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadStateChange@Shape@SWF@@IEAAJAEAVBits@2@AEBIPEAUtagPOINT@@QEAI3PEAH44@Z
    long ReadStateChange(void* &, unsigned int const &, tagPOINT *, unsigned int * const, unsigned int * const, int *, int *, int *);
    // Category: Method | Source: PE Export
    // Symbol: ?readNewStyle@Shape@SWF@@MEAAJXZ
    virtual long readNewStyle();
};
} // namespace SWF
