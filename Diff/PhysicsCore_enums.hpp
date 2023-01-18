enum EAngularConstraintMotion {
    ACM_Free = 0,
    ACM_Limited = 1,
    ACM_Locked = 2,
    ACM_MAX = 3,
};

namespace EBodyCollisionResponse {
    enum Type {
        BodyCollision_Enabled = 0,
        BodyCollision_Disabled = 1,
        BodyCollision_MAX = 2,
    };
}

enum ECollisionTraceFlag {
    CTF_UseDefault = 0,
    CTF_UseSimpleAndComplex = 1,
    CTF_UseSimpleAsComplex = 2,
    CTF_UseComplexAsSimple = 3,
    CTF_MAX = 4,
};

namespace EConstraintFrame {
    enum Type {
        Frame1 = 0,
        Frame2 = 1,
        EConstraintFrame_MAX = 2,
    };
}

namespace EFrictionCombineMode {
    enum Type {
        Average = 0,
        Min = 1,
        Multiply = 2,
        Max = 3,
    };
}

enum ELinearConstraintMotion {
    LCM_Free = 0,
    LCM_Limited = 1,
    LCM_Locked = 2,
    LCM_MAX = 3,
};

enum EPhysicalSurface {
    SurfaceType_Default = 0,
    SurfaceType1 = 1,
    SurfaceType2 = 2,
    SurfaceType3 = 3,
    SurfaceType4 = 4,
    SurfaceType5 = 5,
    SurfaceType6 = 6,
    SurfaceType7 = 7,
    SurfaceType8 = 8,
    SurfaceType9 = 9,
    SurfaceType10 = 10,
    SurfaceType11 = 11,
    SurfaceType12 = 12,
    SurfaceType13 = 13,
    SurfaceType14 = 14,
    SurfaceType15 = 15,
    SurfaceType16 = 16,
    SurfaceType17 = 17,
    SurfaceType18 = 18,
    SurfaceType19 = 19,
    SurfaceType20 = 20,
    SurfaceType21 = 21,
    SurfaceType22 = 22,
    SurfaceType23 = 23,
    SurfaceType24 = 24,
    SurfaceType25 = 25,
    SurfaceType26 = 26,
    SurfaceType27 = 27,
    SurfaceType28 = 28,
    SurfaceType29 = 29,
    SurfaceType30 = 30,
    SurfaceType31 = 31,
    SurfaceType32 = 32,
    SurfaceType33 = 33,
    SurfaceType34 = 34,
    SurfaceType35 = 35,
    SurfaceType36 = 36,
    SurfaceType37 = 37,
    SurfaceType38 = 38,
    SurfaceType39 = 39,
    SurfaceType40 = 40,
    SurfaceType41 = 41,
    SurfaceType42 = 42,
    SurfaceType43 = 43,
    SurfaceType44 = 44,
    SurfaceType45 = 45,
    SurfaceType46 = 46,
    SurfaceType47 = 47,
    SurfaceType48 = 48,
    SurfaceType49 = 49,
    SurfaceType50 = 50,
    SurfaceType51 = 51,
    SurfaceType52 = 52,
    SurfaceType53 = 53,
    SurfaceType54 = 54,
    SurfaceType55 = 55,
    SurfaceType56 = 56,
    SurfaceType57 = 57,
    SurfaceType58 = 58,
    SurfaceType59 = 59,
    SurfaceType60 = 60,
    SurfaceType61 = 61,
    SurfaceType62 = 62,
    SurfaceType_Max = 63,
    EPhysicalSurface_MAX = 64,
};

enum EPhysicsType {
    PhysType_Default = 0,
    PhysType_Kinematic = 1,
    PhysType_Simulated = 2,
    PhysType_MAX = 3,
};

enum ERadialImpulseFalloff {
    RIF_Constant = 0,
    RIF_Linear = 1,
    RIF_MAX = 2,
};

enum class ESleepFamily {
    Normal = 0,
    Sensitive = 1,
    Custom = 2,
    ESleepFamily_MAX = 3,
};

