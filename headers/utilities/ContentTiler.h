#pragma once
#include "../windissect_forwards.h"

// Reconstructed from DUI70.dll by Windissect. 16 member(s).
namespace DirectUI {
class ContentTiler {
public:
    class TILING_DATA;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTiling@ContentTiler@DirectUI@@QEAAJPEAUIDirectManipulationContent@@@Z
    long BeginTiling(IDirectManipulationContent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTilesForContent@ContentTiler@DirectUI@@QEAAJPEAUIDirectManipulationContent@@@Z
    long ComputeTilesForContent(IDirectManipulationContent *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentTiler@DirectUI@@QEAA@XZ
    ContentTiler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTiling@ContentTiler@DirectUI@@QEAAJPEAUIDirectManipulationContent@@@Z
    long EndTiling(IDirectManipulationContent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@ContentTiler@DirectUI@@QEAAJPEAUIDirectManipulationContent@@PEAMK@Z
    long GetTransform(IDirectManipulationContent *, float *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@ContentTiler@DirectUI@@QEAAJPEAUTILING_PARAMETERS@2@@Z
    long SetParameters(::DirectUI::TILING_PARAMETERS *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentTiler@DirectUI@@QEAA@XZ
    ~ContentTiler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculatePredictedTransform@ContentTiler@DirectUI@@AEAAJPEAUTILING_DATA@12@AEBVMatrix3x2F@D2D1@@MMMMPEAV45@@Z
    long _CalculatePredictedTransform(WindissectOpaque *, ::D2D1::Matrix3x2F const &, float, float, float, float, ::D2D1::Matrix3x2F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeThresholdRect@ContentTiler@DirectUI@@AEAAJPEAUTILING_DATA@12@AEBVMatrix3x2F@D2D1@@PEAUtagRECT@@2@Z
    long _ComputeThresholdRect(WindissectOpaque *, ::D2D1::Matrix3x2F const &, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeTileSize@ContentTiler@DirectUI@@AEAAXPEAUTILING_DATA@12@@Z
    void _ComputeTileSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestructionCallback@ContentTiler@DirectUI@@CAXPEAUIUnknown@@PEAUTILING_DATA@12@@Z
    static void _DestructionCallback(IUnknown *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillRectWithTiles@ContentTiler@DirectUI@@AEAAJPEAUTILING_DATA@12@PEAUtagRECT@@1@Z
    long _FillRectWithTiles(WindissectOpaque *, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FillTileRect@ContentTiler@DirectUI@@AEAAJPEAUTILING_DATA@12@PEAUtagRECT@@1PEA_N@Z
    long _FillTileRect(WindissectOpaque *, tagRECT *, tagRECT *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTileCreationTime@ContentTiler@DirectUI@@AEAAMPEAUTILING_DATA@12@@Z
    float _GetTileCreationTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleMiss@ContentTiler@DirectUI@@AEAAJPEAUTILING_DATA@12@AEBVMatrix3x2F@D2D1@@PEAUtagRECT@@2@Z
    long _HandleMiss(WindissectOpaque *, ::D2D1::Matrix3x2F const &, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeCallbacks@ContentTiler@DirectUI@@AEAAJPEAVManipulationHelper@2@PEAUTILING_DATA@12@PEAUIUnknown@@PEAUtagRECT@@3@Z
    long _MakeCallbacks(::DirectUI::ManipulationHelper *, WindissectOpaque *, IUnknown *, tagRECT *, tagRECT *);
};
} // namespace DirectUI
