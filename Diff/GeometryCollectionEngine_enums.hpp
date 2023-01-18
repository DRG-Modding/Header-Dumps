enum class EChaosBreakingSortMethod {
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByNearestFirst = 3,
    Count = 4,
    EChaosBreakingSortMethod_MAX = 5,
};

enum class EChaosCollisionSortMethod {
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByHighestImpulse = 3,
    SortByNearestFirst = 4,
    Count = 5,
    EChaosCollisionSortMethod_MAX = 6,
};

enum class EChaosTrailingSortMethod {
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByNearestFirst = 3,
    Count = 4,
    EChaosTrailingSortMethod_MAX = 5,
};

enum class ECollectionAttributeEnum {
    Chaos_Active = 0,
    Chaos_DynamicState = 1,
    Chaos_CollisionGroup = 2,
    Chaos_Max = 3,
};

enum class ECollectionGroupEnum {
    Chaos_Traansform = 0,
    Chaos_Max = 1,
};

enum class EGeometryCollectionDebugDrawActorHideGeometry {
    HideNone = 0,
    HideWithCollision = 1,
    HideSelected = 2,
    HideWholeCollection = 3,
    HideAll = 4,
    EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

