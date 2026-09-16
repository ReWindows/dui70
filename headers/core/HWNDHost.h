#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 76 member(s).
// Base evidence: DirectUI::ElementWithHWND (likely; classinfo-template-instantiation).
namespace DirectUI {
class HWNDHost {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?BackgroundOwnerIDProp@HWNDHost@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * BackgroundOwnerIDProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Create@HWNDHost@DirectUI@@SAJPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Create@HWNDHost@DirectUI@@SAJIIPEAVElement@2@PEAKPEAPEAV32@@Z
    static long Create(unsigned int, unsigned int, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Detach@HWNDHost@DirectUI@@QEAAXXZ
    void Detach();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccessibleImpl@HWNDHost@DirectUI@@UEAAJPEAPEAUIAccessible@@@Z
    virtual long GetAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBackgroundOwnerID@HWNDHost@DirectUI@@QEAAGXZ
    unsigned short GetBackgroundOwnerID();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoPtr@HWNDHost@DirectUI@@SAPEAUIClassInfo@2@XZ
    static ::DirectUI::IClassInfo * GetClassInfoPtr();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClassInfoW@HWNDHost@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetClientAccessibleImpl@HWNDHost@DirectUI@@QEAAJPEAPEAUIAccessible@@@Z
    long GetClientAccessibleImpl(IAccessible * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHWND@HWNDHost@DirectUI@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetHWND();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetHWNDParent@HWNDHost@DirectUI@@QEAAPEAUHWND__@@XZ
    HWND__* GetHWNDParent();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetKeyFocused@HWNDHost@DirectUI@@UEAA_NXZ
    virtual bool GetKeyFocused();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetOptimizeMove@HWNDHost@DirectUI@@QEAA_NXZ
    bool GetOptimizeMove();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetTransparent@HWNDHost@DirectUI@@QEAA_NXZ
    bool GetTransparent();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDHost@DirectUI@@QEAA@XZ
    HWNDHost();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0HWNDHost@DirectUI@@QEAA@AEBV01@@Z
    HWNDHost(HWNDHost const &);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@HWNDHost@DirectUI@@QEAAJIIPEAVElement@2@PEAK@Z
    long Initialize(unsigned int, unsigned int, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?MessageCallback@HWNDHost@DirectUI@@UEAAIPEAUtagGMSG@@@Z
    virtual unsigned int MessageCallback(tagGMSG *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnAdjustWindowSize@HWNDHost@DirectUI@@UEAAHHHI@Z
    virtual int OnAdjustWindowSize(int, int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCtrlThemeChanged@HWNDHost@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnCtrlThemeChanged(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroy@HWNDHost@DirectUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEvent@HWNDHost@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInput@HWNDHost@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMessage@HWNDHost@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNotify@HWNDHost@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnNotify(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@HWNDHost@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSinkThemeChanged@HWNDHost@DirectUI@@UEAA_NI_K_JPEA_J@Z
    virtual bool OnSinkThemeChanged(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSysChar@HWNDHost@DirectUI@@UEAA_NG@Z
    virtual bool OnSysChar(unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWindowStyleChanged@HWNDHost@DirectUI@@UEAAX_KPEBUtagSTYLESTRUCT@@@Z
    virtual void OnWindowStyleChanged(uint64_t, tagSTYLESTRUCT const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?OptimizeMoveProp@HWNDHost@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * OptimizeMoveProp();
    // Category: Method | Source: PE Export
    // Symbol: ?Paint@HWNDHost@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?Register@HWNDHost@DirectUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetBackgroundOwnerID@HWNDHost@DirectUI@@QEAAJPEBG@Z
    long SetBackgroundOwnerID(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetClassInfoPtr@HWNDHost@DirectUI@@SAXPEAUIClassInfo@2@@Z
    static void SetClassInfoPtr(::DirectUI::IClassInfo *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetKeyFocus@HWNDHost@DirectUI@@UEAAXXZ
    virtual void SetKeyFocus();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetOptimizeMove@HWNDHost@DirectUI@@QEAAJ_N@Z
    long SetOptimizeMove(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTransparent@HWNDHost@DirectUI@@QEAAJ_N@Z
    long SetTransparent(bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWindowDirection@HWNDHost@DirectUI@@UEAAXPEAUHWND__@@@Z
    virtual void SetWindowDirection(HWND__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?ThemeChangedProp@HWNDHost@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * ThemeChangedProp();
    // Category: Accessor | Source: PE Export
    // Symbol: ?TransparentProp@HWNDHost@DirectUI@@SAPEBUPropertyInfo@2@XZ
    static ::DirectUI::PropertyInfo const * TransparentProp();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1HWNDHost@DirectUI@@UEAA@XZ
    virtual ~HWNDHost();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?AttachCtrlSubclassProc@HWNDHost@DirectUI@@KAXPEAUHWND__@@@Z
    static void AttachCtrlSubclassProc(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateAccNameLabel@HWNDHost@DirectUI@@IEAAPEAUHWND__@@PEAU3@@Z
    HWND__* CreateAccNameLabel(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateHWND@HWNDHost@DirectUI@@MEAAPEAUHWND__@@PEAU3@@Z
    virtual HWND__* CreateHWND(HWND__*);
    // Category: Method | Source: PE Export
    // Symbol: ?CtrlSubclassProc@HWNDHost@DirectUI@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t CtrlSubclassProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?EraseBkgnd@HWNDHost@DirectUI@@MEAA_NPEAUHDC__@@PEA_J@Z
    virtual bool EraseBkgnd(HDC__*, int64_t *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBackgroundOwner@HWNDHost@DirectUI@@IEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetBackgroundOwner();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetFont@HWNDHost@DirectUI@@IEAAPEAUHFONT__@@XZ
    HFONT__* GetFont();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetStaticColor@HWNDHost@DirectUI@@IEAA_NPEAUHDC__@@PEAPEAUHBRUSH__@@@Z
    bool GetStaticColor(HDC__*, HBRUSH__* *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetThemeChanged@HWNDHost@DirectUI@@IEAAHXZ
    int GetThemeChanged();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMoveDeferred@HWNDHost@DirectUI@@IEAA_NXZ
    bool IsMoveDeferred();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHosted@HWNDHost@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnHosted@HWNDHost@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?PrintRTLControl@HWNDHost@DirectUI@@IEAAXPEAUHDC__@@0AEBUtagRECT@@@Z
    void PrintRTLControl(HDC__*, HDC__*, tagRECT const &);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetThemeChanged@HWNDHost@DirectUI@@IEAAJH@Z
    long SetThemeChanged(int);
    // Category: Method | Source: PE Export
    // Symbol: ?SyncBackground@HWNDHost@DirectUI@@IEAAXXZ
    void SyncBackground();
    // Category: Method | Source: PE Export
    // Symbol: ?SyncDirection@HWNDHost@DirectUI@@IEAAXXZ
    void SyncDirection();
    // Category: Method | Source: PE Export
    // Symbol: ?SyncFont@HWNDHost@DirectUI@@IEAAXXZ
    void SyncFont();
    // Category: Method | Source: PE Export
    // Symbol: ?SyncForeground@HWNDHost@DirectUI@@IEAAXXZ
    void SyncForeground();
    // Category: Method | Source: PE Export
    // Symbol: ?SyncParent@HWNDHost@DirectUI@@IEAAXXZ
    void SyncParent();
    // Category: Method | Source: PE Export
    // Symbol: ?SyncRect@HWNDHost@DirectUI@@IEAAXI_N@Z
    void SyncRect(unsigned int, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?SyncStyle@HWNDHost@DirectUI@@IEAAXXZ
    void SyncStyle();
    // Category: Method | Source: PE Export
    // Symbol: ?SyncText@HWNDHost@DirectUI@@IEAAXXZ
    void SyncText();
    // Category: Method | Source: PE Export
    // Symbol: ?SyncVisible@HWNDHost@DirectUI@@IEAAXXZ
    void SyncVisible();
    // Category: Method | Source: PE Export
    // Symbol: ?VerifyParentage@HWNDHost@DirectUI@@IEAAHXZ
    int VerifyParentage();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?ApplySinkRegion@HWNDHost@DirectUI@@AEAAXPEBUtagRECT@@_N@Z
    void ApplySinkRegion(tagRECT const *, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetAccessibleImpl@HWNDHost@DirectUI@@AEAAJPEAPEAUIAccessible@@_N@Z
    long GetAccessibleImpl(IAccessible * *, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSinkRect@HWNDHost@DirectUI@@AEAAXPEBUtagRECT@@PEAU3@@Z
    void GetSinkRect(tagRECT const *, tagRECT *);
    // Category: Method | Source: PE Export
    // Symbol: ?HaveWin32Focus@HWNDHost@DirectUI@@AEAA_NXZ
    bool HaveWin32Focus();
    // Category: Method | Source: PE Export
    // Symbol: ?SyncColorsAndFonts@HWNDHost@DirectUI@@AEAAXXZ
    void SyncColorsAndFonts();
    // Category: Method | Source: PE Export
    // Symbol: ?UnvirtualizePosition@HWNDHost@DirectUI@@AEAAXXZ
    void UnvirtualizePosition();
    // Category: Method | Source: PE Export
    // Symbol: ?_CtrlWndProc@HWNDHost@DirectUI@@CAHPEAXPEAUHWND__@@I_K_JPEA_J@Z
    static int _CtrlWndProc(void *, HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?_DeleteCtrlWnd@HWNDHost@DirectUI@@AEAAXXZ
    void _DeleteCtrlWnd();
    // Category: Method | Source: PE Export
    // Symbol: ?_SinkWndProc@HWNDHost@DirectUI@@CAHPEAXPEAUHWND__@@I_K_JPEA_J@Z
    static int _SinkWndProc(void *, HWND__*, unsigned int, uint64_t, int64_t, int64_t *);
};
} // namespace DirectUI
