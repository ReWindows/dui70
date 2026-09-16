#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
namespace DirectUI {
class SnapshotElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SnapshotElement@DirectUI@@SAJPEAVElement@2@0PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SnapshotElement@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SnapshotElement@DirectUI@@UEAA@XZ
    virtual ~SnapshotElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@SnapshotElement@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopPositionAndAlphaAnimations_recursive@SnapshotElement@DirectUI@@KAXPEAVElement@2@@Z
    static void StopPositionAndAlphaAnimations_recursive(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVisualContent@SnapshotElement@DirectUI@@KAJPEAVElement@2@PEAUIUnknown@@@Z
    static long _SetVisualContent(::DirectUI::Element *, IUnknown *);
};
} // namespace DirectUI
