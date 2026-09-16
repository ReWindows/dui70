#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 59 member(s).
namespace DirectUI {
class DuiAccessible {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AccNavigate@DuiAccessible@DirectUI@@SAJPEAVElement@2@JPEAPEAV32@@Z
    static long AccNavigate(::DirectUI::Element *, long, ::DirectUI::Element * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@DuiAccessible@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?Clone@DuiAccessible@DirectUI@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@DuiAccessible@DirectUI@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@DuiAccessible@DirectUI@@SAJPEAVElement@2@PEAPEAV12@@Z
    static long Create(::DirectUI::Element *, DuiAccessible * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Disconnect@DuiAccessible@DirectUI@@UEAAJXZ
    virtual long Disconnect();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0DuiAccessible@DirectUI@@QEAA@XZ
    DuiAccessible();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccessibleParent@DuiAccessible@DirectUI@@SAPEAVElement@2@PEAV32@@Z
    static ::DirectUI::Element * GetAccessibleParent(::DirectUI::Element *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIDsOfNames@DuiAccessible@DirectUI@@UEAAJAEBU_GUID@@PEAPEAGIKPEAJ@Z
    virtual long GetIDsOfNames(_GUID const &, unsigned short * *, unsigned int, unsigned long, long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIdentityString@DuiAccessible@DirectUI@@UEAAJKPEAPEAEPEAK@Z
    virtual long GetIdentityString(unsigned long, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfo@DuiAccessible@DirectUI@@UEAAJIKPEAPEAUITypeInfo@@@Z
    virtual long GetTypeInfo(unsigned int, unsigned long, ITypeInfo * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTypeInfoCount@DuiAccessible@DirectUI@@UEAAJPEAI@Z
    virtual long GetTypeInfoCount(unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWindow@DuiAccessible@DirectUI@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@DuiAccessible@DirectUI@@QEAAXPEAVElement@2@@Z
    void Initialize(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?Invoke@DuiAccessible@DirectUI@@UEAAJJAEBU_GUID@@KGPEAUtagDISPPARAMS@@PEAUtagVARIANT@@PEAUtagEXCEPINFO@@PEAI@Z
    virtual long Invoke(long, _GUID const &, unsigned long, unsigned short, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?Next@DuiAccessible@DirectUI@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@DuiAccessible@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryService@DuiAccessible@DirectUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@DuiAccessible@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?Reset@DuiAccessible@DirectUI@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@DuiAccessible@DirectUI@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?accDoDefaultAction@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@@Z
    virtual long accDoDefaultAction(tagVARIANT);
    // Category: Method | Source: PE Export
    // Symbol: ?accHitTest@DuiAccessible@DirectUI@@UEAAJJJPEAUtagVARIANT@@@Z
    virtual long accHitTest(long, long, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?accLocation@DuiAccessible@DirectUI@@UEAAJPEAJ000UtagVARIANT@@@Z
    virtual long accLocation(long *, long *, long *, long *, tagVARIANT);
    // Category: Method | Source: PE Export
    // Symbol: ?accNavigate@DuiAccessible@DirectUI@@UEAAJJUtagVARIANT@@PEAU3@@Z
    virtual long accNavigate(long, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?accSelect@DuiAccessible@DirectUI@@UEAAJJUtagVARIANT@@@Z
    virtual long accSelect(long, tagVARIANT);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accChild@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAUIDispatch@@@Z
    virtual long get_accChild(tagVARIANT, IDispatch * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accChildCount@DuiAccessible@DirectUI@@UEAAJPEAJ@Z
    virtual long get_accChildCount(long *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accDefaultAction@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDefaultAction(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accDescription@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDescription(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accFocus@DuiAccessible@DirectUI@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accFocus(tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accHelp@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accHelp(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accHelpTopic@DuiAccessible@DirectUI@@UEAAJPEAPEAGUtagVARIANT@@PEAJ@Z
    virtual long get_accHelpTopic(unsigned short * *, tagVARIANT, long *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accKeyboardShortcut@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accKeyboardShortcut(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accName@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accParent@DuiAccessible@DirectUI@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accRole@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAU3@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accSelection@DuiAccessible@DirectUI@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accSelection(tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accState@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAU3@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accValue@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accValue(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_accName@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accName(tagVARIANT, unsigned short *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_accValue@DuiAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accValue(tagVARIANT, unsigned short *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1DuiAccessible@DirectUI@@UEAA@XZ
    virtual ~DuiAccessible();
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccName@DuiAccessible@DirectUI@@IEAAJUtagVARIANT@@HPEAPEAG@Z
    long GetAccName(tagVARIANT, int, unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccNameFromContent@DuiAccessible@DirectUI@@IEAAJPEAPEAG@Z
    long GetAccNameFromContent(unsigned short * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDispatchFromElement@DuiAccessible@DirectUI@@IEAAJPEAVElement@2@PEAPEAUIDispatch@@@Z
    long GetDispatchFromElement(::DirectUI::Element *, IDispatch * *);
};
} // namespace DirectUI
