#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 23 member(s).
class ITextHost2Impl {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?OnTxCharFormatChange@ITextHost2Impl@@UEAAJPEBU_charformatw@@@Z
    virtual long OnTxCharFormatChange(_charformatw const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTxParaFormatChange@ITextHost2Impl@@UEAAJPEBU_paraformat@@@Z
    virtual long OnTxParaFormatChange(_paraformat const *);
    // Category: Method | Source: PE Export
    // Symbol: ?TxEnableScrollBar@ITextHost2Impl@@UEAAHHH@Z
    virtual int TxEnableScrollBar(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxFreeTextServicesNotification@ITextHost2Impl@@UEAAXXZ
    virtual void TxFreeTextServicesNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetAcceleratorPos@ITextHost2Impl@@UEAAJPEAJ@Z
    virtual long TxGetAcceleratorPos(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetBackStyle@ITextHost2Impl@@UEAAJPEAW4TXTBACKSTYLE@@@Z
    virtual long TxGetBackStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetEastAsianFlags@ITextHost2Impl@@UEAAJPEAJ@Z
    virtual long TxGetEastAsianFlags(long *);
    // Category: Method | Source: PE Export
    // Symbol: ?TxGetEditStyle@ITextHost2Impl@@UEAAJKPEAK@Z
    virtual long TxGetEditStyle(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetHorzExtent@ITextHost2Impl@@UEAAJPEAJ@Z
    virtual long TxGetHorzExtent(long *);
    // Category: Method | Source: PE Export
    // Symbol: ?TxGetPalette@ITextHost2Impl@@UEAAPEAUHPALETTE__@@XZ
    virtual HPALETTE__* TxGetPalette();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetSelectionBarWidth@ITextHost2Impl@@UEAAJPEAJ@Z
    virtual long TxGetSelectionBarWidth(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetWindowStyles@ITextHost2Impl@@UEAAJPEAK0@Z
    virtual long TxGetWindowStyles(unsigned long *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?TxIsDoubleClickPending@ITextHost2Impl@@UEAAHXZ
    virtual int TxIsDoubleClickPending();
    // Category: Method | Source: PE Export
    // Symbol: ?TxKillTimer@ITextHost2Impl@@UEAAXI@Z
    virtual void TxKillTimer(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxScrollWindowEx@ITextHost2Impl@@UEAAXHHPEBUtagRECT@@0PEAUHRGN__@@PEAU2@I@Z
    virtual void TxScrollWindowEx(int, int, tagRECT const *, tagRECT const *, HRGN__*, tagRECT *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxSetCapture@ITextHost2Impl@@UEAAXH@Z
    virtual void TxSetCapture(int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxSetForegroundWindow@ITextHost2Impl@@UEAAJXZ
    virtual long TxSetForegroundWindow();
    // Category: Method | Source: PE Export
    // Symbol: ?TxSetScrollPos@ITextHost2Impl@@UEAAHHHH@Z
    virtual int TxSetScrollPos(int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxSetScrollRange@ITextHost2Impl@@UEAAHHJHH@Z
    virtual int TxSetScrollRange(int, long, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxSetTimer@ITextHost2Impl@@UEAAHII@Z
    virtual int TxSetTimer(unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxShowDropCaret@ITextHost2Impl@@UEAAJHPEAUHDC__@@PEBUtagRECT@@@Z
    virtual long TxShowDropCaret(int, HDC__*, tagRECT const *);
    // Category: Method | Source: PE Export
    // Symbol: ?TxShowScrollBar@ITextHost2Impl@@UEAAHHH@Z
    virtual int TxShowScrollBar(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?TxViewChange@ITextHost2Impl@@UEAAXH@Z
    virtual void TxViewChange(int);
};
