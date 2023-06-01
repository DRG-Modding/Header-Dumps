#ifndef UE4SS_SDK_AnimGraphRuntime_HPP
#define UE4SS_SDK_AnimGraphRuntime_HPP

#include "AnimGraphRuntime_enums.hpp"

struct FAngularRangeLimit
{
    FVector LimitMin;
    FVector LimitMax;
    FBoneReference Bone;

};

struct FAnimLegIKData
{
};

struct FAnimLegIKDefinition
{
    FBoneReference IKFootBone;
    FBoneReference FKFootBone;
    int32 NumBonesInLimb;
    float MinRotationAngle;
    TEnumAsByte<EAxis::Type> FootBoneForwardAxis;
    TEnumAsByte<EAxis::Type> HingeRotationAxis;
    bool bEnableRotationLimit;
    bool bEnableKneeTwistCorrection;

};

struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;
    int32 LODThreshold;
    FName SourceSocketName;
    FName PivotSocketName;
    FVector LookAtLocation;
    FVector SocketAxis;
    float alpha;

};

struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_ApplyAdditive : public FAnimNode_Base
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

};

struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
    TArray<FAngularRangeLimit> AngularRangeLimits;
    TArray<FVector> AngularOffsets;

};

struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
    FPoseLink A;
    FPoseLink B;
    TArray<FBlendBoneByChannelEntry> BoneDefinitions;
    float alpha;
    FInputScaleBias AlphaScaleBias;
    TEnumAsByte<EBoneControlSpace> TransformsSpace;

};

struct FAnimNode_BlendListBase : public FAnimNode_Base
{
    TArray<FPoseLink> BlendPose;
    TArray<float> BlendTime;
    EBlendListTransitionType TransitionType;
    EAlphaBlendOption BlendType;
    bool bResetChildOnActivation;
    class UCurveFloat* CustomBlendCurve;
    class UBlendProfile* BlendProfile;

};

struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
    bool bActiveValue;

};

struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
    TArray<int32> EnumToPoseIndex;
    uint8 ActiveEnumValue;

};

struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
    int32 ActiveChildIndex;

};

struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
    float NormalizedTime;

};

struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
    float X;
    float Y;
    float Z;
    float PlayRate;
    bool bLoop;
    bool bResetPlayTimeWhenBlendSpaceChanges;
    float StartPosition;
    class UBlendSpaceBase* BlendSpace;
    class UBlendSpaceBase* PreviousBlendSpace;

};

struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;
    class UCurveFloat* DrivingCurve;
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

};

struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;
    TArray<FConstraint> ConstraintSetup;
    TArray<float> ConstraintWeights;

};

struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;
    FBoneReference TargetBone;
    bool bCopyTranslation;
    bool bCopyRotation;
    bool bCopyScale;
    TEnumAsByte<EBoneControlSpace> ControlSpace;

};

struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
    TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;
    uint8 bUseAttachedParent;
    uint8 bCopyCurves;
    bool bCopyCustomAttributes;
    uint8 bUseMeshPose;
    FName RootBoneToCopy;

};

struct FAnimNode_CurveSource : public FAnimNode_Base
{
    FPoseLink SourcePose;
    FName SourceBinding;
    float alpha;
    TScriptInterface<class ICurveSourceInterface> CurveSource;

};

struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
    FTransform EffectorTransform;
    FBoneSocketTarget EffectorTarget;
    FBoneReference TipBone;
    FBoneReference RootBone;
    float Precision;
    int32 MaxIterations;
    TEnumAsByte<EBoneControlSpace> EffectorTransformSpace;
    TEnumAsByte<EBoneRotationSource> EffectorRotationSource;

};

struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
    FBoneReference RightHandFK;
    FBoneReference LeftHandFK;
    FBoneReference RightHandIK;
    FBoneReference LeftHandIK;
    TArray<FBoneReference> IKBonesToMove;
    float HandFKWeight;

};

struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
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

};

struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
    float ReachPrecision;
    int32 MaxIterations;
    TArray<FAnimLegIKDefinition> LegsDefinition;

};

struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
    FPoseLink Base;
    FPoseLink Additive;
    bool bMeshSpaceAdditive;

};

struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
};

struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
    FPoseLink SourcePose;
    TArray<float> CurveValues;
    TArray<FName> CurveNames;
    float alpha;
    EModifyCurveApplyMode ApplyMode;

};

struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
    TArray<FPoseLink> Poses;
    TArray<float> DesiredAlphas;
    FInputScaleBias AlphaScaleBias;
    bool bAdditiveNode;
    bool bNormalizeAlpha;

};

struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToObserve;
    TEnumAsByte<EBoneControlSpace> DisplaySpace;
    bool bRelativeToRefPose;
    FVector Translation;
    FRotator Rotation;
    FVector Scale;

};

struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
    FPoseLink SourcePose;
    EAlphaBlendOption BlendOption;
    class UCurveFloat* CustomCurve;

};

struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
    FName PoseName;
    float PoseWeight;

};

struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
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
    int32 LODThreshold;

};

struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
    class UPoseAsset* PoseAsset;

};

struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
    FName SnapshotName;
    FPoseSnapshot Snapshot;
    ESnapshotSourceMode Mode;

};

struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
    TArray<FRandomPlayerSequenceEntry> Entries;
    bool bShuffleMode;

};

struct FAnimNode_RefPose : public FAnimNode_Base
{
    TEnumAsByte<ERefPoseType> RefPoseType;

};

struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
};

struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
    class UPhysicsAsset* OverridePhysicsAsset;
    FVector OverrideWorldGravity;
    FVector ExternalForce;
    FVector ComponentLinearAccScale;
    FVector ComponentLinearVelScale;
    FVector ComponentAppliedLinearAccClamp;
    FSimSpaceSettings SimSpaceSettings;
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
    float WorldSpaceMinimumScale;
    float EvaluationResetTime;

};

struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
    FPoseLink BasePose;
    float Pitch;
    float Yaw;
    FInputScaleBiasClamp PitchScaleBiasClamp;
    FInputScaleBiasClamp YawScaleBiasClamp;
    FRotator MeshToComponent;

};

struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
    FBoneReference TargetBone;
    FBoneReference SourceBone;
    float Multiplier;
    TEnumAsByte<EBoneAxis> RotationAxisToRefer;
    bool bIsAdditive;

};

struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
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

};

struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
    FPoseLink InputPose;
    float DefaultChainLength;
    FBoneReference ChainStartBone;
    FBoneReference ChainEndBone;
    FVector TargetLocation;
    float alpha;
    FInputScaleBias AlphaScaleBias;
    EScaleChainInitialLength ChainInitialLength;

};

struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
    class UAnimSequenceBase* Sequence;
    float ExplicitTime;
    bool bShouldLoop;
    bool bTeleportToExplicitTime;
    TEnumAsByte<ESequenceEvalReinit::Type> ReinitializationBehavior;
    float StartPosition;

};

struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
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

};

struct FAnimNode_Slot : public FAnimNode_Base
{
    FPoseLink Source;
    FName slotName;
    bool bAlwaysUpdateSourcePose;

};

struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_StateResult : public FAnimNode_Root
{
};

struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
    FReferenceBoneFrame BaseFrame;
    FReferenceBoneFrame TwistFrame;
    FAxis TwistPlaneNormalAxis;
    float RangeMax;
    float RemappedMin;
    float RemappedMax;
    FAnimCurveParam Curve;

};

struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
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

};

struct FAnimNode_TwoWayBlend : public FAnimNode_Base
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

};

struct FAnimPhysConstraintSetup
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

};

struct FAnimPhysPlanarLimit
{
    FBoneReference DrivingBone;
    FTransform PlaneTransform;

};

