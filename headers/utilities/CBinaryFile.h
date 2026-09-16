#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI::BinaryFile {
class CBinaryFile {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentEntry@CBinaryFile@BinaryFile@DirectUI@@QEBAPEBUBDXEntry@23@XZ
    ::DirectUI::BinaryFile::BDXEntry const * GetCurrentEntry() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CBinaryFile@BinaryFile@DirectUI@@QEBAJ_KPEAPEBGPEA_K@Z
    long GetResource(uint64_t, unsigned short const * *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekToResource@CBinaryFile@BinaryFile@DirectUI@@QEAAJ_K@Z
    long SeekToResource(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBinaryFile@BinaryFile@DirectUI@@QEAA@XZ
    ~CBinaryFile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CBinaryFile@BinaryFile@DirectUI@@AEAAJPEBX_K@Z
    long _Initialize(void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Verify@CBinaryFile@BinaryFile@DirectUI@@AEBAJXZ
    long _Verify() const;
};
} // namespace DirectUI::BinaryFile
