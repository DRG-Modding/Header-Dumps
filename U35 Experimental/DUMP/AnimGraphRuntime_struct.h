// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8 {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8 {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8 {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8 {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8 {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8 {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8 {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8 {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8 {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8 {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8 {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8 {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8 {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8 {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8 {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8 {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8 {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8 {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8 {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8 {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8 {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8 {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8 {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8 {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8 {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x04)
	float ActualAlpha; // 0x24(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x28(0x01)
	bool bAlphaBoolEnabled; // 0x29(0x01)
	float alpha; // 0x2c(0x04)
	FInputScaleBias AlphaScaleBias; // 0x30(0x08)
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
	FName AlphaCurveName; // 0x80(0x08)
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0xe0 (Inherited: 0x30)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x30(0x04)
	float Y; // 0x34(0x04)
	float Z; // 0x38(0x04)
	float PlayRate; // 0x3c(0x04)
	bool bLoop; // 0x40(0x01)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41(0x01)
	float StartPosition; // 0x44(0x04)
	UBlendSpaceBase* BlendSpace; // 0x48(0x08)
	UBlendSpaceBase* PreviousBlendSpace; // 0xd8(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x1b0 (Inherited: 0xe0)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x140(0x10)
	int32_t LODThreshold; // 0x150(0x04)
	FName SourceSocketName; // 0x154(0x08)
	FName PivotSocketName; // 0x15c(0x08)
	FVector LookAtLocation; // 0x164(0x0c)
	FVector SocketAxis; // 0x170(0x0c)
	float alpha; // 0x17c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x440 (Inherited: 0xc8)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xc8(0x04)
	float AngularDampingOverride; // 0xcc(0x04)
	FBoneReference RelativeSpaceBone; // 0x130(0x10)
	FBoneReference BoundBone; // 0x140(0x10)
	FBoneReference ChainEnd; // 0x150(0x10)
	FVector BoxExtents; // 0x160(0x0c)
	FVector LocalJointOffset; // 0x16c(0x0c)
	float GravityScale; // 0x178(0x04)
	FVector GravityOverride; // 0x17c(0x0c)
	float LinearSpringConstant; // 0x188(0x04)
	float AngularSpringConstant; // 0x18c(0x04)
	float WindScale; // 0x190(0x04)
	FVector ComponentLinearAccScale; // 0x194(0x0c)
	FVector ComponentLinearVelScale; // 0x1a0(0x0c)
	FVector ComponentAppliedLinearAccClamp; // 0x1ac(0x0c)
	float AngularBiasOverride; // 0x1b8(0x04)
	int32_t NumSolverIterationsPreUpdate; // 0x1bc(0x04)
	int32_t NumSolverIterationsPostUpdate; // 0x1c0(0x04)
	FAnimPhysConstraintSetup ConstraintSetup; // 0x1c4(0x48)
	TArray<FAnimPhysSphericalLimit> SphericalLimits; // 0x210(0x10)
	float SphereCollisionRadius; // 0x220(0x04)
	FVector ExternalForce; // 0x224(0x0c)
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x230(0x10)
	enum class AnimPhysCollisionType CollisionType; // 0x240(0x01)
	enum class AnimPhysSimSpaceType SimulationSpace; // 0x241(0x01)
	char bUseSphericalLimits : 1; // 0x244(0x01)
	char bUsePlanarLimit : 1; // 0x244(0x01)
	char bDoUpdate : 1; // 0x244(0x01)
	char bDoEval : 1; // 0x244(0x01)
	char bOverrideLinearDamping : 1; // 0x244(0x01)
	char bOverrideAngularBias : 1; // 0x244(0x01)
	char bOverrideAngularDamping : 1; // 0x244(0x01)
	char bEnableWind : 1; // 0x244(0x01)
	char pad_1DF_0 : 1; // 0x1df(0x01)
	char bUseGravityOverride : 1; // 0x245(0x01)
	char bLinearSpring : 1; // 0x245(0x01)
	char bAngularSpring : 1; // 0x245(0x01)
	char bChain : 1; // 0x245(0x01)
	FRotationRetargetingInfo RetargetingSettings; // 0x250(0x130)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x130 (Inherited: 0x00)
