enum class EFoliageScaling {
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    LockXZ = 3,
    LockYZ = 4,
    EFoliageScaling_MAX = 5,
};

namespace ESimulationOverlap {
    enum Type {
        CollisionOverlap = 0,
        ShadeOverlap = 1,
        None = 2,
        ESimulationOverlap_MAX = 3,
    };
}

namespace ESimulationQuery {
    enum Type {
        None = 0,
        CollisionOverlap = 1,
        ShadeOverlap = 2,
        AnyOverlap = 3,
        ESimulationQuery_MAX = 4,
    };
}

enum class EVertexColorMaskChannel {
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    MAX_None = 4,
    EVertexColorMaskChannel_MAX = 5,
};

enum FoliageVertexColorMask {
    FOLIAGEVERTEXCOLORMASK_Disabled = 0,
    FOLIAGEVERTEXCOLORMASK_Red = 1,
    FOLIAGEVERTEXCOLORMASK_Green = 2,
    FOLIAGEVERTEXCOLORMASK_Blue = 3,
    FOLIAGEVERTEXCOLORMASK_Alpha = 4,
    FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

