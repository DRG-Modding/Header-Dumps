#ifndef UE4SS_SDK_AnimGraphRuntime_HPP
#define UE4SS_SDK_AnimGraphRuntime_HPP

#include "AnimGraphRuntime_enums.hpp"

class UAnimNotify_PlayMontageNotify : UAnimNotify
{
    FName NotifyName;
}

class UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState
{
    FName NotifyName;
}

class UAnimSequencerInstance : UAnimInstance
{
}

class UKismetAnimationLibrary : UBlueprintFunctionLibrary
{

    void K2_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    void K2_StartProfilingTimer();
    FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
    float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
    FTransform K2_LookAt(const FTransform& CurrentTransform, const FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector upVector, float ClampConeInDegree);
    float K2_EndProfilingTimer(bool bLog, FString LogPrefix);
    float K2_DistanceBetweenTwoSocketsAndMapRange(const USkeletalMeshComponent* Component, const FName SocketOrBoneNameA, uint8 SocketSpaceA, const FName SocketOrBoneNameB, uint8 SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
    FVector K2_DirectionBetweenSockets(const USkeletalMeshComponent* Component, const FName SocketOrBoneNameFrom, const FName SocketOrBoneNameTo);
    float K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent* Component, const FName SocketOrBoneName, const FName ReferenceSocketOrBone, uint8 SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const FRuntimeFloatCurve& CustomCurve);
    float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
}

class UPlayMontageCallbackProxy : UObject
{
    FPlayMontageCallbackProxyOnCompleted OnCompleted;
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnBlendOut OnBlendOut;
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnInterrupted OnInterrupted;
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnNotifyBegin OnNotifyBegin;
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnNotifyEnd OnNotifyEnd;
    void OnMontagePlayDelegate(FName NotifyName);

    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
}

class USequencerAnimationSupport : UInterface
{
}

struct UAnimNode_SkeletalControlBase : FAnimNode_Base
{
    FComponentSpacePoseLink ComponentPose;
    int32 LODThreshold;
    float ActualAlpha;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;
    float alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
}

struct UAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{
    float X;
    float Y;
    float Z;
    float PlayRate;
    bool bLoop;
    bool bResetPlayTimeWhenBlendSpaceChanges;
    float StartPosition;
    UBlendSpaceBase* BlendSpace;
    UBlendSpaceBase* PreviousBlendSpace;
}

struct UAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;
    int32 LODThreshold;
    FName SourceSocketName;
    FName PivotSocketName;
    FVector LookAtLocation;
    FVector SocketAxis;
    float alpha;
}

struct UAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{
    float LinearDampingOverride;
    float AngularDampingOverride;
    FBoneReference RelativeSpaceBone;
    FBoneReference BoundBone;
    FBoneReference ChainEnd;
    FVector BoxExtents;
    FVector LocalJointOffset;
    float GravityScale;
    FVector GravityOverride;
    float LinearSpringConstant;
    float AngularSpringConstant;
    float WindScale;
    FVector ComponentLinearAccScale;
    FVector ComponentLinearVelScale;
    FVector ComponentAppliedLinearAccClamp;
    float AngularBiasOverride;
    int32 NumSolverIterationsPreUpdate;
    int32 NumSolverIterationsPostUpdate;
    FAnimPhysConstraintSetup ConstraintSetup;
    TArray<FAnimPhysSphericalLimit> SphericalLimits;
    float SphereCollisionRadius;
    FVector ExternalForce;
    TArray<FAnimPhysPlanarLimit> PlanarLimits;
    AnimPhysCollisionType CollisionType;
    AnimPhysSimSpaceType SimulationSpace;
    uint8 bUseSphericalLimits;
    uint8 bUsePlanarLimit;
    uint8 bDoUpdate;
    uint8 bDoEval;
    uint8 bOverrideLinearDamping;
    uint8 bOverrideAngularBias;
    uint8 bOverrideAngularDamping;
    uint8 bEnableWind;
    uint8 bUseGravityOverride;
    uint8 bLinearSpring;
    uint8 bAngularSpring;
    uint8 bChain;
    FRotationRetargetingInfo RetargetingSettings;
}