struct FRotationRetargetingInfo {
	bool bEnabled; // 0x00(0x01)
	FTransform Source; // 0x10(0x30)
	FTransform Target; // 0x40(0x30)
	enum class ERotationComponent RotationComponent; // 0x70(0x01)
	FVector TwistAxis; // 0x74(0x0c)
	bool bUseAbsoluteAngle; // 0x80(0x01)
	float SourceMinimum; // 0x84(0x04)
	float SourceMaximum; // 0x88(0x04)
	float TargetMinimum; // 0x8c(0x04)
	float TargetMaximum; // 0x90(0x04)
	enum class EEasingFuncType EasingType; // 0x94(0x01)
	FRuntimeFloatCurve CustomCurve; // 0x98(0x88)
	bool bFlipEasing; // 0x120(0x01)
	float EasingWeight; // 0x124(0x04)
	bool bClamp; // 0x128(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x40 (Inherited: 0x00)
struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x00(0x10)
	FTransform PlaneTransform; // 0x10(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x24 (Inherited: 0x00)
struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x00(0x10)
	FVector SphereLocalOffset; // 0x10(0x0c)
	float LimitRadius; // 0x1c(0x04)
	enum class ESphericalLimitType LimitType; // 0x20(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x48 (Inherited: 0x00)
struct FAnimPhysConstraintSetup {
	enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x00(0x01)
	enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x01(0x01)
	enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x02(0x01)
	FVector LinearAxesMin; // 0x04(0x0c)
	FVector LinearAxesMax; // 0x10(0x0c)
	enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x1c(0x01)
	enum class AnimPhysTwistAxis TwistAxis; // 0x1d(0x01)
	enum class AnimPhysTwistAxis AngularTargetAxis; // 0x1e(0x01)
	float ConeAngle; // 0x20(0x04)
	FVector AngularLimitsMin; // 0x24(0x0c)
	FVector AngularLimitsMax; // 0x30(0x0c)
	FVector AngularTarget; // 0x3c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10(0x10)
	FPoseLink Additive; // 0x20(0x10)
	float alpha; // 0x30(0x04)
	FInputScaleBias AlphaScaleBias; // 0x34(0x08)
	int32_t LODThreshold; // 0x3c(0x04)
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	FName AlphaCurveName; // 0x88(0x08)
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	enum class EAnimAlphaInputType AlphaInputType; // 0xc4(0x01)
	bool bAlphaBoolEnabled; // 0xc5(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0xe8 (Inherited: 0xc8)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8(0x10)
	TArray<FVector> AngularOffsets; // 0xd8(0x10)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x28 (Inherited: 0x00)
struct FAngularRangeLimit {
	FVector LimitMin; // 0x00(0x0c)
	FVector LimitMax; // 0x0c(0x0c)
	FBoneReference Bone; // 0x18(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x68 (Inherited: 0x10)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10(0x10)
	FPoseLink B; // 0x20(0x10)
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30(0x10)
	float alpha; // 0x50(0x04)
	FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	enum class EBoneControlSpace TransformsSpace; // 0x60(0x01)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x24 (Inherited: 0x00)
struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x00(0x10)
	FBoneReference TargetBone; // 0x10(0x10)
	bool bBlendTranslation; // 0x20(0x01)
	bool bBlendRotation; // 0x21(0x01)
	bool bBlendScale; // 0x22(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_BlendListBase : FAnimNode_Base {
	TArray<FPoseLink> BlendPose; // 0x10(0x10)
	TArray<float> BlendTime; // 0x20(0x10)
	enum class EBlendListTransitionType TransitionType; // 0x30(0x01)
	enum class EAlphaBlendOption BlendType; // 0x31(0x01)
	bool bResetChildOnActivation; // 0x32(0x01)
	UCurveFloat* CustomBlendCurve; // 0x38(0x08)
	UBlendProfile* BlendProfile; // 0x40(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xa0 (Inherited: 0x98)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xb0 (Inherited: 0x98)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98(0x10)
	char ActiveEnumValue; // 0xa8(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xa0 (Inherited: 0x98)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0xe8 (Inherited: 0xe0)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe0(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x118 (Inherited: 0xc8)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8(0x10)
	UCurveFloat* DrivingCurve; // 0xd8(0x08)
	float Multiplier; // 0xe0(0x04)
	float RangeMin; // 0xe4(0x04)
	float RangeMax; // 0xe8(0x04)
	float RemappedMin; // 0xec(0x04)
	float RemappedMax; // 0xf0(0x04)
	FName ParameterName; // 0xf4(0x08)
	FBoneReference TargetBone; // 0xfc(0x10)
	enum class EDrivenDestinationMode DestinationMode; // 0x10c(0x01)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x10d(0x01)
	enum class EComponentType SourceComponent; // 0x10e(0x01)
	char bUseRange : 1; // 0x10f(0x01)
	char bAffectTargetTranslationX : 1; // 0x10f(0x01)
	char bAffectTargetTranslationY : 1; // 0x10f(0x01)
	char bAffectTargetTranslationZ : 1; // 0x10f(0x01)
	char bAffectTargetRotationX : 1; // 0x10f(0x01)
	char bAffectTargetRotationY : 1; // 0x10f(0x01)
	char bAffectTargetRotationZ : 1; // 0x10f(0x01)
	char bAffectTargetScaleX : 1; // 0x10f(0x01)
	char bAffectTargetScaleY : 1; // 0x110(0x01)
	char bAffectTargetScaleZ : 1; // 0x110(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x180 (Inherited: 0xc8)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	FVector EffectorLocation; // 0xc8(0x0c)
	enum class EBoneControlSpace EffectorLocationSpace; // 0xd4(0x01)
	FBoneSocketTarget EffectorTarget; // 0xe0(0x60)
	FBoneReference TipBone; // 0x140(0x10)
	FBoneReference RootBone; // 0x150(0x10)
	float Precision; // 0x160(0x04)
	int32_t MaxIterations; // 0x164(0x04)
	bool bStartFromTail; // 0x168(0x01)
	bool bEnableRotationLimit; // 0x169(0x01)
	TArray<float> RotationLimitPerJoints; // 0x170(0x10)
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60 (Inherited: 0x00)
struct FBoneSocketTarget {
	bool bUseSocket; // 0x00(0x01)
	FBoneReference BoneReference; // 0x04(0x10)
	FSocketReference SocketReference; // 0x20(0x40)
};

// ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40 (Inherited: 0x00)
struct FSocketReference {
	FName SocketName; // 0x30(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x108 (Inherited: 0xc8)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8(0x10)
	TArray<FConstraint> ConstraintSetup; // 0xd8(0x10)
	TArray<float> ConstraintWeights; // 0xe8(0x10)
};

// ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x1c (Inherited: 0x00)
struct FConstraint {
	FBoneReference TargetBone; // 0x00(0x10)
	enum class EConstraintOffsetOption OffsetOption; // 0x10(0x01)
	enum class ETransformConstraintType TransformType; // 0x11(0x01)
	FFilterOptionPerAxis PerAxis; // 0x12(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8(0x10)
	FBoneReference TargetBone; // 0xd8(0x10)
	bool bCopyTranslation; // 0xe8(0x01)
	bool bCopyRotation; // 0xe9(0x01)
	bool bCopyScale; // 0xea(0x01)
	enum class EBoneControlSpace ControlSpace; // 0xeb(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0xf8 (Inherited: 0xc8)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8(0x10)
	FBoneReference TargetBone; // 0xd8(0x10)
	bool bCopyTranslation; // 0xe8(0x01)
	bool bCopyRotation; // 0xe9(0x01)
	bool bCopyScale; // 0xea(0x01)
	enum class CopyBoneDeltaMode CopyMode; // 0xeb(0x01)
	float TranslationMultiplier; // 0xec(0x04)
	float RotationMultiplier; // 0xf0(0x04)
	float ScaleMultiplier; // 0xf4(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x140 (Inherited: 0x10)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x08)
	bool bUseAttachedParent; // 0x18(0x01)
	bool bCopyCurves; // 0x19(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10(0x10)
	FName SourceBinding; // 0x20(0x08)
	float alpha; // 0x28(0x04)
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x190 (Inherited: 0xc8)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FTransform EffectorTransform; // 0xd0(0x30)
	FBoneSocketTarget EffectorTarget; // 0x100(0x60)
	FBoneReference TipBone; // 0x160(0x10)
	FBoneReference RootBone; // 0x170(0x10)
	float Precision; // 0x180(0x04)
	int32_t MaxIterations; // 0x184(0x04)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x188(0x01)
	enum class EBoneRotationSource EffectorRotationSource; // 0x189(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x120 (Inherited: 0xc8)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8(0x10)
	FBoneReference LeftHandFK; // 0xd8(0x10)
	FBoneReference RightHandIK; // 0xe8(0x10)
	FBoneReference LeftHandIK; // 0xf8(0x10)
	TArray<FBoneReference> IKBonesToMove; // 0x108(0x10)
	float HandFKWeight; // 0x118(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xc0 (Inherited: 0x10)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	FPoseLink BasePose; // 0x10(0x10)
	TArray<FPoseLink> BlendPoses; // 0x20(0x10)
	TArray<FInputBlendPose> LayerSetup; // 0x30(0x10)
	TArray<float> BlendWeights; // 0x40(0x10)
	bool bMeshSpaceRotationBlend; // 0x50(0x01)
	bool bMeshSpaceScaleBlend; // 0x51(0x01)
	enum class ECurveBlendOption CurveBlendOption; // 0x52(0x01)
	bool bBlendRootMotionBasedOnRootBone; // 0x53(0x01)
	int32_t LODThreshold; // 0x58(0x04)
	TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60(0x10)
	FGuid SkeletonGuid; // 0x70(0x10)
	FGuid VirtualBoneGuid; // 0x80(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0xf8 (Inherited: 0xc8)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8(0x04)
	int32_t MaxIterations; // 0xcc(0x04)
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2c (Inherited: 0x00)
struct FAnimLegIKDefinition {
	FBoneReference IKFootBone; // 0x00(0x10)
	FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
	float MinRotationAngle; // 0x24(0x04)
	enum class EAxis FootBoneForwardAxis; // 0x28(0x01)
	enum class EAxis HingeRotationAxis; // 0x29(0x01)
	bool bEnableRotationLimit; // 0x2a(0x01)
	bool bEnableKneeTwistCorrection; // 0x2b(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0xa0 (Inherited: 0x00)
struct FAnimLegIKData {
};

// ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x38 (Inherited: 0x00)
struct FIKChain {
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x3c (Inherited: 0x00)
struct FIKChainLink {
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x1b0 (Inherited: 0xc8)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8(0x10)
	FBoneSocketTarget LookAtTarget; // 0xe0(0x60)
	FVector LookAtLocation; // 0x140(0x0c)
	FAxis LookAt_Axis; // 0x14c(0x10)
	bool bUseLookUpAxis; // 0x15c(0x01)
	enum class EInterpolationBlend InterpolationType; // 0x15d(0x01)
	FAxis LookUp_Axis; // 0x160(0x10)
	float LookAtClamp; // 0x170(0x04)
	float InterpolationTime; // 0x174(0x04)
	float InterpolationTriggerThreashold; // 0x178(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10(0x10)
	FPoseLink Additive; // 0x20(0x10)
	bool bMeshSpaceAdditive; // 0x30(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x108 (Inherited: 0xc8)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8(0x10)
	FVector Translation; // 0xd8(0x0c)
	FRotator Rotation; // 0xe4(0x0c)
	FVector Scale; // 0xf0(0x0c)
	enum class EBoneModificationMode TranslationMode; // 0xfc(0x01)
	enum class EBoneModificationMode RotationMode; // 0xfd(0x01)
	enum class EBoneModificationMode ScaleMode; // 0xfe(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0xff(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x100(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x101(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10(0x10)
	TArray<float> CurveValues; // 0x20(0x10)
	TArray<FName> CurveNames; // 0x30(0x10)
	float alpha; // 0x50(0x04)
	enum class EModifyCurveApplyMode ApplyMode; // 0x54(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10(0x10)
	TArray<float> DesiredAlphas; // 0x20(0x10)
	FInputScaleBias AlphaScaleBias; // 0x40(0x08)
	bool bAdditiveNode; // 0x48(0x01)
	bool bNormalizeAlpha; // 0x49(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x100 (Inherited: 0xc8)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8(0x10)
	enum class EBoneControlSpace DisplaySpace; // 0xd8(0x01)
	bool bRelativeToRefPose; // 0xd9(0x01)
	FVector Translation; // 0xdc(0x0c)
	FRotator Rotation; // 0xe8(0x0c)
	FVector Scale; // 0xf4(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x78 (Inherited: 0x30)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x30(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0x98 (Inherited: 0x78)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78(0x10)
	enum class EAlphaBlendOption BlendOption; // 0x88(0x01)
	UCurveFloat* CustomCurve; // 0x90(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0x90 (Inherited: 0x78)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x78(0x08)
	float PoseWeight; // 0x80(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x128 (Inherited: 0x78)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78(0x10)
	TArray<FBoneReference> SourceBones; // 0x88(0x10)
	TArray<FBoneReference> OnlyDriveBones; // 0x98(0x10)
	TArray<FPoseDriverTarget> PoseTargets; // 0xa8(0x10)
	FBoneReference EvalSpaceBone; // 0xe8(0x10)
	FRBFParams RBFParams; // 0xf8(0x2c)
	enum class EPoseDriverSource DriveSource; // 0x124(0x01)
	enum class EPoseDriverOutput DriveOutput; // 0x125(0x01)
	char bOnlyDriveSelectedBones : 1; // 0x126(0x01)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x2c (Inherited: 0x00)
struct FRBFParams {
	int32_t TargetDimensions; // 0x00(0x04)
	enum class ERBFSolverType SolverType; // 0x04(0x01)
	float Radius; // 0x08(0x04)
	enum class ERBFFunctionType Function; // 0x0c(0x01)
	enum class ERBFDistanceMethod DistanceMethod; // 0x0d(0x01)
	enum class EBoneAxis TwistAxis; // 0x0e(0x01)
	float WeightThreshold; // 0x10(0x04)
	enum class ERBFNormalizeMethod NormalizeMethod; // 0x14(0x01)
	FVector MedianReference; // 0x18(0x0c)
	float MedianMin; // 0x24(0x04)
	float MedianMax; // 0x28(0x04)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xc0 (Inherited: 0x00)
struct FPoseDriverTarget {
	TArray<FPoseDriverTransform> BoneTransforms; // 0x00(0x10)
	FRotator TargetRotation; // 0x10(0x0c)
	float TargetScale; // 0x1c(0x04)
	enum class ERBFDistanceMethod DistanceMethod; // 0x20(0x01)
	enum class ERBFFunctionType FunctionType; // 0x21(0x01)
	bool bApplyCustomCurve; // 0x22(0x01)
	FRichCurve CustomCurve; // 0x28(0x80)
	FName DrivenName; // 0xa8(0x08)
	bool bIsHidden; // 0xb8(0x01)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 (Inherited: 0x00)
struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x00(0x0c)
	FRotator TargetRotation; // 0x0c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10(0x08)
	FPoseSnapshot Snapshot; // 0x18(0x38)
	enum class ESnapshotSourceMode Mode; // 0x50(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10(0x10)
	bool bShuffleMode; // 0x70(0x01)
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50 (Inherited: 0x00)
struct FRandomPlayerSequenceEntry {
	UAnimSequence* Sequence; // 0x00(0x08)
	float ChanceToPlay; // 0x08(0x04)
	int32_t MinLoopCount; // 0x0c(0x04)
	int32_t MaxLoopCount; // 0x10(0x04)
	float MinPlayRate; // 0x14(0x04)
	float MaxPlayRate; // 0x18(0x04)
	FAlphaBlend BlendIn; // 0x20(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x18 (Inherited: 0x10)
struct FAnimNode_RefPose : FAnimNode_Base {
	enum class ERefPoseType RefPoseType; // 0x10(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0xd8 (Inherited: 0xc8)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x590 (Inherited: 0xc8)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8(0x08)
	FVector OverrideWorldGravity; // 0x168(0x0c)
	FVector ExternalForce; // 0x174(0x0c)
	FVector ComponentLinearAccScale; // 0x180(0x0c)
	FVector ComponentLinearVelScale; // 0x18c(0x0c)
	FVector ComponentAppliedLinearAccClamp; // 0x198(0x0c)
	float CachedBoundsScale; // 0x1a4(0x04)
	FBoneReference BaseBoneRef; // 0x1a8(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x1b8(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x1b9(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1ba(0x01)
	char bEnableWorldGeometry : 1; // 0x1bc(0x01)
	char bOverrideWorldGravity : 1; // 0x1bc(0x01)
	char bTransferBoneVelocities : 1; // 0x1bc(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x1bc(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1bc(0x01)
	FSolverIterations OverrideSolverIterations; // 0x1c0(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// Size: 0x580 (Inherited: 0xc8)
struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8(0x08)
	FVector OverrideWorldGravity; // 0xd0(0x0c)
	FVector ExternalForce; // 0xdc(0x0c)
	FVector ComponentLinearAccScale; // 0xe8(0x0c)
	FVector ComponentLinearVelScale; // 0xf4(0x0c)
	FVector ComponentAppliedLinearAccClamp; // 0x100(0x0c)
	float CachedBoundsScale; // 0x10c(0x04)
	FBoneReference BaseBoneRef; // 0x110(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x120(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x121(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x122(0x01)
	char bEnableWorldGeometry : 1; // 0x123(0x01)
	char bOverrideWorldGravity : 1; // 0x123(0x01)
	char bTransferBoneVelocities : 1; // 0x123(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x123(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x123(0x01)
	FSolverIterations OverrideSolverIterations; // 0x124(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xa0 (Inherited: 0x10)
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10(0x10)
	float Pitch; // 0x20(0x04)
	float Yaw; // 0x24(0x04)
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
	FRotator MeshToComponent; // 0x88(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8(0x10)
	FBoneReference SourceBone; // 0xd8(0x10)
	float Multiplier; // 0xe8(0x04)
	enum class EBoneAxis RotationAxisToRefer; // 0xec(0x01)
	bool bIsAdditive; // 0xed(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x188 (Inherited: 0xe0)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0xe0(0x10)
	int32_t LODThreshold; // 0xf0(0x04)
	float alpha; // 0xf4(0x04)
	FInputScaleBias AlphaScaleBias; // 0xf8(0x08)
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x100(0x48)
	FName AlphaCurveName; // 0x148(0x08)
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x150(0x30)
	enum class EAnimAlphaInputType AlphaInputType; // 0x184(0x01)
	bool bAlphaBoolEnabled; // 0x185(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	FPoseLink InputPose; // 0x10(0x10)
	float DefaultChainLength; // 0x20(0x04)
	FBoneReference ChainStartBone; // 0x24(0x10)
	FBoneReference ChainEndBone; // 0x34(0x10)
	FVector TargetLocation; // 0x44(0x0c)
	float alpha; // 0x50(0x04)
	FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	enum class EScaleChainInitialLength ChainInitialLength; // 0x60(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30(0x08)
	float ExplicitTime; // 0x38(0x04)
	bool bShouldLoop; // 0x3c(0x01)
	bool bTeleportToExplicitTime; // 0x3d(0x01)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x3e(0x01)
	float StartPosition; // 0x40(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x48 (Inherited: 0x10)
struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10(0x10)
	FName slotName; // 0x20(0x08)
	bool bAlwaysUpdateSourcePose; // 0x28(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x260 (Inherited: 0xc8)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	FBoneReference StartBone; // 0xc8(0x10)
	FBoneReference EndBone; // 0xd8(0x10)
	enum class ESplineBoneAxis BoneAxis; // 0xe8(0x01)
	bool bAutoCalculateSpline; // 0xe9(0x01)
	int32_t PointCount; // 0xec(0x04)
	TArray<FTransform> ControlPoints; // 0xf0(0x10)
	float Roll; // 0x100(0x04)
	float TwistStart; // 0x104(0x04)
	float TwistEnd; // 0x108(0x04)
	FAlphaBlend TwistBlend; // 0x110(0x30)
	float Stretch; // 0x140(0x04)
	float Offset; // 0x144(0x04)
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x14 (Inherited: 0x00)
struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x00(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x128 (Inherited: 0xc8)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	FBoneReference SpringBone; // 0xc8(0x10)
	float MaxDisplacement; // 0xd8(0x04)
	float SpringStiffness; // 0xdc(0x04)
	float SpringDamping; // 0xe0(0x04)
	float ErrorResetThresh; // 0xe4(0x04)
	char bLimitDisplacement : 1; // 0x124(0x01)
	char bTranslateX : 1; // 0x124(0x01)
	char bTranslateY : 1; // 0x124(0x01)
	char bTranslateZ : 1; // 0x124(0x01)
	char bRotateX : 1; // 0x124(0x01)
	char bRotateY : 1; // 0x124(0x01)
	char bRotateZ : 1; // 0x124(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x30 (Inherited: 0x30)
struct FAnimNode_StateResult : FAnimNode_Root {
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x260 (Inherited: 0xc8)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	FBoneReference TrailBone; // 0x100(0x10)
	int32_t ChainLength; // 0x110(0x04)
	enum class EAxis ChainBoneAxis; // 0x114(0x01)
	char bInvertChainBoneAxis : 1; // 0x115(0x01)
	char bLimitStretch : 1; // 0x115(0x01)
	char bLimitRotation : 1; // 0x115(0x01)
	char bUsePlanarLimit : 1; // 0x115(0x01)
	char bActorSpaceFakeVel : 1; // 0x115(0x01)
	char bReorientParentToChild : 1; // 0x115(0x01)
	float MaxDeltaTime; // 0x118(0x04)
	float RelaxationSpeedScale; // 0x11c(0x04)
	FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120(0x88)
	FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1a8(0x30)
	TArray<FRotationLimit> RotationLimits; // 0x1d8(0x10)
	TArray<FVector> RotationOffsets; // 0x1e8(0x10)
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x1f8(0x10)
	float StretchLimit; // 0x208(0x04)
	FVector FakeVelocity; // 0x20c(0x0c)
	FBoneReference BaseJoint; // 0x218(0x10)
	float LastBoneRotationAnimAlphaBlend; // 0x228(0x04)
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x18 (Inherited: 0x00)
struct FRotationLimit {
	FVector LimitMin; // 0x00(0x0c)
	FVector LimitMax; // 0x0c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x138 (Inherited: 0xc8)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0xc8(0x20)
	FReferenceBoneFrame TwistFrame; // 0xe8(0x20)
	FAxis TwistPlaneNormalAxis; // 0x108(0x10)
	float RangeMax; // 0x118(0x04)
	float RemappedMin; // 0x11c(0x04)
	float RemappedMax; // 0x120(0x04)
	FAnimCurveParam Curve; // 0x124(0x0c)
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x20 (Inherited: 0x00)
struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x00(0x10)
	FAxis Axis; // 0x10(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x1e0 (Inherited: 0xc8)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	FBoneReference IKBone; // 0xc8(0x10)
	float StartStretchRatio; // 0xd8(0x04)
	float MaxStretchScale; // 0xdc(0x04)
	FVector EffectorLocation; // 0xe0(0x0c)
	FBoneSocketTarget EffectorTarget; // 0xf0(0x60)
	FVector JointTargetLocation; // 0x150(0x0c)
	FBoneSocketTarget JointTarget; // 0x160(0x60)
	FAxis TwistAxis; // 0x1c0(0x10)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x1d0(0x01)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x1d1(0x01)
	char bAllowStretching : 1; // 0x1d2(0x01)
	char bTakeRotationFromEffectorSpace : 1; // 0x1d2(0x01)
	char bMaintainEffectorRelRot : 1; // 0x1d2(0x01)
	char bAllowTwist : 1; // 0x1d2(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	FPoseLink A; // 0x10(0x10)
	FPoseLink B; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char bAlphaBoolEnabled : 1; // 0x31(0x01)
	char pad_31_1 : 2; // 0x31(0x01)
	char bResetChildOnActivation : 1; // 0x31(0x01)
	float alpha; // 0x34(0x04)
	FInputScaleBias AlphaScaleBias; // 0x38(0x08)
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	FName AlphaCurveName; // 0x88(0x08)
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0x930 (Inherited: 0x6e0)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x30 (Inherited: 0x00)
struct FPositionHistory {
	TArray<FVector> Positions; // 0x00(0x10)
	float range; // 0x10(0x04)
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10 (Inherited: 0x00)
struct FRBFEntry {
	TArray<float> Values; // 0x00(0x10)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xa0 (Inherited: 0x10)
struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10(0x04)
	bool bApplyCustomCurve; // 0x14(0x01)
	FRichCurve CustomCurve; // 0x18(0x80)
	enum class ERBFDistanceMethod DistanceMethod; // 0x98(0x01)
	enum class ERBFFunctionType FunctionType; // 0x99(0x01)
};

