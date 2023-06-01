#ifndef UE4SS_SDK_ControlRig_HPP
#define UE4SS_SDK_ControlRig_HPP

#include "ControlRig_enums.hpp"

struct FAimTarget
{
    float Weight;
    FTransform Transform;
    FVector AlignVector;

};

struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
    TSubclassOf<class UControlRig> ControlRigClass;
    class UControlRig* ControlRig;
    float alpha;
    EAnimAlphaInputType AlphaInputType;
    uint8 bAlphaBoolEnabled;
    uint8 bSetRefPoseFromSkeleton;
    FInputScaleBias AlphaScaleBias;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    TMap<class FName, class FName> InputMapping;
    TMap<class FName, class FName> OutputMapping;
    int32 LODThreshold;

};

struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
    FPoseLink Source;
    TMap<FName, uint16> ControlRigBoneMapping;
    TMap<FName, uint16> ControlRigCurveMapping;
    TMap<FName, uint16> InputToCurveMappingUIDs;
    TWeakObjectPtr<class UNodeMappingContainer> NodeMappingContainer;
    FControlRigIOSettings InputSettings;
    FControlRigIOSettings OutputSettings;
    bool bExecute;

};

struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
    FPoseLink InputPose;

};

struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
    TWeakObjectPtr<class UControlRig> ControlRig;

};

struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
    TArray<FConstraintNodeData> UserData;

};

struct FBlendTarget
{
    FTransform Transform;
    float Weight;

};

struct FCRFourPointBezier
{
    FVector A;
    FVector B;
    FVector C;
    FVector D;

};

struct FCRSimContainer
{
    float TimeStep;
    float AccumulatedTime;
    float TimeLeftForStep;

};

struct FCRSimLinearSpring
{
    int32 SubjectA;
    int32 SubjectB;
    float Coefficient;
    float Equilibrium;

};

struct FCRSimPoint
{
    float Mass;
    float Size;
    float LinearDamping;
    float InheritMotion;
    FVector Position;
    FVector LinearVelocity;

};

struct FCRSimPointConstraint
{
    ECRSimConstraintType Type;
    int32 SubjectA;
    int32 SubjectB;
    FVector DataA;
    FVector DataB;

};

struct FCRSimPointContainer : public FCRSimContainer
{
    TArray<FCRSimPoint> Points;
    TArray<FCRSimLinearSpring> Springs;
    TArray<FCRSimPointForce> Forces;
    TArray<FCRSimSoftCollision> CollisionVolumes;
    TArray<FCRSimPointConstraint> Constraints;
    TArray<FCRSimPoint> PreviousStep;

};

struct FCRSimPointForce
{
    ECRSimPointForceType ForceType;
    FVector Vector;
    float Coefficient;
    bool bNormalize;

};

struct FCRSimSoftCollision
{
    FTransform Transform;
    ECRSimSoftCollisionType ShapeType;
    float MinimumDistance;
    float MaximumDistance;
    EControlRigAnimEasingType FalloffType;
    float Coefficient;
    bool bInverted;

};

struct FCachedRigElement
{
    FRigElementKey Key;
    uint16 Index;
    int32 ContainerVersion;

};

struct FChannelMapInfo
{
    int32 ControlIndex;
    int32 TotalChannelIndex;
    int32 ChannelIndex;
    int32 ParentControlIndex;
    FName ChannelTypeName;

};

struct FConstraintNodeData
{
    FTransform RelativeParent;
    FConstraintOffset ConstraintOffset;
    FName LinkedNode;
    TArray<FTransformConstraint> Constraints;

};

struct FConstraintTarget
{
    FTransform Transform;
    float Weight;
    bool bMaintainOffset;
    FTransformFilter Filter;

};

struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
};

struct FControlRigComponentMappedBone
{
    FName Source;
    FName Target;

};

struct FControlRigComponentMappedComponent
{
    class USceneComponent* Component;
    FName ElementName;
    ERigElementType ElementType;
    EControlRigComponentMapDirection Direction;

};

struct FControlRigComponentMappedCurve
{
    FName Source;
    FName Target;

};

struct FControlRigComponentMappedElement
{
    FComponentReference ComponentReference;
    int32 TransformIndex;
    FName TransformName;
    ERigElementType ElementType;
    FName ElementName;
    EControlRigComponentMapDirection Direction;
    FTransform Offset;
    float Weight;
    EControlRigComponentSpace Space;
    class USceneComponent* SceneComponent;
    int32 ElementIndex;
    int32 SubIndex;

};

struct FControlRigDrawContainer
{
    TArray<FControlRigDrawInstruction> Instructions;

};

struct FControlRigDrawInstruction
{
    FName Name;
    TEnumAsByte<EControlRigDrawSettings::Type> PrimitiveType;
    TArray<FVector> Positions;
    FLinearColor Color;
    float Thickness;
    FTransform Transform;

};

struct FControlRigDrawInterface : public FControlRigDrawContainer
{
};

struct FControlRigExecuteContext : public FRigVMExecuteContext
{
};

struct FControlRigGizmoDefinition
{
    FName GizmoName;
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    FTransform Transform;

};

struct FControlRigIOSettings
{
    bool bUpdatePose;
    bool bUpdateCurves;

};

struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
};

struct FControlRigSequenceObjectReference
{
    TSubclassOf<class UControlRig> ControlRigClass;

};

struct FControlRigSequenceObjectReferenceMap
{
    TArray<FGuid> BindingIds;
    TArray<FControlRigSequenceObjectReferences> References;

};

struct FControlRigSequenceObjectReferences
{
    TArray<FControlRigSequenceObjectReference> Array;

};

struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{
};

struct FControlRigSettingsPerPinBool
{
    TMap<class FString, class bool> Values;

};

struct FControlRigValidationContext
{
};

struct FEnumParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneByteChannel ParameterCurve;

};

struct FGizmoActorCreationParam
{
};

struct FIntegerParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneIntegerChannel ParameterCurve;

};

struct FMathRBFInterpolateQuatColor_Target
{
    FQuat Target;
    FLinearColor Value;

};

struct FMathRBFInterpolateQuatFloat_Target
{
    FQuat Target;
    float Value;

};

struct FMathRBFInterpolateQuatQuat_Target
{
    FQuat Target;
    FQuat Value;

};

struct FMathRBFInterpolateQuatVector_Target
{
    FQuat Target;
    FVector Value;

};

struct FMathRBFInterpolateQuatXform_Target
{
    FQuat Target;
    FTransform Value;

};

struct FMathRBFInterpolateVectorColor_Target
{
    FVector Target;
    FLinearColor Value;

};

struct FMathRBFInterpolateVectorFloat_Target
{
    FVector Target;
    float Value;

};

struct FMathRBFInterpolateVectorQuat_Target
{
    FVector Target;
    FQuat Value;

};

struct FMathRBFInterpolateVectorVector_Target
{
    FVector Target;
    FVector Value;

};

struct FMathRBFInterpolateVectorXform_Target
{
    FVector Target;
    FTransform Value;

};

struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
    bool bAdditive;
    bool bApplyBoneFilter;
    FInputBlendPose BoneFilter;
    FMovieSceneFloatChannel Weight;
    FMovieSceneEvaluationOperand Operand;

};

struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
    TArray<FEnumParameterNameAndCurve> Enums;
    TArray<FIntegerParameterNameAndCurve> Integers;

};

struct FRigBone : public FRigElement
{
    FName ParentName;
    int32 ParentIndex;
    FTransform InitialTransform;
    FTransform GlobalTransform;
    FTransform LocalTransform;
    TArray<int32> Dependents;
    ERigBoneType Type;

};

struct FRigBoneHierarchy
{
    TArray<FRigBone> Bones;
    TMap<FName, int32> NameToIndexMapping;
    TArray<FName> Selection;

};

struct FRigControl : public FRigElement
{
    ERigControlType ControlType;
    FName DisplayName;
    FName ParentName;
    int32 ParentIndex;
    FName SpaceName;
    int32 SpaceIndex;
    FTransform OffsetTransform;
    FRigControlValue InitialValue;
    FRigControlValue Value;
    ERigControlAxis PrimaryAxis;
    bool bIsCurve;
    bool bAnimatable;
    bool bLimitTranslation;
    bool bLimitRotation;
    bool bLimitScale;
    bool bDrawLimits;
    FRigControlValue MinimumValue;
    FRigControlValue MaximumValue;
    bool bGizmoEnabled;
    bool bGizmoVisible;
    FName GizmoName;
    FTransform GizmoTransform;
    FLinearColor GizmoColor;
    TArray<int32> Dependents;
    bool bIsTransientControl;
    class UEnum* ControlEnum;

};