struct URotationRetargetingInfo
{
    bool bEnabled;
    FTransform Source;
    FTransform Target;
    ERotationComponent RotationComponent;
    FVector TwistAxis;
    bool bUseAbsoluteAngle;
    float SourceMinimum;
    float SourceMaximum;
    float TargetMinimum;
    float TargetMaximum;
    EEasingFuncType EasingType;
    FRuntimeFloatCurve CustomCurve;
    bool bFlipEasing;
    float EasingWeight;
    bool bClamp;
}

struct UAnimPhysPlanarLimit
{
    FBoneReference DrivingBone;
    FTransform PlaneTransform;
}

struct UAnimPhysSphericalLimit
{
    FBoneReference DrivingBone;
    FVector SphereLocalOffset;
    float LimitRadius;
    ESphericalLimitType LimitType;
}

struct UAnimPhysConstraintSetup
{
    AnimPhysLinearConstraintType LinearXLimitType;
    AnimPhysLinearConstraintType LinearYLimitType;
    AnimPhysLinearConstraintType LinearZLimitType;
    FVector LinearAxesMin;
    FVector LinearAxesMax;
    AnimPhysAngularConstraintType AngularConstraintType;
    AnimPhysTwistAxis TwistAxis;
    AnimPhysTwistAxis AngularTargetAxis;
    float ConeAngle;
    FVector AngularLimitsMin;
    FVector AngularLimitsMax;
    FVector AngularTarget;
}

struct UAnimNode_ApplyAdditive : FAnimNode_Base
{
    FPoseLink Base;
    FPoseLink Additive;
    float alpha;
    FInputScaleBias AlphaScaleBias;
    int32 LODThreshold;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;
}

struct UAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{
    TArray<FAngularRangeLimit> AngularRangeLimits;
    TArray<FVector> AngularOffsets;
}

struct UAngularRangeLimit
{
    FVector LimitMin;
    FVector LimitMax;
    FBoneReference Bone;
}

struct UAnimNode_BlendBoneByChannel : FAnimNode_Base
{
    FPoseLink A;
    FPoseLink B;
    TArray<FBlendBoneByChannelEntry> BoneDefinitions;
    float alpha;
    FInputScaleBias AlphaScaleBias;
    TEnumAsByte<EBoneControlSpace> TransformsSpace;
}

struct UBlendBoneByChannelEntry
{
    FBoneReference SourceBone;
    FBoneReference TargetBone;
    bool bBlendTranslation;
    bool bBlendRotation;
    bool bBlendScale;
}

struct UAnimNode_BlendListBase : FAnimNode_Base
{
    TArray<FPoseLink> BlendPose;
    TArray<float> BlendTime;
    EBlendListTransitionType TransitionType;
    EAlphaBlendOption BlendType;
    bool bResetChildOnActivation;
    UCurveFloat* CustomBlendCurve;
    UBlendProfile* BlendProfile;
}

struct UAnimNode_BlendListByBool : FAnimNode_BlendListBase
{
    bool bActiveValue;
}

struct UAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{
    TArray<int32> EnumToPoseIndex;
    uint8 ActiveEnumValue;
}

struct UAnimNode_BlendListByInt : FAnimNode_BlendListBase
{
    int32 ActiveChildIndex;
}

struct UAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{
    float NormalizedTime;
}

