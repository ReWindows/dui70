#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 40 member(s).
namespace DirectUI {
class HWNDHostAccessible {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Clone@HWNDHostAccessible@DirectUI@@UEAAJPEAPEAUIEnumVARIANT@@@Z
    virtual long Clone(IEnumVARIANT * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@HWNDHostAccessible@DirectUI@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@HWNDHostAccessible@DirectUI@@SAJPEAVElement@2@PEAUIAccessible@@PEAPEAVDuiAccessible@2@@Z
    static long Create(::DirectUI::Element *, IAccessible *, ::DirectUI::DuiAccessible * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Disconnect@HWNDHostAccessible@DirectUI@@UEAAJXZ
    virtual long Disconnect();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetIdentityString@HWNDHostAccessible@DirectUI@@UEAAJKPEAPEAEPEAK@Z
    virtual long GetIdentityString(unsigned long, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetWindow@HWNDHostAccessible@DirectUI@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDHostAccessible@DirectUI@@QEAA@XZ
    HWNDHostAccessible();
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@HWNDHostAccessible@DirectUI@@QEAAJPEAVElement@2@PEAUIAccessible@@@Z
    long Initialize(::DirectUI::Element *, IAccessible *);
    // Category: Method | Source: PE Export
    // Symbol: ?Next@HWNDHostAccessible@DirectUI@@UEAAJKPEAUtagVARIANT@@PEAK@Z
    virtual long Next(unsigned long, tagVARIANT *, unsigned long *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?QueryInterface@HWNDHostAccessible@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryService@HWNDHostAccessible@DirectUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Reset@HWNDHostAccessible@DirectUI@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PE Export
    // Symbol: ?Skip@HWNDHostAccessible@DirectUI@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?accDoDefaultAction@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@@Z
    virtual long accDoDefaultAction(tagVARIANT);
    // Category: Method | Source: PE Export
    // Symbol: ?accHitTest@HWNDHostAccessible@DirectUI@@UEAAJJJPEAUtagVARIANT@@@Z
    virtual long accHitTest(long, long, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?accLocation@HWNDHostAccessible@DirectUI@@UEAAJPEAJ000UtagVARIANT@@@Z
    virtual long accLocation(long *, long *, long *, long *, tagVARIANT);
    // Category: Method | Source: PE Export
    // Symbol: ?accNavigate@HWNDHostAccessible@DirectUI@@UEAAJJUtagVARIANT@@PEAU3@@Z
    virtual long accNavigate(long, tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?accSelect@HWNDHostAccessible@DirectUI@@UEAAJJUtagVARIANT@@@Z
    virtual long accSelect(long, tagVARIANT);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accChild@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAUIDispatch@@@Z
    virtual long get_accChild(tagVARIANT, IDispatch * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accChildCount@HWNDHostAccessible@DirectUI@@UEAAJPEAJ@Z
    virtual long get_accChildCount(long *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accDefaultAction@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDefaultAction(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accDescription@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accDescription(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accFocus@HWNDHostAccessible@DirectUI@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accFocus(tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accHelp@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accHelp(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accHelpTopic@HWNDHostAccessible@DirectUI@@UEAAJPEAPEAGUtagVARIANT@@PEAJ@Z
    virtual long get_accHelpTopic(unsigned short * *, tagVARIANT, long *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accKeyboardShortcut@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accKeyboardShortcut(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accName@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accName(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accParent@HWNDHostAccessible@DirectUI@@UEAAJPEAPEAUIDispatch@@@Z
    virtual long get_accParent(IDispatch * *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accRole@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAU3@@Z
    virtual long get_accRole(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accSelection@HWNDHostAccessible@DirectUI@@UEAAJPEAUtagVARIANT@@@Z
    virtual long get_accSelection(tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accState@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAU3@@Z
    virtual long get_accState(tagVARIANT, tagVARIANT *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_accValue@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAPEAG@Z
    virtual long get_accValue(tagVARIANT, unsigned short * *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_accName@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accName(tagVARIANT, unsigned short *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_accValue@HWNDHostAccessible@DirectUI@@UEAAJUtagVARIANT@@PEAG@Z
    virtual long put_accValue(tagVARIANT, unsigned short *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1HWNDHostAccessible@DirectUI@@UEAA@XZ
    virtual ~HWNDHostAccessible();
};
} // namespace DirectUI