struct FRigControlHierarchy
{
    TArray<FRigControl> Controls;
    TMap<FName, int32> NameToIndexMapping;
    TArray<FName> Selection;

};

struct FRigControlModifiedContext
{
};

struct FRigControlValue
{
    FRigControlValueStorage FloatStorage;
    FTransform Storage;

};

struct FRigControlValueStorage
{
    float Float00;
    float Float01;
    float Float02;
    float Float03;
    float Float10;
    float Float11;
    float Float12;
    float Float13;
    float Float20;
    float Float21;
    float Float22;
    float Float23;
    float Float30;
    float Float31;
    float Float32;
    float Float33;
    bool bValid;

};

struct FRigCurve : public FRigElement
{
    float Value;

};

struct FRigCurveContainer
{
    TArray<FRigCurve> Curves;
    TMap<FName, int32> NameToIndexMapping;
    TArray<FName> Selection;

};

struct FRigElement
{
    FName Name;
    int32 Index;

};

struct FRigElementKey
{
    ERigElementType Type;
    FName Name;

};

struct FRigElementKeyCollection
{
};

struct FRigEventContext
{
};

struct FRigHierarchyContainer
{
    FRigBoneHierarchy BoneHierarchy;
    FRigSpaceHierarchy SpaceHierarchy;
    FRigControlHierarchy ControlHierarchy;
    FRigCurveContainer CurveContainer;
    int32 Version;

};

struct FRigHierarchyCopyPasteContent
{
    TArray<ERigElementType> Types;
    TArray<FString> Contents;
    TArray<FTransform> LocalTransforms;
    TArray<FTransform> GlobalTransforms;

};

struct FRigHierarchyRef
{
};

struct FRigInfluenceEntry
{
    FRigElementKey Source;
    TArray<FRigElementKey> AffectedList;

};

struct FRigInfluenceEntryModifier
{
    TArray<FRigElementKey> AffectedList;

};

struct FRigInfluenceMap
{
    FName EventName;
    TArray<FRigInfluenceEntry> Entries;
    TMap<FRigElementKey, int32> KeyToIndex;

};

struct FRigInfluenceMapPerEvent
{
    TArray<FRigInfluenceMap> Maps;
    TMap<FName, int32> EventToIndex;

};

struct FRigMirrorSettings
{
    TEnumAsByte<EAxis::Type> MirrorAxis;
    TEnumAsByte<EAxis::Type> AxisToFlip;
    FString OldName;
    FString NewName;

};

struct FRigPose
{
    TArray<FRigPoseElement> Elements;

};

struct FRigPoseElement
{
    FCachedRigElement Index;
    FTransform GlobalTransform;
    FTransform LocalTransform;
    float CurveValue;

};

struct FRigSpace : public FRigElement
{
    ERigSpaceType SpaceType;
    FName ParentName;
    int32 ParentIndex;
    FTransform InitialTransform;
    FTransform LocalTransform;

};

struct FRigSpaceHierarchy
{
    TArray<FRigSpace> Spaces;
    TMap<FName, int32> NameToIndexMapping;
    TArray<FName> Selection;

};

struct FRigUnit : public FRigVMStruct
{
};

struct FRigUnitMutable : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
{
    float Increment;
    float InitialValue;
    bool bIntegrateDeltaTime;
    float Result;
    float AccumulatedValue;

};

struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
{
    float TargetValue;
    float InitialValue;
    float Blend;
    bool bIntegrateDeltaTime;
    float Result;
    float AccumulatedValue;

};

struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
{
    float Multiplier;
    float InitialValue;
    bool bIntegrateDeltaTime;
    float Result;
    float AccumulatedValue;

};

struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
{
    float Value;
    float Minimum;
    float Maximum;
    float AccumulatedMinimum;
    float AccumulatedMaximum;

};

struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
{
    FQuat TargetValue;
    FQuat InitialValue;
    float Blend;
    bool bIntegrateDeltaTime;
    FQuat Result;
    FQuat AccumulatedValue;

};

struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
{
    FQuat Multiplier;
    FQuat InitialValue;
    bool bFlipOrder;
    bool bIntegrateDeltaTime;
    FQuat Result;
    FQuat AccumulatedValue;

};

struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
{
    FTransform TargetValue;
    FTransform InitialValue;
    float Blend;
    bool bIntegrateDeltaTime;
    FTransform Result;
    FTransform AccumulatedValue;

};

struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
{
    FTransform Multiplier;
    FTransform InitialValue;
    bool bFlipOrder;
    bool bIntegrateDeltaTime;
    FTransform Result;
    FTransform AccumulatedValue;

};

struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
{
    FVector Increment;
    FVector InitialValue;
    bool bIntegrateDeltaTime;
    FVector Result;
    FVector AccumulatedValue;

};

struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
{
    FVector TargetValue;
    FVector InitialValue;
    float Blend;
    bool bIntegrateDeltaTime;
    FVector Result;
    FVector AccumulatedValue;

};

struct FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
{
    FVector Multiplier;
    FVector InitialValue;
    bool bIntegrateDeltaTime;
    FVector Result;
    FVector AccumulatedValue;

};

struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
{
    FVector Value;
    FVector Minimum;
    FVector Maximum;
    FVector AccumulatedMinimum;
    FVector AccumulatedMaximum;

};

struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
    FName Bone;
    FTransform Transform;
    float Weight;
    bool bPostMultiply;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
};

struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
};

struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
    FName Bone;
    FRigUnit_AimBone_Target Primary;
    FRigUnit_AimBone_Target Secondary;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_AimBone_DebugSettings DebugSettings;
    FCachedRigElement CachedBoneIndex;
    FCachedRigElement PrimaryCachedSpace;
    FCachedRigElement SecondaryCachedSpace;

};

struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
    FTransform InputTransform;
    FRigUnit_AimItem_Target Primary;
    FRigUnit_AimItem_Target Secondary;
    float Weight;
    FTransform Result;
    FRigUnit_AimBone_DebugSettings DebugSettings;
    FCachedRigElement PrimaryCachedSpace;
    FCachedRigElement SecondaryCachedSpace;

};

struct FRigUnit_AimBone_DebugSettings
{
    bool bEnabled;
    float Scale;
    FTransform WorldOffset;

};

struct FRigUnit_AimBone_Target
{
    float Weight;
    FVector Axis;
    FVector Target;
    EControlRigVectorKind Kind;
    FName Space;

};

struct FRigUnit_AimConstraint : public FRigUnitMutable
{
    FName Joint;
    EAimMode AimMode;
    EAimMode UpMode;
    FVector AimVector;
    FVector UpVector;
    TArray<FAimTarget> AimTargets;
    TArray<FAimTarget> UpTargets;
    FRigUnit_AimConstraint_WorkData WorkData;

};

struct FRigUnit_AimConstraint_WorkData
{
    TArray<FConstraintData> ConstraintData;

};

struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Item;
    FRigUnit_AimItem_Target Primary;
    FRigUnit_AimItem_Target Secondary;
    float Weight;
    FRigUnit_AimBone_DebugSettings DebugSettings;
    FCachedRigElement CachedItem;
    FCachedRigElement PrimaryCachedSpace;
    FCachedRigElement SecondaryCachedSpace;

};

struct FRigUnit_AimItem_Target
{
    float Weight;
    FVector Axis;
    FVector Target;
    EControlRigVectorKind Kind;
    FRigElementKey Space;

};

struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
{
    float Value;
    float Scale;
    float Bias;
    bool bMapRange;
    FInputRange InRange;
    FInputRange OutRange;
    bool bClampResult;
    float ClampMin;
    float ClampMax;
    bool bInterpResult;
    float InterpSpeedIncreasing;
    float InterpSpeedDecreasing;
    float Result;
    FInputScaleBiasClamp ScaleBiasClamp;

};

struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
    FVector Value;
    float Scale;
    float Bias;
    bool bMapRange;
    FInputRange InRange;
    FInputRange OutRange;
    bool bClampResult;
    float ClampMin;
    float ClampMax;
    bool bInterpResult;
    float InterpSpeedIncreasing;
    float InterpSpeedDecreasing;
    FVector Result;
    FInputScaleBiasClamp ScaleBiasClamp;

};

struct FRigUnit_AnimBase : public FRigUnit
{
};

struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
    float Value;
    EControlRigAnimEasingType Type;
    float SourceMinimum;
    float SourceMaximum;
    float TargetMinimum;
    float TargetMaximum;
    float Result;

};

struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
    EControlRigAnimEasingType Type;

};

struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
    float Value;
    FRuntimeFloatCurve Curve;
    float SourceMinimum;
    float SourceMaximum;
    float TargetMinimum;
    float TargetMaximum;
    float Result;

};

struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
    FRuntimeFloatCurve Curve;

};

struct FRigUnit_ApplyFK : public FRigUnitMutable
{
    FName Joint;
    FTransform Transform;
    FTransformFilter Filter;
    EApplyTransformMode ApplyTransformMode;
    ETransformSpaceMode ApplyTransformSpace;
    FTransform BaseTransform;
    FName BaseJoint;

};

struct FRigUnit_BeginExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_BinaryFloatOp : public FRigUnit
{
    float Argument0;
    float Argument1;
    float Result;

};

struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
    FQuat Argument0;
    FQuat Argument1;
    FQuat Result;

};

struct FRigUnit_BinaryTransformOp : public FRigUnit
{
    FTransform Argument0;
    FTransform Argument1;
    FTransform Result;

};

struct FRigUnit_BinaryVectorOp : public FRigUnit
{
    FVector Argument0;
    FVector Argument1;
    FVector Result;

};

struct FRigUnit_BlendTransform : public FRigUnit
{
    FTransform Source;
    TArray<FBlendTarget> Targets;
    FTransform Result;

};

struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones;
    FVector WaveSpeed;
    FVector WaveFrequency;
    FVector WaveAmplitude;
    FVector WaveOffset;
    FVector WaveNoise;
    EControlRigAnimEasingType WaveEase;
    float WaveMinimum;
    float WaveMaximum;
    EControlRigRotationOrder RotationOrder;
    bool bPropagateToChildren;
    FRigUnit_BoneHarmonics_WorkData WorkData;

};

struct FRigUnit_BoneHarmonics_BoneTarget
{
    FName Bone;
    float Ratio;

};

struct FRigUnit_BoneHarmonics_WorkData
{
    TArray<FCachedRigElement> CachedItems;
    FVector WaveTime;

};

struct FRigUnit_BoneName : public FRigUnit
{
    FName Bone;

};

struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EffectorBone;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    int32 MaxIterations;
    bool bStartFromTail;
    float BaseRotationLimit;
    TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits;
    bool bPropagateToChildren;
    FRigUnit_CCDIK_WorkData WorkData;

};

struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    int32 MaxIterations;
    bool bStartFromTail;
    float BaseRotationLimit;
    TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;
    bool bPropagateToChildren;
    FRigUnit_CCDIK_WorkData WorkData;

};

struct FRigUnit_CCDIK_RotationLimit
{
    FName Bone;
    float Limit;

};

struct FRigUnit_CCDIK_RotationLimitPerItem
{
    FRigElementKey Item;
    float Limit;

};

struct FRigUnit_CCDIK_WorkData
{
    TArray<FCCDIKChainLink> Chain;
    TArray<FCachedRigElement> CachedItems;
    TArray<int32> RotationLimitIndex;
    TArray<float> RotationLimitsPerItem;
    FCachedRigElement CachedEffector;

};

struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
    FName ChainRoot;
    FVector Speed;
    FRigUnit_ChainHarmonics_Reach Reach;
    FRigUnit_ChainHarmonics_Wave Wave;
    FRuntimeFloatCurve WaveCurve;
    FRigUnit_ChainHarmonics_Pendulum Pendulum;
    bool bDrawDebug;
    FTransform DrawWorldOffset;
    FRigUnit_ChainHarmonics_WorkData WorkData;

};

struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey ChainRoot;
    FVector Speed;
    FRigUnit_ChainHarmonics_Reach Reach;
    FRigUnit_ChainHarmonics_Wave Wave;
    FRuntimeFloatCurve WaveCurve;
    FRigUnit_ChainHarmonics_Pendulum Pendulum;
    bool bDrawDebug;
    FTransform DrawWorldOffset;
    FRigUnit_ChainHarmonics_WorkData WorkData;

};

struct FRigUnit_ChainHarmonics_Pendulum
{
    bool bEnabled;
    float PendulumStiffness;
    FVector PendulumGravity;
    float PendulumBlend;
    float PendulumDrag;
    float PendulumMinimum;
    float PendulumMaximum;
    EControlRigAnimEasingType PendulumEase;
    FVector UnwindAxis;
    float UnwindMinimum;
    float UnwindMaximum;

};

struct FRigUnit_ChainHarmonics_Reach
{
    bool bEnabled;
    FVector ReachTarget;
    FVector ReachAxis;
    float ReachMinimum;
    float ReachMaximum;
    EControlRigAnimEasingType ReachEase;

};

struct FRigUnit_ChainHarmonics_Wave
{
    bool bEnabled;
    FVector WaveFrequency;
    FVector WaveAmplitude;
    FVector WaveOffset;
    FVector WaveNoise;
    float WaveMinimum;
    float WaveMaximum;
    EControlRigAnimEasingType WaveEase;

};

struct FRigUnit_ChainHarmonics_WorkData
{
    FVector Time;
    TArray<FCachedRigElement> Items;
    TArray<float> Ratio;
    TArray<FVector> LocalTip;
    TArray<FVector> PendulumTip;
    TArray<FVector> PendulumPosition;
    TArray<FVector> PendulumVelocity;
    TArray<FVector> HierarchyLine;
    TArray<FVector> VelocityLines;

};

struct FRigUnit_Clamp_Float : public FRigUnit
{
    float Value;
    float Min;
    float Max;
    float Result;

};

struct FRigUnit_CollectionBase : public FRigUnit
{
};

struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
    FRigElementKey FirstItem;
    FRigElementKey LastItem;
    bool Reverse;
    FRigElementKeyCollection Collection;
    FRigElementKeyCollection CachedCollection;
    int32 CachedHierarchyHash;

};

struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
    FRigElementKey Parent;
    bool bIncludeParent;
    bool bRecursive;
    ERigElementType TypeToSearch;
    FRigElementKeyCollection Collection;
    FRigElementKeyCollection CachedCollection;
    int32 CachedHierarchyHash;

};

struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    int32 Count;

};

struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;
    FRigElementKeyCollection B;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;
    FRigElementKeyCollection B;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    int32 Index;
    FRigElementKey Item;

};

struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
    TArray<FRigElementKey> Items;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
    FRigElementKeyCollection Collection;
    FRigElementKey Item;
    int32 Index;
    int32 Count;
    float Ratio;
    bool Continue;
    FControlRigExecuteContext Completed;

};

struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
    FName PartialName;
    ERigElementType TypeToSearch;
    FRigElementKeyCollection Collection;
    FRigElementKeyCollection CachedCollection;
    int32 CachedHierarchyHash;

};

struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Items;
    FName Old;
    FName New;
    bool RemoveInvalidItems;
    FRigElementKeyCollection Collection;
    FRigElementKeyCollection CachedCollection;
    int32 CachedHierarchyHash;

};

struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;
    FRigElementKeyCollection Reversed;

};

struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;
    FRigElementKeyCollection B;
    FRigElementKeyCollection Collection;

};

struct FRigUnit_Contains : public FRigUnit_NameBase
{
    FName Name;
    FName Search;
    bool Result;

};

struct FRigUnit_Control : public FRigUnit
{
    FEulerTransform Transform;
    FTransform Base;
    FTransform InitTransform;
    FTransform Result;
    FTransformFilter Filter;

};

struct FRigUnit_ControlName : public FRigUnit
{
    FName Control;

};

struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
    FTransform MeshTransform;

};

struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
    FEulerTransform Input;
    FTransform Result;

};

struct FRigUnit_ConvertQuaternion : public FRigUnit
{
    FQuat Input;
    FRotator Result;

};

struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
    FQuat Input;
    FVector Result;

};

struct FRigUnit_ConvertRotation : public FRigUnit
{
    FRotator Input;
    FQuat Result;

};

struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
    FRotator Input;
    FVector Result;

};

struct FRigUnit_ConvertTransform : public FRigUnit
{
    FTransform Input;
    FEulerTransform Result;

};

struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
};

struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
    FVector Input;
    FQuat Result;

};

struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
    FVector Input;
    FRotator Result;

};

struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    FLinearColor Color;
    float Radius;
    float MinimumDegrees;
    float MaximumDegrees;
    float Thickness;
    int32 Detail;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    FLinearColor Color;
    float Radius;
    float MinimumDegrees;
    float MaximumDegrees;
    float Thickness;
    int32 Detail;
    FRigElementKey Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugBase : public FRigUnit
{
};

struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
    FCRFourPointBezier Bezier;
    float MinimumU;
    float MaximumU;
    FLinearColor Color;
    float Thickness;
    int32 Detail;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
{
    FCRFourPointBezier Bezier;
    float MinimumU;
    float MaximumU;
    FLinearColor Color;
    float Thickness;
    int32 Detail;
    FRigElementKey Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
    float Scale;
    FLinearColor Color;
    float Thickness;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
    FVector A;
    FVector B;
    FLinearColor Color;
    float Thickness;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
    FVector A;
    FVector B;
    FLinearColor Color;
    float Thickness;
    FRigElementKey Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
    TArray<FVector> Points;
    FLinearColor Color;
    float Thickness;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
    TArray<FVector> Points;
    FLinearColor Color;
    float Thickness;
    FRigElementKey Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
    FVector Vector;
    ERigUnitDebugPointMode Mode;
    FLinearColor Color;
    float Scale;
    float Thickness;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
    FVector Vector;
    ERigUnitDebugPointMode Mode;
    FLinearColor Color;
    float Scale;
    float Thickness;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    FLinearColor Color;
    float Scale;
    float Thickness;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    FLinearColor Color;
    float Scale;
    float Thickness;
    FRigElementKey Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
    FTransform Transform;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
    TArray<FTransform> Transforms;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;
    FRigUnit_DebugTransformArrayMutable_WorkData WorkData;

};

struct FRigUnit_DebugTransformArrayMutable_WorkData
{
    TArray<FTransform> DrawTransforms;

};

struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FName Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;
    ERigUnitDebugTransformMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FRigElementKey Space;
    FTransform WorldOffset;
    bool bEnabled;

};

struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
    float Value;
    float Delta;
    float PreviousValue;
    float Cache;

};

struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
    FQuat Value;
    FQuat Delta;
    FQuat PreviousValue;
    FQuat Cache;

};

struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
    FTransform Value;
    FTransform Delta;
    FTransform PreviousValue;
    FTransform Cache;

};

struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
    FVector Value;
    FVector Delta;
    FVector PreviousValue;
    FVector Cache;

};

struct FRigUnit_Distance_VectorVector : public FRigUnit
{
    FVector Argument0;
    FVector Argument1;
    float Result;

};

struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_DistributeRotation_WorkData WorkData;

};

struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    FRigUnit_DistributeRotation_WorkData WorkData;

};

struct FRigUnit_DistributeRotation_Rotation
{
    FQuat Rotation;
    float Ratio;

};

struct FRigUnit_DistributeRotation_WorkData
{
    TArray<FCachedRigElement> CachedItems;
    TArray<int32> ItemRotationA;
    TArray<int32> ItemRotationB;
    TArray<float> ItemRotationT;
    TArray<FTransform> ItemLocalTransforms;

};

struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{
};

struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{
};

struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
    FName InstructionName;
    FLinearColor Color;
    FTransform Transform;

};

struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
    FName InstructionName;
    FLinearColor Color;

};

struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
    FName InstructionName;
    float Thickness;

};

struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
    FName InstructionName;
    FTransform Transform;

};

struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
    int32 NumberOfMeasurements;
    FString Prefix;
    float AccumulatedTime;
    int32 MeasurementsLeft;

};

struct FRigUnit_EndsWith : public FRigUnit_NameBase
{
    FName Name;
    FName Ending;
    bool Result;

};

struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EffectorBone;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    bool bPropagateToChildren;
    int32 MaxIterations;
    FRigUnit_FABRIK_WorkData WorkData;

};

struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FTransform EffectorTransform;
    float Precision;
    float Weight;
    bool bPropagateToChildren;
    int32 MaxIterations;
    FRigUnit_FABRIK_WorkData WorkData;

};

struct FRigUnit_FABRIK_WorkData
{
    TArray<FFABRIKChainLink> Chain;
    TArray<FCachedRigElement> CachedItems;
    FCachedRigElement CachedEffector;

};

struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    FCRFourPointBezier Bezier;
    EControlRigCurveAlignment Alignment;
    float Minimum;
    float Maximum;
    int32 SamplingPrecision;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    FVector PoleVectorPosition;
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    FRigUnit_FitChainToCurve_WorkData WorkData;

};

struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FCRFourPointBezier Bezier;
    EControlRigCurveAlignment Alignment;
    float Minimum;
    float Maximum;
    int32 SamplingPrecision;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    FVector PoleVectorPosition;
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    FRigUnit_FitChainToCurve_WorkData WorkData;

};

struct FRigUnit_FitChainToCurve_DebugSettings
{
    bool bEnabled;
    float Scale;
    FLinearColor CurveColor;
    FLinearColor SegmentsColor;
    FTransform WorldOffset;

};

struct FRigUnit_FitChainToCurve_Rotation
{
    FQuat Rotation;
    float Ratio;

};

struct FRigUnit_FitChainToCurve_WorkData
{
    float ChainLength;
    TArray<FVector> ItemPositions;
    TArray<float> ItemSegments;
    TArray<FVector> CurvePositions;
    TArray<float> CurveSegments;
    TArray<FCachedRigElement> CachedItems;
    TArray<int32> ItemRotationA;
    TArray<int32> ItemRotationB;
    TArray<float> ItemRotationT;
    TArray<FTransform> ItemLocalTransforms;

};

struct FRigUnit_ForLoopCount : public FRigUnitMutable
{
    int32 Count;
    int32 Index;
    float Ratio;
    bool Continue;
    FControlRigExecuteContext Completed;

};

struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
{
    float Frames;
    float Seconds;

};

struct FRigUnit_GetBoneTransform : public FRigUnit
{
    FName Bone;
    EBoneGetterSetterMode Space;
    FTransform Transform;
    FCachedRigElement CachedBone;

};

struct FRigUnit_GetControlBool : public FRigUnit
{
    FName Control;
    bool boolValue;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlFloat : public FRigUnit
{
    FName Control;
    float FloatValue;
    float Minimum;
    float Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
    FName Control;
    EBoneGetterSetterMode Space;
    FTransform Transform;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlInteger : public FRigUnit
{
    FName Control;
    int32 IntegerValue;
    int32 Minimum;
    int32 Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlRotator : public FRigUnit
{
    FName Control;
    EBoneGetterSetterMode Space;
    FRotator Rotator;
    FRotator Minimum;
    FRotator Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlTransform : public FRigUnit
{
    FName Control;
    EBoneGetterSetterMode Space;
    FTransform Transform;
    FTransform Minimum;
    FTransform Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlVector : public FRigUnit
{
    FName Control;
    EBoneGetterSetterMode Space;
    FVector Vector;
    FVector Minimum;
    FVector Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetControlVector2D : public FRigUnit
{
    FName Control;
    FVector2D Vector;
    FVector2D Minimum;
    FVector2D Maximum;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_GetCurveValue : public FRigUnit
{
    FName Curve;
    float Value;
    FCachedRigElement CachedCurveIndex;

};

struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
    float Result;

};

struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
    FName Bone;
    EBoneGetterSetterMode Space;
    FTransform Transform;
    FCachedRigElement CachedBone;

};

struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
    FName Joint;
    ETransformGetterType Type;
    ETransformSpaceMode TransformSpace;
    FTransform BaseTransform;
    FName BaseJoint;
    FTransform Output;

};

struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
    FName Bone;
    FName Space;
    FTransform Transform;
    FCachedRigElement CachedBone;
    FCachedRigElement CachedSpace;

};

struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
};

struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
    FRigElementKey Child;
    bool bChildInitial;
    FRigElementKey Parent;
    bool bParentInitial;
    FTransform RelativeTransform;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedParent;

};

struct FRigUnit_GetSpaceTransform : public FRigUnit
{
    FName Space;
    EBoneGetterSetterMode SpaceType;
    FTransform Transform;
    FCachedRigElement CachedSpaceIndex;

};

struct FRigUnit_GetTransform : public FRigUnit
{
    FRigElementKey Item;
    EBoneGetterSetterMode Space;
    bool bInitial;
    FTransform Transform;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
    float Year;
    float Month;
    float Day;
    float WeekDay;
    float Hours;
    float Minutes;
    float Seconds;
    float OverallSeconds;

};

struct FRigUnit_Harmonics_TargetItem
{
    FRigElementKey Item;
    float Ratio;

};

struct FRigUnit_HierarchyBase : public FRigUnit
{
};

struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
    FRigElementKey Parent;
    bool bIncludeParent;
    bool bRecursive;
    FRigElementKeyCollection Children;
    FCachedRigElement CachedParent;
    FRigElementKeyCollection CachedChildren;

};

struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;
    FRigElementKey Parent;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedParent;

};

struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;
    bool bIncludeChild;
    bool bReverse;
    FRigElementKeyCollection Parents;
    FCachedRigElement CachedChild;
    FRigElementKeyCollection CachedParents;

};

struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
    FRigElementKey Item;
    bool bIncludeItem;
    FRigElementKeyCollection Siblings;
    FCachedRigElement CachedItem;
    FRigElementKeyCollection CachedSiblings;

};

struct FRigUnit_HighlevelBase : public FRigUnit
{
};

struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_InverseExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
};

struct FRigUnit_IsInteracting : public FRigUnit
{
    bool bIsInteracting;

};

struct FRigUnit_Item : public FRigUnit
{
    FRigElementKey Item;

};

struct FRigUnit_ItemBase : public FRigUnit
{
};

struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
    FRigElementKey Item;
    bool Exists;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_Harmonics_TargetItem> Targets;
    FVector WaveSpeed;
    FVector WaveFrequency;
    FVector WaveAmplitude;
    FVector WaveOffset;
    FVector WaveNoise;
    EControlRigAnimEasingType WaveEase;
    float WaveMinimum;
    float WaveMaximum;
    EControlRigRotationOrder RotationOrder;
    FRigUnit_BoneHarmonics_WorkData WorkData;

};

struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
    FRigElementKey Item;
    FName Old;
    FName New;
    FRigElementKey Result;

};

struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
    float Value;
    int32 BufferSize;
    float Result;
    TArray<float> Buffer;
    int32 LastInsertIndex;

};

struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
    FTransform Value;
    int32 BufferSize;
    FTransform Result;
    TArray<FTransform> Buffer;
    int32 LastInsertIndex;

};

struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
    FVector Value;
    int32 BufferSize;
    FVector Result;
    TArray<FVector> Buffer;
    int32 LastInsertIndex;

};

struct FRigUnit_MapRange_Float : public FRigUnit
{
    float Value;
    float MinIn;
    float MaxIn;
    float MinOut;
    float MaxOut;
    float Result;

};

struct FRigUnit_MathBase : public FRigUnit
{
};

struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
{
};

struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
    bool A;
    bool B;
    bool Result;

};

struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{
};

struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{
};

struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
    bool Value;

};

struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
    bool A;
    bool B;
    bool Result;

};

struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{
};

struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{
};

struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
    bool A;
    bool B;
    bool Result;

};

struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
{
};

struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
    bool Value;
    bool Result;

};

struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
{
};

struct FRigUnit_MathColorBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{
    FLinearColor A;
    FLinearColor B;
    FLinearColor Result;

};

struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
    float Value;
    FLinearColor Result;

};

struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
    FLinearColor A;
    FLinearColor B;
    float T;
    FLinearColor Result;

};

struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
{
};

struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{
};

struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float Result;

};

struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
{
    float Value;
    float Result;
    int32 Int;

};

struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
    float Value;
    float Minimum;
    float Maximum;
    float Result;

};

struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{
};

struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{
};

struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{
};

struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
    float Value;

};

struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
{
    float Value;
    float Result;
    int32 Int;

};

struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float Tolerance;
    bool Result;

};

struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
    float Value;
    float Tolerance;
    bool Result;

};

struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float C;
    float AlphaAngle;
    float BetaAngle;
    float GammaAngle;
    bool bValid;

};

struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    float T;
    float Result;

};

struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
    float A;
    float B;
    bool Result;

};

struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
    float Value;
    float SourceMinimum;
    float SourceMaximum;
    float TargetMinimum;
    float TargetMaximum;
    bool bClamp;
    float Result;

};

struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
{
    float Value;
    float Result;
    int32 Int;

};

struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
    bool Condition;
    float IfTrue;
    float IfFalse;
    float Result;

};

struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{
};

struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{
};

struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{
    float Value;
    int32 Result;

};

struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
    float Value;
    float Result;

};

struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
{
};

struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    int32 Result;

};

struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{
    int32 Value;
    int32 Minimum;
    int32 Maximum;
    int32 Result;

};

struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
{
};

struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
{
    int32 A;
    int32 B;
    bool Result;

};

struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
{
};

struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
{
};

struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{
    int32 Value;
    float Result;

};

struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
{
    int32 Value;
    int32 Result;

};

struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{
    FVector Start;
    FVector Direction;
    FVector PlanePoint;
    FVector PlaneNormal;
    FVector Result;
    float Distance;

};

struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    FQuat Result;

};

struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    float Result;

};

struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    bool Result;

};

struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
    FVector Axis;
    float Angle;
    FQuat Result;

};

struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
    FVector Euler;
    EControlRigRotationOrder RotationOrder;
    FQuat Result;

};

struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
    FRotator Rotator;
    FQuat Result;

};

struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
    FVector A;
    FVector B;
    FQuat Result;

};

struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
    FQuat Quaternion;
    TEnumAsByte<EAxis::Type> Axis;
    FVector Result;

};

struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{
};

struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
{
};

struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    bool Result;

};

struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
    FQuat Quaternion;
    FVector Vector;
    FVector Result;

};

struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
    EControlRigRotationOrder RotationOrder;

};

struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    float Scale;

};

struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
    bool Condition;
    FQuat IfTrue;
    FQuat IfFalse;
    FQuat Result;

};

struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
    FQuat A;
    FQuat B;
    float T;
    FQuat Result;

};

struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
    FQuat Input;
    FVector TwistAxis;
    FQuat Swing;
    FQuat Twist;

};

struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    FVector Axis;
    float Angle;

};

struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    EControlRigRotationOrder RotationOrder;
    FVector Result;

};

struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    FRotator Result;

};

struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
    FQuat Value;
    FQuat Result;

};

struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{
};

struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{
    FQuat Input;
    ERBFQuatDistanceType DistanceFunction;
    ERBFKernelType SmoothingFunction;
    float SmoothingAngle;
    bool bNormalizeOutput;
    FVector TwistAxis;
    FRigUnit_MathRBFInterpolateQuatWorkData WorkData;

};

struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatColor_Target> Targets;
    FLinearColor Output;

};

struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets;
    float Output;

};

struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatQuat_Target> Targets;
    FQuat Output;

};

struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatVector_Target> Targets;
    FVector Output;

};

struct FRigUnit_MathRBFInterpolateQuatWorkData
{
};

struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatXform_Target> Targets;
    FTransform Output;

};

struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{
    FVector Input;
    ERBFVectorDistanceType DistanceFunction;
    ERBFKernelType SmoothingFunction;
    float SmoothingRadius;
    bool bNormalizeOutput;
    FRigUnit_MathRBFInterpolateVectorWorkData WorkData;

};

struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorColor_Target> Targets;
    FLinearColor Output;

};

struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorFloat_Target> Targets;
    float Output;

};

struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorQuat_Target> Targets;
    FQuat Output;

};

struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorVector_Target> Targets;
    FVector Output;

};

struct FRigUnit_MathRBFInterpolateVectorWorkData
{
};

struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorXform_Target> Targets;
    FTransform Output;

};

struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
    FTransform A;
    FTransform B;
    FTransform Result;

};

struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
    FTransform Value;
    TEnumAsByte<EAxis::Type> Axis;
    TEnumAsByte<EControlRigClampSpatialMode::Type> Type;
    float Minimum;
    float Maximum;
    FTransform Space;
    bool bDrawDebug;
    FLinearColor DebugColor;
    float DebugThickness;
    FTransform Result;

};

struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
    FEulerTransform EulerTransform;
    FTransform Result;

};

struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
    FVector Location;
    FVector Rotation;
    EControlRigRotationOrder RotationOrder;
    FVector Scale;
    FTransform Transform;
    FEulerTransform EulerTransform;

};

struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{
};

struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
    FTransform A;
    FTransform B;
    float T;
    FTransform Result;

};

struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{
    FTransform Local;
    FTransform Parent;
    FTransform Global;

};

struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
    FTransform Global;
    FTransform Parent;
    FTransform Local;

};

struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
{
};

struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
    FTransform Transform;
    FVector Direction;
    FVector Result;

};

struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
    bool Condition;
    FTransform IfTrue;
    FTransform IfFalse;
    FTransform Result;

};

struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
    FTransform Value;
    FEulerTransform Result;

};

struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
    FTransform Transform;
    FVector Location;
    FVector Result;

};

struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
    FTransform Value;
    FTransform Result;

};

struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float Result;

};

struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{
};

struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
    FCRFourPointBezier Bezier;
    float T;
    FVector Result;
    FVector Tangent;

};

struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    FVector Result;

};

struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
    FVector Value;
    FVector Minimum;
    FVector Maximum;
    FVector Result;

};

struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
    FVector Value;
    float MinimumLength;
    float MaximumLength;
    FVector Result;

};

struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
    FVector Value;
    TEnumAsByte<EAxis::Type> Axis;
    TEnumAsByte<EControlRigClampSpatialMode::Type> Type;
    float Minimum;
    float Maximum;
    FTransform Space;
    bool bDrawDebug;
    FLinearColor DebugColor;
    float DebugThickness;
    FVector Result;

};

struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float Result;

};

struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float Result;

};

struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    bool Result;

};

struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
    float Value;
    FVector Result;

};

struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float Tolerance;
    bool Result;

};

struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Tolerance;
    bool Result;

};

struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Result;

};

struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Result;

};

struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    float T;
    FVector Result;

};

struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
    FCRFourPointBezier Bezier;

};

struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
    FVector Value;
    FVector Normal;
    FVector Result;

};

struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    bool Result;

};

struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    bool Result;

};

struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
    FVector A;
    FVector B;
    bool Result;

};

struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
    FVector Value;
    FVector SourceMinimum;
    FVector SourceMaximum;
    FVector TargetMinimum;
    FVector TargetMaximum;
    bool bClamp;
    FVector Result;

};

struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Factor;
    FVector Result;

};

struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
    bool Condition;
    FVector IfTrue;
    FVector IfFalse;
    FVector Result;

};

struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{
    FVector Value;
    float Length;
    FVector Result;

};

struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{
};

struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
    FVector Value;
    FVector Result;

};

struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{
};

struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;
    float Weight;
    float WeightMinimum;
    float WeightMaximum;
    EControlRigModifyBoneMode Mode;
    FRigUnit_ModifyBoneTransforms_WorkData WorkData;

};

struct FRigUnit_ModifyBoneTransforms_PerBone
{
    FName Bone;
    FTransform Transform;

};

struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
};

struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify;
    float Weight;
    float WeightMinimum;
    float WeightMaximum;
    EControlRigModifyBoneMode Mode;
    FRigUnit_ModifyTransforms_WorkData WorkData;

};

struct FRigUnit_ModifyTransforms_PerItem
{
    FRigElementKey Item;
    FTransform Transform;

};

struct FRigUnit_ModifyTransforms_WorkData
{
    TArray<FCachedRigElement> CachedItems;

};

struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
    FName RootBone;
    TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors;
    float Precision;
    bool bPropagateToChildren;
    int32 MaxIterations;
    FRigUnit_MultiFABRIK_WorkData WorkData;

};

struct FRigUnit_MultiFABRIK_EndEffector
{
    FName Bone;
    FVector Location;

};

struct FRigUnit_MultiFABRIK_WorkData
{
};

struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
};

struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
};

struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
};

struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
};

struct FRigUnit_NameBase : public FRigUnit
{
};

struct FRigUnit_NameConcat : public FRigUnit_NameBase
{
    FName A;
    FName B;
    FName Result;

};

struct FRigUnit_NameReplace : public FRigUnit_NameBase
{
    FName Name;
    FName Old;
    FName New;
    FName Result;

};

struct FRigUnit_NameTruncate : public FRigUnit_NameBase
{
    FName Name;
    int32 Count;
    bool FromEnd;
    FName Remainder;
    FName Chopped;

};

struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
    float Value;
    float Speed;
    float Frequency;
    float Minimum;
    float Maximum;
    float Result;
    float Time;

};

struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
    FVector Position;
    FVector Speed;
    FVector Frequency;
    float Minimum;
    float Maximum;
    FVector Result;
    FVector Time;

};

struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
    FRigElementKey Item;
    FTransform OffsetTransform;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
    FRigElementKey Subject;
    int32 ParentIndex;
    FRigElementKeyCollection Parents;
    FTransform InitialGlobalTransform;
    float Weight;
    FTransform Transform;
    bool Switched;
    FCachedRigElement CachedSubject;
    FCachedRigElement CachedParent;
    FTransform RelativeOffset;

};

struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
    TArray<FCRSimPoint> Points;
    TArray<FCRSimLinearSpring> Links;
    TArray<FCRSimPointForce> Forces;
    TArray<FCRSimSoftCollision> CollisionVolumes;
    float SimulatedStepsPerSecond;
    ECRSimPointIntegrateType IntegratorType;
    float VerletBlend;
    TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets;
    bool bLimitLocalPosition;
    bool bPropagateToChildren;
    FVector PrimaryAimAxis;
    FVector SecondaryAimAxis;
    FRigUnit_PointSimulation_DebugSettings DebugSettings;
    FCRFourPointBezier Bezier;
    FRigUnit_PointSimulation_WorkData WorkData;

};

struct FRigUnit_PointSimulation_BoneTarget
{
    FName Bone;
    int32 TranslationPoint;
    int32 PrimaryAimPoint;
    int32 SecondaryAimPoint;

};

struct FRigUnit_PointSimulation_DebugSettings
{
    bool bEnabled;
    float Scale;
    float CollisionScale;
    bool bDrawPointsAsSpheres;
    FLinearColor Color;
    FTransform WorldOffset;

};

struct FRigUnit_PointSimulation_WorkData
{
    FCRSimPointContainer Simulation;
    TArray<FCachedRigElement> BoneIndices;

};

struct FRigUnit_PrepareForExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;

};

struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
    FRigElementKey Child;
    bool bChildInitial;
    FRigElementKey OldParent;
    bool bOldParentInitial;
    FRigElementKey NewParent;
    bool bNewParentInitial;
    FTransform Transform;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedOldParent;
    FCachedRigElement CachedNewParent;

};

struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
    FRigElementKey Item;
    bool bRecomputeGlobal;
    bool bApplyToChildren;
    bool bRecursive;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
    FVector Axis;
    float Angle;
    FQuat Result;

};

struct FRigUnit_QuaternionToAngle : public FRigUnit
{
    FVector Axis;
    FQuat Argument;
    float Angle;

};

struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
    FQuat Argument;
    FVector Axis;
    float Angle;

};

struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
    int32 Seed;
    float Minimum;
    float Maximum;
    float Duration;
    float Result;
    float LastResult;
    int32 LastSeed;
    float TimeLeft;

};

struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
    int32 Seed;
    float Minimum;
    float Maximum;
    float Duration;
    FVector Result;
    FVector LastResult;
    int32 LastSeed;
    float TimeLeft;

};

struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{
    float Seconds;
    float Frames;

};

struct FRigUnit_SendEvent : public FRigUnitMutable
{
    ERigEvent Event;
    FRigElementKey Item;
    float OffsetInSeconds;
    bool bEnable;
    bool bOnlyDuringInteraction;

};

struct FRigUnit_SequenceExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;
    FControlRigExecuteContext A;
    FControlRigExecuteContext B;
    FControlRigExecuteContext C;
    FControlRigExecuteContext D;

};

struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
    FName Bone;
    FTransform Transform;
    FTransform Result;
    EBoneGetterSetterMode Space;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
    FName Bone;
    FQuat Rotation;
    EBoneGetterSetterMode Space;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
    FName Bone;
    FTransform Transform;
    FTransform Result;
    EBoneGetterSetterMode Space;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
    FName Bone;
    FVector Translation;
    EBoneGetterSetterMode Space;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;

};

struct FRigUnit_SetControlBool : public FRigUnitMutable
{
    FName Control;
    bool boolValue;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlColor : public FRigUnitMutable
{
    FName Control;
    FLinearColor Color;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
    FName Control;
    float Weight;
    float FloatValue;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
    FName Control;
    int32 Weight;
    int32 IntegerValue;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
    FName Control;
    FTransform Offset;
    EBoneGetterSetterMode Space;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
    FName Control;
    float Weight;
    FRotator Rotator;
    EBoneGetterSetterMode Space;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
    FName Control;
    float Weight;
    FTransform Transform;
    EBoneGetterSetterMode Space;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlVector : public FRigUnitMutable
{
    FName Control;
    float Weight;
    FVector Vector;
    EBoneGetterSetterMode Space;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
    FName Control;
    float Weight;
    FVector2D Vector;
    FCachedRigElement CachedControlIndex;

};

struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
    FRigElementKey Item;
    FString Pattern;
    bool bVisible;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
    FName Curve;
    float Value;
    FCachedRigElement CachedCurveIndex;

};

struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlBool_Entry> Entries;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlBool_Entry
{
    FName Control;
    bool boolValue;

};

struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlFloat_Entry> Entries;
    float Weight;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlFloat_Entry
{
    FName Control;
    float FloatValue;

};

struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlInteger_Entry> Entries;
    float Weight;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlInteger_Entry
{
    FName Control;
    int32 IntegerValue;

};

struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlRotator_Entry> Entries;
    float Weight;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlRotator_Entry
{
    FName Control;
    FRotator Rotator;
    EBoneGetterSetterMode Space;

};

struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlVector2D_Entry> Entries;
    float Weight;
    TArray<FCachedRigElement> CachedControlIndices;

};

