#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 9 member(s).
namespace Library {
class Resource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?getPosition@Resource@Library@@UEBAJQEAK@Z
    virtual long getPosition(unsigned long * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?getSize@Resource@Library@@UEBAJQEAK@Z
    virtual long getSize(unsigned long * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?open@Resource@Library@@QEAAJAEBQEAUHINSTANCE__@@AEBIQEBG@Z
    long open(HINSTANCE__* const &, unsigned int const &, unsigned short const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?read@Resource@Library@@UEAAJPEAXAEBK@Z
    virtual long read(void *, unsigned long const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?setPosition@Resource@Library@@UEAAJAEBK@Z
    virtual long setPosition(unsigned long const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?skip@Resource@Library@@UEAAJAEBK@Z
    virtual long skip(unsigned long const &);
    // Category: Method | Source: PE Export
    // Symbol: ?write@Resource@Library@@UEAAJPEBXAEBK@Z
    virtual long write(void const *, unsigned long const &);
};
} // namespace Library
