#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
namespace DirectUI {
class CStyleSheet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRule@CStyleSheet@DirectUI@@UEAAJPEBGPEAUIClassInfo@2@PEAUCond@2@PEAUDecl@2@@Z
    virtual long AddRule(unsigned short const *, ::DirectUI::IClassInfo *, ::DirectUI::Cond *, ::DirectUI::Decl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CStyleSheet@DirectUI@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSheetDependencies@CStyleSheet@DirectUI@@UEAAXPEAVElement@2@PEBUPropertyInfo@2@PEAUDepRecs@2@PEAVDeferCycle@2@PEAJ@Z
    virtual void GetSheetDependencies(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, ::DirectUI::DepRecs *, ::DirectUI::DeferCycle *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSheetResid@CStyleSheet@DirectUI@@UEAAPEBGXZ
    virtual unsigned short const * GetSheetResid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSheetScope@CStyleSheet@DirectUI@@UEAAXPEAVElement@2@PEAUDepRecs@2@PEAVDeferCycle@2@PEAJ@Z
    virtual void GetSheetScope(::DirectUI::Element *, ::DirectUI::DepRecs *, ::DirectUI::DeferCycle *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSheetValue@CStyleSheet@DirectUI@@UEAAPEAVValue@2@PEAVElement@2@PEBUPropertyInfo@2@@Z
    virtual ::DirectUI::Value * GetSheetValue(::DirectUI::Element *, ::DirectUI::PropertyInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeImmutable@CStyleSheet@DirectUI@@UEAAXXZ
    virtual void MakeImmutable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaseSheet@CStyleSheet@DirectUI@@UEAAJPEAVValue@2@I@Z
    virtual long SetBaseSheet(::DirectUI::Value *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSheetResid@CStyleSheet@DirectUI@@UEAAJPEBG@Z
    virtual long SetSheetResid(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStyleSheet@DirectUI@@QEAA@XZ
    ~CStyleSheet();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddClassData@CStyleSheet@DirectUI@@AEAAJPEAPEAUClassData@2@PEAUIClassInfo@2@@Z
    long AddClassData(::DirectUI::ClassData * *, ::DirectUI::IClassInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocalValue@CStyleSheet@DirectUI@@AEAA_NPEAVElement@2@PEBUPropertyInfo@2@PEAIPEAPEAVValue@2@@Z
    bool _GetLocalValue(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, unsigned int *, ::DirectUI::Value * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSheetValue@CStyleSheet@DirectUI@@AEAAXPEAVElement@2@PEBUPropertyInfo@2@PEAIPEAPEAVValue@2@@Z
    void _GetSheetValue(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, unsigned int *, ::DirectUI::Value * *);
};
} // namespace DirectUI
