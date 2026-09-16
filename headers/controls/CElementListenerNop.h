#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 6 member(s).
namespace DirectUI::Internal {
class CElementListenerNop {
private:
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedEvent@CElementListenerNop@Internal@DirectUI@@EEAAXPEAVElement@3@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedInput@CElementListenerNop@Internal@DirectUI@@EEAAXPEAVElement@3@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanged@CElementListenerNop@Internal@DirectUI@@EEAAXPEAVElement@3@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenedPropertyChanging@CElementListenerNop@Internal@DirectUI@@EEAA_NPEAVElement@3@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual bool OnListenedPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerAttach@CElementListenerNop@Internal@DirectUI@@EEAAXPEAVElement@3@@Z
    virtual void OnListenerAttach(::DirectUI::Element *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnListenerDetach@CElementListenerNop@Internal@DirectUI@@EEAAXPEAVElement@3@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
};
} // namespace DirectUI::Internal