struct FAnimPhysSphericalLimit
{
    FBoneReference DrivingBone;
    FVector SphereLocalOffset;
    float LimitRadius;
    ESphericalLimitType LimitType;

};

struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
};

struct FBlendBoneByChannelEntry
{
    FBoneReference SourceBone;
    FBoneReference TargetBone;
    bool bBlendTranslation;
    bool bBlendRotation;
    bool bBlendScale;

};

struct FBoneSocketTarget
{
    bool bUseSocket;
    FBoneReference BoneReference;
    FSocketReference SocketReference;

};

struct FConstraint
{
    FBoneReference TargetBone;
    EConstraintOffsetOption OffsetOption;
    ETransformConstraintType TransformType;
    FFilterOptionPerAxis PerAxis;

};

struct FIKChain
{
};

struct FIKChainLink
{
};

struct FPoseDriverTarget
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

};

struct FPoseDriverTransform
{
    FVector TargetTranslation;
    FRotator TargetRotation;

};

struct FPositionHistory
{
    TArray<FVector> Positions;
    float range;

};

struct FRBFEntry
{
    TArray<float> Values;

};

struct FRBFParams
{
    int32 TargetDimensions;
    ERBFSolverType SolverType;
    float Radius;
    bool bAutomaticRadius;
    ERBFFunctionType Function;
    ERBFDistanceMethod DistanceMethod;
    TEnumAsByte<EBoneAxis> TwistAxis;
    float WeightThreshold;
    ERBFNormalizeMethod NormalizeMethod;
    FVector MedianReference;
    float MedianMin;
    float MedianMax;

};

struct FRBFTarget : public FRBFEntry
{
    float ScaleFactor;
    bool bApplyCustomCurve;
    FRichCurve CustomCurve;
    ERBFDistanceMethod DistanceMethod;
    ERBFFunctionType FunctionType;

};

struct FRandomPlayerSequenceEntry
{
    class UAnimSequence* Sequence;
    float ChanceToPlay;
    int32 MinLoopCount;
    int32 MaxLoopCount;
    float MinPlayRate;
    float MaxPlayRate;
    FAlphaBlend BlendIn;

};

struct FReferenceBoneFrame
{
    FBoneReference Bone;
    FAxis Axis;

};

struct FRotationLimit
{
    FVector LimitMin;
    FVector LimitMax;

};

struct FRotationRetargetingInfo
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

};

struct FSimSpaceSettings
{
    float MasterAlpha;
    float VelocityScaleZ;
    float MaxLinearVelocity;
    float MaxAngularVelocity;
    float MaxLinearAcceleration;
    float MaxAngularAcceleration;
    float ExternalLinearDrag;
    FVector ExternalLinearDragV;
    FVector ExternalLinearVelocity;
    FVector ExternalAngularVelocity;

};

struct FSocketReference
{
    FName SocketName;

};

struct FSplineIKCachedBoneData
{
    FBoneReference Bone;
    int32 RefSkeletonIndex;

};

class ISequencerAnimationSupport : public IInterface
{
};

class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
    FName NotifyName;

};

class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
    FName NotifyName;

};

class UAnimSequencerInstance : public UAnimInstance
{
};

class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{

    void K2_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    void K2_StartProfilingTimer();
    FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
    float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
    FTransform K2_LookAt(const FTransform& CurrentTransform, const FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree);
    float K2_EndProfilingTimer(bool bLog, FString LogPrefix);
    float K2_DistanceBetweenTwoSocketsAndMapRange(const class USkeletalMeshComponent* Component, const FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
    FVector K2_DirectionBetweenSockets(const class USkeletalMeshComponent* Component, const FName SocketOrBoneNameFrom, const FName SocketOrBoneNameTo);
    float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const FName SocketOrBoneName, const FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const FRuntimeFloatCurve& CustomCurve);
    float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
};

class UPlayMontageCallbackProxy : public UObject
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
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
};

#endif