struct UAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;
    UCurveFloat* DrivingCurve;
    float Multiplier;
    float RangeMin;
    float RangeMax;
    float RemappedMin;
    float RemappedMax;
    FName ParameterName;
    FBoneReference TargetBone;
    EDrivenDestinationMode DestinationMode;
    EDrivenBoneModificationMode ModificationMode;
    TEnumAsByte<EComponentType::Type> SourceComponent;
    uint8 bUseRange;
    uint8 bAffectTargetTranslationX;
    uint8 bAffectTargetTranslationY;
    uint8 bAffectTargetTranslationZ;
    uint8 bAffectTargetRotationX;
    uint8 bAffectTargetRotationY;
    uint8 bAffectTargetRotationZ;
    uint8 bAffectTargetScaleX;
    uint8 bAffectTargetScaleY;
    uint8 bAffectTargetScaleZ;
}

struct UAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{
    FVector EffectorLocation;
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    FBoneSocketTarget EffectorTarget;
    FBoneReference TipBone;
    FBoneReference RootBone;
    float Precision;
    int32 MaxIterations;
    bool bStartFromTail;
    bool bEnableRotationLimit;
    TArray<float> RotationLimitPerJoints;
}

struct UBoneSocketTarget
{
    bool bUseSocket;
    FBoneReference BoneReference;
    FSocketReference SocketReference;
}

struct USocketReference
{
    FName SocketName;
}

struct UAnimNode_Constraint : FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;
    TArray<FConstraint> ConstraintSetup;
    TArray<float> ConstraintWeights;
}

struct UConstraint
{
    FBoneReference TargetBone;
    EConstraintOffsetOption OffsetOption;
    ETransformConstraintType TransformType;
    FFilterOptionPerAxis PerAxis;
}

struct UAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;
    FBoneReference TargetBone;
    bool bCopyTranslation;
    bool bCopyRotation;
    bool bCopyScale;
    TEnumAsByte<EBoneControlSpace> ControlSpace;
}

struct UAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;
    FBoneReference TargetBone;
    bool bCopyTranslation;
    bool bCopyRotation;
    bool bCopyScale;
    CopyBoneDeltaMode CopyMode;
    float TranslationMultiplier;
    float RotationMultiplier;
    float ScaleMultiplier;
}

struct UAnimNode_CopyPoseFromMesh : FAnimNode_Base
{
    TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;
    bool bUseAttachedParent;
    bool bCopyCurves;
}

struct UAnimNode_CurveSource : FAnimNode_Base
{
    FPoseLink SourcePose;
    FName SourceBinding;
    float alpha;
    TScriptInterface<ICurveSourceInterface> CurveSource;
}

struct UAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{
    FTransform EffectorTransform;
    FBoneSocketTarget EffectorTarget;
    FBoneReference TipBone;
    FBoneReference RootBone;
    float Precision;
    int32 MaxIterations;
    TEnumAsByte<EBoneControlSpace> EffectorTransformSpace;
    TEnumAsByte<EBoneRotationSource> EffectorRotationSource;
}

struct UAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{
    FBoneReference RightHandFK;
    FBoneReference LeftHandFK;
    FBoneReference RightHandIK;
    FBoneReference LeftHandIK;
    TArray<FBoneReference> IKBonesToMove;
    float HandFKWeight;
}

struct UAnimNode_LayeredBoneBlend : FAnimNode_Base
{
    FPoseLink BasePose;
    TArray<FPoseLink> BlendPoses;
    TArray<FInputBlendPose> LayerSetup;
    TArray<float> BlendWeights;
    bool bMeshSpaceRotationBlend;
    bool bMeshSpaceScaleBlend;
    TEnumAsByte<ECurveBlendOption::Type> CurveBlendOption;
    bool bBlendRootMotionBasedOnRootBone;
    int32 LODThreshold;
    TArray<FPerBoneBlendWeight> PerBoneBlendWeights;
    FGuid SkeletonGuid;
    FGuid VirtualBoneGuid;
}

struct UAnimNode_LegIK : FAnimNode_SkeletalControlBase
{
    float ReachPrecision;
    int32 MaxIterations;
    TArray<FAnimLegIKDefinition> LegsDefinition;
}

