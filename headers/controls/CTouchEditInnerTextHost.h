#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 39 member(s).
namespace DirectUI {
class CTouchEditInnerTextHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTouchEditInnerTextHost@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchEditInnerTextHost@DirectUI@@QEAA@PEAVTouchEditInner@1@@Z
    CTouchEditInnerTextHost(::DirectUI::TouchEditInner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipboardData@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAU_charrange@@KPEAPEAUIDataObject@@@Z
    virtual long GetClipboardData(_charrange *, unsigned long, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenu@CTouchEditInnerTextHost@DirectUI@@UEAAJGPEAUIOleObject@@PEAU_charrange@@PEAPEAUHMENU__@@@Z
    virtual long GetContextMenu(unsigned short, IOleObject *, _charrange *, HMENU__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAcceptData@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAUIDataObject@@PEAGKHPEAX@Z
    virtual long QueryAcceptData(IDataObject *, unsigned short *, unsigned long, int, void *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryInsertObject@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAU_GUID@@PEAUIStorage@@J@Z
    virtual long QueryInsertObject(_GUID *, IStorage *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTouchEditInnerTextHost@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTouchEditInnerTextHost@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxActivate@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAJ@Z
    virtual long TxActivate(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxClientToScreen@CTouchEditInnerTextHost@DirectUI@@UEAAHPEAUtagPOINT@@@Z
    virtual int TxClientToScreen(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxCreateCaret@CTouchEditInnerTextHost@DirectUI@@UEAAHPEAUHBITMAP__@@HH@Z
    virtual int TxCreateCaret(HBITMAP__*, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxDeactivate@CTouchEditInnerTextHost@DirectUI@@UEAAJJ@Z
    virtual long TxDeactivate(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxDestroyCaret@CTouchEditInnerTextHost@DirectUI@@UEAAJXZ
    virtual long TxDestroyCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetCharFormat@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAPEBU_charformatw@@@Z
    virtual long TxGetCharFormat(_charformatw const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetClientRect@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetClientRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetDC@CTouchEditInnerTextHost@DirectUI@@UEAAPEAUHDC__@@XZ
    virtual HDC__* TxGetDC();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetExtent@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAUtagSIZE@@@Z
    virtual long TxGetExtent(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetMaxLength@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAK@Z
    virtual long TxGetMaxLength(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetParaFormat@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAPEBU_paraformat@@@Z
    virtual long TxGetParaFormat(_paraformat const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPasswordChar@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAG@Z
    virtual long TxGetPasswordChar(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPropertyBits@CTouchEditInnerTextHost@DirectUI@@UEAAJKPEAK@Z
    virtual long TxGetPropertyBits(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetScrollBars@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAK@Z
    virtual long TxGetScrollBars(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetSysColor@CTouchEditInnerTextHost@DirectUI@@UEAAKH@Z
    virtual unsigned long TxGetSysColor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetViewInset@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetViewInset(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetWindow@CTouchEditInnerTextHost@DirectUI@@UEAAJPEAPEAUHWND__@@@Z
    virtual long TxGetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxImmGetContext@CTouchEditInnerTextHost@DirectUI@@UEAAPEAUHIMC__@@XZ
    virtual HIMC__* TxImmGetContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxImmReleaseContext@CTouchEditInnerTextHost@DirectUI@@UEAAXPEAUHIMC__@@@Z
    virtual void TxImmReleaseContext(HIMC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxInvalidateRect@CTouchEditInnerTextHost@DirectUI@@UEAAXPEBUtagRECT@@H@Z
    virtual void TxInvalidateRect(tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxNotify@CTouchEditInnerTextHost@DirectUI@@UEAAJKPEAX@Z
    virtual long TxNotify(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxReleaseDC@CTouchEditInnerTextHost@DirectUI@@UEAAHPEAUHDC__@@@Z
    virtual int TxReleaseDC(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxScreenToClient@CTouchEditInnerTextHost@DirectUI@@UEAAHPEAUtagPOINT@@@Z
    virtual int TxScreenToClient(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCaretPos@CTouchEditInnerTextHost@DirectUI@@UEAAHHH@Z
    virtual int TxSetCaretPos(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCursor@CTouchEditInnerTextHost@DirectUI@@UEAAXPEAUHICON__@@H@Z
    virtual void TxSetCursor(HICON__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCursor2@CTouchEditInnerTextHost@DirectUI@@UEAAPEAUHICON__@@PEAU3@H@Z
    virtual HICON__* TxSetCursor2(HICON__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetFocus@CTouchEditInnerTextHost@DirectUI@@UEAAXXZ
    virtual void TxSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowCaret@CTouchEditInnerTextHost@DirectUI@@UEAAHH@Z
    virtual int TxShowCaret(int);
};
} // namespace DirectUI
