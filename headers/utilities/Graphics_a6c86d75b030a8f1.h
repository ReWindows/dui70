#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 7 member(s).
namespace Library {
class Graphics {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEncoderClsid@Graphics@Library@@SAHPEBGPEAU_GUID@@@Z
    static int GetEncoderClsid(unsigned short const *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@Graphics@Library@@SA?AVColor@Gdiplus@@AEBV34@PEBUColorMatrix@4@@Z
    static ::Gdiplus::Color apply(::Gdiplus::Color const &, ::Gdiplus::ColorMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?apply@Graphics@Library@@SA?AUColorMatrix@Gdiplus@@AEBU34@0@Z
    static ::Gdiplus::ColorMatrix apply(::Gdiplus::ColorMatrix const &, ::Gdiplus::ColorMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?convertPixelFormat@Graphics@Library@@SAJQEAVBitmap@Gdiplus@@AEBHQEAPEAV34@@Z
    static long convertPixelFormat(::Gdiplus::Bitmap * const, int const &, ::Gdiplus::Bitmap * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?makeBitmap@Graphics@Library@@SAJAEBV?$SimpleVector@E@2@AEBHQEAPEAVBitmap@Gdiplus@@@Z
    static long makeBitmap(WindissectOpaque const &, int const &, ::Gdiplus::Bitmap * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?setScreenTransform@Graphics@Library@@SAJQEAV1Gdiplus@@AEBVRectF@3@1_N@Z
    static long setScreenTransform(::Gdiplus::Graphics * const, ::Gdiplus::RectF const &, ::Gdiplus::RectF const &, bool);
};
} // namespace Library