struct UAnimLegIKDefinition
{
    FBoneReference IKFootBone;
    FBoneReference FKFootBone;
    int32 NumBonesInLimb;
    float MinRotationAngle;
    TEnumAsByte<EAxis::Type> FootBoneForwardAxis;
    TEnumAsByte<EAxis::Type> HingeRotationAxis;
    bool bEnableRotationLimit;
    bool bEnableKneeTwistCorrection;
}

struct UAnimLegIKData
{
}

struct UIKChain
{
}

struct UIKChainLink
{
}

struct UAnimNode_LookAt : FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;
    FBoneSocketTarget LookAtTarget;
    FVector LookAtLocation;
    FAxis LookAt_Axis;
    bool bUseLookUpAxis;
    TEnumAsByte<EInterpolationBlend::Type> InterpolationType;
    FAxis LookUp_Axis;
    float LookAtClamp;
    float InterpolationTime;
    float InterpolationTriggerThreashold;
}

struct UAnimNode_MakeDynamicAdditive : FAnimNode_Base
{
    FPoseLink Base;
    FPoseLink Additive;
    bool bMeshSpaceAdditive;
}

struct UAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;
    FVector Translation;
    FRotator Rotation;
    FVector Scale;
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    TEnumAsByte<EBoneModificationMode> RotationMode;
    TEnumAsByte<EBoneModificationMode> ScaleMode;
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    TEnumAsByte<EBoneControlSpace> ScaleSpace;
}

struct UAnimNode_ModifyCurve : FAnimNode_Base
{
    FPoseLink SourcePose;
    TArray<float> CurveValues;
    TArray<FName> CurveNames;
    float alpha;
    EModifyCurveApplyMode ApplyMode;
}

struct UAnimNode_MultiWayBlend : FAnimNode_Base
{
    TArray<FPoseLink> Poses;
    TArray<float> DesiredAlphas;
    FInputScaleBias AlphaScaleBias;
    bool bAdditiveNode;
    bool bNormalizeAlpha;
}

struct UAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToObserve;
    TEnumAsByte<EBoneControlSpace> DisplaySpace;
    bool bRelativeToRefPose;
    FVector Translation;
    FRotator Rotation;
    FVector Scale;
}

struct UAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{
    UPoseAsset* PoseAsset;
}

struct UAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{
    FPoseLink SourcePose;
    EAlphaBlendOption BlendOption;
    UCurveFloat* CustomCurve;
}

struct UAnimNode_PoseByName : FAnimNode_PoseHandler
{
    FName PoseName;
    float PoseWeight;
}

struct UAnimNode_PoseDriver : FAnimNode_PoseHandler
{
    FPoseLink SourcePose;
    TArray<FBoneReference> SourceBones;
    TArray<FBoneReference> OnlyDriveBones;
    TArray<FPoseDriverTarget> PoseTargets;
    FBoneReference EvalSpaceBone;
    FRBFParams RBFParams;
    EPoseDriverSource DriveSource;
    EPoseDriverOutput DriveOutput;
    uint8 bOnlyDriveSelectedBones;
}

struct URBFParams
{
    int32 TargetDimensions;
    ERBFSolverType SolverType;
    float Radius;
    ERBFFunctionType Function;
    ERBFDistanceMethod DistanceMethod;
    TEnumAsByte<EBoneAxis> TwistAxis;
    float WeightThreshold;
    ERBFNormalizeMethod NormalizeMethod;
    FVector MedianReference;
    float MedianMin;
    float MedianMax;
}

struct UPoseDriverTarget
{
    TArray<FPoseDriverTransform> BoneTransforms;
    FRotator TargetRotation;
    float TargetScale;
    ERBFDistanceMethod DistanceMethod;
    ERBFFunctionType FunctionType;
    bool bApplyCustomCurve;
    FRichCurve CustomCurve;
    FName DrivenName;
    bool bIsHidden;
}

