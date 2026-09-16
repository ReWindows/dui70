#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 2 member(s).
namespace SWF {
class DefineJPEG {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?readBitmap@DefineJPEG@SWF@@IEAAJAEAVStream@Library@@AEBHAEBI@Z
    long readBitmap(::Library::Stream &, int const &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?readBitmap@DefineJPEG@SWF@@IEAAJAEAVStream@Library@@AEBHAEBIAEAV?$SimpleVector@E@4@2@Z
    long readBitmap(::Library::Stream &, int const &, unsigned int const &, WindissectOpaque &, unsigned int const &);
};
} // namespace SWF
