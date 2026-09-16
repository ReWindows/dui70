#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 15 member(s).
namespace DirectUI {
class CClassFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CClassFactory@DirectUI@@SAJPEAPEAV12@@Z
    static long Create(CClassFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@CClassFactory@DirectUI@@QEAAPEAUIClassInfo@2@PEBGPEAUHINSTANCE__@@@Z
    ::DirectUI::IClassInfo * Get(unsigned short const *, HINSTANCE__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExact@CClassFactory@DirectUI@@QEAAPEAUIClassInfo@2@_NPEBGPEAUHINSTANCE__@@@Z
    ::DirectUI::IClassInfo * GetExact(bool, unsigned short const *, HINSTANCE__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextClassId@CClassFactory@DirectUI@@QEAAHXZ
    int GetNextClassId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CClassFactory@DirectUI@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModuleAddRef@CClassFactory@DirectUI@@QEAAJPEAUHINSTANCE__@@@Z
    long ModuleAddRef(HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModuleRelease@CClassFactory@DirectUI@@QEAAJPEAUHINSTANCE__@@@Z
    long ModuleRelease(HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CClassFactory@DirectUI@@QEAAJPEAUIClassInfo@2@@Z
    long Register(::DirectUI::IClassInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseClassId@CClassFactory@DirectUI@@QEAAXH@Z
    void ReleaseClassId(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegister@CClassFactory@DirectUI@@QEAAJPEAUIClassInfo@2@@Z
    long UnRegister(::DirectUI::IClassInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterSet@CClassFactory@DirectUI@@QEAAXPEAUHINSTANCE__@@@Z
    void UnRegisterSet(HINSTANCE__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CClassFactory@DirectUI@@QEAA@XZ
    ~CClassFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLocal@CClassFactory@DirectUI@@AEAAPEAUIClassInfo@2@PEAV?$BTreeLookup@PEAUHINSTANCE__@@PEAUIClassInfo@DirectUI@@@2@PEAUHINSTANCE__@@@Z
    ::DirectUI::IClassInfo * _GetLocal(WindissectOpaque *, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterLocal@CClassFactory@DirectUI@@AEAAJPEAUIClassInfo@2@@Z
    long _RegisterLocal(::DirectUI::IClassInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnRegisterLocal@CClassFactory@DirectUI@@AEAAJPEAUIClassInfo@2@@Z
    long _UnRegisterLocal(::DirectUI::IClassInfo *);
};
} // namespace DirectUI
