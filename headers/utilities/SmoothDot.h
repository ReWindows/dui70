#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 4 member(s).
namespace DirectUI {
class SmoothDot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CalculateDotPositions@SmoothDot@DirectUI@@SAXPEAUHDC__@@PEAUHGADGET__@@K_J2KPEAHPEAT_LARGE_INTEGER@@PEA_J5@Z
    static void s_CalculateDotPositions(HDC__*, HGADGET__*, unsigned long, int64_t, int64_t, unsigned long, int *, _LARGE_INTEGER *, int64_t *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DrawDot@SmoothDot@DirectUI@@SAXPEBUDRAW_PARAMS@12@MMM@Z
    static void s_DrawDot(WindissectOpaque const *, float, float, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CalcDotPixelIntensity@SmoothDot@DirectUI@@CAHMMM@Z
    static int s_CalcDotPixelIntensity(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetPixel@SmoothDot@DirectUI@@CAXPEBUDRAW_PARAMS@12@HHH@Z
    static void s_SetPixel(WindissectOpaque const *, int, int, int);
};
} // namespace DirectUI
