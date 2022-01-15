enum class EPreciousMaterialOptions
{
    TurnIntoGems = 0,
    LeaveUntouched = 1,
    Ignore = 2,
    EPreciousMaterialOptions_MAX = 3,
}

enum class ECarveFilterType
{
    ReplaceAll = 0,
    ReplaceEmpty = 1,
    ReplaceSolid = 2,
    ECarveFilterType_MAX = 3,
}

enum class CarveOptionsCellSize
{
    CARVE_CELL_SIZE_25 = 0,
    CARVE_CELL_SIZE_50 = 1,
    CARVE_CELL_SIZE_100 = 2,
    CARVE_CELL_SIZE_200 = 3,
    CARVE_CELL_SIZE_MAX = 4,
}

enum class ECSGModifiers
{
    AddMaterialLayers = 0,
    HasCachedTree = 1,
    ECSGModifiers_MAX = 2,
}

enum class EGeneralComb
{
    Empty = 0,
    KeepSrc = 1,
    KeepDest = 2,
    Replace = 3,
    EGeneralComb_MAX = 4,
}

enum class EGeneralCombEmpty
{
    Empty = 0,
    Replace = 1,
    EGeneralCombEmpty_MAX = 2,
}

enum class EGeneralPattern
{
    SrcSpecific = 0,
    DestSpecific = 1,
    EGeneralPattern_MAX = 2,
}

enum class EPattern
{
    Specific = 0,
    Precious = 1,
    EPattern_MAX = 2,
}

enum class EBinaryComb
{
    Empty = 0,
    Unchanged = 1,
    Replace = 2,
    Burn = 3,
    EBinaryComb_MAX = 4,
}

enum class EEmptyBinaryComb
{
    Unchanged = 0,
    Replace = 1,
    EEmptyBinaryComb_MAX = 2,
}

enum class EPreviewCellSize
{
    PRV_CELL_SIZE_12_5 = 0,
    PRV_CELL_SIZE_25 = 1,
    PRV_CELL_SIZE_50 = 2,
    PRV_CELL_SIZE_100 = 3,
    PRV_CELL_SIZE_200 = 4,
    PRV_CELL_SIZE_MAX = 5,
}

enum class ESDFModulateMode
{
    MM_Disabled = 0,
    MM_Single = 1,
    MM_Loop = 2,
    MM_MAX = 3,
}

enum class EPathfinderResult
{
    Success = 0,
    Failed_StartingPointNotFound = 1,
    Failed_EndPointNotFound = 2,
    Failed_PointsNotConnected = 3,
    Failed_UsedTooManyNodes = 4,
    Failed_NotReady = 5,
    Failed_UnknownError = 6,
    EPathfinderResult_MAX = 7,
}

enum class PFCollisionType
{
    SolidWalkable = 0,
    Block = 1,
    Danger = 2,
    PFCollisionType_MAX = 3,
}

enum class DeepPathFinderPreference
{
    None = 0,
    Floor = 1,
    Walls = 2,
    Ceiling = 3,
    DeepPathFinderPreference_MAX = 4,
}

enum class DeepPathFinderSize
{
    Invalid = 0,
    Small = 3,
    Medium = 2,
    Large = 1,
    DeepPathFinderSize_MAX = 4,
}

enum class DeepPathFinderType
{
    Walk = 0,
    Fly = 1,
    MAX = 2,
}

