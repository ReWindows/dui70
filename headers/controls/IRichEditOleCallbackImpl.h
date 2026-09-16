#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 11 member(s).
class IRichEditOleCallbackImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IRichEditOleCallbackImpl@@QEAA@XZ
    IRichEditOleCallbackImpl();
private:
    // Category: Method | Source: PE Export
    // Symbol: ?ContextSensitiveHelp@IRichEditOleCallbackImpl@@EEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PE Export
    // Symbol: ?DeleteObject@IRichEditOleCallbackImpl@@EEAAJPEAUIOleObject@@@Z
    virtual long DeleteObject(IOleObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipboardData@IRichEditOleCallbackImpl@@EEAAJPEAU_charrange@@KPEAPEAUIDataObject@@@Z
    virtual long GetClipboardData(_charrange *, unsigned long, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenu@IRichEditOleCallbackImpl@@EEAAJGPEAUIOleObject@@PEAU_charrange@@PEAPEAUHMENU__@@@Z
    virtual long GetContextMenu(unsigned short, IOleObject *, _charrange *, HMENU__* *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetDragDropEffect@IRichEditOleCallbackImpl@@EEAAJHKPEAK@Z
    virtual long GetDragDropEffect(int, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInPlaceContext@IRichEditOleCallbackImpl@@EEAAJPEAPEAUIOleInPlaceFrame@@PEAPEAUIOleInPlaceUIWindow@@PEAUtagOIFI@@@Z
    virtual long GetInPlaceContext(IOleInPlaceFrame * *, IOleInPlaceUIWindow * *, tagOIFI *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetNewStorage@IRichEditOleCallbackImpl@@EEAAJPEAPEAUIStorage@@@Z
    virtual long GetNewStorage(IStorage * *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryAcceptData@IRichEditOleCallbackImpl@@EEAAJPEAUIDataObject@@PEAGKHPEAX@Z
    virtual long QueryAcceptData(IDataObject *, unsigned short *, unsigned long, int, void *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryInsertObject@IRichEditOleCallbackImpl@@EEAAJPEAU_GUID@@PEAUIStorage@@J@Z
    virtual long QueryInsertObject(_GUID *, IStorage *, long);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowContainerUI@IRichEditOleCallbackImpl@@EEAAJH@Z
    virtual long ShowContainerUI(int);
};
