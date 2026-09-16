#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 33 member(s).
namespace DirectUI {
class CBinaryXmlReader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBinaryXmlReader@DirectUI@@QEAA@XZ
    CBinaryXmlReader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBinaryXmlReader@DirectUI@@SAJPEBE_KPEAPEAUIXmlReader@@@Z
    static long Create(unsigned char const *, uint64_t, IXmlReader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeCount@CBinaryXmlReader@DirectUI@@UEAAJPEAI@Z
    virtual long GetAttributeCount(unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetBaseUri@CBinaryXmlReader@DirectUI@@UEAAJPEAPEBGPEAI@Z
    virtual long GetBaseUri(unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDepth@CBinaryXmlReader@DirectUI@@UEAAJPEAI@Z
    virtual long GetDepth(unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetLineNumber@CBinaryXmlReader@DirectUI@@UEAAJPEAI@Z
    virtual long GetLineNumber(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinePosition@CBinaryXmlReader@DirectUI@@UEAAJPEAI@Z
    virtual long GetLinePosition(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalName@CBinaryXmlReader@DirectUI@@UEAAJPEAPEBGPEAI@Z
    virtual long GetLocalName(unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetNamespaceUri@CBinaryXmlReader@DirectUI@@UEAAJPEAPEBGPEAI@Z
    virtual long GetNamespaceUri(unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNodeType@CBinaryXmlReader@DirectUI@@UEAAJPEAW4XmlNodeType@@@Z
    virtual long GetNodeType(int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPrefix@CBinaryXmlReader@DirectUI@@UEAAJPEAPEBGPEAI@Z
    virtual long GetPrefix(unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProperty@CBinaryXmlReader@DirectUI@@UEAAJIPEA_J@Z
    virtual long GetProperty(unsigned int, int64_t *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetQualifiedName@CBinaryXmlReader@DirectUI@@UEAAJPEAPEBGPEAI@Z
    virtual long GetQualifiedName(unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CBinaryXmlReader@DirectUI@@UEAAJIPEAPEBG@Z
    virtual long GetResource(unsigned int, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CBinaryXmlReader@DirectUI@@UEAAJPEAPEBGPEAI@Z
    virtual long GetValue(unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferBinaryDUI@CBinaryXmlReader@DirectUI@@SA_NPEBE_K@Z
    static bool IsBufferBinaryDUI(unsigned char const *, uint64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDefault@CBinaryXmlReader@DirectUI@@UEAAHXZ
    virtual int IsDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEOF@CBinaryXmlReader@DirectUI@@UEAAHXZ
    virtual int IsEOF();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyElement@CBinaryXmlReader@DirectUI@@UEAAHXZ
    virtual int IsEmptyElement();
    // Category: Method | Source: PE Export
    // Symbol: ?MoveToAttributeByName@CBinaryXmlReader@DirectUI@@UEAAJPEBG0@Z
    virtual long MoveToAttributeByName(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToElement@CBinaryXmlReader@DirectUI@@UEAAJXZ
    virtual long MoveToElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToFirstAttribute@CBinaryXmlReader@DirectUI@@UEAAJXZ
    virtual long MoveToFirstAttribute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToNextAttribute@CBinaryXmlReader@DirectUI@@UEAAJXZ
    virtual long MoveToNextAttribute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopState@CBinaryXmlReader@DirectUI@@UEAAJXZ
    virtual long PopState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushState@CBinaryXmlReader@DirectUI@@UEAAJXZ
    virtual long PushState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CBinaryXmlReader@DirectUI@@UEAAJPEAW4XmlNodeType@@@Z
    virtual long Read(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?ReadValueChunk@CBinaryXmlReader@DirectUI@@UEAAJPEAGIPEAI@Z
    virtual long ReadValueChunk(unsigned short *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekToResource@CBinaryXmlReader@DirectUI@@UEAAJPEBG@Z
    virtual long SeekToResource(unsigned short const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetInput@CBinaryXmlReader@DirectUI@@UEAAJPEAUIUnknown@@@Z
    virtual long SetInput(IUnknown *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetProperty@CBinaryXmlReader@DirectUI@@UEAAJI_J@Z
    virtual long SetProperty(unsigned int, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBinaryXmlReader@DirectUI@@UEAA@XZ
    virtual ~CBinaryXmlReader();
};
} // namespace DirectUI
