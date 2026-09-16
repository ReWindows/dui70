#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
namespace SWF {
class Movie {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?advanceFrame@Movie@SWF@@QEAA_NAEAV22@AEB_N_N@Z
    bool advanceFrame(SWF &, bool const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?prepareDisplayList@Movie@SWF@@QEAAJXZ
    long prepareDisplayList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?render@Movie@SWF@@QEBAJQEAVGraphics@Gdiplus@@QEBUColorMatrix@4@_N@Z
    long render(::Gdiplus::Graphics * const, ::Gdiplus::ColorMatrix const * const, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?resetDisplayList@Movie@SWF@@QEAAXXZ
    void resetDisplayList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Movie@SWF@@QEAA@XZ
    ~Movie();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?addTag@Movie@SWF@@IEAAJQEAVTag@2@@Z
    long addTag(::SWF::Tag * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@Movie@SWF@@IEAAJAEAVStream@Library@@@Z
    long read(::Library::Stream &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?findRequiredDepth@Movie@SWF@@AEBAGXZ
    unsigned short findRequiredDepth() const;
};
} // namespace SWF
