#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 22 member(s).
namespace DirectUI {
class ElementClassInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@ElementClassInfo@DirectUI@@UEAAXXZ
    virtual void AddChild();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ElementClassInfo@DirectUI@@UEAAXXZ
    virtual void AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AssertPIZeroRef@ElementClassInfo@DirectUI@@UEBAXXZ
    virtual void AssertPIZeroRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ElementClassInfo@DirectUI@@UEAAJPEAVElement@2@PEAKPEAPEAV32@@Z
    virtual long CreateInstance(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ElementClassInfo@DirectUI@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumPropertyInfo@ElementClassInfo@DirectUI@@UEAAPEBUPropertyInfo@2@I@Z
    virtual ::DirectUI::PropertyInfo const * EnumPropertyInfo(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBaseClass@ElementClassInfo@DirectUI@@UEBAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetBaseClass() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByClassIndex@ElementClassInfo@DirectUI@@UEAAPEBUPropertyInfo@2@I@Z
    virtual ::DirectUI::PropertyInfo const * GetByClassIndex(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetChildren@ElementClassInfo@DirectUI@@UEBAHXZ
    virtual int GetChildren() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGlobalIndex@ElementClassInfo@DirectUI@@UEBAIXZ
    virtual unsigned int GetGlobalIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetModule@ElementClassInfo@DirectUI@@UEBAPEAUHINSTANCE__@@XZ
    virtual HINSTANCE__* GetModule() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@ElementClassInfo@DirectUI@@UEBAPEBGXZ
    virtual unsigned short const * GetName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPICount@ElementClassInfo@DirectUI@@UEBAIXZ
    virtual unsigned int GetPICount() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsGlobal@ElementClassInfo@DirectUI@@UEBA_NXZ
    virtual bool IsGlobal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSubclassOf@ElementClassInfo@DirectUI@@UEBA_NPEAUIClassInfo@2@@Z
    virtual bool IsSubclassOf(::DirectUI::IClassInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidProperty@ElementClassInfo@DirectUI@@UEBA_NPEBUPropertyInfo@2@@Z
    virtual bool IsValidProperty(::DirectUI::PropertyInfo const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ElementClassInfo@DirectUI@@SAJPEBQEBUPropertyInfo@2@I@Z
    static long Register(::DirectUI::PropertyInfo const * const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ElementClassInfo@DirectUI@@UEAAHXZ
    virtual int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@ElementClassInfo@DirectUI@@UEAAXXZ
    virtual void RemoveChild();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ElementClassInfo@DirectUI@@CAJPEBQEBUPropertyInfo@2@IPEAPEAUIClassInfo@2@@Z
    static long Create(::DirectUI::PropertyInfo const * const *, unsigned int, ::DirectUI::IClassInfo * *);
};
} // namespace DirectUI
