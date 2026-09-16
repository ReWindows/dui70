#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
namespace DirectUI {
class CTouchEditInnerWindowlessSite {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CTouchEditInnerWindowlessSite@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTouchEditInnerWindowlessSite@DirectUI@@SAJPEAVElementProvider@2@PEAPEAUIRawElementProviderWindowlessSite@@@Z
    static long Create(::DirectUI::ElementProvider *, IRawElementProviderWindowlessSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentFragment@CTouchEditInnerWindowlessSite@DirectUI@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetAdjacentFragment(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyOverrideValue@CTouchEditInnerWindowlessSite@DirectUI@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyOverrideValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeIdPrefix@CTouchEditInnerWindowlessSite@DirectUI@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeIdPrefix(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTouchEditInnerWindowlessSite@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTouchEditInnerWindowlessSite@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchEditInnerWindowlessSite@DirectUI@@UEAA@XZ
    virtual ~CTouchEditInnerWindowlessSite();
};
} // namespace DirectUI
