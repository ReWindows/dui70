#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 5 member(s).
namespace SWF {
class ShowFrame {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?execute@ShowFrame@SWF@@UEAA_NAEAV22@AEAVMovie@2@@Z
    virtual bool execute(SWF &, void* &);
    // Category: Method | Source: PE Export
    // Symbol: ?parse@ShowFrame@SWF@@UEAAJAEBV22@AEAVStream@Library@@AEBI@Z
    virtual long parse(SWF const &, ::Library::Stream &, unsigned int const &);
    // Category: Method | Source: PE Export
    // Symbol: ?tagID@ShowFrame@SWF@@UEBA?AW4TagID@Tag@2@XZ
    virtual int tagID() const;
};
} // namespace SWF