struct UPoseDriverTransform
{
    FVector TargetTranslation;
    FRotator TargetRotation;
}

struct UAnimNode_PoseSnapshot : FAnimNode_Base
{
    FName SnapshotName;
    FPoseSnapshot Snapshot;
    ESnapshotSourceMode Mode;
}

struct UAnimNode_RandomPlayer : FAnimNode_Base
{
    TArray<FRandomPlayerSequenceEntry> Entries;
    bool bShuffleMode;
}

struct URandomPlayerSequenceEntry
{
    UAnimSequence* Sequence;
    float ChanceToPlay;
    int32 MinLoopCount;
    int32 MaxLoopCount;
    float MinPlayRate;
    float MaxPlayRate;
    FAlphaBlend BlendIn;
}

struct UAnimNode_MeshSpaceRefPose : FAnimNode_Base
{
}

struct UAnimNode_RefPose : FAnimNode_Base
{
    TEnumAsByte<ERefPoseType> RefPoseType;
}

struct UAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{
}

struct UAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{
    UPhysicsAsset* OverridePhysicsAsset;
    FVector OverrideWorldGravity;
    FVector ExternalForce;
    FVector ComponentLinearAccScale;
    FVector ComponentLinearVelScale;
    FVector ComponentAppliedLinearAccClamp;
    float CachedBoundsScale;
    FBoneReference BaseBoneRef;
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    ESimulationSpace SimulationSpace;
    bool bForceDisableCollisionBetweenConstraintBodies;
    uint8 bEnableWorldGeometry;
    uint8 bOverrideWorldGravity;
    uint8 bTransferBoneVelocities;
    uint8 bFreezeIncomingPoseOnStart;
    uint8 bClampLinearTranslationLimitToRefPose;
    FSolverIterations OverrideSolverIterations;
}

struct UAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase
{
    UPhysicsAsset* OverridePhysicsAsset;
    FVector OverrideWorldGravity;
    FVector ExternalForce;
    FVector ComponentLinearAccScale;
    FVector ComponentLinearVelScale;
    FVector ComponentAppliedLinearAccClamp;
    float CachedBoundsScale;
    FBoneReference BaseBoneRef;
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    ESimulationSpace SimulationSpace;
    bool bForceDisableCollisionBetweenConstraintBodies;
    uint8 bEnableWorldGeometry;
    uint8 bOverrideWorldGravity;
    uint8 bTransferBoneVelocities;
    uint8 bFreezeIncomingPoseOnStart;
    uint8 bClampLinearTranslationLimitToRefPose;
    FSolverIterations OverrideSolverIterations;
}

struct UAnimNode_RotateRootBone : FAnimNode_Base
{
    FPoseLink BasePose;
    float Pitch;
    float Yaw;
    FInputScaleBiasClamp PitchScaleBiasClamp;
    FInputScaleBiasClamp YawScaleBiasClamp;
    FRotator MeshToComponent;
}

struct UAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{
    FBoneReference TargetBone;
    FBoneReference SourceBone;
    float Multiplier;
    TEnumAsByte<EBoneAxis> RotationAxisToRefer;
    bool bIsAdditive;
}

struct UAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;
    int32 LODThreshold;
    float alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    EAnimAlphaInputType AlphaInputType;
    bool bAlphaBoolEnabled;
}

struct UAnimNode_ScaleChainLength : FAnimNode_Base
{
    FPoseLink InputPose;
    float DefaultChainLength;
    FBoneReference ChainStartBone;
    FBoneReference ChainEndBone;
    FVector TargetLocation;
    float alpha;
    FInputScaleBias AlphaScaleBias;
    EScaleChainInitialLength ChainInitialLength;
}

struct UAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{
    UAnimSequenceBase* Sequence;
    float ExplicitTime;
    bool bShouldLoop;
    bool bTeleportToExplicitTime;
    TEnumAsByte<ESequenceEvalReinit::Type> ReinitializationBehavior;
    float StartPosition;
}

