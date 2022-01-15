enum class ERuntimeGenerationType
{
    Static = 0,
    DynamicModifiersOnly = 1,
    Dynamic = 2,
    LegacyGeneration = 3,
    ERuntimeGenerationType_MAX = 4,
}

enum ENavCostDisplay
{
    TotalCost = 0,
    HeuristicOnly = 1,
    RealCostOnly = 2,
    ENavCostDisplay_MAX = 3,
}

enum class ENavSystemOverridePolicy
{
    Override = 0,
    Append = 1,
    Skip = 2,
    ENavSystemOverridePolicy_MAX = 3,
}

enum ERecastPartitioning
{
    Monotone = 0,
    Watershed = 1,
    ChunkyMonotone = 2,
    ERecastPartitioning_MAX = 3,
}

