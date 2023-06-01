enum class EAimMode {
    AimAtTarget = 0,
    OrientToTarget = 1,
    MAX = 2,
};

enum class EApplyTransformMode {
    Override = 0,
    Additive = 1,
    Max = 2,
};

enum class EBoneGetterSetterMode {
    LocalSpace = 0,
    GlobalSpace = 1,
    Max = 2,
};

enum class ECRSimConstraintType {
    Distance = 0,
    DistanceFromA = 1,
    DistanceFromB = 2,
    Plane = 3,
    ECRSimConstraintType_MAX = 4,
};

enum class ECRSimPointForceType {
    Direction = 0,
    ECRSimPointForceType_MAX = 1,
};

enum class ECRSimPointIntegrateType {
    Verlet = 0,
    SemiExplicitEuler = 1,
    ECRSimPointIntegrateType_MAX = 2,
};

enum class ECRSimSoftCollisionType {
    Plane = 0,
    Sphere = 1,
    Cone = 2,
    ECRSimSoftCollisionType_MAX = 3,
};

enum class EControlRigAnimEasingType {
    Linear = 0,
    QuadraticEaseIn = 1,
    QuadraticEaseOut = 2,
    QuadraticEaseInOut = 3,
    CubicEaseIn = 4,
    CubicEaseOut = 5,
    CubicEaseInOut = 6,
    QuarticEaseIn = 7,
    QuarticEaseOut = 8,
    QuarticEaseInOut = 9,
    QuinticEaseIn = 10,
    QuinticEaseOut = 11,
    QuinticEaseInOut = 12,
    SineEaseIn = 13,
    SineEaseOut = 14,
    SineEaseInOut = 15,
    CircularEaseIn = 16,
    CircularEaseOut = 17,
    CircularEaseInOut = 18,
    ExponentialEaseIn = 19,
    ExponentialEaseOut = 20,
    ExponentialEaseInOut = 21,
    ElasticEaseIn = 22,
    ElasticEaseOut = 23,
    ElasticEaseInOut = 24,
    BackEaseIn = 25,
    BackEaseOut = 26,
    BackEaseInOut = 27,
    BounceEaseIn = 28,
    BounceEaseOut = 29,
    BounceEaseInOut = 30,
    EControlRigAnimEasingType_MAX = 31,
};

namespace EControlRigClampSpatialMode {
    enum Type {
        Plane = 0,
        Cylinder = 1,
        Sphere = 2,
        EControlRigClampSpatialMode_MAX = 3,
    };
}

enum class EControlRigComponentMapDirection {
    Input = 0,
    Output = 1,
    EControlRigComponentMapDirection_MAX = 2,
};

enum class EControlRigComponentSpace {
    WorldSpace = 0,
    ActorSpace = 1,
    ComponentSpace = 2,
    RigSpace = 3,
    LocalSpace = 4,
    Max = 5,
};

enum class EControlRigCurveAlignment {
    Front = 0,
    Stretched = 1,
    EControlRigCurveAlignment_MAX = 2,
};

namespace EControlRigDrawHierarchyMode {
    enum Type {
        Axes = 0,
        Max = 1,
    };
}

namespace EControlRigDrawSettings {
    enum Type {
        Points = 0,
        Lines = 1,
        LineStrip = 2,
        DynamicMesh = 3,
        EControlRigDrawSettings_MAX = 4,
    };
}

enum class EControlRigFKRigExecuteMode {
    Replace = 0,
    Additive = 1,
    Max = 2,
};

enum class EControlRigModifyBoneMode {
    OverrideLocal = 0,
    OverrideGlobal = 1,
    AdditiveLocal = 2,
    AdditiveGlobal = 3,
    Max = 4,
};

enum class EControlRigRotationOrder {
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
    EControlRigRotationOrder_MAX = 6,
};

enum class EControlRigSetKey {
    DoNotCare = 0,
    Always = 1,
    Never = 2,
    EControlRigSetKey_MAX = 3,
};

enum class EControlRigState {
    Init = 0,
    Update = 1,
    Invalid = 2,
    EControlRigState_MAX = 3,
};

enum class EControlRigVectorKind {
    Direction = 0,
    Location = 1,
    EControlRigVectorKind_MAX = 2,
};

enum class ERBFKernelType {
    Gaussian = 0,
    Exponential = 1,
    Linear = 2,
    Cubic = 3,
    Quintic = 4,
    ERBFKernelType_MAX = 5,
};

enum class ERBFQuatDistanceType {
    Euclidean = 0,
    ArcLength = 1,
    SwingAngle = 2,
    TwistAngle = 3,
    ERBFQuatDistanceType_MAX = 4,
};

enum class ERBFVectorDistanceType {
    Euclidean = 0,
    Manhattan = 1,
    ArcLength = 2,
    ERBFVectorDistanceType_MAX = 3,
};

enum class ERigBoneType {
    Imported = 0,
    User = 1,
    ERigBoneType_MAX = 2,
};

enum class ERigControlAxis {
    X = 0,
    Y = 1,
    Z = 2,
    ERigControlAxis_MAX = 3,
};

enum class ERigControlType {
    Bool = 0,
    Float = 1,
    Integer = 2,
    Vector2D = 3,
    Position = 4,
    Scale = 5,
    Rotator = 6,
    Transform = 7,
    TransformNoScale = 8,
    EulerTransform = 9,
    ERigControlType_MAX = 10,
};

enum class ERigControlValueType {
    Initial = 0,
    Current = 1,
    Minimum = 2,
    Maximum = 3,
    ERigControlValueType_MAX = 4,
};

enum class ERigElementType {
    None = 0,
    Bone = 1,
    Space = 2,
    Control = 4,
    Curve = 8,
    All = 15,
    ERigElementType_MAX = 16,
};

enum class ERigEvent {
    None = 0,
    RequestAutoKey = 1,
    Max = 2,
};

enum class ERigExecutionType {
    Runtime = 0,
    Editing = 1,
    Max = 2,
};

enum class ERigHierarchyImportMode {
    Append = 0,
    Replace = 1,
    ReplaceLocalTransform = 2,
    ReplaceGlobalTransform = 3,
    Max = 4,
};

enum class ERigSpaceType {
    Global = 0,
    Bone = 1,
    Control = 2,
    Space = 3,
    ERigSpaceType_MAX = 4,
};

enum class ERigUnitDebugPointMode {
    Point = 0,
    Vector = 1,
    Max = 2,
};

enum class ERigUnitDebugTransformMode {
    Point = 0,
    Axes = 1,
    Box = 2,
    Max = 3,
};

enum class ERigUnitVisualDebugPointMode {
    Point = 0,
    Vector = 1,
    Max = 2,
};

enum class ETransformGetterType {
    Initial = 0,
    Current = 1,
    Max = 2,
};

enum class ETransformSpaceMode {
    LocalSpace = 0,
    GlobalSpace = 1,
    BaseSpace = 2,
    BaseJoint = 3,
    Max = 4,
};