struct UAnimNode_Slot : FAnimNode_Base
{
    FPoseLink Source;
    FName slotName;
    bool bAlwaysUpdateSourcePose;
}

struct UAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{
    FBoneReference StartBone;
    FBoneReference EndBone;
    ESplineBoneAxis BoneAxis;
    bool bAutoCalculateSpline;
    int32 PointCount;
    TArray<FTransform> ControlPoints;
    float Roll;
    float TwistStart;
    float TwistEnd;
    FAlphaBlend TwistBlend;
    float Stretch;
    float Offset;
}

struct USplineIKCachedBoneData
{
    FBoneReference Bone;
    int32 RefSkeletonIndex;
}

struct UAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{
    FBoneReference SpringBone;
    float MaxDisplacement;
    float SpringStiffness;
    float SpringDamping;
    float ErrorResetThresh;
    uint8 bLimitDisplacement;
    uint8 bTranslateX;
    uint8 bTranslateY;
    uint8 bTranslateZ;
    uint8 bRotateX;
    uint8 bRotateY;
    uint8 bRotateZ;
}

struct UAnimNode_StateResult : FAnimNode_Root
{
}

struct UAnimNode_Trail : FAnimNode_SkeletalControlBase
{
    FBoneReference TrailBone;
    int32 ChainLength;
    TEnumAsByte<EAxis::Type> ChainBoneAxis;
    uint8 bInvertChainBoneAxis;
    uint8 bLimitStretch;
    uint8 bLimitRotation;
    uint8 bUsePlanarLimit;
    uint8 bActorSpaceFakeVel;
    uint8 bReorientParentToChild;
    float MaxDeltaTime;
    float RelaxationSpeedScale;
    FRuntimeFloatCurve TrailRelaxationSpeed;
    FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;
    TArray<FRotationLimit> RotationLimits;
    TArray<FVector> RotationOffsets;
    TArray<FAnimPhysPlanarLimit> PlanarLimits;
    float StretchLimit;
    FVector FakeVelocity;
    FBoneReference BaseJoint;
    float LastBoneRotationAnimAlphaBlend;
}

struct URotationLimit
{
    FVector LimitMin;
    FVector LimitMax;
}

struct UAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{
    FReferenceBoneFrame BaseFrame;
    FReferenceBoneFrame TwistFrame;
    FAxis TwistPlaneNormalAxis;
    float RangeMax;
    float RemappedMin;
    float RemappedMax;
    FAnimCurveParam Curve;
}

struct UReferenceBoneFrame
{
    FBoneReference Bone;
    FAxis Axis;
}

struct UAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{
    FBoneReference IKBone;
    float StartStretchRatio;
    float MaxStretchScale;
    FVector EffectorLocation;
    FBoneSocketTarget EffectorTarget;
    FVector JointTargetLocation;
    FBoneSocketTarget JointTarget;
    FAxis TwistAxis;
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
    uint8 bAllowStretching;
    uint8 bTakeRotationFromEffectorSpace;
    uint8 bMaintainEffectorRelRot;
    uint8 bAllowTwist;
}

struct UAnimNode_TwoWayBlend : FAnimNode_Base
{
    FPoseLink A;
    FPoseLink B;
    EAnimAlphaInputType AlphaInputType;
    uint8 bAlphaBoolEnabled;
    uint8 bResetChildOnActivation;
    float alpha;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
}

struct UAnimSequencerInstanceProxy : FAnimInstanceProxy
{
}

struct UPositionHistory
{
    TArray<FVector> Positions;
    float range;
}

struct URBFEntry
{
    TArray<float> Values;
}

struct URBFTarget : FRBFEntry
{
    float ScaleFactor;
    bool bApplyCustomCurve;
    FRichCurve CustomCurve;
    ERBFDistanceMethod DistanceMethod;
    ERBFFunctionType FunctionType;
}

#endif
