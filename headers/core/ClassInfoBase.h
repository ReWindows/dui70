#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 24 member(s).
namespace DirectUI {
class ClassInfoBase {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AddChild@ClassInfoBase@DirectUI@@UEAAXXZ
    virtual void AddChild();
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@ClassInfoBase@DirectUI@@UEAAXXZ
    virtual void AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AssertPIZeroRef@ClassInfoBase@DirectUI@@UEBAXXZ
    virtual void AssertPIZeroRef() const;
    // Category: Method | Source: PE Export
    // Symbol: ?ClassExist@ClassInfoBase@DirectUI@@SA_NPEAPEAUIClassInfo@2@PEBQEBUPropertyInfo@2@IPEAU32@PEAUHINSTANCE__@@PEBG_N@Z
    static bool ClassExist(::DirectUI::IClassInfo * *, ::DirectUI::PropertyInfo const * const *, unsigned int, ::DirectUI::IClassInfo *, HINSTANCE__*, unsigned short const *, bool);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ClassInfoBase@DirectUI@@QEAA@XZ
    ClassInfoBase();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0ClassInfoBase@DirectUI@@QEAA@AEBV01@@Z
    ClassInfoBase(ClassInfoBase const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Destroy@ClassInfoBase@DirectUI@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PE Export
    // Symbol: ?EnumPropertyInfo@ClassInfoBase@DirectUI@@UEAAPEBUPropertyInfo@2@I@Z
    virtual ::DirectUI::PropertyInfo const * EnumPropertyInfo(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetByClassIndex@ClassInfoBase@DirectUI@@UEAAPEBUPropertyInfo@2@I@Z
    virtual ::DirectUI::PropertyInfo const * GetByClassIndex(unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetChildren@ClassInfoBase@DirectUI@@UEBAHXZ
    virtual int GetChildren() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetGlobalIndex@ClassInfoBase@DirectUI@@UEBAIXZ
    virtual unsigned int GetGlobalIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetModule@ClassInfoBase@DirectUI@@UEBAPEAUHINSTANCE__@@XZ
    virtual HINSTANCE__* GetModule() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetName@ClassInfoBase@DirectUI@@UEBAPEBGXZ
    virtual unsigned short const * GetName() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPICount@ClassInfoBase@DirectUI@@UEBAIXZ
    virtual unsigned int GetPICount() const;
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@ClassInfoBase@DirectUI@@QEAAJPEAUHINSTANCE__@@PEBG_NPEBQEBUPropertyInfo@2@I@Z
    long Initialize(HINSTANCE__*, unsigned short const *, bool, ::DirectUI::PropertyInfo const * const *, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsGlobal@ClassInfoBase@DirectUI@@UEBA_NXZ
    virtual bool IsGlobal() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsSubclassOf@ClassInfoBase@DirectUI@@UEBA_NPEAUIClassInfo@2@@Z
    virtual bool IsSubclassOf(::DirectUI::IClassInfo *) const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsValidProperty@ClassInfoBase@DirectUI@@UEBA_NPEBUPropertyInfo@2@@Z
    virtual bool IsValidProperty(::DirectUI::PropertyInfo const *) const;
    // Category: Method | Source: PE Export
    // Symbol: ?Register@ClassInfoBase@DirectUI@@QEAAJXZ
    long Register();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@ClassInfoBase@DirectUI@@UEAAHXZ
    virtual int Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveChild@ClassInfoBase@DirectUI@@UEAAXXZ
    virtual void RemoveChild();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ClassInfoBase@DirectUI@@UEAA@XZ
    virtual ~ClassInfoBase();
};
} // namespace DirectUI
