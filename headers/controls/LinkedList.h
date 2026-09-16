#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI {
class LinkedList {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Add@LinkedList@DirectUI@@QEAAXPEAVLinkedListNode@2@@Z
    void Add(LinkedListNode *);
    // Category: Ctor | Source: PE Export
    // Symbol: ??0LinkedList@DirectUI@@QEAA@XZ
    LinkedList();
    // Category: Method | Source: PE Export
    // Symbol: ?Remove@LinkedList@DirectUI@@QEAAXPEAVLinkedListNode@2@@Z
    void Remove(LinkedListNode *);
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveTail@LinkedList@DirectUI@@QEAAPEAVLinkedListNode@2@XZ
    LinkedListNode * RemoveTail();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1LinkedList@DirectUI@@QEAA@XZ
    ~LinkedList();
};
} // namespace DirectUI
