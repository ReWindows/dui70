#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 39 member(s).
namespace DirectUI {
class TaskPage {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?DUICreatePropertySheetPage@TaskPage@DirectUI@@QEAAJPEAUHINSTANCE__@@@Z
    long DUICreatePropertySheetPage(HINSTANCE__*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetParentHWND@TaskPage@DirectUI@@QEAAPEAUHWND__@@XZ
    HWND__* GetParentHWND();
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TaskPage@DirectUI@@QEAA@AEBV01@@Z
    TaskPage(TaskPage const &);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0TaskPage@DirectUI@@QEAA@XZ
    TaskPage();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1TaskPage@DirectUI@@UEAA@XZ
    virtual ~TaskPage();
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetElement@TaskPage@DirectUI@@IEAAPEAVElement@2@XZ
    ::DirectUI::Element * GetElement();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPageRCID@TaskPage@DirectUI@@MEAAIXZ
    virtual unsigned int GetPageRCID();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPageResID@TaskPage@DirectUI@@MEAAPEBGXZ
    virtual unsigned short const * GetPageResID();
    // Category: Method | Source: PE Export
    // Symbol: ?InitPropSheetPage@TaskPage@DirectUI@@MEAAXPEAU_PROPSHEETPAGEW@@@Z
    virtual void InitPropSheetPage(_PROPSHEETPAGEW *);
    // Category: Method | Source: PE Export
    // Symbol: ?LoadPage@TaskPage@DirectUI@@MEAAJPEAVHWNDElement@2@PEAUHINSTANCE__@@PEAPEAVElement@2@PEAPEAVDUIXmlParser@2@@Z
    virtual long LoadPage(::DirectUI::HWNDElement *, HINSTANCE__*, ::DirectUI::Element * *, ::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LoadParser@TaskPage@DirectUI@@MEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long LoadParser(::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnKillActive@TaskPage@DirectUI@@MEAA_JXZ
    virtual int64_t OnKillActive();
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@TaskPage@DirectUI@@MEAAXPEAVElement@2@PEAUEvent@2@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@TaskPage@DirectUI@@MEAAXPEAVElement@2@PEAUInputEvent@2@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@TaskPage@DirectUI@@MEAAXPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanging@TaskPage@DirectUI@@MEAA_NPEAVElement@2@PEBUPropertyInfo@2@HPEAVValue@2@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@TaskPage@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@TaskPage@DirectUI@@MEAAXPEAVElement@2@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMessage@TaskPage@DirectUI@@MEAA_NI_K_JPEA_J@Z
    virtual bool OnMessage(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnQueryCancel@TaskPage@DirectUI@@MEAA_JXZ
    virtual int64_t OnQueryCancel();
    // Category: Method | Source: PE Export
    // Symbol: ?OnQueryInitialFocus@TaskPage@DirectUI@@MEAAPEAVElement@2@XZ
    virtual ::DirectUI::Element * OnQueryInitialFocus();
    // Category: Method | Source: PE Export
    // Symbol: ?OnReset@TaskPage@DirectUI@@MEAA_JXZ
    virtual int64_t OnReset();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSetActive@TaskPage@DirectUI@@MEAA_JXZ
    virtual int64_t OnSetActive();
    // Category: Method | Source: PE Export
    // Symbol: ?OnWizBack@TaskPage@DirectUI@@MEAA_JXZ
    virtual int64_t OnWizBack();
    // Category: Method | Source: PE Export
    // Symbol: ?OnWizFinish@TaskPage@DirectUI@@MEAA_JXZ
    virtual int64_t OnWizFinish();
    // Category: Method | Source: PE Export
    // Symbol: ?OnWizNext@TaskPage@DirectUI@@MEAA_JXZ
    virtual int64_t OnWizNext();
    // Category: Method | Source: PE Export
    // Symbol: ?PropSheet_SendMessage@TaskPage@DirectUI@@IEAA_JI_K_J@Z
    int64_t PropSheet_SendMessage(unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PE Export
    // Symbol: ?CreateDUICP@TaskPage@DirectUI@@EEAAJPEAVHWNDElement@2@PEAUHWND__@@1PEAPEAVElement@2@PEAPEAVDUIXmlParser@2@@Z
    virtual long CreateDUICP(::DirectUI::HWNDElement *, HWND__*, HWND__*, ::DirectUI::Element * *, ::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateParserCP@TaskPage@DirectUI@@EEAAJPEAPEAVDUIXmlParser@2@@Z
    virtual long CreateParserCP(::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?DestroyCP@TaskPage@DirectUI@@EEAAXXZ
    virtual void DestroyCP();
    // Category: Method | Source: PE Export
    // Symbol: ?FreeComCtl32@TaskPage@DirectUI@@AEAAXXZ
    void FreeComCtl32();
    // Category: Method | Source: PE Export
    // Symbol: ?LoadComCtl32@TaskPage@DirectUI@@AEAAJXZ
    long LoadComCtl32();
    // Category: Method | Source: PE Export
    // Symbol: ?LoadPage@TaskPage@DirectUI@@AEAAJPEAPEAVElement@2@PEAV32@PEAPEAVDUIXmlParser@2@@Z
    long LoadPage(::DirectUI::Element * *, ::DirectUI::Element *, ::DirectUI::DUIXmlParser * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWndMsg@TaskPage@DirectUI@@AEAAHI_K_JPEA_J@Z
    int OnWndMsg(unsigned int, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?StaticXHostSubclassProc@TaskPage@DirectUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t StaticXHostSubclassProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?StaticXmlParserError@TaskPage@DirectUI@@CAXPEBG0HPEAX@Z
    static void StaticXmlParserError(unsigned short const *, unsigned short const *, int, void *);
};
} // namespace DirectUI
