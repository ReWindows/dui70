#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
namespace Library {
class File {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?getPosition@File@Library@@UEBAJQEAK@Z
    virtual long getPosition(unsigned long * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?getSize@File@Library@@UEBAJQEAK@Z
    virtual long getSize(unsigned long * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?open@File@Library@@QEAAJQEBGAEBK11@Z
    long open(unsigned short const * const, unsigned long const &, unsigned long const &, unsigned long const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@File@Library@@UEAAJPEAXAEBK@Z
    virtual long read(void *, unsigned long const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?setPosition@File@Library@@UEAAJAEBK@Z
    virtual long setPosition(unsigned long const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?skip@File@Library@@UEAAJAEBK@Z
    virtual long skip(unsigned long const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write@File@Library@@UEAAJPEBXAEBK@Z
    virtual long write(void const *, unsigned long const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1File@Library@@UEAA@XZ
    virtual ~File();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?setFilePointer@File@Library@@AEBAJAEBJAEBKPEAK@Z
    long setFilePointer(long const &, unsigned long const &, unsigned long *) const;
};
} // namespace Library
