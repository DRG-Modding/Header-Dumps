enum class EChaosBufferMode {
    Double = 0,
    Triple = 1,
    Num = 2,
    Invalid = 3,
    EChaosBufferMode_MAX = 4,
};

enum class EChaosSolverTickMode {
    Fixed = 0,
    Variable = 1,
    VariableCapped = 2,
    VariableCappedWithTarget = 3,
    EChaosSolverTickMode_MAX = 4,
};

enum class EChaosThreadingMode {
    DedicatedThread = 0,
    TaskGraph = 1,
    SingleThread = 2,
    Num = 3,
    Invalid = 4,
    EChaosThreadingMode_MAX = 5,
};

enum class EClusterUnionMethod {
    PointImplicit = 0,
    DelaunayTriangulation = 1,
    MinimalSpanningSubsetDelaunayTriangulation = 2,
    PointImplicitAugmentedWithMinimalDelaunay = 3,
    None = 4,
    EClusterUnionMethod_MAX = 5,
};

enum class ECollisionTypeEnum {
    Chaos_Volumetric = 0,
    Chaos_Surface_Volumetric = 1,
    Chaos_Max = 2,
};

enum class EEmissionPatternTypeEnum {
    Chaos_Emission_Pattern_First_Frame = 0,
    Chaos_Emission_Pattern_On_Demand = 1,
    Chaos_Max = 2,
};

enum EFieldCullingOperationType {
    Field_Culling_Inside = 0,
    Field_Culling_Outside = 1,
    Field_Culling_Operation_Max = 2,
    Field_Culling_MAX = 3,
};

enum EFieldFalloffType {
    Field_FallOff_None = 0,
    Field_Falloff_Linear = 1,
    Field_Falloff_Inverse = 2,
    Field_Falloff_Squared = 3,
    Field_Falloff_Logarithmic = 4,
    Field_Falloff_Max = 5,
};

enum EFieldFilterType {
    Field_Filter_Dynamic = 0,
    Field_Filter_Kinematic = 1,
    Field_Filter_Static = 2,
    Field_Filter_All = 3,
    Field_Filter_Max = 4,
};

enum EFieldIntegerType {
    Integer_DynamicState = 0,
    Integer_ActivateDisabled = 1,
    Integer_CollisionGroup = 2,
    Integer_PositionAnimated = 3,
    Integer_PositionStatic = 4,
    Integer_TargetMax = 5,
    Integer_MAX = 6,
};

enum EFieldOperationType {
    Field_Multiply = 0,
    Field_Divide = 1,
    Field_Add = 2,
    Field_Substract = 3,
    Field_Operation_Max = 4,
};

enum EFieldOutputType {
    Field_Output_Vector = 0,
    Field_Output_Scalar = 1,
    Field_Output_Integer = 2,
    Field_Output_Max = 3,
};

enum EFieldPhysicsDefaultFields {
    Field_RadialIntMask = 0,
    Field_RadialFalloff = 1,
    Field_UniformVector = 2,
    Field_RadialVector = 3,
    Field_RadialVectorFalloff = 4,
    Field_EFieldPhysicsDefaultFields_Max = 5,
    Field_MAX = 6,
};

enum EFieldPhysicsType {
    Field_None = 0,
    Field_DynamicState = 1,
    Field_LinearForce = 2,
    Field_ExternalClusterStrain = 3,
    Field_Kill = 4,
    Field_LinearVelocity = 5,
    Field_AngularVelociy = 6,
    Field_AngularTorque = 7,
    Field_InternalClusterStrain = 8,
    Field_DisableThreshold = 9,
    Field_SleepingThreshold = 10,
    Field_PositionStatic = 11,
    Field_PositionAnimated = 12,
    Field_PositionTarget = 13,
    Field_DynamicConstraint = 14,
    Field_CollisionGroup = 15,
    Field_ActivateDisabled = 16,
    Field_PhysicsType_Max = 17,
};

enum EFieldResolutionType {
    Field_Resolution_Minimal = 0,
    Field_Resolution_DisabledParents = 1,
    Field_Resolution_Maximum = 2,
    Field_Resolution_Max = 3,
};

enum EFieldScalarType {
    Scalar_ExternalClusterStrain = 0,
    Scalar_Kill = 1,
    Scalar_DisableThreshold = 2,
    Scalar_SleepingThreshold = 3,
    Scalar_InternalClusterStrain = 4,
    Scalar_DynamicConstraint = 5,
    Scalar_TargetMax = 6,
    Scalar_MAX = 7,
};

enum EFieldVectorType {
    Vector_LinearForce = 0,
    Vector_LinearVelocity = 1,
    Vector_AngularVelocity = 2,
    Vector_AngularTorque = 3,
    Vector_PositionTarget = 4,
    Vector_TargetMax = 5,
    Vector_MAX = 6,
};

enum class EGeometryCollectionCacheType {
    None = 0,
    Record = 1,
    Play = 2,
    RecordAndPlay = 3,
    EGeometryCollectionCacheType_MAX = 4,
};

enum class EGeometryCollectionPhysicsTypeEnum {
    Chaos_AngularVelocity = 0,
    Chaos_DynamicState = 1,
    Chaos_LinearVelocity = 2,
    Chaos_InitialAngularVelocity = 3,
    Chaos_InitialLinearVelocity = 4,
    Chaos_CollisionGroup = 5,
    Chaos_LinearForce = 6,
    Chaos_AngularTorque = 7,
    Chaos_Max = 8,
};

enum class EImplicitTypeEnum {
    Chaos_Implicit_Box = 0,
    Chaos_Implicit_Sphere = 1,
    Chaos_Implicit_Capsule = 2,
    Chaos_Implicit_LevelSet = 3,
    Chaos_Implicit_None = 4,
    Chaos_Max = 5,
};

enum class EInitialVelocityTypeEnum {
    Chaos_Initial_Velocity_User_Defined = 0,
    Chaos_Initial_Velocity_None = 1,
    Chaos_Max = 2,
};

enum class EObjectStateTypeEnum {
    Chaos_NONE = 0,
    Chaos_Object_Sleeping = 1,
    Chaos_Object_Kinematic = 2,
    Chaos_Object_Static = 3,
    Chaos_Object_Dynamic = 4,
    Chaos_Object_UserDefined = 100,
    Chaos_Max = 101,
};

enum ESetMaskConditionType {
    Field_Set_Always = 0,
    Field_Set_IFF_NOT_Interior = 1,
    Field_Set_IFF_NOT_Exterior = 2,
    Field_MaskCondition_Max = 3,
};

enum EWaveFunctionType {
    Field_Wave_Cosine = 0,
    Field_Wave_Gaussian = 1,
    Field_Wave_Falloff = 2,
    Field_Wave_Decay = 3,
    Field_Wave_Max = 4,
};