struct FRigUnit_SetMultiControlVector2D_Entry
{
    FName Control;
    FVector2D Vector;

};

struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
    FName Bone;
    FName Space;
    FTransform Transform;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedBone;
    FCachedRigElement CachedSpaceIndex;

};

struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
    FRigElementKey Child;
    FRigElementKey Parent;
    bool bParentInitial;
    FTransform RelativeTransform;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedChild;
    FCachedRigElement CachedParent;

};

struct FRigUnit_SetRotation : public FRigUnitMutable
{
    FRigElementKey Item;
    EBoneGetterSetterMode Space;
    FQuat Rotation;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetScale : public FRigUnitMutable
{
    FRigElementKey Item;
    EBoneGetterSetterMode Space;
    FVector Scale;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
    FName SpaceName;
    FTransform Transform;
    FTransform Result;
    EBoneGetterSetterMode Space;
    FCachedRigElement CachedSpaceIndex;

};

struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
    FName Space;
    float Weight;
    FTransform Transform;
    EBoneGetterSetterMode SpaceType;
    FCachedRigElement CachedSpaceIndex;

};

struct FRigUnit_SetTransform : public FRigUnitMutable
{
    FRigElementKey Item;
    EBoneGetterSetterMode Space;
    bool bInitial;
    FTransform Transform;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SetTranslation : public FRigUnitMutable
{
    FRigElementKey Item;
    EBoneGetterSetterMode Space;
    FVector Translation;
    float Weight;
    bool bPropagateToChildren;
    FCachedRigElement CachedIndex;

};

struct FRigUnit_SimBase : public FRigUnit
{
};

struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{
};

struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    float SlideAmount;
    bool bPropagateToChildren;
    FRigUnit_SlideChain_WorkData WorkData;

};

struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    float SlideAmount;
    bool bPropagateToChildren;
    FRigUnit_SlideChain_WorkData WorkData;

};

struct FRigUnit_SlideChain_WorkData
{
    float ChainLength;
    TArray<float> ItemSegments;
    TArray<FCachedRigElement> CachedItems;
    TArray<FTransform> Transforms;
    TArray<FTransform> BlendedTransforms;

};

struct FRigUnit_SpaceName : public FRigUnit
{
    FName Space;

};

struct FRigUnit_SphereTraceWorld : public FRigUnit
{
    FVector Start;
    FVector End;
    TEnumAsByte<ECollisionChannel> Channel;
    float Radius;
    bool bHit;
    FVector HitLocation;
    FVector HitNormal;

};

struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    float HierarchyStrength;
    float EffectorStrength;
    float EffectorRatio;
    float RootStrength;
    float RootRatio;
    float Damping;
    FVector PoleVector;
    bool bFlipPolePlane;
    EControlRigVectorKind PoleVectorKind;
    FName PoleVectorSpace;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    bool bLiveSimulation;
    int32 Iterations;
    bool bLimitLocalPosition;
    bool bPropagateToChildren;
    FRigUnit_SpringIK_DebugSettings DebugSettings;
    FRigUnit_SpringIK_WorkData WorkData;

};

struct FRigUnit_SpringIK_DebugSettings
{
    bool bEnabled;
    float Scale;
    FLinearColor Color;
    FTransform WorldOffset;

};

struct FRigUnit_SpringIK_WorkData
{
    TArray<FCachedRigElement> CachedBones;
    FCachedRigElement CachedPoleVector;
    TArray<FTransform> Transforms;
    FCRSimPointContainer Simulation;

};

struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{
};

struct FRigUnit_StartsWith : public FRigUnit_NameBase
{
    FName Name;
    FName Start;
    bool Result;

};

struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
};

struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
};

struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
    float Value;
    float SecondsAgo;
    int32 BufferSize;
    float TimeRange;
    float Result;
    TArray<float> Buffer;
    TArray<float> DeltaTimes;
    int32 LastInsertIndex;
    int32 UpperBound;

};

struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
    FTransform Value;
    float SecondsAgo;
    int32 BufferSize;
    float TimeRange;
    FTransform Result;
    TArray<FTransform> Buffer;
    TArray<float> DeltaTimes;
    int32 LastInsertIndex;
    int32 UpperBound;

};

struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
    FVector Value;
    float SecondsAgo;
    int32 BufferSize;
    float TimeRange;
    FVector Result;
    TArray<FVector> Buffer;
    TArray<float> DeltaTimes;
    int32 LastInsertIndex;
    int32 UpperBound;

};

struct FRigUnit_Timeline : public FRigUnit_SimBase
{
    float Speed;
    float Time;
    float AccumulatedValue;

};

struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
    FVector Location;
    FVector Global;

};

struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
    FQuat Rotation;
    FQuat Global;

};

struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
    FTransform Transform;
    FTransform Global;

};

struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
    FQuat Input;
    FVector TwistAxis;
    FQuat Swing;
    FQuat Twist;

};

struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
    FVector Location;
    FVector World;

};

struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
    FQuat Rotation;
    FQuat World;

};

struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
    FTransform Transform;
    FTransform World;

};

struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
    FName Bone;
    ETransformSpaceMode BaseTransformSpace;
    FTransform BaseTransform;
    FName BaseBone;
    TArray<FConstraintTarget> Targets;
    bool bUseInitialTransforms;
    FRigUnit_TransformConstraint_WorkData WorkData;

};

struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Item;
    ETransformSpaceMode BaseTransformSpace;
    FTransform BaseTransform;
    FRigElementKey BaseItem;
    TArray<FConstraintTarget> Targets;
    bool bUseInitialTransforms;
    FRigUnit_TransformConstraint_WorkData WorkData;

};

struct FRigUnit_TransformConstraint_WorkData
{
    TArray<FConstraintData> ConstraintData;
    TMap<int32, int32> ConstraintDataToTargets;

};

struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;
    FName EndBone;
    FVector TwistAxis;
    FVector PoleAxis;
    EControlRigAnimEasingType TwistEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_TwistBones_WorkData WorkData;

};

struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FVector TwistAxis;
    FVector PoleAxis;
    EControlRigAnimEasingType TwistEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_TwistBones_WorkData WorkData;

};

struct FRigUnit_TwistBones_WorkData
{
    TArray<FCachedRigElement> CachedItems;
    TArray<float> ItemRatios;
    TArray<FTransform> ItemTransforms;

};

struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
    FName StartJoint;
    FName EndJoint;
    FVector PoleTarget;
    float Spin;
    FTransform EndEffector;
    float IKBlend;
    FTransform StartJointFKTransform;
    FTransform MidJointFKTransform;
    FTransform EndJointFKTransform;
    float PreviousFKIKBlend;
    FTransform StartJointIKTransform;
    FTransform MidJointIKTransform;
    FTransform EndJointIKTransform;
    int32 StartJointIndex;
    int32 MidJointIndex;
    int32 EndJointIndex;
    float UpperLimbLength;
    float LowerLimbLength;

};

struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
    FName BoneA;
    FName BoneB;
    FName EffectorBone;
    FTransform Effector;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    float SecondaryAxisWeight;
    FVector PoleVector;
    EControlRigVectorKind PoleVectorKind;
    FName PoleVectorSpace;
    bool bEnableStretch;
    float StretchStartRatio;
    float StretchMaximumRatio;
    float Weight;
    float BoneALength;
    float BoneBLength;
    bool bPropagateToChildren;
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;
    FCachedRigElement CachedBoneAIndex;
    FCachedRigElement CachedBoneBIndex;
    FCachedRigElement CachedEffectorBoneIndex;
    FCachedRigElement CachedPoleVectorSpaceIndex;

};

struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey ItemA;
    FRigElementKey ItemB;
    FRigElementKey EffectorItem;
    FTransform Effector;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    float SecondaryAxisWeight;
    FVector PoleVector;
    EControlRigVectorKind PoleVectorKind;
    FRigElementKey PoleVectorSpace;
    bool bEnableStretch;
    float StretchStartRatio;
    float StretchMaximumRatio;
    float Weight;
    float ItemALength;
    float ItemBLength;
    bool bPropagateToChildren;
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;
    FCachedRigElement CachedItemAIndex;
    FCachedRigElement CachedItemBIndex;
    FCachedRigElement CachedEffectorItemIndex;
    FCachedRigElement CachedPoleVectorSpaceIndex;

};

struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
    FTransform Root;
    FVector PoleVector;
    FTransform Effector;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    float SecondaryAxisWeight;
    bool bEnableStretch;
    float StretchStartRatio;
    float StretchMaximumRatio;
    float BoneALength;
    float BoneBLength;
    FTransform Elbow;

};

struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
    FVector Root;
    FVector PoleVector;
    FVector Effector;
    bool bEnableStretch;
    float StretchStartRatio;
    float StretchMaximumRatio;
    float BoneALength;
    float BoneBLength;
    FVector Elbow;

};

struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
    bool bEnabled;
    float Scale;
    FTransform WorldOffset;

};

struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
    FQuat Argument;
    FQuat Result;

};

struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
    FVector Target;
    float Strength;
    float Damp;
    float Blend;
    FVector Position;
    FVector Velocity;
    FVector Acceleration;
    FCRSimPoint Point;
    bool bInitialized;

};

struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
    FQuat Value;
    bool bEnabled;
    float Thickness;
    float Scale;
    FName BoneSpace;

};

struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
    FQuat Value;
    bool bEnabled;
    float Thickness;
    float Scale;
    FRigElementKey Space;

};

struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
    FTransform Value;
    bool bEnabled;
    float Thickness;
    float Scale;
    FName BoneSpace;

};

struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
    FTransform Value;
    bool bEnabled;
    float Thickness;
    float Scale;
    FRigElementKey Space;

};

struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
    FVector Value;
    bool bEnabled;
    ERigUnitVisualDebugPointMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FName BoneSpace;

};

struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
    FVector Value;
    bool bEnabled;
    ERigUnitVisualDebugPointMode Mode;
    FLinearColor Color;
    float Thickness;
    float Scale;
    FRigElementKey Space;

};

struct FStructReference
{
};

class AControlRigControlActor : public AActor
{
    class AActor* ActorToTrack;
    TSubclassOf<class UControlRig> ControlRigClass;
    bool bRefreshOnTick;
    bool bIsSelectable;
    class UMaterialInterface* MaterialOverride;
    FString ColorParameter;
    bool bCastShadows;
    class USceneComponent* ActorRootComponent;
    class UControlRig* ControlRig;
    TArray<FName> ControlNames;
    TArray<FTransform> GizmoTransforms;
    TArray<class UStaticMeshComponent*> Components;
    TArray<class UMaterialInstanceDynamic*> Materials;
    FName ColorParameterName;

    void Refresh();
    void Clear();
};

class AControlRigGizmoActor : public AActor
{
    class USceneComponent* ActorRootComponent;
    class UStaticMeshComponent* StaticMeshComponent;
    uint32 ControlRigIndex;
    FName ControlName;
    FName ColorParameterName;
    uint8 bEnabled;
    uint8 bSelected;
    uint8 bSelectable;
    uint8 bHovered;

    void SetSelected(bool bInSelected);
    void SetSelectable(bool bInSelectable);
    void SetHovered(bool bInHovered);
    void SetGlobalTransform(const FTransform& InTransform);
    void SetEnabled(bool bInEnabled);
    void OnTransformChanged(const FTransform& NewTransform);
    void OnSelectionChanged(bool bIsSelected);
    void OnManipulatingChanged(bool bIsManipulating);
    void OnHoveredChanged(bool bIsSelected);
    void OnEnabledChanged(bool bIsEnabled);
    bool IsSelectedInEditor();
    bool IsHovered();
    bool IsEnabled();
    FTransform GetGlobalTransform();
};

class UAdditiveControlRig : public UControlRig
{
};

class UControlRig : public UObject
{
    ERigExecutionType ExecutionType;
    class URigVM* VM;
    FRigHierarchyContainer Hierarchy;
    TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary;
    TMap<class FName, class FCachedPropertyPath> InputProperties;
    TMap<class FName, class FCachedPropertyPath> OutputProperties;
    FControlRigDrawContainer DrawContainer;
    class UAnimationDataSourceRegistry* DataSourceRegistry;
    TArray<FName> EventQueue;
    FRigInfluenceMapPerEvent Influences;
    class UControlRig* InteractionRig;
    TSubclassOf<class UControlRig> InteractionRigClass;
    TArray<class UAssetUserData*> AssetUserData;

    void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
    void SetInteractionRig(class UControlRig* InInteractionRig);
    TSubclassOf<class UControlRig> GetInteractionRigClass();
    class UControlRig* GetInteractionRig();
};

class UControlRigAnimInstance : public UAnimInstance
{
};

class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
};

class UControlRigComponent : public UPrimitiveComponent
{
    TSubclassOf<class UControlRig> ControlRigClass;
    FControlRigComponentOnPostInitializeDelegate OnPostInitializeDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPreSetupDelegate OnPreSetupDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostSetupDelegate OnPostSetupDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPreUpdateDelegate OnPreUpdateDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostUpdateDelegate OnPostUpdateDelegate;
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    TArray<FControlRigComponentMappedElement> MappedElements;
    bool bResetTransformBeforeTick;
    bool bResetInitialsBeforeSetup;
    bool bUpdateRigOnTick;
    bool bUpdateInEditor;
    bool bDrawBones;
    bool bShowDebugDrawing;
    class UControlRig* ControlRig;

    void Update(float DeltaTime);
    void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);
    void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
    void SetControlVector2D(FName ControlName, FVector2D Value);
    void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);
    void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);
    void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);
    void SetControlInt(FName ControlName, int32 Value);
    void SetControlFloat(FName ControlName, float Value);
    void SetControlBool(FName ControlName, bool Value);
    void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
    void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
    void OnPreUpdate(class UControlRigComponent* Component);
    void OnPreSetup(class UControlRigComponent* Component);
    void OnPostUpdate(class UControlRigComponent* Component);
    void OnPostSetup(class UControlRigComponent* Component);
    void OnPostInitialize(class UControlRigComponent* Component);
    void Initialize();
    FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    TArray<FName> GetElementNames(ERigElementType ElementType);
    FVector2D GetControlVector2D(FName ControlName);
    FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);
    FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);
    FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);
    class UControlRig* GetControlRig();
    FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);
    FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);
    int32 GetControlInt(FName ControlName);
    float GetControlFloat(FName ControlName);
    bool GetControlBool(FName ControlName);
    FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    float GetAbsoluteTime();
    bool DoesElementExist(FName Name, ERigElementType ElementType);
    void ClearMappedElements();
    void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves);
    void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);
    void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

class UControlRigGizmoLibrary : public UObject
{
    FControlRigGizmoDefinition DefaultGizmo;
    TSoftObjectPtr<UMaterial> DefaultMaterial;
    FName MaterialColorParameter;
    TArray<FControlRigGizmoDefinition> Gizmos;

};

class UControlRigLayerInstance : public UAnimInstance
{
};

class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
    bool bCheckControls;
    bool bCheckBones;
    bool bCheckCurves;
    float TranslationPrecision;
    float RotationPrecision;
    float ScalePrecision;
    float CurvePrecision;
    FName EventNameA;
    FName EventNameB;
    FRigPose pose;

};

class UControlRigObjectHolder : public UObject
{
    TArray<class UObject*> Objects;

};

class UControlRigSequence : public ULevelSequence
{
    TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence;
    TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh;
    float LastExportedFrameRate;

};

class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
};

class UControlRigSettings : public UDeveloperSettings
{
};

class UControlRigValidationPass : public UObject
{
};

class UControlRigValidator : public UObject
{
    TArray<class UControlRigValidationPass*> Passes;

};

class UDefault__ControlRigBlueprintGeneratedClass
{
};

class UFKControlRig : public UControlRig
{
    TArray<bool> IsControlActive;
    EControlRigFKRigExecuteMode ApplyMode;

};

class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
    class UControlRig* ControlRig;
    TSubclassOf<class UControlRig> ControlRigClass;
    TArray<bool> ControlsMask;
    FMovieSceneTransformMask TransformMask;
    FMovieSceneFloatChannel Weight;
    TMap<class FName, class FChannelMapInfo> ControlChannelMap;
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;

};

class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
    class UControlRig* ControlRig;
    class UMovieSceneSection* SectionToKey;
    TArray<class UMovieSceneSection*> Sections;
    FName TrackName;

};

#endif
