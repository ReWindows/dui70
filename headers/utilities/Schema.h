#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 13 member(s).
namespace DirectUI {
class Schema {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CreatePatternProvider@Schema@DirectUI@@SAJW4Pattern@12@PEAVElementProvider@2@PEAPEAUIUnknown@@@Z
    static long CreatePatternProvider(int, ::DirectUI::ElementProvider *, IUnknown * *);
    // Category: Method | Source: PE Export
    // Symbol: ?EventFromEventId@Schema@DirectUI@@SA?AW4Event@12@H@Z
    static int EventFromEventId(int);
    // Category: Method | Source: PE Export
    // Symbol: ?Init@Schema@DirectUI@@SAJXZ
    static long Init();
    // Category: Method | Source: PE Export
    // Symbol: ?LookupAccessibleRole@Schema@DirectUI@@SAHHPEA_N@Z
    static int LookupAccessibleRole(int, bool *);
    // Category: Method | Source: PE Export
    // Symbol: ?PatternFromPatternId@Schema@DirectUI@@SA?AW4Pattern@12@H@Z
    static int PatternFromPatternId(int);
    // Category: Method | Source: PE Export
    // Symbol: ?PfnIsSupportedFromPattern@Schema@DirectUI@@SAP6A_NPEAVElement@2@@ZW4Pattern@12@@Z
    static bool (*PfnIsSupportedFromPattern(int))(::DirectUI::Element *);
private:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetProcs@Schema@DirectUI@@CAJXZ
    static long GetProcs();
    // Category: Method | Source: PE Export
    // Symbol: ?LookupControlInfos@Schema@DirectUI@@CAJXZ
    static long LookupControlInfos();
    // Category: Method | Source: PE Export
    // Symbol: ?LookupEventInfos@Schema@DirectUI@@CAJXZ
    static long LookupEventInfos();
    // Category: Method | Source: PE Export
    // Symbol: ?LookupPatternInfos@Schema@DirectUI@@CAJXZ
    static long LookupPatternInfos();
    // Category: Method | Source: PE Export
    // Symbol: ?LookupPropertyInfos@Schema@DirectUI@@CAJXZ
    static long LookupPropertyInfos();
};
} // namespace DirectUI
