#ifndef UE4SS_SDK_Engine_HPP
#define UE4SS_SDK_Engine_HPP

#include "Engine_enums.hpp"

struct FA2CSPose : public FA2Pose
{
    TArray<uint8> ComponentSpaceFlags;

};

struct FA2Pose
{
    TArray<FTransform> Bones;

};

struct FActiveCameraShakeInfo
{
    class UCameraShakeBase* ShakeInstance;
    TWeakObjectPtr<class UCameraShakeSourceComponent> ShakeSource;
    bool bIsCustomInitialized;

};

struct FActiveForceFeedbackEffect
{
    class UForceFeedbackEffect* ForceFeedbackEffect;

};

struct FActiveHapticFeedbackEffect
{
    class UHapticFeedbackEffect_Base* HapticEffect;

};

struct FActorComponentDuplicatedObjectData
{
};

struct FActorComponentInstanceData
{
    class UObject* SourceComponentTemplate;
    EComponentCreationMethod SourceComponentCreationMethod;
    int32 SourceComponentTypeSerializedIndex;
    TArray<uint8> SavedProperties;
    FActorComponentDuplicatedObjectData UniqueTransientPackage;
    TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects;
    TArray<class UObject*> ReferencedObjects;
    TArray<FName> ReferencedNames;

};

struct FActorComponentTickFunction : public FTickFunction
{
};

struct FActorTickFunction : public FTickFunction
{
};

struct FAlphaBlend
{
    class UCurveFloat* CustomCurve;
    float BlendTime;
    EAlphaBlendOption BlendOption;

};

struct FAngularDriveConstraint
{
    FConstraintDrive TwistDrive;
    FConstraintDrive SwingDrive;
    FConstraintDrive SlerpDrive;
    FRotator OrientationTarget;
    FVector AngularVelocityTarget;
    TEnumAsByte<EAngularDriveMode::Type> AngularDriveMode;

};

struct FAnimBlueprintDebugData
{
};

struct FAnimBlueprintFunction
{
    FName Name;
    FName Group;
    int32 OutputPoseNodeIndex;
    TArray<FName> InputPoseNames;
    TArray<int32> InputPoseNodeIndices;
    bool bImplemented;

};

struct FAnimBlueprintFunctionData
{
    TFieldPath<FStructProperty> OutputPoseNodeProperty;
    TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties;
    TArray<TFieldPath<FProperty>> InputProperties;

};

struct FAnimControlTrackKey
{
    float StartTime;
    class UAnimSequence* AnimSeq;
    float AnimStartOffset;
    float AnimEndOffset;
    float AnimPlayRate;
    uint8 bLooping;
    uint8 bReverse;

};

struct FAnimCurveBase
{
    FName LastObservedName;
    FSmartName Name;
    int32 CurveTypeFlags;

};

struct FAnimCurveParam
{
    FName Name;

};

struct FAnimCurveType
{
};

struct FAnimGraphBlendOptions
{
    float BlendInTime;
    float BlendOutTime;

};

struct FAnimGroupInfo
{
    FName Name;
    FLinearColor Color;

};

struct FAnimGroupInstance
{
};

struct FAnimInstanceProxy
{
};

struct FAnimInstanceSubsystemData
{
};

struct FAnimLinkableElement
{
    class UAnimMontage* LinkedMontage;
    int32 SlotIndex;
    int32 SegmentIndex;
    TEnumAsByte<EAnimLinkMethod::Type> LinkMethod;
    TEnumAsByte<EAnimLinkMethod::Type> CachedLinkMethod;
    float SegmentBeginTime;
    float SegmentLength;
    float LinkValue;
    class UAnimSequenceBase* LinkedSequence;

};

struct FAnimMontageInstance
{
    class UAnimMontage* Montage;
    bool bPlaying;
    float DefaultBlendTimeMultiplier;
    TArray<int32> NextSections;
    TArray<int32> PrevSections;
    TArray<FAnimNotifyEvent> ActiveStateBranchingPoints;
    float Position;
    float PlayRate;
    FAlphaBlend Blend;
    int32 DisableRootMotionCount;

};

struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
    FPoseLink Base;
    FPoseLink Additive;
    EAnimAlphaInputType AlphaInputType;
    float alpha;
    uint8 bAlphaBoolEnabled;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBias AlphaScaleBias;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    int32 LODThreshold;

};

struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
    FName GroupName;
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    EAnimSyncGroupScope GroupScope;
    bool bIgnoreForRelevancyTest;
    float BlendWeight;
    float InternalTimeAccumulator;

};

struct FAnimNode_Base
{
};

struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
    FComponentSpacePoseLink ComponentPose;

};

struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
    FPoseLink LocalPose;

};

struct FAnimNode_CustomProperty : public FAnimNode_Base
{
    TArray<FName> SourcePropertyNames;
    TArray<FName> DestPropertyNames;
    class UObject* TargetInstance;

};

struct FAnimNode_Inertialization : public FAnimNode_Base
{
    FPoseLink Source;

};

struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty
{
    TArray<FPoseLink> InputPoses;
    TArray<FName> InputPoseNames;
    TSubclassOf<class UAnimInstance> InstanceClass;
    FName Tag;
    uint8 bReceiveNotifiesFromLinkedInstances;
    uint8 bPropagateNotifiesToLinkedInstances;

};

struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph
{
    TSubclassOf<class UAnimLayerInterface> Interface;
    FName Layer;

};

struct FAnimNode_LinkedInputPose : public FAnimNode_Base
{
    FName Name;
    FName Graph;
    FPoseLink InputPose;

};

struct FAnimNode_Root : public FAnimNode_Base
{
    FPoseLink Result;
    FName Name;
    FName Group;

};

struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
    FPoseLink pose;
    FName CachePoseName;

};

struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
    class UAnimSequenceBase* Sequence;
    float PlayRateBasis;
    float PlayRate;
    FInputScaleBiasClamp PlayRateScaleBiasClamp;
    float StartPosition;
    bool bLoopAnimation;

};

struct FAnimNode_SingleNode : public FAnimNode_Base
{
    FPoseLink SourcePose;

};

struct FAnimNode_StateMachine : public FAnimNode_Base
{
    int32 StateMachineIndexInClass;
    int32 MaxTransitionsPerFrame;
    bool bSkipFirstUpdateTransition;
    bool bReinitializeOnBecomingRelevant;

};

struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
    int32 FramesToCachePose;
    TEnumAsByte<EEvaluatorDataSource::Type> DataSource;
    TEnumAsByte<EEvaluatorMode::Type> EvaluatorMode;

};

struct FAnimNode_TransitionResult : public FAnimNode_Base
{
    bool bCanEnterTransition;

};

struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
    FPoseLink LinkToCachingNode;
    FName CachePoseName;

};

struct FAnimNotifyArray
{
    TArray<FAnimNotifyEventReference> Notifies;

};

struct FAnimNotifyEvent : public FAnimLinkableElement
{
    float DisplayTime;
    float TriggerTimeOffset;
    float EndTriggerTimeOffset;
    float TriggerWeightThreshold;
    FName NotifyName;
    class UAnimNotify* Notify;
    class UAnimNotifyState* NotifyStateClass;
    float Duration;
    FAnimLinkableElement EndLink;
    bool bConvertedFromBranchingPoint;
    TEnumAsByte<EMontageNotifyTickType::Type> MontageTickType;
    float NotifyTriggerChance;
    TEnumAsByte<ENotifyFilterType::Type> NotifyFilterType;
    int32 NotifyFilterLOD;
    bool bTriggerOnDedicatedServer;
    bool bTriggerOnFollower;
    int32 TrackIndex;

};

struct FAnimNotifyEventReference
{
    class UObject* NotifySource;

};

struct FAnimNotifyQueue
{
    TArray<FAnimNotifyEventReference> AnimNotifies;
    TMap<class FName, class FAnimNotifyArray> UnfilteredMontageAnimNotifies;

};

struct FAnimNotifyTrack
{
    FName TrackName;
    FLinearColor TrackColor;

};

struct FAnimParentNodeAssetOverride
{
    class UAnimationAsset* NewAsset;
    FGuid ParentNodeGuid;

};

struct FAnimSegment
{
    class UAnimSequenceBase* AnimReference;
    float StartPos;
    float AnimStartTime;
    float AnimEndTime;
    float AnimPlayRate;
    int32 LoopingCount;

};

struct FAnimSequenceTrackContainer
{
    TArray<FRawAnimSequenceTrack> AnimationTracks;
    TArray<FName> TrackNames;

};

struct FAnimSetMeshLinkup
{
    TArray<int32> BoneToTrackTable;

};

struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
};

struct FAnimSlotDesc
{
    FName slotName;
    int32 NumChannels;

};

struct FAnimSlotGroup
{
    FName GroupName;
    TArray<FName> SlotNames;

};

struct FAnimSlotInfo
{
    FName slotName;
    TArray<float> ChannelWeights;

};

struct FAnimSyncMarker
{
    FName MarkerName;
    float Time;

};

struct FAnimTickRecord
{
    class UAnimationAsset* SourceAsset;

};

struct FAnimTrack
{
    TArray<FAnimSegment> AnimSegments;

};

struct FAnimUpdateRateParameters
{
    EUpdateRateShiftBucket ShiftBucket;
    uint8 bInterpolateSkippedFrames;
    uint8 bShouldUseLodMap;
    uint8 bShouldUseMinLod;
    uint8 bSkipUpdate;
    uint8 bSkipEvaluation;
    int32 UpdateRate;
    int32 EvaluationRate;
    float TickedPoseOffestTime;
    float AdditionalTime;
    int32 BaseNonRenderedUpdateRate;
    int32 MaxEvalRateForInterpolation;
    TArray<float> BaseVisibleDistanceFactorThesholds;
    TMap<int32, int32> LODToFrameSkipMap;
    int32 SkippedUpdateFrames;
    int32 SkippedEvalFrames;

};

struct FAnimationActiveTransitionEntry
{
    class UBlendProfile* BlendProfile;

};

struct FAnimationErrorStats
{
};

struct FAnimationFrameSnapshot
{
};

struct FAnimationGroupReference
{
    FName GroupName;
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    EAnimSyncGroupScope GroupScope;

};

struct FAnimationPotentialTransition
{
};

struct FAnimationRecordingSettings
{
    bool bRecordInWorldSpace;
    bool bRemoveRootAnimation;
    bool bAutoSaveAsset;
    float SampleRate;
    float Length;
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    bool bRecordTransforms;
    bool bRecordCurves;

};

struct FAnimationState : public FAnimationStateBase
{
    TArray<FAnimationTransitionRule> Transitions;
    int32 StateRootNodeIndex;
    int32 StartNotify;
    int32 EndNotify;
    int32 FullyBlendedNotify;

};

struct FAnimationStateBase
{
    FName StateName;

};

struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
    int32 previousState;
    int32 NextState;
    float CrossfadeDuration;
    int32 StartNotify;
    int32 EndNotify;
    int32 InterruptNotify;
    EAlphaBlendOption BlendMode;
    class UCurveFloat* CustomCurve;
    class UBlendProfile* BlendProfile;
    TEnumAsByte<ETransitionLogicType::Type> LogicType;

};

struct FAnimationTransitionRule
{
    FName RuleToExecute;
    bool TransitionReturnVal;
    int32 TransitionIndex;

};

struct FAssetEditorOrbitCameraPosition
{
    bool bIsSet;
    FVector CamOrbitPoint;
    FVector CamOrbitZoom;
    FRotator CamOrbitRotation;

};

struct FAssetImportInfo
{
};

struct FAssetManagerRedirect
{
    FString Old;
    FString New;

};

struct FAssetManagerSearchRules
{
    TArray<FString> AssetScanPaths;
    TArray<FString> IncludePatterns;
    TArray<FString> ExcludePatterns;
    UClass* AssetBaseClass;
    bool bHasBlueprintClasses;
    bool bForceSynchronousScan;
    bool bSkipVirtualPathExpansion;
    bool bSkipManagerIncludeCheck;

};

struct FAssetMapping
{
    class UAnimationAsset* SourceAsset;
    class UAnimationAsset* TargetAsset;

};

struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData
{
};

struct FAtmospherePrecomputeParameters
{
    float DensityHeight;
    float DecayHeight;
    int32 MaxScatteringOrder;
    int32 TransmittanceTexWidth;
    int32 TransmittanceTexHeight;
    int32 IrradianceTexWidth;
    int32 IrradianceTexHeight;
    int32 InscatterAltitudeSampleNum;
    int32 InscatterMuNum;
    int32 InscatterMuSNum;
    int32 InscatterNuNum;

};

struct FAttenuationSubmixSendSettings
{
    class USoundSubmixBase* Submix;
    ESubmixSendMethod SubmixSendMethod;
    float SubmixSendLevelMin;
    float SubmixSendLevelMax;
    float SubmixSendDistanceMin;
    float SubmixSendDistanceMax;
    float ManualSubmixSendLevel;
    FRuntimeFloatCurve CustomSubmixSendCurve;

};

struct FAudioComponentParam
{
    FName ParamName;
    float FloatParam;
    bool BoolParam;
    int32 IntParam;
    class USoundWave* SoundWaveParam;

};

struct FAudioEQEffect : public FAudioEffectParameters
{
    float FrequencyCenter0;
    float Gain0;
    float Bandwidth0;
    float FrequencyCenter1;
    float Gain1;
    float Bandwidth1;
    float FrequencyCenter2;
    float Gain2;
    float Bandwidth2;
    float FrequencyCenter3;
    float Gain3;
    float Bandwidth3;

};

struct FAudioEffectParameters
{
};

struct FAudioQualitySettings
{
    FText DisplayName;
    int32 MaxChannels;

};

struct FAudioReverbEffect : public FAudioEffectParameters
{
};

struct FAudioVolumeSubmixOverrideSettings
{
    class USoundSubmix* Submix;
    TArray<class USoundEffectSubmixPreset*> SubmixEffectChain;
    float CrossfadeTime;

};

struct FAudioVolumeSubmixSendSettings
{
    EAudioVolumeLocationState ListenerLocationState;
    EAudioVolumeLocationState SourceLocationState;
    TArray<FSoundSubmixSendInfo> SubmixSends;

};

struct FAutoCompleteNode
{
    int32 IndexChar;
    TArray<int32> AutoCompleteListIndices;

};

struct FBPComponentClassOverride
{
    FName ComponentName;
    UClass* ComponentClass;

};

struct FBPEditorBookmarkNode
{
    FGuid NodeGuid;
    FGuid ParentGuid;
    FText DisplayName;

};

struct FBPInterfaceDescription
{
    TSubclassOf<class UInterface> Interface;
    TArray<class UEdGraph*> Graphs;

};

struct FBPVariableDescription
{
    FName VarName;
    FGuid VarGuid;
    FEdGraphPinType VarType;
    FString FriendlyName;
    FText Category;
    uint64 PropertyFlags;
    FName RepNotifyFunc;
    TEnumAsByte<ELifetimeCondition> ReplicationCondition;
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    FString DefaultValue;

};

struct FBPVariableMetaDataEntry
{
    FName DataKey;
    FString DataValue;

};

struct FBakedAnimationState
{
    FName StateName;
    TArray<FBakedStateExitTransition> Transitions;
    int32 StateRootNodeIndex;
    int32 StartNotify;
    int32 EndNotify;
    int32 FullyBlendedNotify;
    bool bIsAConduit;
    int32 EntryRuleNodeIndex;
    TArray<int32> PlayerNodeIndices;
    TArray<int32> LayerNodeIndices;
    bool bAlwaysResetOnEntry;

};

struct FBakedAnimationStateMachine
{
    FName MachineName;
    int32 InitialState;
    TArray<FBakedAnimationState> States;
    TArray<FAnimationTransitionBetweenStates> Transitions;

};

struct FBakedCustomAttributePerBoneData
{
    int32 BoneTreeIndex;
    TArray<FBakedStringCustomAttribute> StringAttributes;
    TArray<FBakedIntegerCustomAttribute> IntAttributes;
    TArray<FBakedFloatCustomAttribute> FloatAttributes;

};

struct FBakedFloatCustomAttribute
{
    FName AttributeName;
    FSimpleCurve FloatCurve;

};

struct FBakedIntegerCustomAttribute
{
    FName AttributeName;
    FIntegralCurve IntCurve;

};

struct FBakedStateExitTransition
{
    int32 CanTakeDelegateIndex;
    int32 CustomResultNodeIndex;
    int32 TransitionIndex;
    bool bDesiredTransitionReturnValue;
    bool bAutomaticRemainingTimeRule;
    TArray<int32> PoseEvaluatorLinks;

};

struct FBakedStringCustomAttribute
{
    FName AttributeName;
    FStringCurve StringCurve;

};

struct FBandwidthTestGenerator
{
    TArray<FBandwidthTestItem> ReplicatedBuffers;

};

struct FBandwidthTestItem
{
    TArray<uint8> Kilobyte;

};

struct FBaseAttenuationSettings
{
    EAttenuationDistanceModel DistanceAlgorithm;
    TEnumAsByte<EAttenuationShape::Type> AttenuationShape;
    float dBAttenuationAtMax;
    ENaturalSoundFalloffMode FalloffMode;
    FVector AttenuationShapeExtents;
    float ConeOffset;
    float FalloffDistance;
    FRuntimeFloatCurve CustomAttenuationCurve;

};

struct FBasedMovementInfo
{
    class UPrimitiveComponent* MovementBase;
    FName BoneName;
    FVector_NetQuantize100 Location;
    FRotator Rotation;
    bool bServerHasBaseComponent;
    bool bRelativeRotation;
    bool bServerHasVelocity;

};

struct FBasedPosition
{
    class AActor* Base;
    FVector Position;
    FVector CachedBaseLocation;
    FRotator CachedBaseRotation;
    FVector CachedTransPosition;

};

struct FBatchedLine
{
    FVector Start;
    FVector End;
    FLinearColor Color;
    float Thickness;
    float RemainingLifeTime;
    uint8 DepthPriority;

};

struct FBatchedPoint
{
    FVector Position;
    FLinearColor Color;
    float PointSize;
    float RemainingLifeTime;
    uint8 DepthPriority;

};

struct FBeamModifierOptions
{
    uint8 bModify;
    uint8 bScale;
    uint8 bLock;

};

struct FBeamTargetData
{
    FName TargetName;
    float TargetPercentage;

};

struct FBlendFilter
{
};

struct FBlendParameter
{
    FString DisplayName;
    float Min;
    float Max;
    int32 GridNum;

};

struct FBlendProfileBoneEntry
{
    FBoneReference BoneReference;
    float BlendScale;

};

struct FBlendSample
{
    class UAnimSequence* Animation;
    FVector SampleValue;
    float RateScale;

};

struct FBlendSampleData
{
    int32 SampleDataIndex;
    class UAnimSequence* Animation;
    float TotalWeight;
    float Time;
    float PreviousTime;
    float SamplePlayRate;

};

struct FBlueprintComponentChangedPropertyInfo
{
    FName PropertyName;
    int32 ArrayIndex;
    class UStruct* PropertyScope;

};

struct FBlueprintComponentDelegateBinding
{
    FName ComponentPropertyName;
    FName DelegatePropertyName;
    FName FunctionNameToBind;

};

struct FBlueprintCookedComponentInstancingData
{
    TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;
    bool bHasValidCookedData;

};

struct FBlueprintDebugData
{
};

struct FBlueprintEditorPromotionSettings
{
    FFilePath FirstMeshPath;
    FFilePath SecondMeshPath;
    FFilePath DefaultParticleAsset;

};

struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
    FName InputActionName;
    TEnumAsByte<EInputEvent> InputKeyEvent;
    FName FunctionNameToBind;

};

struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
    FName InputAxisName;
    FName FunctionNameToBind;

};

struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
    FKey AxisKey;
    FName FunctionNameToBind;

};

struct FBlueprintInputDelegateBinding
{
    uint8 bConsumeInput;
    uint8 bExecuteWhenPaused;
    uint8 bOverrideParentBinding;

};

struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
    FInputChord InputChord;
    TEnumAsByte<EInputEvent> InputKeyEvent;
    FName FunctionNameToBind;

};

struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
    TEnumAsByte<EInputEvent> InputKeyEvent;
    FName FunctionNameToBind;

};

struct FBlueprintMacroCosmeticInfo
{
};

struct FBodyInstance : public FBodyInstanceCore
{
    TEnumAsByte<ECollisionChannel> ObjectType;
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    ESleepFamily SleepFamily;
    TEnumAsByte<EDOFMode::Type> DOFMode;
    uint8 bUseCCD;
    uint8 bIgnoreAnalyticCollisions;
    uint8 bNotifyRigidBodyCollision;
    uint8 bLockTranslation;
    uint8 bLockRotation;
    uint8 bLockXTranslation;
    uint8 bLockYTranslation;
    uint8 bLockZTranslation;
    uint8 bLockXRotation;
    uint8 bLockYRotation;
    uint8 bLockZRotation;
    uint8 bOverrideMaxAngularVelocity;
    uint8 bOverrideMaxDepenetrationVelocity;
    uint8 bOverrideWalkableSlopeOnInstance;
    uint8 bInterpolateWhenSubStepping;
    FName CollisionProfileName;
    uint8 PositionSolverIterationCount;
    uint8 VelocitySolverIterationCount;
    FCollisionResponse CollisionResponses;
    float MaxDepenetrationVelocity;
    float MassInKgOverride;
    float LinearDamping;
    float AngularDamping;
    FVector CustomDOFPlaneNormal;
    FVector COMNudge;
    float MassScale;
    FVector InertiaTensorScale;
    FWalkableSlopeOverride WalkableSlopeOverride;
    class UPhysicalMaterial* PhysMaterialOverride;
    float MaxAngularVelocity;
    float CustomSleepThresholdMultiplier;
    float StabilizationThresholdMultiplier;
    float PhysicsBlendWeight;

};

struct FBoneFilter
{
    bool bExcludeSelf;
    FName BoneName;

};

struct FBoneMirrorExport
{
    FName BoneName;
    FName SourceBoneName;
    TEnumAsByte<EAxis::Type> BoneFlipAxis;

};

struct FBoneMirrorInfo
{
    int32 SourceIndex;
    TEnumAsByte<EAxis::Type> BoneFlipAxis;

};

struct FBoneNode
{
    FName Name;
    int32 ParentIndex;
    TEnumAsByte<EBoneTranslationRetargetingMode::Type> TranslationRetargetingMode;

};

struct FBoneReductionSetting
{
    TArray<FName> BonesToRemove;

};

struct FBoneReference
{
    FName BoneName;

};

struct FBookmark2DJumpToSettings
{
};

struct FBookmarkBaseJumpToSettings
{
};

struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
{
};

struct FBoolTrackKey
{
    float Time;
    uint8 Value;

};

struct FBranchFilter
{
    FName BoneName;
    int32 BlendDepth;

};

struct FBranchingPoint : public FAnimLinkableElement
{
    FName EventName;
    float DisplayTime;
    float TriggerTimeOffset;

};

struct FBranchingPointMarker
{
    int32 NotifyIndex;
    float TriggerTime;
    TEnumAsByte<EAnimNotifyEventType::Type> NotifyEventType;

};

struct FBranchingPointNotifyPayload
{
};

struct FBroadphaseSettings
{
    bool bUseMBPOnClient;
    bool bUseMBPOnServer;
    bool bUseMBPOuterBounds;
    FBox MBPBounds;
    FBox MBPOuterBounds;
    uint32 MBPNumSubdivs;

};

struct FBuildPromotionImportWorkflowSettings
{
    FEditorImportWorkflowDefinition Diffuse;
    FEditorImportWorkflowDefinition Normal;
    FEditorImportWorkflowDefinition StaticMesh;
    FEditorImportWorkflowDefinition ReimportStaticMesh;
    FEditorImportWorkflowDefinition BlendShapeMesh;
    FEditorImportWorkflowDefinition MorphMesh;
    FEditorImportWorkflowDefinition SkeletalMesh;
    FEditorImportWorkflowDefinition Animation;
    FEditorImportWorkflowDefinition Sound;
    FEditorImportWorkflowDefinition SurroundSound;
    TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport;

};

struct FBuildPromotionNewProjectSettings
{
    FDirectoryPath NewProjectFolderOverride;
    FString NewProjectNameOverride;

};

struct FBuildPromotionOpenAssetSettings
{
    FFilePath BlueprintAsset;
    FFilePath MaterialAsset;
    FFilePath ParticleSystemAsset;
    FFilePath SkeletalMeshAsset;
    FFilePath StaticMeshAsset;
    FFilePath TextureAsset;

};

struct FBuildPromotionTestSettings
{
    FFilePath DefaultStaticMeshAsset;
    FBuildPromotionImportWorkflowSettings ImportWorkflow;
    FBuildPromotionOpenAssetSettings OpenAssets;
    FBuildPromotionNewProjectSettings NewProjectSettings;
    FFilePath SourceControlMaterial;

};

struct FBuilderPoly
{
    TArray<int32> VertexIndices;
    int32 Direction;
    FName ItemName;
    int32 PolyFlags;

};

struct FCachedAnimAssetPlayerData
{
    FName StateMachineName;
    FName StateName;

};

struct FCachedAnimRelevancyData
{
    FName StateMachineName;
    FName StateName;

};

struct FCachedAnimStateArray
{
    TArray<FCachedAnimStateData> States;

};

struct FCachedAnimStateData
{
    FName StateMachineName;
    FName StateName;

};

struct FCachedAnimTransitionData
{
    FName StateMachineName;
    FName FromStateName;
    FName ToStateName;

};

struct FCachedKeyToActionInfo
{
    class UPlayerInput* PlayerInput;

};

struct FCachedPoseIndices
{
    TArray<int32> OrderedSavedPoseNodeIndices;

};

struct FCameraCacheEntry
{
    float Timestamp;
    FMinimalViewInfo POV;

};

struct FCameraCutInfo
{
    FVector Location;
    float Timestamp;

};

struct FCameraExposureSettings
{
    TEnumAsByte<EAutoExposureMethod> Method;
    float LowPercent;
    float HighPercent;
    float MinBrightness;
    float MaxBrightness;
    float SpeedUp;
    float SpeedDown;
    float Bias;
    class UCurveFloat* BiasCurve;
    class UTexture* MeterMask;
    float HistogramLogMin;
    float HistogramLogMax;
    float CalibrationConstant;
    uint8 ApplyPhysicalCameraExposure;

};

struct FCameraPreviewInfo
{
    TSubclassOf<class APawn> PawnClass;
    class UAnimSequence* AnimSeq;
    FVector Location;
    FRotator Rotation;
    class APawn* PawnInst;

};

struct FCameraShakeDuration
{
    float Duration;
    ECameraShakeDurationType Type;

};

struct FCameraShakeInfo
{
    FCameraShakeDuration Duration;
    float BlendIn;
    float BlendOut;

};

struct FCameraShakeScrubParams
{
    float AbsoluteTime;
    float ShakeScale;
    float DynamicScale;
    float BlendingWeight;
    FMinimalViewInfo POV;

};

struct FCameraShakeStartParams
{
    bool bIsRestarting;

};

struct FCameraShakeStopParams
{
    bool bImmediately;

};

struct FCameraShakeUpdateParams
{
    float DeltaTime;
    float ShakeScale;
    float DynamicScale;
    float BlendingWeight;
    FMinimalViewInfo POV;

};

struct FCameraShakeUpdateResult
{
};

struct FCanvasIcon
{
    class UTexture* Texture;
    float U;
    float V;
    float UL;
    float VL;

};

struct FCanvasUVTri
{
    FVector2D V0_Pos;
    FVector2D V0_UV;
    FLinearColor V0_Color;
    FVector2D V1_Pos;
    FVector2D V1_UV;
    FLinearColor V1_Color;
    FVector2D V2_Pos;
    FVector2D V2_UV;
    FLinearColor V2_Color;

};

struct FChannelDefinition
{
    FName ChannelName;
    FName ClassName;
    UClass* ChannelClass;
    int32 StaticChannelIndex;
    bool bTickOnCreate;
    bool bServerOpen;
    bool bClientOpen;
    bool bInitialServer;
    bool bInitialClient;

};

struct FChaosPhysicsSettings
{
    EChaosThreadingMode DefaultThreadingModel;
    EChaosSolverTickMode DedicatedThreadTickMode;
    EChaosBufferMode DedicatedThreadBufferMode;

};

struct FCharacterMoveResponsePackedBits : public FCharacterNetworkSerializationPackedBits
{
};

struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
};

struct FCharacterNetworkSerializationPackedBits
{
};

struct FCharacterServerMovePackedBits : public FCharacterNetworkSerializationPackedBits
{
};

struct FChildActorAttachedActorInfo
{
    TWeakObjectPtr<class AActor> Actor;
    FName SocketName;
    FTransform RelativeTransform;

};

struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
{
    TSubclassOf<class AActor> ChildActorClass;
    FName ChildActorName;
    TArray<FChildActorAttachedActorInfo> AttachedActors;

};

struct FClassRedirect
{
    FName ObjectName;
    FName OldClassName;
    FName NewClassName;
    FName OldSubobjName;
    FName NewSubobjName;
    FName NewClassClass;
    FName NewClassPackage;
    bool InstanceOnly;

};

struct FClientReceiveData
{
    class APlayerController* LocalPC;
    FName MessageType;
    int32 MessageIndex;
    FString MessageString;
    class APlayerState* RelatedPlayerState_1;
    class APlayerState* RelatedPlayerState_2;
    class UObject* OptionalObject;

};

struct FClothPhysicsProperties_Legacy
{
    float VerticalResistance;
    float HorizontalResistance;
    float BendResistance;
    float ShearResistance;
    float Friction;
    float Damping;
    float TetherStiffness;
    float TetherLimit;
    float Drag;
    float StiffnessFrequency;
    float GravityScale;
    float MassScale;
    float InertiaBlend;
    float SelfCollisionThickness;
    float SelfCollisionSquashScale;
    float SelfCollisionStiffness;
    float SolverFrequency;
    float FiberCompression;
    float FiberExpansion;
    float FiberResistance;

};

struct FClothingAssetData_Legacy
{
    FName AssetName;
    FString ApexFileName;
    bool bClothPropertiesChanged;
    FClothPhysicsProperties_Legacy PhysicsProperties;

};

struct FClusterNode
{
    FVector BoundMin;
    int32 FirstChild;
    FVector BoundMax;
    int32 LastChild;
    int32 FirstInstance;
    int32 LastInstance;
    FVector MinInstanceScale;
    FVector MaxInstanceScale;

};

struct FClusterNode_DEPRECATED
{
    FVector BoundMin;
    int32 FirstChild;
    FVector BoundMax;
    int32 LastChild;
    int32 FirstInstance;
    int32 LastInstance;

};

struct FCollectionParameterBase
{
    FName ParameterName;
    FGuid ID;

};

struct FCollectionReference
{
    FName CollectionName;

};

struct FCollectionScalarParameter : public FCollectionParameterBase
{
    float DefaultValue;

};

struct FCollectionVectorParameter : public FCollectionParameterBase
{
    FLinearColor DefaultValue;

};

struct FCollisionImpactData
{
    TArray<FRigidBodyContactInfo> ContactInfos;
    FVector TotalNormalImpulse;
    FVector TotalFrictionImpulse;
    bool bIsVelocityDeltaUnderThreshold;

};

struct FCollisionProfileName
{
    FName Name;

};

struct FCollisionResponse
{
    FCollisionResponseContainer ResponseToChannels;
    TArray<FResponseChannel> ResponseArray;

};

struct FCollisionResponseContainer
{
    TEnumAsByte<ECollisionResponse> WorldStatic;
    TEnumAsByte<ECollisionResponse> WorldDynamic;
    TEnumAsByte<ECollisionResponse> Pawn;
    TEnumAsByte<ECollisionResponse> Visibility;
    TEnumAsByte<ECollisionResponse> Camera;
    TEnumAsByte<ECollisionResponse> PhysicsBody;
    TEnumAsByte<ECollisionResponse> Vehicle;
    TEnumAsByte<ECollisionResponse> Destructible;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel1;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel2;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel3;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel4;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel5;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel6;
    TEnumAsByte<ECollisionResponse> GameTraceChannel1;
    TEnumAsByte<ECollisionResponse> GameTraceChannel2;
    TEnumAsByte<ECollisionResponse> GameTraceChannel3;
    TEnumAsByte<ECollisionResponse> GameTraceChannel4;
    TEnumAsByte<ECollisionResponse> GameTraceChannel5;
    TEnumAsByte<ECollisionResponse> GameTraceChannel6;
    TEnumAsByte<ECollisionResponse> GameTraceChannel7;
    TEnumAsByte<ECollisionResponse> GameTraceChannel8;
    TEnumAsByte<ECollisionResponse> GameTraceChannel9;
    TEnumAsByte<ECollisionResponse> GameTraceChannel10;
    TEnumAsByte<ECollisionResponse> GameTraceChannel11;
    TEnumAsByte<ECollisionResponse> GameTraceChannel12;
    TEnumAsByte<ECollisionResponse> GameTraceChannel13;
    TEnumAsByte<ECollisionResponse> GameTraceChannel14;
    TEnumAsByte<ECollisionResponse> GameTraceChannel15;
    TEnumAsByte<ECollisionResponse> GameTraceChannel16;
    TEnumAsByte<ECollisionResponse> GameTraceChannel17;
    TEnumAsByte<ECollisionResponse> GameTraceChannel18;

};

struct FCollisionResponseTemplate
{
    FName Name;
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    bool bCanModify;
    FName ObjectTypeName;
    TArray<FResponseChannel> CustomResponses;

};

struct FColorGradePerRangeSettings
{
    FVector4 Saturation;
    FVector4 Contrast;
    FVector4 Gamma;
    FVector4 Gain;
    FVector4 Offset;

};

struct FColorGradingSettings
{
    FColorGradePerRangeSettings Global;
    FColorGradePerRangeSettings Shadows;
    FColorGradePerRangeSettings Midtones;
    FColorGradePerRangeSettings Highlights;
    float ShadowsMax;
    float HighlightsMin;

};

struct FColorMaterialInput : public FMaterialInput
{
};

struct FCompilerNativizationOptions
{
    FName PlatformName;
    bool ServerOnlyPlatform;
    bool ClientOnlyPlatform;
    bool bExcludeMonolithicHeaders;
    TArray<FName> ExcludedModules;
    TSet<FSoftObjectPath> ExcludedAssets;
    TArray<FString> ExcludedFolderPaths;

};

struct FComponentKey
{
    UClass* OwnerClass;
    FName SCSVariableName;
    FGuid AssociatedGuid;

};

struct FComponentOverrideRecord
{
    UClass* ComponentClass;
    class UActorComponent* ComponentTemplate;
    FComponentKey ComponentKey;
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData;

};

struct FComponentReference
{
    class AActor* OtherActor;
    FName ComponentProperty;
    FString PathToComponent;

};

struct FComponentSpacePose
{
    TArray<FTransform> Transforms;
    TArray<FName> Names;

};

struct FComponentSpacePoseLink : public FPoseLinkBase
{
};

struct FComponentSync
{
    FName Name;
    ESyncOption SyncOption;

};

struct FCompositeSection : public FAnimLinkableElement
{
    FName SectionName;
    float StartTime;
    FName NextSectionName;
    TArray<class UAnimMetaData*> MetaData;

};

struct FCompressedRichCurve
{
};

struct FCompressedTrack
{
    TArray<uint8> ByteStream;
    TArray<float> Times;
    float Mins;
    float Ranges;

};

struct FConeConstraint : public FConstraintBaseParams
{
    float Swing1LimitDegrees;
    float Swing2LimitDegrees;
    TEnumAsByte<EAngularConstraintMotion> Swing1Motion;
    TEnumAsByte<EAngularConstraintMotion> Swing2Motion;

};

struct FConstrainComponentPropName
{
    FName ComponentName;

};

struct FConstraintBaseParams
{
    float Stiffness;
    float Damping;
    float Restitution;
    float ContactDistance;
    uint8 bSoftConstraint;

};

struct FConstraintDrive
{
    float Stiffness;
    float Damping;
    float MaxForce;
    uint8 bEnablePositionDrive;
    uint8 bEnableVelocityDrive;

};

struct FConstraintInstance : public FConstraintInstanceBase
{
    FName JointName;
    FName ConstraintBone1;
    FName ConstraintBone2;
    FVector Pos1;
    FVector PriAxis1;
    FVector SecAxis1;
    FVector Pos2;
    FVector PriAxis2;
    FVector SecAxis2;
    FRotator AngularRotationOffset;
    uint8 bScaleLinearLimits;
    FConstraintProfileProperties ProfileInstance;

};

struct FConstraintInstanceBase
{
};

struct FConstraintProfileProperties
{
    float ProjectionLinearTolerance;
    float ProjectionAngularTolerance;
    float ProjectionLinearAlpha;
    float ProjectionAngularAlpha;
    float LinearBreakThreshold;
    float LinearPlasticityThreshold;
    float AngularBreakThreshold;
    float AngularPlasticityThreshold;
    FLinearConstraint LinearLimit;
    FConeConstraint ConeLimit;
    FTwistConstraint TwistLimit;
    FLinearDriveConstraint LinearDrive;
    FAngularDriveConstraint AngularDrive;
    uint8 bDisableCollision;
    uint8 bParentDominates;
    uint8 bEnableProjection;
    uint8 bEnableSoftProjection;
    uint8 bAngularBreakable;
    uint8 bAngularPlasticity;
    uint8 bLinearBreakable;
    uint8 bLinearPlasticity;

};

struct FConvolutionBloomSettings
{
    class UTexture2D* Texture;
    float Size;
    FVector2D CenterUV;
    float PreFilterMin;
    float PreFilterMax;
    float PreFilterMult;
    float BufferScale;

};

struct FCullDistanceSizePair
{
    float Size;
    float CullDistance;

};

struct FCurveAtlasColorAdjustments
{
    uint8 bChromaKeyTexture;
    float AdjustBrightness;
    float AdjustBrightnessCurve;
    float AdjustVibrance;
    float AdjustSaturation;
    float AdjustRGBCurve;
    float AdjustHue;
    float AdjustMinAlpha;
    float AdjustMaxAlpha;

};

struct FCurveEdEntry
{
    class UObject* CurveObject;
    FColor CurveColor;
    FString CurveName;
    int32 bHideCurve;
    int32 bColorCurve;
    int32 bFloatingPointColorCurve;
    int32 bClamp;
    float ClampLow;
    float ClampHigh;

};

struct FCurveEdTab
{
    FString TabName;
    TArray<FCurveEdEntry> Curves;
    float ViewStartInput;
    float ViewEndInput;
    float ViewStartOutput;
    float ViewEndOutput;

};

struct FCurveMetaData
{
};

struct FCurveTableRowHandle
{
    class UCurveTable* CurveTable;
    FName RowName;

};

struct FCurveTrack
{
    FName CurveName;
    TArray<float> CurveWeights;

};

struct FCustomAttribute
{
    FName Name;
    int32 VariantType;
    TArray<float> Times;

};

struct FCustomAttributePerBoneData
{
    int32 BoneTreeIndex;
    TArray<FCustomAttribute> Attributes;

};

struct FCustomAttributeSetting
{
    FString Name;
    FString Meaning;

};

struct FCustomChannelSetup
{
    TEnumAsByte<ECollisionChannel> Channel;
    TEnumAsByte<ECollisionResponse> DefaultResponse;
    bool bTraceType;
    bool bStaticObject;
    FName Name;

};

struct FCustomDefine
{
    FString DefineName;
    FString DefineValue;

};

struct FCustomInput
{
    FName InputName;
    FExpressionInput Input;

};

struct FCustomOutput
{
    FName OutputName;
    TEnumAsByte<ECustomMaterialOutputType> OutputType;

};

struct FCustomPrimitiveData
{
    TArray<float> Data;

};

struct FCustomProfile
{
    FName Name;
    TArray<FResponseChannel> CustomResponses;

};

struct FDamageEvent
{
    TSubclassOf<class UDamageType> DamageTypeClass;

};

struct FDataDrivenConsoleVariable
{
    FDataDrivenCVarType Type;
    FString Name;
    FString ToolTip;
    float DefaultValueFloat;
    int32 DefaultValueInt;
    bool DefaultValueBool;

};

struct FDataTableCategoryHandle
{
    class UDataTable* DataTable;
    FName ColumnName;
    FName RowContents;

};

struct FDataTableRowHandle
{
    class UDataTable* DataTable;
    FName RowName;

};

struct FDebugCameraControllerSettingsViewModeIndex
{
    TEnumAsByte<EViewModeIndex> ViewModeIndex;

};

struct FDebugDisplayProperty
{
    class UObject* obj;
    UClass* WithinClass;

};

struct FDebugFloatHistory
{
    TArray<float> Samples;
    float MaxSamples;
    float MinValue;
    float MaxValue;
    bool bAutoAdjustMinMax;

};

struct FDebugTextInfo
{
    class AActor* SrcActor;
    FVector SrcActorOffset;
    FVector SrcActorDesiredOffset;
    FString DebugText;
    float TimeRemaining;
    float Duration;
    FColor TextColor;
    uint8 bAbsoluteLocation;
    uint8 bKeepAttachedToActor;
    uint8 bDrawShadow;
    FVector OrigActorLocation;
    class UFont* Font;
    float FontScale;

};

struct FDebuggingInfoForSingleFunction
{
};

struct FDefaultAudioBusSettings
{
    FSoftObjectPath AudioBus;

};

struct FDefault__UserDefinedStruct
{
};

struct FDelegateArray
{
    TArray<FDelegateArrayDelegates> Delegates;

};

struct FDepthFieldGlowInfo
{
    uint8 bEnableGlow;
    FLinearColor GlowColor;
    FVector2D GlowOuterRadius;
    FVector2D GlowInnerRadius;

};

struct FDialogueContext
{
    class UDialogueVoice* Speaker;
    TArray<class UDialogueVoice*> Targets;

};

struct FDialogueContextMapping
{
    FDialogueContext Context;
    class USoundWave* SoundWave;
    FString LocalizationKeyFormat;
    class UDialogueSoundWaveProxy* Proxy;

};

struct FDialogueWaveParameter
{
    class UDialogueWave* DialogueWave;
    FDialogueContext Context;

};

struct FDirectorTrackCut
{
    float Time;
    float TransitionTime;
    FName TargetCamGroup;
    int32 ShotNumber;

};

struct FDirectoryPath
{
    FString Path;

};

struct FDistanceDatum
{
    float FadeInDistanceStart;
    float FadeInDistanceEnd;
    float FadeOutDistanceStart;
    float FadeOutDistanceEnd;
    float Volume;

};

struct FDistributionLookupTable
{
    float TimeScale;
    float TimeBias;
    TArray<float> Values;
    uint8 Op;
    uint8 EntryCount;
    uint8 EntryStride;
    uint8 SubEntryStride;
    uint8 LockFlag;

};

struct FDrawToRenderTargetContext
{
    class UTextureRenderTarget2D* RenderTarget;

};

struct FDropNoteInfo
{
    FVector Location;
    FRotator Rotation;
    FString Comment;

};

struct FDummySpacerCameraTypes
{
};

struct FDynamicTextureInstance : public FStreamableTextureInstance
{
    class UTexture2D* Texture;
    bool bAttached;
    float OriginalRadius;

};

struct FEdGraphPinReference
{
    TWeakObjectPtr<class UEdGraphNode> OwningNode;
    FGuid PinId;

};

struct FEdGraphPinType
{
    FName PinCategory;
    FName PinSubCategory;
    TWeakObjectPtr<class UObject> PinSubCategoryObject;
    FSimpleMemberReference PinSubCategoryMemberReference;
    FEdGraphTerminalType PinValueType;
    EPinContainerType ContainerType;
    uint8 bIsArray;
    uint8 bIsReference;
    uint8 bIsConst;
    uint8 bIsWeakPointer;
    uint8 bIsUObjectWrapper;

};

struct FEdGraphSchemaAction
{
    FText MenuDescription;
    FText TooltipDescription;
    FText Category;
    FText Keywords;
    int32 Grouping;
    int32 SectionID;
    TArray<FString> MenuDescriptionArray;
    TArray<FString> FullSearchTitlesArray;
    TArray<FString> FullSearchKeywordsArray;
    TArray<FString> FullSearchCategoryArray;
    TArray<FString> LocalizedMenuDescriptionArray;
    TArray<FString> LocalizedFullSearchTitlesArray;
    TArray<FString> LocalizedFullSearchKeywordsArray;
    TArray<FString> LocalizedFullSearchCategoryArray;
    FString SearchText;

};

struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
    class UEdGraphNode* NodeTemplate;

};

struct FEdGraphTerminalType
{
    FName TerminalCategory;
    FName TerminalSubCategory;
    TWeakObjectPtr<class UObject> TerminalSubCategoryObject;
    bool bTerminalIsConst;
    bool bTerminalIsWeakPointer;
    bool bTerminalIsUObjectWrapper;

};

struct FEditedDocumentInfo
{
    FSoftObjectPath EditedObjectPath;
    FVector2D SavedViewOffset;
    float SavedZoomAmount;
    class UObject* EditedObject;

};

struct FEditorElement
{
    int32 Indices;
    float Weights;

};

struct FEditorImportExportTestDefinition
{
    FFilePath ImportFilePath;
    FString ExportFileExtension;
    bool bSkipExport;
    TArray<FImportFactorySettingValues> FactorySettings;

};

struct FEditorImportWorkflowDefinition
{
    FFilePath ImportFilePath;
    TArray<FImportFactorySettingValues> FactorySettings;

};

struct FEditorMapPerformanceTestDefinition
{
    FSoftObjectPath PerformanceTestmap;
    int32 TestTimer;

};

struct FEmitterDynamicParameter
{
    FName ParamName;
    uint8 bUseEmitterTime;
    uint8 bSpawnTimeOnly;
    TEnumAsByte<EEmitterDynamicParameterValue> ValueMethod;
    uint8 bScaleVelocityByParamValue;
    FRawDistributionFloat ParamValue;

};

struct FEndPhysicsTickFunction : public FTickFunction
{
};

struct FEngineShowFlagsSetting
{
    FString ShowFlagName;
    bool Enabled;

};

struct FEquirectProps
{
    FBox2D LeftUVRect;
    FBox2D RightUVRect;
    FVector2D LeftScale;
    FVector2D RightScale;
    FVector2D LeftBias;
    FVector2D RightBias;

};

struct FEventGraphFastCallPair
{
    class UFunction* FunctionToPatch;
    int32 EventGraphCallOffset;

};

struct FEventTrackKey
{
    float Time;
    FName EventName;

};

struct FExponentialHeightFogData
{
    float FogDensity;
    float FogHeightFalloff;
    float FogHeightOffset;

};

struct FExposedValueCopyRecord
{
    int32 CopyIndex;
    EPostCopyOperation PostCopyOperation;

};

struct FExposedValueHandler
{
    FName BoundFunction;
    TArray<FExposedValueCopyRecord> CopyRecords;
    class UFunction* Function;
    TFieldPath<FStructProperty> ValueHandlerNodeProperty;

};

struct FExposureSettings
{
    float FixedEV100;
    bool bFixed;

};

struct FExpressionInput
{
    int32 OutputIndex;
    FName InputName;
    FName ExpressionName;

};

struct FExpressionOutput
{
    FName OutputName;

};

struct FExternalToolDefinition
{
    FString ToolName;
    FFilePath ExecutablePath;
    FString CommandLineOptions;
    FDirectoryPath WorkingDirectory;
    FString ScriptExtension;
    FDirectoryPath ScriptDirectory;

};

struct FFastArraySerializer
{
    int32 ArrayReplicationKey;
    EFastArraySerializerDeltaFlags DeltaFlags;

};

struct FFastArraySerializerItem
{
    int32 ReplicationID;
    int32 ReplicationKey;
    int32 MostRecentArrayReplicationKey;

};

struct FFilePath
{
    FString FilePath;

};

struct FFilmStockSettings
{
    float Slope;
    float Toe;
    float Shoulder;
    float BlackClip;
    float WhiteClip;

};

struct FFindFloorResult
{
    uint8 bBlockingHit;
    uint8 bWalkableFloor;
    uint8 bLineTrace;
    float FloorDist;
    float LineDist;
    FHitResult HitResult;

};

struct FFloatCurve : public FAnimCurveBase
{
    FRichCurve FloatCurve;

};

struct FFloatDistribution
{
    FDistributionLookupTable Table;

};

struct FFloatRK4SpringInterpolator
{
    float StiffnessConstant;
    float DampeningRatio;

};

struct FFloatSpringState
{
};

struct FFontCharacter
{
    int32 StartU;
    int32 StartV;
    int32 USize;
    int32 VSize;
    uint8 TextureIndex;
    int32 VerticalOffset;

};

struct FFontImportOptionsData
{
    FString FontName;
    float Height;
    uint8 bEnableAntialiasing;
    uint8 bEnableBold;
    uint8 bEnableItalic;
    uint8 bEnableUnderline;
    uint8 bAlphaOnly;
    TEnumAsByte<EFontImportCharacterSet> CharacterSet;
    FString Chars;
    FString UnicodeRange;
    FString CharsFilePath;
    FString CharsFileWildcard;
    uint8 bCreatePrintableOnly;
    uint8 bIncludeASCIIRange;
    FLinearColor ForegroundColor;
    uint8 bEnableDropShadow;
    int32 TexturePageWidth;
    int32 TexturePageMaxHeight;
    int32 XPadding;
    int32 YPadding;
    int32 ExtendBoxTop;
    int32 ExtendBoxBottom;
    int32 ExtendBoxRight;
    int32 ExtendBoxLeft;
    uint8 bEnableLegacyMode;
    int32 Kerning;
    uint8 bUseDistanceFieldAlpha;
    int32 DistanceFieldScaleFactor;
    float DistanceFieldScanRadiusScale;

};

struct FFontParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    class UFont* FontValue;
    int32 FontPage;
    FGuid ExpressionGUID;

};

struct FFontRenderInfo
{
    uint8 bClipText;
    uint8 bEnableShadow;
    FDepthFieldGlowInfo GlowInfo;

};

struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{
};

struct FForceFeedbackChannelDetails
{
    uint8 bAffectsLeftLarge;
    uint8 bAffectsLeftSmall;
    uint8 bAffectsRightLarge;
    uint8 bAffectsRightSmall;
    FRuntimeFloatCurve Curve;

};

struct FForceFeedbackParameters
{
    FName Tag;
    bool bLooping;
    bool bIgnoreTimeDilation;
    bool bPlayWhilePaused;

};

struct FFormatArgumentData
{
    FString ArgumentName;
    TEnumAsByte<EFormatArgumentType::Type> ArgumentValueType;
    FText ArgumentValue;
    int32 ArgumentValueInt;
    float ArgumentValueFloat;
    ETextGender ArgumentValueGender;

};

struct FFractureEffect
{
    class UParticleSystem* ParticleSystem;
    class USoundBase* Sound;

};

struct FFreezablePerPlatformInt
{
};

struct FFullyLoadedPackagesInfo
{
    TEnumAsByte<EFullyLoadPackageType> FullyLoadType;
    FString Tag;
    TArray<FName> PackagesToLoad;
    TArray<class UObject*> LoadedObjects;

};

struct FFunctionExpressionInput
{
    class UMaterialExpressionFunctionInput* ExpressionInput;
    FGuid ExpressionInputId;
    FExpressionInput Input;

};

struct FFunctionExpressionOutput
{
    class UMaterialExpressionFunctionOutput* ExpressionOutput;
    FGuid ExpressionOutputId;
    FExpressionOutput Output;

};

struct FGPUSpriteEmitterInfo
{
    class UParticleModuleRequired* RequiredModule;
    class UParticleModuleSpawn* SpawnModule;
    class UParticleModuleSpawnPerUnit* SpawnPerUnitModule;
    TArray<class UParticleModule*> SpawnModules;
    FGPUSpriteLocalVectorFieldInfo LocalVectorField;
    FFloatDistribution VectorFieldScale;
    FFloatDistribution DragCoefficient;
    FFloatDistribution PointAttractorStrength;
    FFloatDistribution Resilience;
    FVector ConstantAcceleration;
    FVector PointAttractorPosition;
    float PointAttractorRadiusSq;
    FVector OrbitOffsetBase;
    FVector OrbitOffsetRange;
    FVector2D InvMaxSize;
    float InvRotationRateScale;
    float MaxLifetime;
    int32 MaxParticleCount;
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    TEnumAsByte<EParticleAxisLock> LockAxisFlag;
    uint8 bEnableCollision;
    TEnumAsByte<EParticleCollisionMode::Type> CollisionMode;
    uint8 bRemoveHMDRoll;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;
    FRawDistributionVector DynamicColor;
    FRawDistributionFloat DynamicAlpha;
    FRawDistributionVector DynamicColorScale;
    FRawDistributionFloat DynamicAlphaScale;

};

struct FGPUSpriteLocalVectorFieldInfo
{
    class UVectorField* Field;
    FTransform Transform;
    FRotator MinInitialRotation;
    FRotator MaxInitialRotation;
    FRotator RotationRate;
    float Intensity;
    float Tightness;
    uint8 bIgnoreComponentTransform;
    uint8 bTileX;
    uint8 bTileY;
    uint8 bTileZ;
    uint8 bUseFixDT;

};

struct FGPUSpriteResourceData
{
    TArray<FColor> QuantizedColorSamples;
    TArray<FColor> QuantizedMiscSamples;
    TArray<FColor> QuantizedSimulationAttrSamples;
    FVector4 ColorScale;
    FVector4 ColorBias;
    FVector4 MiscScale;
    FVector4 MiscBias;
    FVector4 SimulationAttrCurveScale;
    FVector4 SimulationAttrCurveBias;
    FVector4 SubImageSize;
    FVector4 SizeBySpeed;
    FVector ConstantAcceleration;
    FVector OrbitOffsetBase;
    FVector OrbitOffsetRange;
    FVector OrbitFrequencyBase;
    FVector OrbitFrequencyRange;
    FVector OrbitPhaseBase;
    FVector OrbitPhaseRange;
    float GlobalVectorFieldScale;
    float GlobalVectorFieldTightness;
    float PerParticleVectorFieldScale;
    float PerParticleVectorFieldBias;
    float DragCoefficientScale;
    float DragCoefficientBias;
    float ResilienceScale;
    float ResilienceBias;
    float CollisionRadiusScale;
    float CollisionRadiusBias;
    float CollisionTimeBias;
    float CollisionRandomSpread;
    float CollisionRandomDistribution;
    float OneMinusFriction;
    float RotationRateScale;
    float CameraMotionBlurAmount;
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    TEnumAsByte<EParticleAxisLock> LockAxisFlag;
    FVector2D PivotOffset;
    uint8 bRemoveHMDRoll;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;

};

struct FGameNameRedirect
{
    FName OldGameName;
    FName NewGameName;

};

struct FGaussianSumBloomSettings
{
    float Intensity;
    float Threshold;
    float SizeScale;
    float Filter1Size;
    float Filter2Size;
    float Filter3Size;
    float Filter4Size;
    float Filter5Size;
    float Filter6Size;
    FLinearColor Filter1Tint;
    FLinearColor Filter2Tint;
    FLinearColor Filter3Tint;
    FLinearColor Filter4Tint;
    FLinearColor Filter5Tint;
    FLinearColor Filter6Tint;

};

struct FGenericStruct
{
    int32 Data;

};

struct FGeomSelection
{
    int32 Type;
    int32 Index;
    int32 SelectionIndex;

};

struct FGraphAssetPlayerInformation
{
    TArray<int32> PlayerNodeIndices;

};

struct FGraphReference
{
    class UEdGraph* MacroGraph;
    class UBlueprint* GraphBlueprint;
    FGuid GraphGuid;

};

struct FGridBlendSample
{
    FEditorElement GridElement;
    float BlendWeight;

};

struct FHLODISMComponentDesc
{
    class UStaticMesh* StaticMesh;
    class UMaterialInterface* Material;
    TArray<FTransform> Instances;

};

struct FHLODInstancingKey
{
    class UStaticMesh* StaticMesh;
    class UMaterialInterface* Material;

};

struct FHLODProxyMesh
{
    TLazyObjectPtr<class ALODActor> LODActor;
    class UStaticMesh* StaticMesh;
    FName Key;

};

struct FHapticFeedbackDetails_Curve
{
    FRuntimeFloatCurve Frequency;
    FRuntimeFloatCurve Amplitude;

};

struct FHardwareCursorReference
{
    FName CursorPath;
    FVector2D HotSpot;

};

struct FHierarchicalSimplification
{
    float TransitionScreenSize;
    float OverrideDrawDistance;
    uint8 bUseOverrideDrawDistance;
    uint8 bAllowSpecificExclusion;
    uint8 bSimplifyMesh;
    uint8 bOnlyGenerateClustersForVolumes;
    uint8 bReusePreviousLevelClusters;
    FMeshProxySettings ProxySetting;
    FMeshMergingSettings MergeSetting;
    float DesiredBoundRadius;
    float DesiredFillingPercentage;
    int32 MinNumberOfActorsToBuild;

};

struct FHitResult
{
    int32 FaceIndex;
    float Time;
    float Distance;
    FVector_NetQuantize Location;
    FVector_NetQuantize ImpactPoint;
    FVector_NetQuantizeNormal Normal;
    FVector_NetQuantizeNormal ImpactNormal;
    FVector_NetQuantize TraceStart;
    FVector_NetQuantize TraceEnd;
    float PenetrationDepth;
    int32 Item;
    uint8 ElementIndex;
    uint8 bBlockingHit;
    uint8 bStartPenetrating;
    TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;
    TWeakObjectPtr<class AActor> Actor;
    TWeakObjectPtr<class UPrimitiveComponent> Component;
    FName BoneName;
    FName MyBoneName;

};

struct FImportFactorySettingValues
{
    FString SettingName;
    FString Value;

};

struct FImportanceTexture
{
    FIntPoint Size;
    int32 NumMips;
    TArray<float> MarginalCDF;
    TArray<float> ConditionalCDF;
    TArray<FColor> TextureData;
    TWeakObjectPtr<class UTexture2D> Texture;
    TEnumAsByte<EImportanceWeight::Type> Weighting;

};

struct FIndexedCurve
{
    FKeyHandleMap KeyHandlesToIndices;

};

struct FInertializationBoneDiff
{
};

struct FInertializationCurveDiff
{
};

struct FInertializationPose
{
};

struct FInertializationPoseDiff
{
};

struct FInputActionKeyMapping
{
    FName ActionName;
    uint8 bShift;
    uint8 bCtrl;
    uint8 bAlt;
    uint8 bCmd;
    FKey Key;

};

struct FInputActionSpeechMapping
{
    FName ActionName;
    FName SpeechKeyword;

};

struct FInputAlphaBoolBlend
{
    float BlendInTime;
    float BlendOutTime;
    EAlphaBlendOption BlendOption;
    bool bInitialized;
    class UCurveFloat* CustomCurve;
    FAlphaBlend AlphaBlend;

};

struct FInputAxisConfigEntry
{
    FName AxisKeyName;
    FInputAxisProperties AxisProperties;

};

struct FInputAxisKeyMapping
{
    FName AxisName;
    float Scale;
    FKey Key;

};

struct FInputAxisProperties
{
    float DeadZone;
    float Sensitivity;
    float Exponent;
    uint8 bInvert;

};

struct FInputBlendPose
{
    TArray<FBranchFilter> BranchFilters;

};

struct FInputRange
{
    float Min;
    float Max;

};

struct FInputScaleBias
{
    float Scale;
    float Bias;

};

struct FInputScaleBiasClamp
{
    bool bMapRange;
    bool bClampResult;
    bool bInterpResult;
    FInputRange InRange;
    FInputRange OutRange;
    float Scale;
    float Bias;
    float ClampMin;
    float ClampMax;
    float InterpSpeedIncreasing;
    float InterpSpeedDecreasing;

};

struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
{
    class UStaticMesh* StaticMesh;
    FInstancedStaticMeshLightMapInstanceData CachedStaticLighting;
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    TArray<float> PerInstanceSMCustomData;
    int32 InstancingRandomSeed;

};

struct FInstancedStaticMeshInstanceData
{
    FMatrix Transform;

};

struct FInstancedStaticMeshLightMapInstanceData
{
    FTransform Transform;
    TArray<FGuid> MapBuildDataIds;

};

struct FInstancedStaticMeshMappingInfo
{
};

struct FIntegralCurve : public FIndexedCurve
{
    TArray<FIntegralKey> Keys;
    int32 DefaultValue;
    bool bUseDefaultValueBeforeFirstKey;

};

struct FIntegralKey
{
    float Time;
    int32 Value;

};

struct FInteriorSettings
{
    bool bIsWorldSettings;
    float ExteriorVolume;
    float ExteriorTime;
    float ExteriorLPF;
    float ExteriorLPFTime;
    float InteriorVolume;
    float InteriorTime;
    float InteriorLPF;
    float InteriorLPFTime;

};

struct FInterpControlPoint
{
    FVector PositionControlPoint;
    bool bPositionIsRelative;

};

struct FInterpEdSelKey
{
    class UInterpGroup* Group;
    class UInterpTrack* Track;
    int32 KeyIndex;
    float UnsnappedPosition;

};

struct FInterpGroupActorInfo
{
    FName ObjectName;
    TArray<class AActor*> Actors;

};

struct FInterpLookupPoint
{
    FName GroupName;
    float Time;

};

struct FInterpLookupTrack
{
    TArray<FInterpLookupPoint> Points;

};

struct FInterpolationParameter
{
    float InterpolationTime;
    TEnumAsByte<EFilterInterpolationType> InterpolationType;

};

struct FKAggregateGeom
{
    TArray<FKSphereElem> SphereElems;
    TArray<FKBoxElem> BoxElems;
    TArray<FKSphylElem> SphylElems;
    TArray<FKConvexElem> ConvexElems;
    TArray<FKTaperedCapsuleElem> TaperedCapsuleElems;

};

struct FKBoxElem : public FKShapeElem
{
    FVector Center;
    FRotator Rotation;
    float X;
    float Y;
    float Z;

};

struct FKConvexElem : public FKShapeElem
{
    TArray<FVector> VertexData;
    TArray<int32> IndexData;
    FBox ElemBox;
    FTransform Transform;

};

struct FKShapeElem
{
    float RestOffset;
    FName Name;
    uint8 bContributeToMass;
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;

};

struct FKSphereElem : public FKShapeElem
{
    FVector Center;
    float Radius;

};

struct FKSphylElem : public FKShapeElem
{
    FVector Center;
    FRotator Rotation;
    float Radius;
    float Length;

};

struct FKTaperedCapsuleElem : public FKShapeElem
{
    FVector Center;
    FRotator Rotation;
    float Radius0;
    float Radius1;
    float Length;

};

struct FKeyBind
{
    FKey Key;
    FString Command;
    uint8 Control;
    uint8 Shift;
    uint8 Alt;
    uint8 Cmd;
    uint8 bIgnoreCtrl;
    uint8 bIgnoreShift;
    uint8 bIgnoreAlt;
    uint8 bIgnoreCmd;
    uint8 bDisabled;

};

struct FKeyHandleLookupTable
{
};

struct FKeyHandleMap
{
};

struct FLODMappingData
{
    TArray<int32> Mapping;
    TArray<int32> InverseMapping;

};

struct FLODSoloTrack
{
    TArray<uint8> SoloEnableSetting;

};

struct FLatentActionInfo
{
    int32 Linkage;
    int32 UUID;
    FName ExecutionFunction;
    class UObject* CallbackTarget;

};

struct FLatentActionManager
{
};

struct FLaunchOnTestSettings
{
    FFilePath LaunchOnTestmap;
    FString DeviceID;

};

struct FLayerActorStats
{
    UClass* Type;
    int32 Total;

};

struct FLensBloomSettings
{
    FGaussianSumBloomSettings GaussianSum;
    FConvolutionBloomSettings Convolution;
    TEnumAsByte<EBloomMethod> Method;

};

struct FLensImperfectionSettings
{
    class UTexture* DirtMask;
    float DirtMaskIntensity;
    FLinearColor DirtMaskTint;

};

struct FLensSettings
{
    FLensBloomSettings Bloom;
    FLensImperfectionSettings Imperfections;
    float ChromaticAberration;

};

struct FLevelCollection
{
    class AGameStateBase* GameState;
    class UNetDriver* NetDriver;
    class UDemoNetDriver* DemoNetDriver;
    class ULevel* PersistentLevel;
    TSet<ULevel*> Levels;

};

struct FLevelNameAndTime
{
    FString LevelName;
    uint32 LevelChangeTimeInMS;

};

struct FLevelSimplificationDetails
{
    bool bCreatePackagePerAsset;
    float DetailsPercentage;
    FMaterialProxySettings StaticMeshMaterialSettings;
    bool bOverrideLandscapeExportLOD;
    int32 LandscapeExportLOD;
    FMaterialProxySettings LandscapeMaterialSettings;
    bool bBakeFoliageToLandscape;
    bool bBakeGrassToLandscape;
    bool bGenerateMeshNormalMap;
    bool bGenerateMeshMetallicMap;
    bool bGenerateMeshRoughnessMap;
    bool bGenerateMeshSpecularMap;
    bool bGenerateLandscapeNormalMap;
    bool bGenerateLandscapeMetallicMap;
    bool bGenerateLandscapeRoughnessMap;
    bool bGenerateLandscapeSpecularMap;

};

struct FLevelStreamingStatus
{
    FName PackageName;
    uint8 bShouldBeLoaded;
    uint8 bShouldBeVisible;
    uint32 LODIndex;

};

struct FLevelViewportInfo
{
    FVector CamPosition;
    FRotator CamRotation;
    float CamOrthoZoom;
    bool CamUpdated;

};

struct FLightingChannels
{
    uint8 bChannel0;
    uint8 bChannel1;
    uint8 bChannel2;

};

struct FLightmassDebugOptions
{
    uint8 bDebugMode;
    uint8 bStatsEnabled;
    uint8 bGatherBSPSurfacesAcrossComponents;
    float CoplanarTolerance;
    uint8 bUseImmediateImport;
    uint8 bImmediateProcessMappings;
    uint8 bSortMappings;
    uint8 bDumpBinaryFiles;
    uint8 bDebugMaterials;
    uint8 bPadMappings;
    uint8 bDebugPaddings;
    uint8 bOnlyCalcDebugTexelMappings;
    uint8 bUseRandomColors;
    uint8 bColorBordersGreen;
    uint8 bColorByExecutionTime;
    float ExecutionTimeDivisor;

};

struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
    float LightSourceAngle;

};

struct FLightmassLightSettings
{
    float IndirectLightingSaturation;
    float ShadowExponent;
    bool bUseAreaShadowsForStationaryLight;

};

struct FLightmassMaterialInterfaceSettings
{
    float EmissiveBoost;
    float DiffuseBoost;
    float ExportResolutionScale;
    uint8 bCastShadowAsMasked;
    uint8 bOverrideCastShadowAsMasked;
    uint8 bOverrideEmissiveBoost;
    uint8 bOverrideDiffuseBoost;
    uint8 bOverrideExportResolutionScale;

};

struct FLightmassPointLightSettings : public FLightmassLightSettings
{
};

struct FLightmassPrimitiveSettings
{
    uint8 bUseTwoSidedLighting;
    uint8 bShadowIndirectOnly;
    uint8 bUseEmissiveForStaticLighting;
    uint8 bUseVertexNormalForHemisphereGather;
    float EmissiveLightFalloffExponent;
    float EmissiveLightExplicitInfluenceRadius;
    float EmissiveBoost;
    float DiffuseBoost;
    float FullyOccludedSamplesFraction;

};

struct FLightmassWorldInfoSettings
{
    float StaticLightingLevelScale;
    int32 NumIndirectLightingBounces;
    int32 NumSkyLightingBounces;
    float IndirectLightingQuality;
    float IndirectLightingSmoothness;
    FColor EnvironmentColor;
    float EnvironmentIntensity;
    float EmissiveBoost;
    float DiffuseBoost;
    TEnumAsByte<EVolumeLightingMethod> VolumeLightingMethod;
    uint8 bUseAmbientOcclusion;
    uint8 bGenerateAmbientOcclusionMaterialMask;
    uint8 bVisualizeMaterialDiffuse;
    uint8 bVisualizeAmbientOcclusion;
    uint8 bCompressLightmaps;
    float VolumetricLightmapDetailCellSize;
    float VolumetricLightmapMaximumBrickMemoryMb;
    float VolumetricLightmapSphericalHarmonicSmoothing;
    float VolumeLightSamplePlacementScale;
    float DirectIlluminationOcclusionFraction;
    float IndirectIlluminationOcclusionFraction;
    float OcclusionExponent;
    float FullyOccludedSamplesFraction;
    float MaxOcclusionDistance;

};

struct FLinearConstraint : public FConstraintBaseParams
{
    float Limit;
    TEnumAsByte<ELinearConstraintMotion> XMotion;
    TEnumAsByte<ELinearConstraintMotion> YMotion;
    TEnumAsByte<ELinearConstraintMotion> ZMotion;

};

struct FLinearDriveConstraint
{
    FVector PositionTarget;
    FVector VelocityTarget;
    FConstraintDrive XDrive;
    FConstraintDrive YDrive;
    FConstraintDrive ZDrive;
    uint8 bEnablePositionDrive;

};

struct FLocalSpacePose
{
    TArray<FTransform> Transforms;
    TArray<FName> Names;

};

struct FLocationBoneSocketInfo
{
    FName BoneSocketName;
    FVector Offset;

};

struct FMTDResult
{
    FVector Direction;
    float Distance;

};

struct FMarkerSyncAnimPosition
{
    FName PreviousMarkerName;
    FName NextMarkerName;
    float PositionBetweenMarkers;

};

struct FMarkerSyncData
{
    TArray<FAnimSyncMarker> AuthoredSyncMarkers;

};

struct FMaterialAttributesInput : public FExpressionInput
{
    int32 PropertyConnectedBitmask;

};

struct FMaterialCachedExpressionData
{
    FMaterialCachedParameters Parameters;
    TArray<class UObject*> ReferencedTextures;
    TArray<FMaterialFunctionInfo> FunctionInfos;
    TArray<FMaterialParameterCollectionInfo> ParameterCollectionInfos;
    TArray<class UMaterialFunctionInterface*> DefaultLayers;
    TArray<class UMaterialFunctionInterface*> DefaultLayerBlends;
    TArray<class ULandscapeGrassType*> GrassTypes;
    TArray<FName> DynamicParameterNames;
    TArray<bool> QualityLevelsUsed;
    uint8 bHasRuntimeVirtualTextureOutput;
    uint8 bHasSceneColor;

};

struct FMaterialCachedParameterEntry
{
    TArray<uint64> NameHashes;
    TArray<FMaterialParameterInfo> ParameterInfos;
    TArray<FGuid> ExpressionGuids;

};

struct FMaterialCachedParameters
{
    FMaterialCachedParameterEntry RuntimeEntries;
    TArray<float> ScalarValues;
    TArray<FLinearColor> VectorValues;
    TArray<class UTexture*> TextureValues;
    TArray<class UFont*> FontValues;
    TArray<int32> FontPageValues;
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextureValues;

};

struct FMaterialEditorPromotionSettings
{
    FFilePath DefaultMaterialAsset;
    FFilePath DefaultDiffuseTexture;
    FFilePath DefaultNormalTexture;

};

struct FMaterialFunctionInfo
{
    FGuid StateId;
    class UMaterialFunctionInterface* Function;

};

struct FMaterialInput
{
    int32 OutputIndex;
    FName InputName;
    FName ExpressionName;

};

struct FMaterialInstanceBasePropertyOverrides
{
    uint8 bOverride_OpacityMaskClipValue;
    uint8 bOverride_BlendMode;
    uint8 bOverride_ShadingModel;
    uint8 bOverride_DitheredLODTransition;
    uint8 bOverride_CastDynamicShadowAsMasked;
    uint8 bOverride_TwoSided;
    uint8 TwoSided;
    uint8 DitheredLODTransition;
    uint8 bCastDynamicShadowAsMasked;
    TEnumAsByte<EBlendMode> BlendMode;
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
    float OpacityMaskClipValue;

};

struct FMaterialLayersFunctions
{
    TArray<class UMaterialFunctionInterface*> Layers;
    TArray<class UMaterialFunctionInterface*> Blends;
    TArray<bool> LayerStates;
    FString KeyString;

};

struct FMaterialParameterCollectionInfo
{
    FGuid StateId;
    class UMaterialParameterCollection* ParameterCollection;

};

struct FMaterialParameterInfo
{
    FName Name;
    TEnumAsByte<EMaterialParameterAssociation> Association;
    int32 Index;

};

struct FMaterialProxySettings
{
    FIntPoint TextureSize;
    float GutterSpace;
    float MetallicConstant;
    float RoughnessConstant;
    float AnisotropyConstant;
    float SpecularConstant;
    float OpacityConstant;
    float OpacityMaskConstant;
    float AmbientOcclusionConstant;
    TEnumAsByte<ETextureSizingType> TextureSizingType;
    TEnumAsByte<EMaterialMergeType> MaterialMergeType;
    TEnumAsByte<EBlendMode> BlendMode;
    uint8 bAllowTwoSidedMaterial;
    uint8 bNormalMap;
    uint8 bTangentMap;
    uint8 bMetallicMap;
    uint8 bRoughnessMap;
    uint8 bAnisotropyMap;
    uint8 bSpecularMap;
    uint8 bEmissiveMap;
    uint8 bOpacityMap;
    uint8 bOpacityMaskMap;
    uint8 bAmbientOcclusionMap;
    FIntPoint DiffuseTextureSize;
    FIntPoint NormalTextureSize;
    FIntPoint TangentTextureSize;
    FIntPoint MetallicTextureSize;
    FIntPoint RoughnessTextureSize;
    FIntPoint AnisotropyTextureSize;
    FIntPoint SpecularTextureSize;
    FIntPoint EmissiveTextureSize;
    FIntPoint OpacityTextureSize;
    FIntPoint OpacityMaskTextureSize;
    FIntPoint AmbientOcclusionTextureSize;

};

struct FMaterialRemapIndex
{
    uint32 ImportVersionKey;
    TArray<int32> MaterialRemap;

};

struct FMaterialShadingModelField
{
    uint16 ShadingModelField;

};

struct FMaterialSpriteElement
{
    class UMaterialInterface* Material;
    class UCurveFloat* DistanceToOpacityCurve;
    uint8 bSizeIsInScreenSpace;
    float BaseSizeX;
    float BaseSizeY;
    class UCurveFloat* DistanceToSizeCurve;

};

struct FMaterialTextureInfo
{
    float SamplingScale;
    int32 UVChannelIndex;
    FName TextureName;

};

struct FMemberReference
{
    class UObject* MemberParent;
    FString MemberScope;
    FName MemberName;
    FGuid MemberGuid;
    bool bSelfContext;
    bool bWasDeprecated;

};

struct FMeshBuildSettings
{
    uint8 bUseMikkTSpace;
    uint8 bRecomputeNormals;
    uint8 bRecomputeTangents;
    uint8 bComputeWeightedNormals;
    uint8 bRemoveDegenerates;
    uint8 bBuildAdjacencyBuffer;
    uint8 bBuildReversedIndexBuffer;
    uint8 bUseHighPrecisionTangentBasis;
    uint8 bUseFullPrecisionUVs;
    uint8 bGenerateLightmapUVs;
    uint8 bGenerateDistanceFieldAsIfTwoSided;
    uint8 bSupportFaceRemap;
    int32 MinLightmapResolution;
    int32 SrcLightmapIndex;
    int32 DstLightmapIndex;
    float BuildScale;
    FVector BuildScale3D;
    float DistanceFieldResolutionScale;
    class UStaticMesh* DistanceFieldReplacementMesh;

};

struct FMeshInstancingSettings
{
    TSubclassOf<class AActor> ActorClassToUse;
    int32 InstanceReplacementThreshold;
    EMeshInstancingReplacementMethod MeshReplacementMethod;
    bool bSkipMeshesWithVertexColors;
    bool bUseHLODVolumes;
    TSubclassOf<class UInstancedStaticMeshComponent> ISMComponentToUse;

};

struct FMeshMergingSettings
{
    int32 TargetLightMapResolution;
    EUVOutput OutputUVs;
    FMaterialProxySettings MaterialSettings;
    int32 GutterSize;
    int32 SpecificLOD;
    EMeshLODSelectionType LODSelectionType;
    uint8 bGenerateLightMapUV;
    uint8 bComputedLightMapResolution;
    uint8 bPivotPointAtZero;
    uint8 bMergePhysicsData;
    uint8 bMergeMaterials;
    uint8 bCreateMergedMaterial;
    uint8 bBakeVertexDataToMesh;
    uint8 bUseVertexDataForBakingMaterial;
    uint8 bUseTextureBinning;
    uint8 bReuseMeshLightmapUVs;
    uint8 bMergeEquivalentMaterials;
    uint8 bUseLandscapeCulling;
    uint8 bIncludeImposters;
    uint8 bAllowDistanceField;

};

struct FMeshProxySettings
{
    int32 ScreenSize;
    float VoxelSize;
    FMaterialProxySettings MaterialSettings;
    float MergeDistance;
    FColor UnresolvedGeometryColor;
    float MaxRayCastDist;
    float HardAngleThreshold;
    int32 LightMapResolution;
    TEnumAsByte<EProxyNormalComputationMethod::Type> NormalCalculationMethod;
    TEnumAsByte<ELandscapeCullingPrecision::Type> LandscapeCullingPrecision;
    uint8 bCalculateCorrectLODModel;
    uint8 bOverrideVoxelSize;
    uint8 bOverrideTransferDistance;
    uint8 bUseHardAngleThreshold;
    uint8 bComputeLightMapResolution;
    uint8 bRecalculateNormals;
    uint8 bUseLandscapeCulling;
    uint8 bAllowAdjacency;
    uint8 bAllowDistanceField;
    uint8 bReuseMeshLightmapUVs;
    uint8 bCreateCollision;
    uint8 bAllowVertexColors;
    uint8 bGenerateLightmapUVs;

};

struct FMeshReductionSettings
{
    float PercentTriangles;
    float PercentVertices;
    float MaxDeviation;
    float PixelError;
    float WeldingThreshold;
    float HardAngleThreshold;
    int32 BaseLODModel;
    TEnumAsByte<EMeshFeatureImportance::Type> SilhouetteImportance;
    TEnumAsByte<EMeshFeatureImportance::Type> TextureImportance;
    TEnumAsByte<EMeshFeatureImportance::Type> ShadingImportance;
    uint8 bRecalculateNormals;
    uint8 bGenerateUniqueLightmapUVs;
    uint8 bKeepSymmetry;
    uint8 bVisibilityAided;
    uint8 bCullOccluded;
    EStaticMeshReductionTerimationCriterion TerminationCriterion;
    TEnumAsByte<EMeshFeatureImportance::Type> VisibilityAggressiveness;
    TEnumAsByte<EMeshFeatureImportance::Type> VertexColorImportance;

};

struct FMeshSectionInfo
{
    int32 MaterialIndex;
    bool bEnableCollision;
    bool bCastShadow;
    bool bVisibleInRayTracing;
    bool bForceOpaque;

};

struct FMeshSectionInfoMap
{
    TMap<uint32, FMeshSectionInfo> Map;

};

struct FMeshUVChannelInfo
{
    bool bInitialized;
    bool bOverrideDensities;
    float LocalUVDensities;

};

struct FMinimalViewInfo
{
    FVector Location;
    FRotator Rotation;
    float FOV;
    float DesiredFOV;
    float OrthoWidth;
    float OrthoNearClipPlane;
    float OrthoFarClipPlane;
    float AspectRatio;
    uint8 bConstrainAspectRatio;
    uint8 bUseFieldOfViewForLOD;
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    float PostProcessBlendWeight;
    FPostProcessSettings PostProcessSettings;
    FVector2D OffCenterProjectionOffset;

};

struct FModulatorContinuousParams
{
    FName ParameterName;
    float Default;
    float MinInput;
    float MaxInput;
    float MinOutput;
    float MaxOutput;
    TEnumAsByte<ModulationParamMode> ParamMode;

};

struct FMovementProperties
{
    uint8 bCanCrouch;
    uint8 bCanJump;
    uint8 bCanWalk;
    uint8 bCanSwim;
    uint8 bCanFly;

};

struct FMulticastRecordOptions
{
    FString FuncPathName;
    bool bServerSkip;
    bool bClientSkip;

};

struct FNameCurve : public FIndexedCurve
{
    TArray<FNameCurveKey> Keys;

};

struct FNameCurveKey
{
    float Time;
    FName Value;

};

struct FNameMapping
{
    FName NodeName;
    FName BoneName;

};

struct FNamedColor
{
    FColor Value;
    FName Name;

};

struct FNamedCurveValue
{
    FName Name;
    float Value;

};

struct FNamedEmitterMaterial
{
    FName Name;
    class UMaterialInterface* Material;

};

struct FNamedFloat
{
    float Value;
    FName Name;

};

struct FNamedNetDriver
{
    class UNetDriver* NetDriver;

};

struct FNamedTransform
{
    FTransform Value;
    FName Name;

};

struct FNamedVector
{
    FVector Value;
    FName Name;

};

struct FNavAgentProperties : public FMovementProperties
{
    float AgentRadius;
    float AgentHeight;
    float AgentStepHeight;
    float NavWalkingSearchHeightScale;
    FSoftClassPath PreferredNavData;

};

struct FNavAgentSelector
{
    uint8 bSupportsAgent0;
    uint8 bSupportsAgent1;
    uint8 bSupportsAgent2;
    uint8 bSupportsAgent3;
    uint8 bSupportsAgent4;
    uint8 bSupportsAgent5;
    uint8 bSupportsAgent6;
    uint8 bSupportsAgent7;
    uint8 bSupportsAgent8;
    uint8 bSupportsAgent9;
    uint8 bSupportsAgent10;
    uint8 bSupportsAgent11;
    uint8 bSupportsAgent12;
    uint8 bSupportsAgent13;
    uint8 bSupportsAgent14;
    uint8 bSupportsAgent15;

};

struct FNavAvoidanceData
{
};

struct FNavAvoidanceMask
{
    uint8 bGroup0;
    uint8 bGroup1;
    uint8 bGroup2;
    uint8 bGroup3;
    uint8 bGroup4;
    uint8 bGroup5;
    uint8 bGroup6;
    uint8 bGroup7;
    uint8 bGroup8;
    uint8 bGroup9;
    uint8 bGroup10;
    uint8 bGroup11;
    uint8 bGroup12;
    uint8 bGroup13;
    uint8 bGroup14;
    uint8 bGroup15;
    uint8 bGroup16;
    uint8 bGroup17;
    uint8 bGroup18;
    uint8 bGroup19;
    uint8 bGroup20;
    uint8 bGroup21;
    uint8 bGroup22;
    uint8 bGroup23;
    uint8 bGroup24;
    uint8 bGroup25;
    uint8 bGroup26;
    uint8 bGroup27;
    uint8 bGroup28;
    uint8 bGroup29;
    uint8 bGroup30;
    uint8 bGroup31;

};

struct FNavDataConfig : public FNavAgentProperties
{
    FName Name;
    FColor Color;
    FVector DefaultQueryExtent;
    TSubclassOf<class AActor> NavigationDataClass;
    TSoftClassPtr<AActor> NavDataClass;

};

struct FNavigationLink : public FNavigationLinkBase
{
    FVector Left;
    FVector Right;

};

struct FNavigationLinkBase
{
    float LeftProjectHeight;
    float MaxFallDownLength;
    float SnapRadius;
    float SnapHeight;
    FNavAgentSelector SupportedAgents;
    uint8 bSupportsAgent0;
    uint8 bSupportsAgent1;
    uint8 bSupportsAgent2;
    uint8 bSupportsAgent3;
    uint8 bSupportsAgent4;
    uint8 bSupportsAgent5;
    uint8 bSupportsAgent6;
    uint8 bSupportsAgent7;
    uint8 bSupportsAgent8;
    uint8 bSupportsAgent9;
    uint8 bSupportsAgent10;
    uint8 bSupportsAgent11;
    uint8 bSupportsAgent12;
    uint8 bSupportsAgent13;
    uint8 bSupportsAgent14;
    uint8 bSupportsAgent15;
    TEnumAsByte<ENavLinkDirection::Type> Direction;
    uint8 bUseSnapHeight;
    uint8 bSnapToCheapestArea;
    uint8 bCustomFlag0;
    uint8 bCustomFlag1;
    uint8 bCustomFlag2;
    uint8 bCustomFlag3;
    uint8 bCustomFlag4;
    uint8 bCustomFlag5;
    uint8 bCustomFlag6;
    uint8 bCustomFlag7;
    TSubclassOf<class UNavAreaBase> AreaClass;

};

struct FNavigationSegmentLink : public FNavigationLinkBase
{
    FVector LeftStart;
    FVector LeftEnd;
    FVector RightStart;
    FVector RightEnd;

};

struct FNetDriverDefinition
{
    FName DefName;
    FName DriverClassName;
    FName DriverClassNameFallback;

};

struct FNetViewer
{
    class UNetConnection* Connection;
    class AActor* InViewer;
    class AActor* ViewTarget;
    FVector ViewLocation;
    FVector ViewDir;

};

struct FNetworkEmulationProfileDescription
{
    FString ProfileName;
    FString ToolTip;

};

struct FNode
{
    FName Name;
    FName ParentName;
    FTransform Transform;
    FString DisplayName;
    bool bAdvanced;

};

struct FNodeItem
{
    FName ParentName;
    FTransform Transform;

};

struct FNodeToCodeAssociation
{
};

struct FOrbitOptions
{
    uint8 bProcessDuringSpawn;
    uint8 bProcessDuringUpdate;
    uint8 bUseEmitterTime;

};

struct FOverlapResult
{
    TWeakObjectPtr<class AActor> Actor;
    TWeakObjectPtr<class UPrimitiveComponent> Component;
    uint8 bBlockingHit;

};

struct FPOV
{
    FVector Location;
    FRotator Rotation;
    float FOV;

};

struct FPSCPool
{
    TArray<FPSCPoolElem> FreeElements;

};

struct FPSCPoolElem
{
    class UParticleSystemComponent* PSC;

};

struct FPacketSimulationSettings
{
    int32 PktLoss;
    int32 PktLossMaxSize;
    int32 PktLossMinSize;
    int32 PktOrder;
    int32 PktDup;
    int32 PktLag;
    int32 PktLagVariance;
    int32 PktLagMin;
    int32 PktLagMax;
    int32 PktIncomingLagMin;
    int32 PktIncomingLagMax;
    int32 PktIncomingLoss;
    int32 PktJitter;

};

struct FPaintedVertex
{
    FVector Position;
    FColor Color;
    FVector4 Normal;

};

struct FParameterChannelNames
{
    FText R;
    FText G;
    FText B;
    FText A;

};

struct FParameterGroupData
{
    FString GroupName;
    int32 GroupSortPriority;

};

struct FParticleBurst
{
    int32 Count;
    int32 CountLow;
    float Time;

};

struct FParticleCurvePair
{
    FString CurveName;
    class UObject* CurveObject;

};

struct FParticleEditorPromotionSettings
{
    FFilePath DefaultParticleAsset;

};

struct FParticleEmitterReplayFrame
{
};

struct FParticleEvent_GenerateInfo
{
    TEnumAsByte<EParticleEventType> Type;
    int32 Frequency;
    int32 ParticleFrequency;
    uint8 FirstTimeOnly;
    uint8 LastTimeOnly;
    uint8 UseReflectedImpactVector;
    uint8 bUseOrbitOffset;
    FName CustomName;
    TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;

};

struct FParticleRandomSeedInfo
{
    FName ParameterName;
    uint8 bGetSeedFromInstance;
    uint8 bInstanceSeedIsIndex;
    uint8 bResetSeedOnEmitterLooping;
    uint8 bRandomlySelectSeedArray;
    TArray<int32> RandomSeeds;

};

struct FParticleReplayTrackKey
{
    float Time;
    float Duration;
    int32 ClipIDNumber;

};

struct FParticleSysParam
{
    FName Name;
    TEnumAsByte<EParticleSysParamType> ParamType;
    float Scalar;
    float Scalar_Low;
    FVector Vector;
    FVector Vector_Low;
    FColor Color;
    class AActor* Actor;
    class UMaterialInterface* Material;

};

struct FParticleSystemLOD
{
};

struct FParticleSystemReplayFrame
{
};

struct FParticleSystemWorldManagerTickFunction : public FTickFunction
{
};

struct FPassiveSoundMixModifier
{
    class USoundMix* SoundMix;
    float MinVolumeThreshold;
    float MaxVolumeThreshold;

};

struct FPerBoneBlendWeight
{
    int32 SourceIndex;
    float BlendWeight;

};

struct FPerBoneBlendWeights
{
    TArray<FPerBoneBlendWeight> BoneBlendWeights;

};

struct FPerBoneInterpolation
{
    FBoneReference BoneReference;
    float InterpolationSpeedPerSec;

};

struct FPerPlatformBool
{
    bool Default;

};

struct FPerPlatformFloat
{
    float Default;

};

struct FPerPlatformInt
{
    int32 Default;

};

struct FPhysicalAnimationData
{
    FName BodyName;
    uint8 bIsLocalSimulation;
    float OrientationStrength;
    float AngularVelocityStrength;
    float PositionStrength;
    float VelocityStrength;
    float MaxLinearForce;
    float MaxAngularForce;

};

struct FPhysicalAnimationProfile
{
    FName ProfileName;
    FPhysicalAnimationData PhysicalAnimationData;

};

struct FPhysicalSurfaceName
{
    TEnumAsByte<EPhysicalSurface> Type;
    FName Name;

};

struct FPhysicsConstraintProfileHandle
{
    FConstraintProfileProperties ProfileProperties;
    FName ProfileName;

};

struct FPlatformInterfaceData
{
    FName DataName;
    TEnumAsByte<EPlatformInterfaceDataType> Type;
    int32 IntValue;
    float FloatValue;
    FString StringValue;
    class UObject* ObjectValue;

};

struct FPlatformInterfaceDelegateResult
{
    bool bSuccessful;
    FPlatformInterfaceData Data;

};

struct FPlayerMuteList
{
    bool bHasVoiceHandshakeCompleted;
    int32 VoiceChannelIdx;

};

struct FPluginRedirect
{
    FString OldPluginName;
    FString NewPluginName;

};

struct FPointDamageEvent : public FDamageEvent
{
    float Damage;
    FVector_NetQuantizeNormal ShotDirection;
    FHitResult HitInfo;

};

struct FPointerToUberGraphFrame
{
};

struct FPooledCameraShakes
{
    TArray<class UCameraShakeBase*> PooledShakes;

};

struct FPoseData
{
    TArray<FTransform> LocalSpacePose;
    TMap<int32, int32> TrackToBufferIndex;
    TArray<float> CurveData;

};

struct FPoseDataContainer
{
    TArray<FSmartName> PoseNames;
    TArray<FName> Tracks;
    TMap<FName, int32> TrackMap;
    TArray<FPoseData> Poses;
    TArray<FAnimCurveBase> Curves;

};

struct FPoseLink : public FPoseLinkBase
{
};

struct FPoseLinkBase
{
    int32 LinkID;

};

struct FPoseSnapshot
{
    TArray<FTransform> LocalTransforms;
    TArray<FName> BoneNames;
    FName SkeletalMeshName;
    FName SnapshotName;
    bool bIsValid;

};

struct FPostProcessSettings
{
    uint8 bOverride_TemperatureType;
    uint8 bOverride_WhiteTemp;
    uint8 bOverride_WhiteTint;
    uint8 bOverride_ColorSaturation;
    uint8 bOverride_ColorContrast;
    uint8 bOverride_ColorGamma;
    uint8 bOverride_ColorGain;
    uint8 bOverride_ColorOffset;
    uint8 bOverride_ColorSaturationShadows;
    uint8 bOverride_ColorContrastShadows;
    uint8 bOverride_ColorGammaShadows;
    uint8 bOverride_ColorGainShadows;
    uint8 bOverride_ColorOffsetShadows;
    uint8 bOverride_ColorSaturationMidtones;
    uint8 bOverride_ColorContrastMidtones;
    uint8 bOverride_ColorGammaMidtones;
    uint8 bOverride_ColorGainMidtones;
    uint8 bOverride_ColorOffsetMidtones;
    uint8 bOverride_ColorSaturationHighlights;
    uint8 bOverride_ColorContrastHighlights;
    uint8 bOverride_ColorGammaHighlights;
    uint8 bOverride_ColorGainHighlights;
    uint8 bOverride_ColorOffsetHighlights;
    uint8 bOverride_ColorCorrectionShadowsMax;
    uint8 bOverride_ColorCorrectionHighlightsMin;
    uint8 bOverride_BlueCorrection;
    uint8 bOverride_ExpandGamut;
    uint8 bOverride_ToneCurveAmount;
    uint8 bOverride_FilmWhitePoint;
    uint8 bOverride_FilmSaturation;
    uint8 bOverride_FilmChannelMixerRed;
    uint8 bOverride_FilmChannelMixerGreen;
    uint8 bOverride_FilmChannelMixerBlue;
    uint8 bOverride_FilmContrast;
    uint8 bOverride_FilmDynamicRange;
    uint8 bOverride_FilmHealAmount;
    uint8 bOverride_FilmToeAmount;
    uint8 bOverride_FilmShadowTint;
    uint8 bOverride_FilmShadowTintBlend;
    uint8 bOverride_FilmShadowTintAmount;
    uint8 bOverride_FilmSlope;
    uint8 bOverride_FilmToe;
    uint8 bOverride_FilmShoulder;
    uint8 bOverride_FilmBlackClip;
    uint8 bOverride_FilmWhiteClip;
    uint8 bOverride_SceneColorTint;
    uint8 bOverride_SceneFringeIntensity;
    uint8 bOverride_ChromaticAberrationStartOffset;
    uint8 bOverride_AmbientCubemapTint;
    uint8 bOverride_AmbientCubemapIntensity;
    uint8 bOverride_BloomMethod;
    uint8 bOverride_BloomIntensity;
    uint8 bOverride_BloomThreshold;
    uint8 bOverride_Bloom1Tint;
    uint8 bOverride_Bloom1Size;
    uint8 bOverride_Bloom2Size;
    uint8 bOverride_Bloom2Tint;
    uint8 bOverride_Bloom3Tint;
    uint8 bOverride_Bloom3Size;
    uint8 bOverride_Bloom4Tint;
    uint8 bOverride_Bloom4Size;
    uint8 bOverride_Bloom5Tint;
    uint8 bOverride_Bloom5Size;
    uint8 bOverride_Bloom6Tint;
    uint8 bOverride_Bloom6Size;
    uint8 bOverride_BloomSizeScale;
    uint8 bOverride_BloomConvolutionTexture;
    uint8 bOverride_BloomConvolutionSize;
    uint8 bOverride_BloomConvolutionCenterUV;
    uint8 bOverride_BloomConvolutionPreFilter;
    uint8 bOverride_BloomConvolutionPreFilterMin;
    uint8 bOverride_BloomConvolutionPreFilterMax;
    uint8 bOverride_BloomConvolutionPreFilterMult;
    uint8 bOverride_BloomConvolutionBufferScale;
    uint8 bOverride_BloomDirtMaskIntensity;
    uint8 bOverride_BloomDirtMaskTint;
    uint8 bOverride_BloomDirtMask;
    uint8 bOverride_CameraShutterSpeed;
    uint8 bOverride_CameraISO;
    uint8 bOverride_AutoExposureMethod;
    uint8 bOverride_AutoExposureLowPercent;
    uint8 bOverride_AutoExposureHighPercent;
    uint8 bOverride_AutoExposureMinBrightness;
    uint8 bOverride_AutoExposureMaxBrightness;
    uint8 bOverride_AutoExposureCalibrationConstant;
    uint8 bOverride_AutoExposureSpeedUp;
    uint8 bOverride_AutoExposureSpeedDown;
    uint8 bOverride_AutoExposureBias;
    uint8 bOverride_AutoExposureBiasCurve;
    uint8 bOverride_AutoExposureMeterMask;
    uint8 bOverride_AutoExposureApplyPhysicalCameraExposure;
    uint8 bOverride_HistogramLogMin;
    uint8 bOverride_HistogramLogMax;
    uint8 bOverride_LensFlareIntensity;
    uint8 bOverride_LensFlareTint;
    uint8 bOverride_LensFlareTints;
    uint8 bOverride_LensFlareBokehSize;
    uint8 bOverride_LensFlareBokehShape;
    uint8 bOverride_LensFlareThreshold;
    uint8 bOverride_VignetteIntensity;
    uint8 bOverride_GrainIntensity;
    uint8 bOverride_GrainJitter;
    uint8 bOverride_AmbientOcclusionIntensity;
    uint8 bOverride_AmbientOcclusionStaticFraction;
    uint8 bOverride_AmbientOcclusionRadius;
    uint8 bOverride_AmbientOcclusionFadeDistance;
    uint8 bOverride_AmbientOcclusionFadeRadius;
    uint8 bOverride_AmbientOcclusionDistance;
    uint8 bOverride_AmbientOcclusionRadiusInWS;
    uint8 bOverride_AmbientOcclusionPower;
    uint8 bOverride_AmbientOcclusionBias;
    uint8 bOverride_AmbientOcclusionQuality;
    uint8 bOverride_AmbientOcclusionMipBlend;
    uint8 bOverride_AmbientOcclusionMipScale;
    uint8 bOverride_AmbientOcclusionMipThreshold;
    uint8 bOverride_AmbientOcclusionTemporalBlendWeight;
    uint8 bOverride_RayTracingAO;
    uint8 bOverride_RayTracingAOSamplesPerPixel;
    uint8 bOverride_RayTracingAOIntensity;
    uint8 bOverride_RayTracingAORadius;
    uint8 bOverride_LPVIntensity;
    uint8 bOverride_LPVDirectionalOcclusionIntensity;
    uint8 bOverride_LPVDirectionalOcclusionRadius;
    uint8 bOverride_LPVDiffuseOcclusionExponent;
    uint8 bOverride_LPVSpecularOcclusionExponent;
    uint8 bOverride_LPVDiffuseOcclusionIntensity;
    uint8 bOverride_LPVSpecularOcclusionIntensity;
    uint8 bOverride_LPVSize;
    uint8 bOverride_LPVSecondaryOcclusionIntensity;
    uint8 bOverride_LPVSecondaryBounceIntensity;
    uint8 bOverride_LPVGeometryVolumeBias;
    uint8 bOverride_LPVVplInjectionBias;
    uint8 bOverride_LPVEmissiveInjectionIntensity;
    uint8 bOverride_LPVFadeRange;
    uint8 bOverride_LPVDirectionalOcclusionFadeRange;
    uint8 bOverride_IndirectLightingColor;
    uint8 bOverride_IndirectLightingIntensity;
    uint8 bOverride_ColorGradingIntensity;
    uint8 bOverride_ColorGradingLUT;
    uint8 bOverride_DepthOfFieldFocalDistance;
    uint8 bOverride_DepthOfFieldFstop;
    uint8 bOverride_DepthOfFieldMinFstop;
    uint8 bOverride_DepthOfFieldBladeCount;
    uint8 bOverride_DepthOfFieldSensorWidth;
    uint8 bOverride_DepthOfFieldDepthBlurRadius;
    uint8 bOverride_DepthOfFieldDepthBlurAmount;
    uint8 bOverride_DepthOfFieldFocalRegion;
    uint8 bOverride_DepthOfFieldNearTransitionRegion;
    uint8 bOverride_DepthOfFieldFarTransitionRegion;
    uint8 bOverride_DepthOfFieldScale;
    uint8 bOverride_DepthOfFieldNearBlurSize;
    uint8 bOverride_DepthOfFieldFarBlurSize;
    uint8 bOverride_MobileHQGaussian;
    uint8 bOverride_DepthOfFieldOcclusion;
    uint8 bOverride_DepthOfFieldSkyFocusDistance;
    uint8 bOverride_DepthOfFieldVignetteSize;
    uint8 bOverride_MotionBlurAmount;
    uint8 bOverride_MotionBlurMax;
    uint8 bOverride_MotionBlurTargetFPS;
    uint8 bOverride_MotionBlurPerObjectSize;
    uint8 bOverride_ScreenPercentage;
    uint8 bOverride_ScreenSpaceReflectionIntensity;
    uint8 bOverride_ScreenSpaceReflectionQuality;
    uint8 bOverride_ScreenSpaceReflectionMaxRoughness;
    uint8 bOverride_ScreenSpaceReflectionRoughnessScale;
    uint8 bOverride_ReflectionsType;
    uint8 bOverride_RayTracingReflectionsMaxRoughness;
    uint8 bOverride_RayTracingReflectionsMaxBounces;
    uint8 bOverride_RayTracingReflectionsSamplesPerPixel;
    uint8 bOverride_RayTracingReflectionsShadows;
    uint8 bOverride_RayTracingReflectionsTranslucency;
    uint8 bOverride_TranslucencyType;
    uint8 bOverride_RayTracingTranslucencyMaxRoughness;
    uint8 bOverride_RayTracingTranslucencyRefractionRays;
    uint8 bOverride_RayTracingTranslucencySamplesPerPixel;
    uint8 bOverride_RayTracingTranslucencyShadows;
    uint8 bOverride_RayTracingTranslucencyRefraction;
    uint8 bOverride_RayTracingGI;
    uint8 bOverride_RayTracingGIMaxBounces;
    uint8 bOverride_RayTracingGISamplesPerPixel;
    uint8 bOverride_PathTracingMaxBounces;
    uint8 bOverride_PathTracingSamplesPerPixel;
    uint8 bOverride_PathTracingFilterWidth;
    uint8 bOverride_PathTracingEnableEmissive;
    uint8 bOverride_PathTracingMaxPathExposure;
    uint8 bOverride_PathTracingEnableDenoiser;
    uint8 bMobileHQGaussian;
    TEnumAsByte<EBloomMethod> BloomMethod;
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;
    TEnumAsByte<ETemperatureMethod> TemperatureType;
    float WhiteTemp;
    float WhiteTint;
    FVector4 ColorSaturation;
    FVector4 ColorContrast;
    FVector4 ColorGamma;
    FVector4 ColorGain;
    FVector4 ColorOffset;
    FVector4 ColorSaturationShadows;
    FVector4 ColorContrastShadows;
    FVector4 ColorGammaShadows;
    FVector4 ColorGainShadows;
    FVector4 ColorOffsetShadows;
    FVector4 ColorSaturationMidtones;
    FVector4 ColorContrastMidtones;
    FVector4 ColorGammaMidtones;
    FVector4 ColorGainMidtones;
    FVector4 ColorOffsetMidtones;
    FVector4 ColorSaturationHighlights;
    FVector4 ColorContrastHighlights;
    FVector4 ColorGammaHighlights;
    FVector4 ColorGainHighlights;
    FVector4 ColorOffsetHighlights;
    float ColorCorrectionHighlightsMin;
    float ColorCorrectionShadowsMax;
    float BlueCorrection;
    float ExpandGamut;
    float ToneCurveAmount;
    float FilmSlope;
    float FilmToe;
    float FilmShoulder;
    float FilmBlackClip;
    float FilmWhiteClip;
    FLinearColor FilmWhitePoint;
    FLinearColor FilmShadowTint;
    float FilmShadowTintBlend;
    float FilmShadowTintAmount;
    float FilmSaturation;
    FLinearColor FilmChannelMixerRed;
    FLinearColor FilmChannelMixerGreen;
    FLinearColor FilmChannelMixerBlue;
    float FilmContrast;
    float FilmToeAmount;
    float FilmHealAmount;
    float FilmDynamicRange;
    FLinearColor SceneColorTint;
    float SceneFringeIntensity;
    float ChromaticAberrationStartOffset;
    float BloomIntensity;
    float BloomThreshold;
    float BloomSizeScale;
    float Bloom1Size;
    float Bloom2Size;
    float Bloom3Size;
    float Bloom4Size;
    float Bloom5Size;
    float Bloom6Size;
    FLinearColor Bloom1Tint;
    FLinearColor Bloom2Tint;
    FLinearColor Bloom3Tint;
    FLinearColor Bloom4Tint;
    FLinearColor Bloom5Tint;
    FLinearColor Bloom6Tint;
    float BloomConvolutionSize;
    class UTexture2D* BloomConvolutionTexture;
    FVector2D BloomConvolutionCenterUV;
    float BloomConvolutionPreFilterMin;
    float BloomConvolutionPreFilterMax;
    float BloomConvolutionPreFilterMult;
    float BloomConvolutionBufferScale;
    class UTexture* BloomDirtMask;
    float BloomDirtMaskIntensity;
    FLinearColor BloomDirtMaskTint;
    FLinearColor AmbientCubemapTint;
    float AmbientCubemapIntensity;
    class UTextureCube* AmbientCubemap;
    float CameraShutterSpeed;
    float CameraISO;
    float DepthOfFieldFstop;
    float DepthOfFieldMinFstop;
    int32 DepthOfFieldBladeCount;
    float AutoExposureBias;
    float AutoExposureBiasBackup;
    uint8 bOverride_AutoExposureBiasBackup;
    uint8 AutoExposureApplyPhysicalCameraExposure;
    class UCurveFloat* AutoExposureBiasCurve;
    class UTexture* AutoExposureMeterMask;
    float AutoExposureLowPercent;
    float AutoExposureHighPercent;
    float AutoExposureMinBrightness;
    float AutoExposureMaxBrightness;
    float AutoExposureSpeedUp;
    float AutoExposureSpeedDown;
    float HistogramLogMin;
    float HistogramLogMax;
    float AutoExposureCalibrationConstant;
    float LensFlareIntensity;
    FLinearColor LensFlareTint;
    float LensFlareBokehSize;
    float LensFlareThreshold;
    class UTexture* LensFlareBokehShape;
    FLinearColor LensFlareTints;
    float VignetteIntensity;
    float GrainJitter;
    float GrainIntensity;
    float AmbientOcclusionIntensity;
    float AmbientOcclusionStaticFraction;
    float AmbientOcclusionRadius;
    uint8 AmbientOcclusionRadiusInWS;
    float AmbientOcclusionFadeDistance;
    float AmbientOcclusionFadeRadius;
    float AmbientOcclusionDistance;
    float AmbientOcclusionPower;
    float AmbientOcclusionBias;
    float AmbientOcclusionQuality;
    float AmbientOcclusionMipBlend;
    float AmbientOcclusionMipScale;
    float AmbientOcclusionMipThreshold;
    float AmbientOcclusionTemporalBlendWeight;
    uint8 RayTracingAO;
    int32 RayTracingAOSamplesPerPixel;
    float RayTracingAOIntensity;
    float RayTracingAORadius;
    FLinearColor IndirectLightingColor;
    float IndirectLightingIntensity;
    ERayTracingGlobalIlluminationType RayTracingGIType;
    int32 RayTracingGIMaxBounces;
    int32 RayTracingGISamplesPerPixel;
    float ColorGradingIntensity;
    class UTexture* ColorGradingLUT;
    float DepthOfFieldSensorWidth;
    float DepthOfFieldFocalDistance;
    float DepthOfFieldDepthBlurAmount;
    float DepthOfFieldDepthBlurRadius;
    float DepthOfFieldFocalRegion;
    float DepthOfFieldNearTransitionRegion;
    float DepthOfFieldFarTransitionRegion;
    float DepthOfFieldScale;
    float DepthOfFieldNearBlurSize;
    float DepthOfFieldFarBlurSize;
    float DepthOfFieldOcclusion;
    float DepthOfFieldSkyFocusDistance;
    float DepthOfFieldVignetteSize;
    float MotionBlurAmount;
    float MotionBlurMax;
    int32 MotionBlurTargetFPS;
    float MotionBlurPerObjectSize;
    float LPVIntensity;
    float LPVVplInjectionBias;
    float LPVSize;
    float LPVSecondaryOcclusionIntensity;
    float LPVSecondaryBounceIntensity;
    float LPVGeometryVolumeBias;
    float LPVEmissiveInjectionIntensity;
    float LPVDirectionalOcclusionIntensity;
    float LPVDirectionalOcclusionRadius;
    float LPVDiffuseOcclusionExponent;
    float LPVSpecularOcclusionExponent;
    float LPVDiffuseOcclusionIntensity;
    float LPVSpecularOcclusionIntensity;
    EReflectionsType ReflectionsType;
    float ScreenSpaceReflectionIntensity;
    float ScreenSpaceReflectionQuality;
    float ScreenSpaceReflectionMaxRoughness;
    float RayTracingReflectionsMaxRoughness;
    int32 RayTracingReflectionsMaxBounces;
    int32 RayTracingReflectionsSamplesPerPixel;
    EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows;
    uint8 RayTracingReflectionsTranslucency;
    ETranslucencyType TranslucencyType;
    float RayTracingTranslucencyMaxRoughness;
    int32 RayTracingTranslucencyRefractionRays;
    int32 RayTracingTranslucencySamplesPerPixel;
    EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows;
    uint8 RayTracingTranslucencyRefraction;
    int32 PathTracingMaxBounces;
    int32 PathTracingSamplesPerPixel;
    float PathTracingFilterWidth;
    uint8 PathTracingEnableEmissive;
    float PathTracingMaxPathExposure;
    uint8 PathTracingEnableDenoiser;
    float LPVFadeRange;
    float LPVDirectionalOcclusionFadeRange;
    float ScreenPercentage;
    FWeightedBlendables WeightedBlendables;

};

struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
{
    FTransform Transform;
    FGuid LightGuid;
    int32 PreviewShadowMapChannel;

};

struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
{
    FGuid LightGuid;
    float AverageBrightness;

};

struct FPredictProjectilePathParams
{
    FVector StartLocation;
    FVector LaunchVelocity;
    bool bTraceWithCollision;
    float ProjectileRadius;
    float MaxSimTime;
    bool bTraceWithChannel;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    TArray<class AActor*> ActorsToIgnore;
    float SimFrequency;
    float OverrideGravityZ;
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
    float DrawDebugTime;
    bool bTraceComplex;

};

struct FPredictProjectilePathPointData
{
    FVector Location;
    FVector Velocity;
    float Time;

};

struct FPredictProjectilePathResult
{
    TArray<FPredictProjectilePathPointData> PathData;
    FPredictProjectilePathPointData LastTraceDestination;
    FHitResult HitResult;

};

struct FPreviewAssetAttachContainer
{
    TArray<FPreviewAttachedObjectPair> AttachedObjects;

};

struct FPreviewAttachedObjectPair
{
    TSoftObjectPtr<UObject> AttachedObject;
    class UObject* Object;
    FName AttachedTo;

};

struct FPreviewMeshCollectionEntry
{
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

};

struct FPrimaryAssetRules
{
    int32 Priority;
    int32 ChunkId;
    bool bApplyRecursively;
    EPrimaryAssetCookRule CookRule;

};

struct FPrimaryAssetRulesCustomOverride
{
    FPrimaryAssetType PrimaryAssetType;
    FDirectoryPath FilterDirectory;
    FString FilterString;
    FPrimaryAssetRules Rules;

};

struct FPrimaryAssetRulesOverride
{
    FPrimaryAssetId PrimaryAssetId;
    FPrimaryAssetRules Rules;

};

struct FPrimaryAssetTypeInfo
{
    FName PrimaryAssetType;
    TSoftClassPtr<UObject> AssetBaseClass;
    UClass* AssetBaseClassLoaded;
    bool bHasBlueprintClasses;
    bool bIsEditorOnly;
    TArray<FDirectoryPath> Directories;
    TArray<FSoftObjectPath> SpecificAssets;
    FPrimaryAssetRules Rules;
    TArray<FString> AssetScanPaths;
    bool bIsDynamicAsset;
    int32 NumberOfAssets;

};

struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
{
    FTransform ComponentTransform;
    int32 VisibilityId;
    class UPrimitiveComponent* LODParent;

};

struct FPrimitiveMaterialRef
{
    class UPrimitiveComponent* Primitive;
    class UDecalComponent* Decal;
    int32 ElementIndex;

};

struct FPurchaseInfo
{
    FString Identifier;
    FString DisplayName;
    FString DisplayDescription;
    FString DisplayPrice;

};

struct FQuartzClockSettings
{
    FQuartzTimeSignature TimeSignature;
    bool bIgnoreLevelChange;

};

struct FQuartzPulseOverrideStep
{
    int32 NumberOfPulses;
    EQuartzCommandQuantization PulseDuration;

};

struct FQuartzQuantizationBoundary
{
    EQuartzCommandQuantization Quantization;
    float Multiplier;
    EQuarztQuantizationReference CountingReferencePoint;
    bool bFireOnClockStart;

};

struct FQuartzTimeSignature
{
    int32 NumBeats;
    EQuartzTimeSignatureQuantization BeatType;
    TArray<FQuartzPulseOverrideStep> OptionalPulseOverride;

};

struct FQuartzTransportTimeStamp
{
    int32 Bars;
    int32 Beat;
    float BeatFraction;
    float Seconds;

};

struct FQueuedDrawDebugItem
{
    TEnumAsByte<EDrawDebugItemType::Type> ItemType;
    FVector StartLoc;
    FVector EndLoc;
    FVector Center;
    FRotator Rotation;
    float Radius;
    float Size;
    int32 Segments;
    FColor Color;
    bool bPersistentLines;
    float LifeTime;
    float Thickness;
    FString Message;
    FVector2D TextScale;

};

struct FRadialDamageEvent : public FDamageEvent
{
    FRadialDamageParams Params;
    FVector Origin;
    TArray<FHitResult> ComponentHits;

};

struct FRadialDamageParams
{
    float BaseDamage;
    float MinimumDamage;
    float InnerRadius;
    float OuterRadius;
    float DamageFalloff;

};

struct FRawAnimSequenceTrack
{
    TArray<FVector> PosKeys;
    TArray<FQuat> RotKeys;
    TArray<FVector> ScaleKeys;

};

struct FRawCurveTracks
{
    TArray<FFloatCurve> FloatCurves;

};

struct FRawDistribution
{
    FDistributionLookupTable Table;

};

struct FRawDistributionFloat : public FRawDistribution
{
    float MinValue;
    float MaxValue;
    class UDistributionFloat* Distribution;

};

struct FRawDistributionVector : public FRawDistribution
{
    float MinValue;
    float MaxValue;
    FVector MinValueVec;
    FVector MaxValueVec;
    class UDistributionVector* Distribution;

};

struct FRealCurve : public FIndexedCurve
{
    float DefaultValue;
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;

};

struct FRedirector
{
    FName OldName;
    FName NewName;

};

struct FReferencePose
{
    FName PoseName;
    TArray<FTransform> ReferencePose;

};

struct FRepAttachment
{
    class AActor* AttachParent;
    FVector_NetQuantize100 LocationOffset;
    FVector_NetQuantize100 RelativeScale3D;
    FRotator RotationOffset;
    FName AttachSocket;
    class USceneComponent* AttachComponent;

};

struct FRepMovement
{
    FVector LinearVelocity;
    FVector AngularVelocity;
    FVector Location;
    FRotator Rotation;
    uint8 bSimulatedPhysicSleep;
    uint8 bRepPhysics;
    EVectorQuantization LocationQuantizationLevel;
    EVectorQuantization VelocityQuantizationLevel;
    ERotatorQuantization RotationQuantizationLevel;

};

struct FRepRootMotionMontage
{
    bool bIsActive;
    class UAnimMontage* AnimMontage;
    float Position;
    FVector_NetQuantize100 Location;
    FRotator Rotation;
    class UPrimitiveComponent* MovementBase;
    FName MovementBaseBoneName;
    bool bRelativePosition;
    bool bRelativeRotation;
    FRootMotionSourceGroup AuthoritativeRootMotion;
    FVector_NetQuantize10 Acceleration;
    FVector_NetQuantize10 LinearVelocity;

};

struct FReplicatedStaticActorDestructionInfo
{
    UClass* ObjClass;

};

struct FResponseChannel
{
    FName Channel;
    TEnumAsByte<ECollisionResponse> Response;

};

struct FReverbSettings
{
    bool bApplyReverb;
    class UReverbEffect* ReverbEffect;
    class USoundEffectSubmixPreset* ReverbPluginEffect;
    float Volume;
    float FadeTime;

};

struct FRichCurve : public FRealCurve
{
    TArray<FRichCurveKey> Keys;

};

struct FRichCurveKey
{
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    float Time;
    float Value;
    float ArriveTangent;
    float ArriveTangentWeight;
    float LeaveTangent;
    float LeaveTangentWeight;

};

struct FRigConfiguration
{
    class URig* Rig;
    TArray<FNameMapping> BoneMappingTable;

};

struct FRigTransformConstraint
{
    TEnumAsByte<EConstraintTransform::Type> TranformType;
    FName ParentSpace;
    float Weight;

};

struct FRigidBodyContactInfo
{
    FVector ContactPosition;
    FVector ContactNormal;
    float ContactPenetration;
    class UPhysicalMaterial* PhysMaterial;

};

struct FRigidBodyErrorCorrection
{
    float PingExtrapolation;
    float PingLimit;
    float ErrorPerLinearDifference;
    float ErrorPerAngularDifference;
    float MaxRestoredStateError;
    float MaxLinearHardSnapDistance;
    float PositionLerp;
    float AngleLerp;
    float LinearVelocityCoefficient;
    float AngularVelocityCoefficient;
    float ErrorAccumulationSeconds;
    float ErrorAccumulationDistanceSq;
    float ErrorAccumulationSimilarity;

};

struct FRigidBodyState
{
    FVector_NetQuantize100 Position;
    FQuat Quaternion;
    FVector_NetQuantize100 LinVel;
    FVector_NetQuantize100 AngVel;
    uint8 Flags;

};

struct FRollbackNetStartupActorInfo
{
    class UObject* Archetype;
    class ULevel* Level;
    TArray<class UObject*> ObjReferences;

};

struct FRootMotionExtractionStep
{
    class UAnimSequence* AnimSequence;
    float StartPosition;
    float EndPosition;

};

struct FRootMotionFinishVelocitySettings
{
    ERootMotionFinishVelocityMode Mode;
    FVector SetVelocity;
    float ClampVelocity;

};

struct FRootMotionMovementParams
{
    bool bHasRootMotion;
    float BlendWeight;
    FTransform RootMotionTransform;

};

struct FRootMotionSource
{
    uint16 Priority;
    uint16 LocalID;
    ERootMotionAccumulateMode AccumulateMode;
    FName InstanceName;
    float StartTime;
    float CurrentTime;
    float PreviousTime;
    float Duration;
    FRootMotionSourceStatus Status;
    FRootMotionSourceSettings Settings;
    bool bInLocalSpace;
    FRootMotionMovementParams RootMotionParams;
    FRootMotionFinishVelocitySettings FinishVelocityParams;

};

struct FRootMotionSourceGroup
{
    uint8 bHasAdditiveSources;
    uint8 bHasOverrideSources;
    uint8 bHasOverrideSourcesWithIgnoreZAccumulate;
    uint8 bIsAdditiveVelocityApplied;
    FRootMotionSourceSettings LastAccumulatedSettings;
    FVector_NetQuantize10 LastPreAdditiveVelocity;

};

struct FRootMotionSourceSettings
{
    uint8 Flags;

};

struct FRootMotionSourceStatus
{
    uint8 Flags;

};

struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
    FVector force;
    class UCurveFloat* StrengthOverTime;

};

struct FRootMotionSource_JumpForce : public FRootMotionSource
{
    FRotator Rotation;
    float Distance;
    float Height;
    bool bDisableTimeout;
    class UCurveVector* PathOffsetCurve;
    class UCurveFloat* TimeMappingCurve;

};

struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
    FVector StartLocation;
    FVector InitialTargetLocation;
    FVector TargetLocation;
    bool bRestrictSpeedToExpected;
    class UCurveVector* PathOffsetCurve;
    class UCurveFloat* TimeMappingCurve;

};

struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
    FVector StartLocation;
    FVector TargetLocation;
    bool bRestrictSpeedToExpected;
    class UCurveVector* PathOffsetCurve;

};

struct FRootMotionSource_RadialForce : public FRootMotionSource
{
    FVector Location;
    class AActor* LocationActor;
    float Radius;
    float Strength;
    bool bIsPush;
    bool bNoZForce;
    class UCurveFloat* StrengthDistanceFalloff;
    class UCurveFloat* StrengthOverTime;
    bool bUseFixedWorldDirection;
    FRotator FixedWorldDirection;

};

struct FRotationTrack
{
    TArray<FQuat> RotKeys;
    TArray<float> Times;

};

struct FRuntimeCurveLinearColor
{
    FRichCurve ColorCurves;
    class UCurveLinearColor* ExternalCurve;

};

struct FRuntimeFloatCurve
{
    FRichCurve EditorCurveData;
    class UCurveFloat* ExternalCurve;

};

struct FRuntimeVirtualTextureParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    class URuntimeVirtualTexture* ParameterValue;
    FGuid ExpressionGUID;

};

struct FScalarMaterialInput : public FMaterialInput
{
};

struct FScalarParameterAtlasInstanceData
{
    bool bIsUsedAsAtlasPosition;
    TSoftObjectPtr<UCurveLinearColor> Curve;
    TSoftObjectPtr<UCurveLinearColorAtlas> Atlas;

};

struct FScalarParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    float ParameterValue;
    FGuid ExpressionGUID;

};

struct FScaleTrack
{
    TArray<FVector> ScaleKeys;
    TArray<float> Times;

};

struct FSceneComponentInstanceData : public FActorComponentInstanceData
{
    TMap<class USceneComponent*, class FTransform> AttachedInstanceComponents;

};

struct FSceneViewExtensionIsActiveFunctor
{
};

struct FScreenMessageString
{
    uint64 Key;
    FString ScreenMessage;
    FColor DisplayColor;
    float TimeToDisplay;
    float CurrentTimeDisplayed;
    FVector2D TextScale;

};

struct FShadingModelMaterialInput : public FMaterialInput
{
};

struct FSimpleCurve : public FRealCurve
{
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TArray<FSimpleCurveKey> Keys;

};

struct FSimpleCurveKey
{
    float Time;
    float Value;

};

struct FSimpleMemberReference
{
    class UObject* MemberParent;
    FName MemberName;
    FGuid MemberGuid;

};

struct FSimulatedRootMotionReplicatedMove
{
    float Time;
    FRepRootMotionMontage RootMotion;

};

struct FSingleAnimationPlayData
{
    class UAnimationAsset* AnimToPlay;
    uint8 bSavedLooping;
    uint8 bSavedPlaying;
    float SavedPosition;
    float SavedPlayRate;

};

struct FSkelMeshComponentLODInfo
{
    TArray<bool> HiddenMaterials;

};

struct FSkelMeshSkinWeightInfo
{
    int32 Bones;
    uint8 Weights;

};

struct FSkeletalMaterial
{
    class UMaterialInterface* MaterialInterface;
    FName MaterialSlotName;
    FMeshUVChannelInfo UVChannelData;

};

struct FSkeletalMeshBuildSettings
{
    uint8 bRecomputeNormals;
    uint8 bRecomputeTangents;
    uint8 bUseMikkTSpace;
    uint8 bComputeWeightedNormals;
    uint8 bRemoveDegenerates;
    uint8 bUseHighPrecisionTangentBasis;
    uint8 bUseFullPrecisionUVs;
    uint8 bBuildAdjacencyBuffer;
    float ThresholdPosition;
    float ThresholdTangentNormal;
    float ThresholdUV;
    float MorphThresholdPosition;

};

struct FSkeletalMeshClothBuildParams
{
    TWeakObjectPtr<class UClothingAssetBase> TargetAsset;
    int32 TargetLod;
    bool bRemapParameters;
    FString AssetName;
    int32 LODIndex;
    int32 SourceSection;
    bool bRemoveFromMesh;
    TSoftObjectPtr<UPhysicsAsset> PhysicsAsset;

};

struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
};

struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
};

struct FSkeletalMeshLODGroupSettings
{
    FPerPlatformFloat ScreenSize;
    float LODHysteresis;
    EBoneFilterActionOption BoneFilterActionOption;
    TArray<FBoneFilter> BoneList;
    TArray<FName> BonesToPrioritize;
    float WeightOfPrioritization;
    class UAnimSequence* BakePose;
    FSkeletalMeshOptimizationSettings ReductionSettings;

};

struct FSkeletalMeshLODInfo
{
    FPerPlatformFloat ScreenSize;
    float LODHysteresis;
    TArray<int32> LODMaterialMap;
    FSkeletalMeshBuildSettings BuildSettings;
    FSkeletalMeshOptimizationSettings ReductionSettings;
    TArray<FBoneReference> BonesToRemove;
    TArray<FBoneReference> BonesToPrioritize;
    float WeightOfPrioritization;
    class UAnimSequence* BakePose;
    class UAnimSequence* BakePoseOverride;
    FString SourceImportFilename;
    ESkinCacheUsage SkinCacheUsage;
    uint8 bHasBeenSimplified;
    uint8 bHasPerLODVertexColors;
    uint8 bAllowCPUAccess;
    uint8 bSupportUniformlyDistributedSampling;

};

struct FSkeletalMeshOptimizationSettings
{
    TEnumAsByte<SkeletalMeshTerminationCriterion> TerminationCriterion;
    float NumOfTrianglesPercentage;
    float NumOfVertPercentage;
    uint32 MaxNumOfTriangles;
    uint32 MaxNumOfVerts;
    float MaxDeviationPercentage;
    TEnumAsByte<SkeletalMeshOptimizationType> ReductionMethod;
    TEnumAsByte<SkeletalMeshOptimizationImportance> SilhouetteImportance;
    TEnumAsByte<SkeletalMeshOptimizationImportance> TextureImportance;
    TEnumAsByte<SkeletalMeshOptimizationImportance> ShadingImportance;
    TEnumAsByte<SkeletalMeshOptimizationImportance> SkinningImportance;
    uint8 bRemapMorphTargets;
    uint8 bRecalcNormals;
    float WeldingThreshold;
    float NormalsThreshold;
    int32 MaxBonesPerVertex;
    uint8 bEnforceBoneBoundaries;
    float VolumeImportance;
    uint8 bLockEdges;
    uint8 bLockColorBounaries;
    int32 BaseLOD;

};

struct FSkeletalMeshSamplingBuiltData
{
    TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData;
    TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;

};

struct FSkeletalMeshSamplingInfo
{
    TArray<FSkeletalMeshSamplingRegion> Regions;
    FSkeletalMeshSamplingBuiltData BuiltData;

};

struct FSkeletalMeshSamplingLODBuiltData
{
};

struct FSkeletalMeshSamplingRegion
{
    FName Name;
    int32 LODIndex;
    uint8 bSupportUniformlyDistributedSampling;
    TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;
    TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;

};

struct FSkeletalMeshSamplingRegionBoneFilter
{
    FName BoneName;
    uint8 bIncludeOrExclude;
    uint8 bApplyToChildren;

};

struct FSkeletalMeshSamplingRegionBuiltData
{
};

struct FSkeletalMeshSamplingRegionMaterialFilter
{
    FName MaterialName;

};

struct FSkeletonToMeshLinkup
{
    TArray<int32> SkeletonToMeshTable;
    TArray<int32> MeshToSkeletonTable;

};

struct FSkinWeightProfileInfo
{
    FName Name;
    FPerPlatformBool DefaultProfile;
    FPerPlatformInt DefaultProfileFromLODIndex;

};

struct FSkinWeightProfileManagerTickFunction : public FTickFunction
{
};

struct FSlotAnimationTrack
{
    FName slotName;
    FAnimTrack AnimTrack;

};

struct FSlotEvaluationPose
{
    TEnumAsByte<EAdditiveAnimationType> AdditiveType;
    float Weight;

};

struct FSmartName
{
    FName DisplayName;

};

struct FSmartNameContainer
{
};

struct FSmartNameMapping
{
};

struct FSolverIterations
{
    float FixedTimeStep;
    int32 SolverIterations;
    int32 JointIterations;
    int32 CollisionIterations;
    int32 SolverPushOutIterations;
    int32 JointPushOutIterations;
    int32 CollisionPushOutIterations;

};

struct FSoundAttenuationPluginSettings
{
    TArray<class USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;
    TArray<class UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray;
    TArray<class UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray;

};

struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
    uint8 bAttenuate;
    uint8 bSpatialize;
    uint8 bAttenuateWithLPF;
    uint8 bEnableListenerFocus;
    uint8 bEnableFocusInterpolation;
    uint8 bEnableOcclusion;
    uint8 bUseComplexCollisionForOcclusion;
    uint8 bEnableReverbSend;
    uint8 bEnablePriorityAttenuation;
    uint8 bApplyNormalizationToStereoSounds;
    uint8 bEnableLogFrequencyScaling;
    uint8 bEnableSubmixSends;
    TEnumAsByte<ESoundSpatializationAlgorithm> SpatializationAlgorithm;
    float BinauralRadius;
    EAirAbsorptionMethod AbsorptionMethod;
    TEnumAsByte<ECollisionChannel> OcclusionTraceChannel;
    EReverbSendMethod ReverbSendMethod;
    EPriorityAttenuationMethod PriorityAttenuationMethod;
    float OmniRadius;
    float StereoSpread;
    float LPFRadiusMin;
    float LPFRadiusMax;
    FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve;
    FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve;
    float LPFFrequencyAtMin;
    float LPFFrequencyAtMax;
    float HPFFrequencyAtMin;
    float HPFFrequencyAtMax;
    float FocusAzimuth;
    float NonFocusAzimuth;
    float FocusDistanceScale;
    float NonFocusDistanceScale;
    float FocusPriorityScale;
    float NonFocusPriorityScale;
    float FocusVolumeAttenuation;
    float NonFocusVolumeAttenuation;
    float FocusAttackInterpSpeed;
    float FocusReleaseInterpSpeed;
    float OcclusionLowPassFilterFrequency;
    float OcclusionVolumeAttenuation;
    float OcclusionInterpolationTime;
    float ReverbWetLevelMin;
    float ReverbWetLevelMax;
    float ReverbDistanceMin;
    float ReverbDistanceMax;
    float ManualReverbSendLevel;
    FRuntimeFloatCurve CustomReverbSendCurve;
    TArray<FAttenuationSubmixSendSettings> SubmixSendSettings;
    float PriorityAttenuationMin;
    float PriorityAttenuationMax;
    float PriorityAttenuationDistanceMin;
    float PriorityAttenuationDistanceMax;
    float ManualPriorityAttenuation;
    FRuntimeFloatCurve CustomPriorityAttenuationCurve;
    FSoundAttenuationPluginSettings PluginSettings;

};

struct FSoundClassAdjuster
{
    class USoundClass* SoundClassObject;
    float VolumeAdjuster;
    float PitchAdjuster;
    float LowPassFilterFrequency;
    uint8 bApplyToChildren;
    float VoiceCenterChannelVolumeAdjuster;

};

struct FSoundClassEditorData
{
};

struct FSoundClassProperties
{
    float Volume;
    float Pitch;
    float LowPassFilterFrequency;
    float AttenuationDistanceScale;
    float LFEBleed;
    float VoiceCenterChannelVolume;
    float RadioFilterVolume;
    float RadioFilterVolumeThreshold;
    uint8 bApplyEffects;
    uint8 bAlwaysPlay;
    uint8 bIsUISound;
    uint8 bIsMusic;
    uint8 bCenterChannelOnly;
    uint8 bApplyAmbientVolumes;
    uint8 bReverb;
    float Default2DReverbSendAmount;
    FSoundModulationDefaultSettings ModulationSettings;
    TEnumAsByte<EAudioOutputTarget::Type> OutputTarget;
    ESoundWaveLoadingBehavior LoadingBehavior;
    class USoundSubmix* DefaultSubmix;

};

struct FSoundConcurrencySettings
{
    int32 MaxCount;
    uint8 bLimitToOwner;
    TEnumAsByte<EMaxConcurrentResolutionRule::Type> ResolutionRule;
    float RetriggerTime;
    float VolumeScale;
    EConcurrencyVolumeScaleMode VolumeScaleMode;
    float VolumeScaleAttackTime;
    uint8 bVolumeScaleCanRelease;
    float VolumeScaleReleaseTime;
    float VoiceStealReleaseTime;

};

struct FSoundDebugEntry
{
    FName DebugName;
    FSoftObjectPath Sound;

};

struct FSoundGroup
{
    TEnumAsByte<ESoundGroup> SoundGroup;
    FString DisplayName;
    uint8 bAlwaysDecompressOnLoad;
    float DecompressedDuration;

};

struct FSoundModulationDefaultRoutingSettings : public FSoundModulationDefaultSettings
{
    EModulationRouting VolumeRouting;
    EModulationRouting PitchRouting;
    EModulationRouting HighpassRouting;
    EModulationRouting LowpassRouting;

};

struct FSoundModulationDefaultSettings
{
    FSoundModulationDestinationSettings VolumeModulationDestination;
    FSoundModulationDestinationSettings PitchModulationDestination;
    FSoundModulationDestinationSettings HighpassModulationDestination;
    FSoundModulationDestinationSettings LowpassModulationDestination;

};

struct FSoundModulationDestinationSettings
{
    float Value;
    class USoundModulatorBase* Modulator;

};

struct FSoundNodeEditorData
{
};

struct FSoundSourceBusSendInfo
{
    ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod;
    class USoundSourceBus* SoundSourceBus;
    class UAudioBus* AudioBus;
    float SendLevel;
    float MinSendLevel;
    float MaxSendLevel;
    float MinSendDistance;
    float MaxSendDistance;
    FRuntimeFloatCurve CustomSendLevelCurve;

};

struct FSoundSubmixSendInfo
{
    ESendLevelControlMethod SendLevelControlMethod;
    ESubmixSendStage SendStage;
    class USoundSubmixBase* SoundSubmix;
    float SendLevel;
    float MinSendLevel;
    float MaxSendLevel;
    float MinSendDistance;
    float MaxSendDistance;
    FRuntimeFloatCurve CustomSendLevelCurve;

};

struct FSoundSubmixSpectralAnalysisBandSettings
{
    float BandFrequency;
    int32 AttackTimeMsec;
    int32 ReleaseTimeMsec;
    float QFactor;

};

struct FSoundTrackKey
{
    float Time;
    float Volume;
    float Pitch;
    class USoundBase* Sound;

};

struct FSoundWaveEnvelopeDataPerSound
{
    float Envelope;
    float PlaybackTime;
    class USoundWave* SoundWave;

};

struct FSoundWaveEnvelopeTimeData
{
    float Amplitude;
    float TimeSec;

};

struct FSoundWaveSpectralData
{
    float FrequencyHz;
    float Magnitude;
    float NormalizedMagnitude;

};

struct FSoundWaveSpectralDataEntry
{
    float Magnitude;
    float NormalizedMagnitude;

};

struct FSoundWaveSpectralDataPerSound
{
    TArray<FSoundWaveSpectralData> SpectralData;
    float PlaybackTime;
    class USoundWave* SoundWave;

};

struct FSoundWaveSpectralTimeData
{
    TArray<FSoundWaveSpectralDataEntry> Data;
    float TimeSec;

};

struct FSourceEffectChainEntry
{
    class USoundEffectSourcePreset* Preset;
    uint8 bBypass;

};

struct FSplineCurves
{
    FInterpCurveVector Position;
    FInterpCurveQuat Rotation;
    FInterpCurveVector Scale;
    FInterpCurveFloat ReparamTable;
    class USplineMetadata* MetaData;
    uint32 Version;

};

struct FSplineInstanceData : public FSceneComponentInstanceData
{
    bool bSplineHasBeenEdited;
    FSplineCurves SplineCurves;
    FSplineCurves SplineCurvesPreUCS;

};

struct FSplineMeshInstanceData : public FSceneComponentInstanceData
{
    FVector StartPos;
    FVector EndPos;
    FVector StartTangent;
    FVector EndTangent;

};

struct FSplineMeshParams
{
    FVector StartPos;
    FVector StartTangent;
    FVector2D StartScale;
    float StartRoll;
    FVector2D StartOffset;
    FVector EndPos;
    FVector2D EndScale;
    FVector EndTangent;
    float EndRoll;
    FVector2D EndOffset;

};

struct FSplinePoint
{
    float InputKey;
    FVector Position;
    FVector ArriveTangent;
    FVector LeaveTangent;
    FRotator Rotation;
    FVector Scale;
    TEnumAsByte<ESplinePointType::Type> Type;

};

struct FSpriteCategoryInfo
{
    FName Category;
    FText DisplayName;
    FText Description;

};

struct FStartPhysicsTickFunction : public FTickFunction
{
};

struct FStatColorMapEntry
{
    float In;
    FColor Out;

};

struct FStatColorMapping
{
    FString StatName;
    TArray<FStatColorMapEntry> ColorMap;
    uint8 DisableBlend;

};

struct FStateMachineDebugData
{
};

struct FStateMachineStateDebugData
{
};

struct FStaticComponentMaskParameter : public FStaticParameterBase
{
    bool R;
    bool G;
    bool B;
    bool A;

};

struct FStaticComponentMaskValue
{
    bool R;
    bool G;
    bool B;
    bool A;

};

struct FStaticMaterial
{
    class UMaterialInterface* MaterialInterface;
    FName MaterialSlotName;
    FName ImportedMaterialSlotName;
    FMeshUVChannelInfo UVChannelData;

};

struct FStaticMaterialLayersParameter : public FStaticParameterBase
{
    FMaterialLayersFunctions Value;

};

struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
{
    class UStaticMesh* StaticMesh;
    TArray<FStaticMeshVertexColorLODData> VertexColorLODs;
    TArray<FGuid> CachedStaticLighting;
    TArray<FStreamingTextureBuildInfo> StreamingTextureData;

};

struct FStaticMeshComponentLODInfo
{
};

struct FStaticMeshOptimizationSettings
{
    TEnumAsByte<EOptimizationType> ReductionMethod;
    float NumOfTrianglesPercentage;
    float MaxDeviationPercentage;
    float WeldingThreshold;
    bool bRecalcNormals;
    float NormalsThreshold;
    uint8 SilhouetteImportance;
    uint8 TextureImportance;
    uint8 ShadingImportance;

};

struct FStaticMeshSourceModel
{
    FMeshBuildSettings BuildSettings;
    FMeshReductionSettings ReductionSettings;
    float LODDistance;
    FPerPlatformFloat ScreenSize;
    FString SourceImportFilename;

};

struct FStaticMeshVertexColorLODData
{
    TArray<FPaintedVertex> PaintedVertices;
    TArray<FColor> VertexBufferColors;
    uint32 LODIndex;

};

struct FStaticParameterBase
{
    FMaterialParameterInfo ParameterInfo;
    bool bOverride;
    FGuid ExpressionGUID;

};

struct FStaticParameterSet
{
    TArray<FStaticSwitchParameter> StaticSwitchParameters;
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters;
    TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;
    TArray<FStaticMaterialLayersParameter> MaterialLayersParameters;

};

struct FStaticSwitchParameter : public FStaticParameterBase
{
    bool Value;

};

struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase
{
    int32 WeightmapIndex;
    bool bWeightBasedBlend;

};

struct FStreamableTextureInstance
{
};

struct FStreamedAudioPlatformData
{
};

struct FStreamingLevelsToConsider
{
    TArray<class ULevelStreaming*> StreamingLevels;

};

struct FStreamingRenderAssetPrimitiveInfo
{
    class UStreamableRenderAsset* RenderAsset;
    FBoxSphereBounds Bounds;
    float TexelFactor;
    uint32 PackedRelativeBox;
    uint8 bAllowInvalidTexelFactorWhenUnregistered;

};

struct FStreamingTextureBuildInfo
{
    uint32 PackedRelativeBox;
    int32 TextureLevelIndex;
    float TexelFactor;

};

struct FStringCurve : public FIndexedCurve
{
    FString DefaultValue;
    TArray<FStringCurveKey> Keys;

};

struct FStringCurveKey
{
    float Time;
    FString Value;

};

struct FStructRedirect
{
    FName OldStructName;
    FName NewStructName;

};

struct FSubTrackGroup
{
    FString GroupName;
    TArray<int32> TrackIndices;
    uint8 bIsCollapsed;
    uint8 bIsSelected;

};

struct FSubsurfaceProfileStruct
{
    FLinearColor SurfaceAlbedo;
    FLinearColor MeanFreePathColor;
    float MeanFreePathDistance;
    float WorldUnitScale;
    bool bEnableBurley;
    float ScatterRadius;
    FLinearColor SubsurfaceColor;
    FLinearColor FalloffColor;
    FLinearColor BoundaryColorBleed;
    float ExtinctionScale;
    float NormalScale;
    float ScatteringDistribution;
    float IOR;
    float Roughness0;
    float Roughness1;
    float LobeMix;
    FLinearColor TransmissionTintColor;

};

struct FSubtitleCue
{
    FText Text;
    float Time;

};

struct FSupportedSubTrackInfo
{
    TSubclassOf<class UInterpTrack> SupportedClass;
    FString SubTrackName;
    int32 GroupIndex;

};

struct FSwarmDebugOptions
{
    uint8 bDistributionEnabled;
    uint8 bForceContentExport;
    uint8 bInitialized;

};

struct FTTEventTrack : public FTTTrackBase
{
    FName FunctionName;
    class UCurveFloat* CurveKeys;

};

struct FTTFloatTrack : public FTTPropertyTrack
{
    class UCurveFloat* CurveFloat;

};

struct FTTLinearColorTrack : public FTTPropertyTrack
{
    class UCurveLinearColor* CurveLinearColor;

};

struct FTTPropertyTrack : public FTTTrackBase
{
    FName PropertyName;

};

struct FTTTrackBase
{
    FName TrackName;
    bool bIsExternalCurve;

};

struct FTTTrackId
{
    int32 TrackType;
    int32 TrackIndex;

};

struct FTTVectorTrack : public FTTPropertyTrack
{
    class UCurveVector* CurveVector;

};

struct FTViewTarget
{
    class AActor* Target;
    FMinimalViewInfo POV;
    class APlayerState* PlayerState;

};

struct FTableRowBase
{
};

struct FTentDistribution
{
    float TipAltitude;
    float TipValue;
    float Width;

};

struct FTextSizingParameters
{
    float DrawX;
    float DrawY;
    float DrawXL;
    float DrawYL;
    FVector2D Scaling;
    class UFont* DrawFont;
    FVector2D SpacingAdjust;

};

struct FTextureFormatSettings
{
    TEnumAsByte<TextureCompressionSettings> CompressionSettings;
    uint8 CompressionNoAlpha;
    uint8 CompressionNone;
    uint8 CompressionYCoCg;
    uint8 sRGB;

};

struct FTextureLODGroup
{
    TEnumAsByte<TextureGroup> Group;
    int32 LODBias;
    int32 LODBias_Smaller;
    int32 LODBias_Smallest;
    int32 NumStreamedMips;
    TEnumAsByte<TextureMipGenSettings> MipGenSettings;
    int32 MinLODSize;
    int32 MaxLODSize;
    int32 MaxLODSize_Smaller;
    int32 MaxLODSize_Smallest;
    int32 OptionalLODBias;
    int32 OptionalMaxLODSize;
    FName MinMagFilter;
    FName MipFilter;
    ETextureMipLoadOptions MipLoadOptions;
    bool HighPriorityLoad;
    bool DuplicateNonOptionalMips;
    float Downscale;
    ETextureDownscaleOptions DownscaleOptions;
    int32 VirtualTextureTileCountBias;
    int32 VirtualTextureTileSizeBias;
    TEnumAsByte<ETextureLossyCompressionAmount> LossyCompressionAmount;

};

struct FTextureParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    class UTexture* ParameterValue;
    FGuid ExpressionGUID;

};

struct FTexturePlatformData
{
};

struct FTextureSource
{
};

struct FTextureSourceBlock
{
    int32 BlockX;
    int32 BlockY;
    int32 SizeX;
    int32 SizeY;
    int32 NumSlices;
    int32 NumMips;

};

struct FTickFunction
{
    TEnumAsByte<ETickingGroup> TickGroup;
    TEnumAsByte<ETickingGroup> EndTickGroup;
    uint8 bTickEvenWhenPaused;
    uint8 bCanEverTick;
    uint8 bStartWithTickEnabled;
    uint8 bAllowTickOnDedicatedServer;
    float TickInterval;

};

struct FTickPrerequisite
{
};

struct FTimeStretchCurve
{
    float SamplingRate;
    float CurveValueMinPrecision;
    TArray<FTimeStretchCurveMarker> Markers;
    float Sum_dT_i_by_C_i;

};

struct FTimeStretchCurveInstance
{
    bool bHasValidData;

};

struct FTimeStretchCurveMarker
{
    float Time;
    float alpha;

};

struct FTimeline
{
    TEnumAsByte<ETimelineLengthMode> LengthMode;
    uint8 bLooping;
    uint8 bReversePlayback;
    uint8 bPlaying;
    float Length;
    float PlayRate;
    float Position;
    TArray<FTimelineEventEntry> Events;
    TArray<FTimelineVectorTrack> InterpVectors;
    TArray<FTimelineFloatTrack> InterpFloats;
    TArray<FTimelineLinearColorTrack> InterpLinearColors;
    FTimelineTimelinePostUpdateFunc TimelinePostUpdateFunc;
    void OnTimelineEvent();
    FTimelineTimelineFinishedFunc TimelineFinishedFunc;
    void OnTimelineEvent();
    TWeakObjectPtr<class UObject> PropertySetObject;
    FName DirectionPropertyName;

};

struct FTimelineEventEntry
{
    float Time;
    FTimelineEventEntryEventFunc EventFunc;
    void OnTimelineEvent();

};

struct FTimelineFloatTrack
{
    class UCurveFloat* FloatCurve;
    FTimelineFloatTrackInterpFunc InterpFunc;
    void OnTimelineFloat(float Output);
    FName TrackName;
    FName FloatPropertyName;

};

struct FTimelineLinearColorTrack
{
    class UCurveLinearColor* LinearColorCurve;
    FTimelineLinearColorTrackInterpFunc InterpFunc;
    void OnTimelineLinearColor(FLinearColor Output);
    FName TrackName;
    FName LinearColorPropertyName;

};

struct FTimelineVectorTrack
{
    class UCurveVector* VectorCurve;
    FTimelineVectorTrackInterpFunc InterpFunc;
    void OnTimelineVector(FVector Output);
    FName TrackName;
    FName VectorPropertyName;

};

struct FTimerHandle
{
    uint64 Handle;

};

struct FToggleTrackKey
{
    float Time;
    TEnumAsByte<ETrackToggleAction> ToggleAction;

};

struct FTouchInputControl
{
    class UTexture2D* Image1;
    class UTexture2D* Image2;
    FVector2D Center;
    FVector2D VisualSize;
    FVector2D ThumbSize;
    FVector2D InteractionSize;
    FVector2D InputScale;
    FKey MainInputKey;
    FKey AltInputKey;

};

struct FTrackToSkeletonMap
{
    int32 BoneTreeIndex;

};

struct FTransformBase
{
    FName Node;
    FTransformBaseConstraint Constraints;

};

struct FTransformBaseConstraint
{
    TArray<FRigTransformConstraint> TransformConstraints;

};

struct FTransformCurve : public FAnimCurveBase
{
    FVectorCurve TranslationCurve;
    FVectorCurve RotationCurve;
    FVectorCurve ScaleCurve;

};

struct FTranslationTrack
{
    TArray<FVector> PosKeys;
    TArray<float> Times;

};

struct FTwistConstraint : public FConstraintBaseParams
{
    float TwistLimitDegrees;
    TEnumAsByte<EAngularConstraintMotion> TwistMotion;

};

struct FURL
{
    FString Protocol;
    FString Host;
    int32 Port;
    int32 Valid;
    FString Map;
    FString RedirectURL;
    TArray<FString> Op;
    FString Portal;

};

struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
    TArray<uint8> ReplicationBytes;

};

struct FUpdateLevelStreamingLevelStatus
{
    FName PackageName;
    int32 LODIndex;
    bool bNewShouldBeLoaded;
    bool bNewShouldBeVisible;
    bool bNewShouldBlockOnLoad;

};

struct FUpdateLevelVisibilityLevelInfo
{
    FName PackageName;
    FName Filename;
    uint8 bIsVisible;

};

struct FUserActivity
{
    FString ActionName;

};

struct FVector2MaterialInput : public FMaterialInput
{
};

struct FVector4Distribution
{
    FDistributionLookupTable Table;

};

struct FVectorCurve : public FAnimCurveBase
{
    FRichCurve FloatCurves;

};

struct FVectorDistribution
{
    FDistributionLookupTable Table;

};

struct FVectorMaterialInput : public FMaterialInput
{
};

struct FVectorParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    FLinearColor ParameterValue;
    FGuid ExpressionGUID;

};

struct FVectorRK4SpringInterpolator
{
    float StiffnessConstant;
    float DampeningRatio;

};

struct FVectorSpringState
{
};

struct FVector_NetQuantize : public FVector
{
};

struct FVector_NetQuantize10 : public FVector
{
};

struct FVector_NetQuantize100 : public FVector
{
};

struct FVector_NetQuantizeNormal : public FVector
{
};

struct FVertexOffsetUsage
{
    int32 Usage;

};

struct FViewTargetTransitionParams
{
    float BlendTime;
    TEnumAsByte<EViewTargetBlendFunction> BlendFunction;
    float BlendExp;
    uint8 bLockOutgoing;

};

struct FVirtualBone
{
    FName SourceBoneName;
    FName TargetBoneName;
    FName VirtualBoneName;

};

struct FVirtualTextureBuildSettings
{
    int32 TileSize;
    int32 TileBorderSize;
    bool bEnableCompressCrunch;
    bool bEnableCompressZlib;

};

struct FVirtualTextureSpacePoolConfig
{
    int32 MinTileSize;
    int32 MaxTileSize;
    TArray<TEnumAsByte<EPixelFormat>> Formats;
    int32 SizeInMegabyte;
    bool bAllowSizeScale;
    uint32 ScalabilityGroup;

};

struct FVisibilityTrackKey
{
    float Time;
    TEnumAsByte<EVisibilityTrackAction> Action;
    TEnumAsByte<EVisibilityTrackCondition> ActiveCondition;

};

struct FVoiceSettings
{
    class USceneComponent* ComponentToAttachTo;
    class USoundAttenuation* AttenuationSettings;
    class USoundEffectSourcePresetChain* SourceEffectChain;

};

struct FWalkableSlopeOverride
{
    TEnumAsByte<EWalkableSlopeBehavior> WalkableSlopeBehavior;
    float WalkableSlopeAngle;

};

struct FWeightedBlendable
{
    float Weight;
    class UObject* Object;

};

struct FWeightedBlendables
{
    TArray<FWeightedBlendable> Array;

};

struct FWorldContext
{
    FURL LastURL;
    FURL LastRemoteURL;
    class UPendingNetGame* PendingNetGame;
    TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad;
    TArray<class ULevel*> LoadedLevelsForPendingMapChange;
    TArray<class UObjectReferencer*> ObjectReferencers;
    TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates;
    class UGameViewportClient* GameViewport;
    class UGameInstance* OwningGameInstance;
    TArray<FNamedNetDriver> ActiveNetDrivers;

};

struct FWorldPSCPool
{
    TMap<class UParticleSystem*, class FPSCPool> WorldParticleSystemPools;

};

struct FWrappedStringElement
{
    FString Value;
    FVector2D LineExtent;

};

class AActor : public UObject
{
    FActorTickFunction PrimaryActorTick;
    uint8 bNetTemporary;
    uint8 bNetStartup;
    uint8 bOnlyRelevantToOwner;
    uint8 bAlwaysRelevant;
    uint8 bReplicateMovement;
    uint8 bHidden;
    uint8 bTearOff;
    uint8 bForceNetAddressable;
    uint8 bExchangedRoles;
    uint8 bNetLoadOnClient;
    uint8 bNetUseOwnerRelevancy;
    uint8 bRelevantForNetworkReplays;
    uint8 bRelevantForLevelBounds;
    uint8 bReplayRewindable;
    uint8 bAllowTickBeforeBeginPlay;
    uint8 bAutoDestroyWhenFinished;
    uint8 bCanBeDamaged;
    uint8 bBlockInput;
    uint8 bCollideWhenPlacing;
    uint8 bFindCameraComponentWhenViewTarget;
    uint8 bGenerateOverlapEventsDuringLevelStreaming;
    uint8 bIgnoresOriginShifting;
    uint8 bEnableAutoLODGeneration;
    uint8 bIsEditorOnlyActor;
    uint8 bActorSeamlessTraveled;
    uint8 bReplicates;
    uint8 bCanBeInCluster;
    uint8 bAllowReceiveTickEventOnDedicatedServer;
    uint8 bActorEnableCollision;
    uint8 bActorIsBeingDestroyed;
    EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming;
    EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming;
    TEnumAsByte<ENetRole> RemoteRole;
    FRepMovement ReplicatedMovement;
    float InitialLifeSpan;
    float CustomTimeDilation;
    FRepAttachment AttachmentReplication;
    class AActor* Owner;
    FName NetDriverName;
    TEnumAsByte<ENetRole> Role;
    TEnumAsByte<ENetDormancy> NetDormancy;
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod;
    TEnumAsByte<EAutoReceiveInput::Type> AutoReceiveInput;
    int32 InputPriority;
    class UInputComponent* InputComponent;
    float NetCullDistanceSquared;
    int32 NetTag;
    float NetUpdateFrequency;
    float MinNetUpdateFrequency;
    float NetPriority;
    class APawn* Instigator;
    TArray<class AActor*> Children;
    class USceneComponent* RootComponent;
    TArray<class AMatineeActor*> ControllingMatineeActors;
    TArray<FName> Layers;
    TWeakObjectPtr<class UChildActorComponent> ParentComponent;
    TArray<FName> Tags;
    FActorOnTakeAnyDamage OnTakeAnyDamage;
    void TakeAnyDamageSignature(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    FActorOnTakePointDamage OnTakePointDamage;
    void TakePointDamageSignature(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, class AActor* DamageCauser);
    FActorOnTakeRadialDamage OnTakeRadialDamage;
    void TakeRadialDamageSignature(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, FVector Origin, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    FActorOnActorBeginOverlap OnActorBeginOverlap;
    void ActorBeginOverlapSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    FActorOnActorEndOverlap OnActorEndOverlap;
    void ActorEndOverlapSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    FActorOnBeginCursorOver OnBeginCursorOver;
    void ActorBeginCursorOverSignature(class AActor* TouchedActor);
    FActorOnEndCursorOver OnEndCursorOver;
    void ActorEndCursorOverSignature(class AActor* TouchedActor);
    FActorOnClicked OnClicked;
    void ActorOnClickedSignature(class AActor* TouchedActor, FKey ButtonPressed);
    FActorOnReleased OnReleased;
    void ActorOnReleasedSignature(class AActor* TouchedActor, FKey ButtonReleased);
    FActorOnInputTouchBegin OnInputTouchBegin;
    void ActorOnInputTouchBeginSignature(TEnumAsByte<ETouchIndex::Type> FingerIndex, class AActor* TouchedActor);
    FActorOnInputTouchEnd OnInputTouchEnd;
    void ActorOnInputTouchEndSignature(TEnumAsByte<ETouchIndex::Type> FingerIndex, class AActor* TouchedActor);
    FActorOnInputTouchEnter OnInputTouchEnter;
    void ActorBeginTouchOverSignature(TEnumAsByte<ETouchIndex::Type> FingerIndex, class AActor* TouchedActor);
    FActorOnInputTouchLeave OnInputTouchLeave;
    void ActorEndTouchOverSignature(TEnumAsByte<ETouchIndex::Type> FingerIndex, class AActor* TouchedActor);
    FActorOnActorHit OnActorHit;
    void ActorHitSignature(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    FActorOnDestroyed OnDestroyed;
    void ActorDestroyedSignature(class AActor* DestroyedActor);
    FActorOnEndPlay OnEndPlay;
    void ActorEndPlaySignature(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    TArray<class UActorComponent*> InstanceComponents;
    TArray<class UActorComponent*> BlueprintCreatedComponents;

    bool WasRecentlyRendered(float Tolerance);
    void UserConstructionScript();
    void TearOff();
    void SnapRootComponentTo(class AActor* InParentActor, FName InSocketName);
    void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetReplicates(bool bInReplicates);
    void SetReplicateMovement(bool bInReplicateMovement);
    void SetOwner(class AActor* NewOwner);
    void SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy);
    void SetLifeSpan(float InLifespan);
    void SetAutoDestroyWhenFinished(bool bVal);
    void SetActorTickInterval(float TickInterval);
    void SetActorTickEnabled(bool bEnabled);
    void SetActorScale3D(FVector NewScale3D);
    void SetActorRelativeScale3D(FVector NewRelativeScale);
    void SetActorHiddenInGame(bool bNewHidden);
    void SetActorEnableCollision(bool bNewActorEnableCollision);
    void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceiveActorOnReleased(FKey ButtonReleased);
    void ReceiveActorOnInputTouchLeave(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    void ReceiveActorOnInputTouchEnter(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    void ReceiveActorOnInputTouchEnd(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    void ReceiveActorOnInputTouchBegin(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    void ReceiveActorOnClicked(FKey ButtonPressed);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveActorEndCursorOver();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorBeginCursorOver();
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    void OnRep_ReplicateMovement();
    void OnRep_ReplicatedMovement();
    void OnRep_Owner();
    void OnRep_Instigator();
    void OnRep_AttachmentReplication();
    void MakeNoise(float Loudness, class APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag);
    class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
    bool K2_TeleportTo(FVector DestLocation, FRotator DestRotation);
    bool K2_SetActorTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics);
    void K2_SetActorRelativeTransform(const FTransform& NewRelativeTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_OnReset();
    void K2_OnEndViewTarget(class APlayerController* PC);
    void K2_OnBecomeViewTarget(class APlayerController* PC);
    class USceneComponent* K2_GetRootComponent();
    TArray<class UActorComponent*> K2_GetComponentsByClass(TSubclassOf<class UActorComponent> ComponentClass);
    FRotator K2_GetActorRotation();
    FVector K2_GetActorLocation();
    void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
    void K2_DestroyComponent(class UActorComponent* Component);
    void K2_DestroyActor();
    void K2_AttachToComponent(class USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    void K2_AttachToActor(class AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentToActor(class AActor* InParentActor, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentTo(class USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AddActorWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool IsOverlappingActor(const class AActor* Other);
    bool IsChildActor();
    bool IsActorTickEnabled();
    bool IsActorBeingDestroyed();
    bool HasAuthority();
    float GetVerticalDistanceTo(const class AActor* OtherActor);
    FVector GetVelocity();
    FTransform GetTransform();
    bool GetTickableWhenPaused();
    float GetSquaredHorizontalDistanceTo(const class AActor* OtherActor);
    float GetSquaredDistanceTo(const class AActor* OtherActor);
    TEnumAsByte<ENetRole> GetRemoteRole();
    class UChildActorComponent* GetParentComponent();
    class AActor* GetParentActor();
    class AActor* GetOwner();
    void GetOverlappingComponents(TArray<class UPrimitiveComponent*>& OverlappingComponents);
    void GetOverlappingActors(TArray<class AActor*>& OverlappingActors, TSubclassOf<class AActor> ClassFilter);
    TEnumAsByte<ENetRole> GetLocalRole();
    float GetLifeSpan();
    class AController* GetInstigatorController();
    class APawn* GetInstigator();
    FVector GetInputVectorAxisValue(const FKey InputAxisKey);
    float GetInputAxisValue(const FName InputAxisName);
    float GetInputAxisKeyValue(const FKey InputAxisKey);
    float GetHorizontalDotProductTo(const class AActor* OtherActor);
    float GetHorizontalDistanceTo(const class AActor* OtherActor);
    float GetGameTimeSinceCreation();
    float GetDotProductTo(const class AActor* OtherActor);
    float GetDistanceTo(const class AActor* OtherActor);
    TArray<class UActorComponent*> GetComponentsByTag(TSubclassOf<class UActorComponent> ComponentClass, FName Tag);
    TArray<class UActorComponent*> GetComponentsByInterface(TSubclassOf<class UInterface> Interface);
    class UActorComponent* GetComponentByClass(TSubclassOf<class UActorComponent> ComponentClass);
    FName GetAttachParentSocketName();
    class AActor* GetAttachParentActor();
    void GetAttachedActors(TArray<class AActor*>& OutActors, bool bResetArray);
    void GetAllChildActors(TArray<class AActor*>& ChildActors, bool bIncludeDescendants);
    FVector GetActorUpVector();
    float GetActorTimeDilation();
    float GetActorTickInterval();
    FVector GetActorScale3D();
    FVector GetActorRightVector();
    FVector GetActorRelativeScale3D();
    FVector GetActorForwardVector();
    void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation);
    bool GetActorEnableCollision();
    void GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors);
    void ForceNetUpdate();
    void FlushNetDormancy();
    void FinishAddComponent(class UActorComponent* Component, bool bManualAttachment, const FTransform& RelativeTransform);
    void EnableInput(class APlayerController* PlayerController);
    void DisableInput(class APlayerController* PlayerController);
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);
    void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
    void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
    class UActorComponent* AddComponentByClass(TSubclassOf<class UActorComponent> Class, bool bManualAttachment, const FTransform& RelativeTransform, bool bDeferredFinish);
    class UActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const FTransform& RelativeTransform, const class UObject* ComponentTemplateContext, bool bDeferredFinish);
    bool ActorHasTag(FName Tag);
};

class AAmbientSound : public AActor
{
    class UAudioComponent* AudioComponent;

    void Stop();
    void Play(float StartTime);
    void FadeOut(float FadeoutDuration, float FadeVolumeLevel);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};

class AAtmosphericFog : public AInfo
{
    class UAtmosphericFogComponent* AtmosphericFogComponent;

};

class AAudioVolume : public AVolume
{
    float Priority;
    uint8 bEnabled;
    FReverbSettings Settings;
    FInteriorSettings AmbientZoneSettings;
    TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings;
    TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings;

    void SetSubmixSendSettings(const TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);
    void SetSubmixOverrideSettings(const TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);
    void SetReverbSettings(const FReverbSettings& NewReverbSettings);
    void SetPriority(float NewPriority);
    void SetInteriorSettings(const FInteriorSettings& NewInteriorSettings);
    void SetEnabled(bool bNewEnabled);
    void OnRep_bEnabled();
};

class ABandwidthTestActor : public AActor
{
    FBandwidthTestGenerator BandwidthGenerator;

};

class ABlockingVolume : public AVolume
{
};

class ABoxReflectionCapture : public AReflectionCapture
{
};

class ABrush : public AActor
{
    TEnumAsByte<EBrushType> BrushType;
    FColor BrushColor;
    int32 PolyFlags;
    uint8 bColored;
    uint8 bSolidWhenSelected;
    uint8 bPlaceableFromClassBrowser;
    uint8 bNotForClientOrServer;
    class UModel* Brush;
    class UBrushComponent* BrushComponent;
    uint8 bInManipulation;
    TArray<FGeomSelection> SavedSelections;

};

class ABrushShape : public ABrush
{
};

class ACameraActor : public AActor
{
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;
    class UCameraComponent* CameraComponent;
    class USceneComponent* SceneComponent;
    uint8 bConstrainAspectRatio;
    float AspectRatio;
    float FOVAngle;
    float PostProcessBlendWeight;
    FPostProcessSettings PostProcessSettings;

    int32 GetAutoActivatePlayerIndex();
};

class ACameraBlockingVolume : public AVolume
{
};

class ACameraShakeSourceActor : public AActor
{
    class UCameraShakeSourceComponent* CameraShakeSourceComponent;

};

class ACharacter : public APawn
{
    class USkeletalMeshComponent* Mesh;
    class UCharacterMovementComponent* CharacterMovement;
    class UCapsuleComponent* CapsuleComponent;
    FBasedMovementInfo BasedMovement;
    FBasedMovementInfo ReplicatedBasedMovement;
    float AnimRootMotionTranslationScale;
    FVector BaseTranslationOffset;
    FQuat BaseRotationOffset;
    float ReplicatedServerLastTransformUpdateTimeStamp;
    float ReplayLastTransformUpdateTimeStamp;
    uint8 ReplicatedMovementMode;
    bool bInBaseReplication;
    float CrouchedEyeHeight;
    uint8 bIsCrouched;
    uint8 bProxyIsJumpForceApplied;
    uint8 bPressedJump;
    uint8 bClientUpdating;
    uint8 bClientWasFalling;
    uint8 bClientResimulateRootMotion;
    uint8 bClientResimulateRootMotionSources;
    uint8 bSimGravityDisabled;
    uint8 bClientCheckEncroachmentOnNetUpdate;
    uint8 bServerMoveIgnoreRootMotion;
    uint8 bWasJumping;
    float JumpKeyHoldTime;
    float JumpForceTimeRemaining;
    float ProxyJumpForceStartedTime;
    float JumpMaxHoldTime;
    int32 JumpMaxCount;
    int32 JumpCurrentCount;
    int32 JumpCurrentCountPreJump;
    FCharacterOnReachedJumpApex OnReachedJumpApex;
    void CharacterReachedApexSignature();
    FCharacterMovementModeChangedDelegate MovementModeChangedDelegate;
    void MovementModeChangedSignature(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    FCharacterOnCharacterMovementUpdated OnCharacterMovementUpdated;
    void CharacterMovementUpdatedSignature(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    FRootMotionSourceGroup SavedRootMotion;
    FRootMotionMovementParams ClientRootMotionParams;
    TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;
    FRepRootMotionMontage RepRootMotion;

    void UnCrouch(bool bClientSimulation);
    void StopJumping();
    void StopAnimMontage(class UAnimMontage* AnimMontage);
    void ServerMovePacked(const FCharacterServerMovePackedBits& PackedBits);
    void ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags);
    void ServerMoveNoBase(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void ServerMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void RootMotionDebugClientPrintOnScreen(FString inString);
    float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);
    void OnWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta);
    void OnRep_RootMotion();
    void OnRep_ReplicatedBasedMovement();
    void OnRep_ReplayLastTransformUpdateTimeStamp();
    void OnRep_IsCrouched();
    void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void OnLanded(const FHitResult& Hit);
    void OnJumped();
    void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void K2_UpdateCustomMovement(float DeltaTime);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void Jump();
    bool IsPlayingRootMotion();
    bool IsPlayingNetworkedRootMotionMontage();
    bool IsJumpProvidingForce();
    bool HasAnyRootMotion();
    class UAnimMontage* GetCurrentMontage();
    FVector GetBaseTranslationOffset();
    FRotator GetBaseRotationOffsetRotator();
    float GetAnimRootMotionTranslationScale();
    void Crouch(bool bClientSimulation);
    void ClientVeryShortAdjustPosition(float Timestamp, FVector NewLoc, class UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    void ClientMoveResponsePacked(const FCharacterMoveResponsePackedBits& PackedBits);
    void ClientCheatWalk();
    void ClientCheatGhost();
    void ClientCheatFly();
    void ClientAdjustRootMotionSourcePosition(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    void ClientAdjustPosition(float Timestamp, FVector NewLoc, FVector NewVel, class UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    void ClientAckGoodMove(float Timestamp);
    bool CanJumpInternal();
    bool CanJump();
    bool CanCrouch();
    void CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation);
};

class AController : public AActor
{
    class APlayerState* PlayerState;
    FControllerOnInstigatedAnyDamage OnInstigatedAnyDamage;
    void InstigatedAnyDamageSignature(float Damage, const class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
    FName StateName;
    class APawn* Pawn;
    class ACharacter* Character;
    class USceneComponent* TransformComponent;
    FRotator ControlRotation;
    uint8 bAttachToPawn;

    void UnPossess();
    void StopMovement();
    void SetInitialLocationAndRotation(const FVector& NewLocation, const FRotator& NewRotation);
    void SetIgnoreMoveInput(bool bNewMoveInput);
    void SetIgnoreLookInput(bool bNewLookInput);
    void SetControlRotation(const FRotator& NewRotation);
    void ResetIgnoreMoveInput();
    void ResetIgnoreLookInput();
    void ResetIgnoreInputFlags();
    void ReceiveUnPossess(class APawn* UnpossessedPawn);
    void ReceivePossess(class APawn* PossessedPawn);
    void ReceiveInstigatedAnyDamage(float Damage, const class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
    void Possess(class APawn* InPawn);
    void OnRep_PlayerState();
    void OnRep_Pawn();
    bool LineOfSightTo(const class AActor* Other, FVector ViewPoint, bool bAlternateChecks);
    class APawn* K2_GetPawn();
    bool IsPlayerController();
    bool IsMoveInputIgnored();
    bool IsLookInputIgnored();
    bool IsLocalPlayerController();
    bool IsLocalController();
    class AActor* GetViewTarget();
    FRotator GetDesiredRotation();
    FRotator GetControlRotation();
    void ClientSetRotation(FRotator NewRotation, bool bResetCamera);
    void ClientSetLocation(FVector NewLocation, FRotator NewRotation);
    class APlayerController* CastToPlayerController();
};

class ACullDistanceVolume : public AVolume
{
    TArray<FCullDistanceSizePair> CullDistances;
    uint8 bEnabled;

};

class ADebugCameraController : public APlayerController
{
    uint8 bShowSelectedInfo;
    uint8 bIsFrozenRendering;
    uint8 bIsOrbitingSelectedActor;
    uint8 bOrbitPivotUseCenter;
    uint8 bEnableBufferVisualization;
    uint8 bEnableBufferVisualizationFullMode;
    uint8 bIsBufferVisualizationInputSetup;
    uint8 bLastDisplayEnabled;
    class UDrawFrustumComponent* DrawFrustum;
    class AActor* SelectedActor;
    class UPrimitiveComponent* SelectedComponent;
    FHitResult SelectedHitPoint;
    class APlayerController* OriginalControllerRef;
    class UPlayer* OriginalPlayer;
    float SpeedScale;
    float InitialMaxSpeed;
    float InitialAccel;
    float InitialDecel;

    void ToggleDisplay();
    void ShowDebugSelectedInfo();
    void SetPawnMovementSpeedScale(float NewSpeedScale);
    void ReceiveOnDeactivate(class APlayerController* RestoredPC);
    void ReceiveOnActorSelected(class AActor* NewSelectedActor, const FVector& SelectHitLocation, const FVector& SelectHitNormal, const FHitResult& Hit);
    void ReceiveOnActivate(class APlayerController* OriginalPC);
    class AActor* GetSelectedActor();
};

class ADebugCameraHUD : public AHUD
{
};

class ADecalActor : public AActor
{
    class UDecalComponent* Decal;

    void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
    class UMaterialInterface* GetDecalMaterial();
    class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};

class ADefaultPawn : public APawn
{
    float BaseTurnRate;
    float BaseLookUpRate;
    class UPawnMovementComponent* MovementComponent;
    class USphereComponent* CollisionComponent;
    class UStaticMeshComponent* MeshComponent;
    uint8 bAddDefaultMovementBindings;

    void TurnAtRate(float Rate);
    void MoveUp_World(float Val);
    void MoveRight(float Val);
    void MoveForward(float Val);
    void LookUpAtRate(float Rate);
};

class ADefaultPhysicsVolume : public APhysicsVolume
{
};

class ADirectionalLight : public ALight
{
};

class ADocumentationActor : public AActor
{
};

class AEmitter : public AActor
{
    class UParticleSystemComponent* ParticleSystemComponent;
    uint8 bDestroyOnSystemFinish;
    uint8 bPostUpdateTickGroup;
    uint8 bCurrentlyActive;
    FEmitterOnParticleSpawn OnParticleSpawn;
    void ParticleSpawnSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity);
    FEmitterOnParticleBurst OnParticleBurst;
    void ParticleBurstSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    FEmitterOnParticleDeath OnParticleDeath;
    void ParticleDeathSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction);
    FEmitterOnParticleCollide OnParticleCollide;
    void ParticleCollisionSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, class UPhysicalMaterial* PhysMat);

    void ToggleActive();
    void SetVectorParameter(FName ParameterName, FVector Param);
    void SetTemplate(class UParticleSystem* NewTemplate);
    void SetMaterialParameter(FName ParameterName, class UMaterialInterface* Param);
    void SetFloatParameter(FName ParameterName, float Param);
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    void SetActorParameter(FName ParameterName, class AActor* Param);
    void OnRep_bCurrentlyActive();
    void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
    bool IsActive();
    void Deactivate();
    void Activate();
};

class AEmitterCameraLensEffectBase : public AEmitter
{
    class UParticleSystem* PS_CameraEffect;
    class UParticleSystem* PS_CameraEffectNonExtremeContent;
    class APlayerCameraManager* BaseCamera;
    FTransform RelativeTransform;
    float BaseFOV;
    uint8 bAllowMultipleInstances;
    uint8 bResetWhenRetriggered;
    TArray<class TSubclassOf<AEmitterCameraLensEffectBase>> EmittersToTreatAsSame;
    float DistFromCamera;

};

class AExponentialHeightFog : public AInfo
{
    class UExponentialHeightFogComponent* Component;
    uint8 bEnabled;

    void OnRep_bEnabled();
};

class AGameMode : public AGameModeBase
{
    FName MatchState;
    uint8 bDelayedStart;
    int32 NumSpectators;
    int32 NumPlayers;
    int32 NumBots;
    float MinRespawnDelay;
    int32 NumTravellingPlayers;
    TSubclassOf<class ULocalMessage> EngineMessageClass;
    TArray<class APlayerState*> InactivePlayerArray;
    float InactivePlayerStateLifeSpan;
    int32 MaxInactivePlayers;
    bool bHandleDedicatedServerReplays;

    void StartMatch();
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);
    void Say(FString Msg);
    void RestartGame();
    bool ReadyToStartMatch();
    bool ReadyToEndMatch();
    void K2_OnSetMatchState(FName NewState);
    bool IsMatchInProgress();
    FName GetMatchState();
    void EndMatch();
    void AbortMatch();
};

class AGameModeBase : public AInfo
{
    FString OptionsString;
    TSubclassOf<class AGameSession> GameSessionClass;
    TSubclassOf<class AGameStateBase> GameStateClass;
    TSubclassOf<class APlayerController> PlayerControllerClass;
    TSubclassOf<class APlayerState> PlayerStateClass;
    TSubclassOf<class AHUD> hudClass;
    TSubclassOf<class APawn> DefaultPawnClass;
    TSubclassOf<class ASpectatorPawn> SpectatorClass;
    TSubclassOf<class APlayerController> ReplaySpectatorPlayerControllerClass;
    TSubclassOf<class AServerStatReplicator> ServerStatReplicatorClass;
    class AGameSession* GameSession;
    class AGameStateBase* GameState;
    class AServerStatReplicator* ServerStatReplicator;
    FText DefaultPlayerName;
    uint8 bUseSeamlessTravel;
    uint8 bStartPlayersAsSpectators;
    uint8 bPauseable;

    void StartPlay();
    class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
    class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const FTransform& SpawnTransform);
    bool ShouldReset(class AActor* ActorToReset);
    void ReturnToMainMenuHost();
    void RestartPlayerAtTransform(class AController* NewPlayer, const FTransform& SpawnTransform);
    void RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);
    void RestartPlayer(class AController* NewPlayer);
    void ResetLevel();
    bool PlayerCanRestart(class APlayerController* Player);
    bool MustSpectate(class APlayerController* NewPlayerController);
    void K2_PostLogin(class APlayerController* NewPlayer);
    void K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC);
    void K2_OnRestartPlayer(class AController* NewPlayer);
    void K2_OnLogout(class AController* ExitingController);
    void K2_OnChangeName(class AController* Other, FString NewName, bool bNameChange);
    class AActor* K2_FindPlayerStart(class AController* Player, FString IncomingName);
    void InitStartSpot(class AActor* StartSpot, class AController* NewPlayer);
    void InitializeHUDForPlayer(class APlayerController* NewPlayer);
    bool HasMatchStarted();
    bool HasMatchEnded();
    void HandleStartingNewPlayer(class APlayerController* NewPlayer);
    int32 GetNumSpectators();
    int32 GetNumPlayers();
    UClass* GetDefaultPawnClassForController(class AController* InController);
    class AActor* FindPlayerStart(class AController* Player, FString IncomingName);
    class AActor* ChoosePlayerStart(class AController* Player);
    void ChangeName(class AController* Controller, FString NewName, bool bNameChange);
    bool CanSpectate(class APlayerController* Viewer, class APlayerState* ViewTarget);
};

class AGameNetworkManager : public AInfo
{
    float BadPacketLossThreshold;
    float SeverePacketLossThreshold;
    int32 BadPingThreshold;
    int32 SeverePingThreshold;
    int32 AdjustedNetSpeed;
    float LastNetSpeedUpdateTime;
    int32 TotalNetBandwidth;
    int32 MinDynamicBandwidth;
    int32 MaxDynamicBandwidth;
    uint8 bIsStandbyCheckingEnabled;
    uint8 bHasStandbyCheatTriggered;
    float StandbyRxCheatTime;
    float StandbyTxCheatTime;
    float PercentMissingForRxStandby;
    float PercentMissingForTxStandby;
    float PercentForBadPing;
    float JoinInProgressStandbyWaitTime;
    float MoveRepSize;
    float MAXPOSITIONERRORSQUARED;
    float MAXNEARZEROVELOCITYSQUARED;
    float CLIENTADJUSTUPDATECOST;
    float MAXCLIENTUPDATEINTERVAL;
    float MaxClientForcedUpdateDuration;
    float ServerForcedUpdateHitchThreshold;
    float ServerForcedUpdateHitchCooldown;
    float MaxMoveDeltaTime;
    float MaxClientSmoothingDeltaTime;
    float ClientNetSendMoveDeltaTime;
    float ClientNetSendMoveDeltaTimeThrottled;
    float ClientNetSendMoveDeltaTimeStationary;
    int32 ClientNetSendMoveThrottleAtNetSpeed;
    int32 ClientNetSendMoveThrottleOverPlayerCount;
    bool ClientAuthorativePosition;
    float ClientErrorUpdateRateLimit;
    float ClientNetCamUpdateDeltaTime;
    float ClientNetCamUpdatePositionLimit;
    bool bMovementTimeDiscrepancyDetection;
    bool bMovementTimeDiscrepancyResolution;
    float MovementTimeDiscrepancyMaxTimeMargin;
    float MovementTimeDiscrepancyMinTimeMargin;
    float MovementTimeDiscrepancyResolutionRate;
    float MovementTimeDiscrepancyDriftAllowance;
    bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution;
    bool bUseDistanceBasedRelevancy;

};

class AGameSession : public AInfo
{
    int32 MaxSpectators;
    int32 MaxPlayers;
    int32 MaxPartySize;
    uint8 MaxSplitscreensPerConnection;
    bool bRequiresPushToTalk;
    FName SessionName;

};

class AGameState : public AGameStateBase
{
    FName MatchState;
    FName PreviousMatchState;
    int32 ElapsedTime;

    void OnRep_MatchState();
    void OnRep_ElapsedTime();
};

class AGameStateBase : public AInfo
{
    TSubclassOf<class AGameModeBase> GameModeClass;
    class AGameModeBase* AuthorityGameMode;
    TSubclassOf<class ASpectatorPawn> SpectatorClass;
    TArray<class APlayerState*> PlayerArray;
    bool bReplicatedHasBegunPlay;
    float ReplicatedWorldTimeSeconds;
    float ServerWorldTimeSecondsDelta;
    float ServerWorldTimeSecondsUpdateFrequency;

    void OnRep_SpectatorClass();
    void OnRep_ReplicatedWorldTimeSeconds();
    void OnRep_ReplicatedHasBegunPlay();
    void OnRep_GameModeClass();
    bool HasMatchStarted();
    bool HasMatchEnded();
    bool HasBegunPlay();
    float GetServerWorldTimeSeconds();
    float GetPlayerStartTime(class AController* Controller);
    float GetPlayerRespawnDelay(class AController* Controller);
};

class AGeneratedMeshAreaLight : public ASpotLight
{
};

class AHUD : public AActor
{
    class APlayerController* PlayerOwner;
    uint8 bLostFocusPaused;
    uint8 bShowHUD;
    uint8 bShowDebugInfo;
    int32 CurrentTargetIndex;
    uint8 bShowHitBoxDebugInfo;
    uint8 bShowOverlays;
    uint8 bEnableDebugTextShadow;
    TArray<class AActor*> PostRenderedActors;
    TArray<FName> DebugDisplay;
    TArray<FName> ToggledDebugCategories;
    class UCanvas* Canvas;
    class UCanvas* DebugCanvas;
    TArray<FDebugTextInfo> DebugTextList;
    TSubclassOf<class AActor> ShowDebugTargetDesiredClass;
    class AActor* ShowDebugTargetActor;

    void ShowHUD();
    void ShowDebugToggleSubCategory(FName Category);
    void ShowDebugForReticleTargetToggle(TSubclassOf<class AActor> DesiredClass);
    void ShowDebug(FName DebugType);
    void RemoveDebugText(class AActor* SrcActor, bool bLeaveDurationText);
    void RemoveAllDebugStrings();
    void ReceiveHitBoxRelease(const FName BoxName);
    void ReceiveHitBoxEndCursorOver(const FName BoxName);
    void ReceiveHitBoxClick(const FName BoxName);
    void ReceiveHitBoxBeginCursorOver(const FName BoxName);
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    FVector Project(FVector Location);
    void PreviousDebugTarget();
    void NextDebugTarget();
    void GetTextSize(FString Text, float& OutWidth, float& OutHeight, class UFont* Font, float Scale);
    class APlayerController* GetOwningPlayerController();
    class APawn* GetOwningPawn();
    void GetActorsInSelectionRectangle(TSubclassOf<class AActor> ClassFilter, const FVector2D& FirstPoint, const FVector2D& SecondPoint, TArray<class AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);
    void DrawTextureSimple(class UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
    void DrawTexture(class UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    void DrawText(FString Text, FLinearColor TextColor, float ScreenX, float ScreenY, class UFont* Font, float Scale, bool bScalePosition);
    void DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
    void DrawMaterialTriangle(class UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color);
    void DrawMaterialSimple(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
    void DrawMaterial(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness);
    void Deproject(float ScreenX, float ScreenY, FVector& WorldPosition, FVector& WorldDirection);
    void AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32 Priority);
    void AddDebugText(FString DebugText, class AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UFont* InFont, float FontScale, bool bDrawShadow);
};

class AInfo : public AActor
{
};

class AKillZVolume : public APhysicsVolume
{
};

class ALODActor : public AActor
{
    class UStaticMeshComponent* StaticMeshComponent;
    TMap<class FHLODInstancingKey, class UInstancedStaticMeshComponent*> InstancedStaticMeshComponents;
    class UHLODProxy* Proxy;
    FName Key;
    float LODDrawDistance;
    int32 LODLevel;
    TArray<class AActor*> SubActors;
    uint8 CachedNumHLODLevels;

};

class ALevelBounds : public AActor
{
    class UBoxComponent* BoxComponent;
    bool bAutoUpdateBounds;

};

class ALevelScriptActor : public AActor
{
    uint8 bInputEnabled;

    void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation);
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    bool RemoteEvent(FName EventName);
    void LevelReset();
};

class ALevelStreamingVolume : public AVolume
{
    TArray<FName> StreamingLevelNames;
    uint8 bEditorPreVisOnly;
    uint8 bDisabled;
    TEnumAsByte<EStreamingVolumeUsage> StreamingUsage;

};

class ALight : public AActor
{
    class ULightComponent* LightComponent;
    uint8 bEnabled;

    void ToggleEnabled();
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightColor(FLinearColor NewLightColor);
    void SetEnabled(bool bSetEnabled);
    void SetCastShadows(bool bNewValue);
    void SetBrightness(float NewBrightness);
    void SetAffectTranslucentLighting(bool bNewValue);
    void OnRep_bEnabled();
    bool IsEnabled();
    FLinearColor GetLightColor();
    float GetBrightness();
};

class ALightmassCharacterIndirectDetailVolume : public AVolume
{
};

class ALightmassImportanceVolume : public AVolume
{
};

class ALightmassPortal : public AActor
{
    class ULightmassPortalComponent* PortalComponent;

};

class AMaterialInstanceActor : public AActor
{
    TArray<class AActor*> TargetActors;

};

class AMatineeActor : public AActor
{
    class UInterpData* MatineeData;
    FName MatineeControllerName;
    float PlayRate;
    uint8 bPlayOnLevelLoad;
    uint8 bForceStartPos;
    float ForceStartPosition;
    uint8 bLooping;
    uint8 bRewindOnPlay;
    uint8 bNoResetOnRewind;
    uint8 bRewindIfAlreadyPlaying;
    uint8 bDisableRadioFilter;
    uint8 bClientSideOnly;
    uint8 bSkipUpdateIfNotVisible;
    uint8 bIsSkippable;
    int32 PreferredSplitScreenNum;
    uint8 bDisableMovementInput;
    uint8 bDisableLookAtInput;
    uint8 bHidePlayer;
    uint8 bHideHud;
    TArray<FInterpGroupActorInfo> GroupActorInfos;
    uint8 bShouldShowGore;
    TArray<class UInterpGroupInst*> GroupInst;
    TArray<FCameraCutInfo> CameraCuts;
    uint8 bIsPlaying;
    uint8 bReversePlayback;
    uint8 bPaused;
    uint8 bPendingStop;
    float InterpPosition;
    uint8 ReplicationForceIsPlaying;
    FMatineeActorOnPlay OnPlay;
    void OnMatineeEvent();
    FMatineeActorOnStop OnStop;
    void OnMatineeEvent();
    FMatineeActorOnPause OnPause;
    void OnMatineeEvent();

    void Stop();
    void SetPosition(float NewPosition, bool bJump);
    void SetLoopingState(bool bNewLooping);
    void Reverse();
    void Play();
    void Pause();
    void EnableGroupByName(FString GroupName, bool bEnable);
    void ChangePlaybackDirection();
};

class AMatineeActorCameraAnim : public AMatineeActor
{
    class UCameraAnim* CameraAnim;

};

class AMeshMergeCullingVolume : public AVolume
{
};

class ANavigationObjectBase : public AActor
{
    class UCapsuleComponent* CapsuleComponent;
    class UBillboardComponent* GoodSprite;
    class UBillboardComponent* BadSprite;
    uint8 bIsPIEPlayerStart;

};

class ANote : public AActor
{
};

class APainCausingVolume : public APhysicsVolume
{
    uint8 bPainCausing;
    float DamagePerSec;
    TSubclassOf<class UDamageType> DamageType;
    float PainInterval;
    uint8 bEntryPain;
    uint8 BACKUP_bPainCausing;
    class AController* DamageInstigator;

};

class AParticleEventManager : public AActor
{
};

class APawn : public AActor
{
    uint8 bUseControllerRotationPitch;
    uint8 bUseControllerRotationYaw;
    uint8 bUseControllerRotationRoll;
    uint8 bCanAffectNavigationGeneration;
    float BaseEyeHeight;
    TEnumAsByte<EAutoReceiveInput::Type> AutoPossessPlayer;
    EAutoPossessAI AutoPossessAI;
    uint8 RemoteViewPitch;
    TSubclassOf<class AController> AIControllerClass;
    class APlayerState* PlayerState;
    class AController* LastHitBy;
    class AController* Controller;
    FVector ControlInputVector;
    FVector LastControlInputVector;

    void SpawnDefaultController();
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
    void ReceiveUnpossessed(class AController* OldController);
    void ReceivePossessed(class AController* NewController);
    void PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker);
    void OnRep_PlayerState();
    void OnRep_Controller();
    void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    FVector K2_GetMovementInputVector();
    bool IsPlayerControlled();
    bool IsPawnControlled();
    bool IsMoveInputIgnored();
    bool IsLocallyControlled();
    bool IsControlled();
    bool IsBotControlled();
    FVector GetPendingMovementInputVector();
    FVector GetNavAgentLocation();
    class UPawnMovementComponent* GetMovementComponent();
    class AActor* GetMovementBaseActor(const class APawn* Pawn);
    FVector GetLastMovementInputVector();
    FRotator GetControlRotation();
    class AController* GetController();
    FRotator GetBaseAimRotation();
    void DetachFromControllerPendingDestroy();
    FVector ConsumeMovementInputVector();
    void AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    void AddControllerYawInput(float Val);
    void AddControllerRollInput(float Val);
    void AddControllerPitchInput(float Val);
};

class APhysicsConstraintActor : public ARigidBodyBase
{
    class UPhysicsConstraintComponent* ConstraintComp;
    class AActor* ConstraintActor1;
    class AActor* ConstraintActor2;
    uint8 bDisableCollision;

};

class APhysicsThruster : public ARigidBodyBase
{
    class UPhysicsThrusterComponent* ThrusterComponent;

};

class APhysicsVolume : public AVolume
{
    float TerminalVelocity;
    int32 Priority;
    float FluidFriction;
    uint8 bWaterVolume;
    uint8 bPhysicsOnContact;

};

class APlanarReflection : public ASceneCapture
{
    class UPlanarReflectionComponent* PlanarReflectionComponent;
    bool bShowPreviewPlane;

    void OnInterpToggle(bool bEnable);
};

class APlaneReflectionCapture : public AReflectionCapture
{
};

class APlayerCameraManager : public AActor
{
    class APlayerController* PCOwner;
    class USceneComponent* TransformComponent;
    float DefaultFOV;
    float DefaultOrthoWidth;
    float DefaultAspectRatio;
    FCameraCacheEntry CameraCache;
    FCameraCacheEntry LastFrameCameraCache;
    FTViewTarget ViewTarget;
    FTViewTarget PendingViewTarget;
    FCameraCacheEntry CameraCachePrivate;
    FCameraCacheEntry LastFrameCameraCachePrivate;
    TArray<class UCameraModifier*> ModifierList;
    TArray<class TSubclassOf<UCameraModifier>> DefaultModifiers;
    float FreeCamDistance;
    FVector FreeCamOffset;
    FVector ViewTargetOffset;
    FPlayerCameraManagerOnAudioFadeChangeEvent OnAudioFadeChangeEvent;
    void OnAudioFadeChangeSignature(bool bFadeOut, float FadeTime);
    TArray<class AEmitterCameraLensEffectBase*> CameraLensEffects;
    class UCameraModifier_CameraShake* CachedCameraShakeMod;
    class UCameraAnimInst* AnimInstPool;
    TArray<FPostProcessSettings> PostProcessBlendCache;
    TArray<class UCameraAnimInst*> ActiveAnims;
    TArray<class UCameraAnimInst*> FreeAnims;
    class ACameraActor* AnimCameraActor;
    uint8 bIsOrthographic;
    uint8 bDefaultConstrainAspectRatio;
    uint8 bClientSimulatingViewTarget;
    uint8 bUseClientSideCameraUpdates;
    uint8 bGameCameraCutThisFrame;
    float ViewPitchMin;
    float ViewPitchMax;
    float ViewYawMin;
    float ViewYawMax;
    float ViewRollMin;
    float ViewRollMax;
    float ServerUpdateCameraTimeout;

    void SwapPendingViewTargetWhenUsingClientSideCameraUpdates();
    void StopCameraShake(class UCameraShakeBase* ShakeInstance, bool bImmediately);
    void StopCameraFade();
    void StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate);
    void StopAllInstancesOfCameraShakeFromSource(TSubclassOf<class UCameraShakeBase> Shake, class UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    void StopAllInstancesOfCameraShake(TSubclassOf<class UCameraShakeBase> Shake, bool bImmediately);
    void StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate);
    void StopAllCameraShakesFromSource(class UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    void StopAllCameraShakes(bool bImmediately);
    void StopAllCameraAnims(bool bImmediate);
    class UCameraShakeBase* StartCameraShakeFromSource(TSubclassOf<class UCameraShakeBase> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    class UCameraShakeBase* StartCameraShake(TSubclassOf<class UCameraShakeBase> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    void SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio);
    void SetGameCameraCutThisFrame();
    bool RemoveCameraModifier(class UCameraModifier* ModifierToRemove);
    void RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter);
    class UCameraAnimInst* PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void PhotographyCameraModify(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation);
    void OnPhotographySessionStart();
    void OnPhotographySessionEnd();
    void OnPhotographyMultiPartCaptureStart();
    void OnPhotographyMultiPartCaptureEnd();
    class APlayerController* GetOwningPlayerController();
    float GetFOVAngle();
    FRotator GetCameraRotation();
    FVector GetCameraLocation();
    class UCameraModifier* FindCameraModifierByClass(TSubclassOf<class UCameraModifier> ModifierClass);
    void ClearCameraLensEffects();
    bool BlueprintUpdateCamera(class AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);
    class UCameraModifier* AddNewCameraModifier(TSubclassOf<class UCameraModifier> ModifierClass);
    class AEmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<class AEmitterCameraLensEffectBase> LensEffectEmitterClass);
};

class APlayerController : public AController
{
    class UPlayer* Player;
    class APawn* AcknowledgedPawn;
    class UInterpTrackInstDirector* ControllingDirTrackInst;
    class AHUD* MyHUD;
    class APlayerCameraManager* PlayerCameraManager;
    TSubclassOf<class APlayerCameraManager> PlayerCameraManagerClass;
    bool bAutoManageActiveCameraTarget;
    FRotator TargetViewRotation;
    float SmoothTargetViewRotationSpeed;
    TArray<class AActor*> HiddenActors;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents;
    float LastSpectatorStateSynchTime;
    FVector LastSpectatorSyncLocation;
    FRotator LastSpectatorSyncRotation;
    int32 ClientCap;
    class UCheatManager* CheatManager;
    TSubclassOf<class UCheatManager> CheatClass;
    class UPlayerInput* PlayerInput;
    TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects;
    uint8 bPlayerIsWaiting;
    uint8 NetPlayerIndex;
    class UNetConnection* PendingSwapConnection;
    class UNetConnection* NetConnection;
    float InputYawScale;
    float InputPitchScale;
    float InputRollScale;
    uint8 bShowMouseCursor;
    uint8 bEnableClickEvents;
    uint8 bEnableTouchEvents;
    uint8 bEnableMouseOverEvents;
    uint8 bEnableTouchOverEvents;
    uint8 bForceFeedbackEnabled;
    float ForceFeedbackScale;
    TArray<FKey> ClickEventKeys;
    TEnumAsByte<EMouseCursor::Type> DefaultMouseCursor;
    TEnumAsByte<EMouseCursor::Type> CurrentMouseCursor;
    TEnumAsByte<ECollisionChannel> DefaultClickTraceChannel;
    TEnumAsByte<ECollisionChannel> CurrentClickTraceChannel;
    float HitResultTraceDistance;
    uint16 SeamlessTravelCount;
    uint16 LastCompletedSeamlessTravelCount;
    class UInputComponent* InactiveStateInputComponent;
    uint8 bShouldPerformFullTickWhenPaused;
    class UTouchInterface* CurrentTouchInterface;
    class ASpectatorPawn* SpectatorPawn;
    bool bIsLocalPlayerController;
    FVector SpawnLocation;

    bool WasInputKeyJustReleased(FKey Key);
    bool WasInputKeyJustPressed(FKey Key);
    void ToggleSpeaking(bool bInSpeaking);
    void TestServerLevelVisibilityChange(const FName PackageName, const FName Filename);
    void SwitchLevel(FString URL);
    void StopHapticEffect(EControllerHand hand);
    void StartFire(uint8 FireModeNum);
    void SetVirtualJoystickVisibility(bool bVisible);
    void SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    void SetName(FString S);
    void SetMouseLocation(const int32 X, const int32 Y);
    void SetMouseCursorWidget(TEnumAsByte<EMouseCursor::Type> Cursor, class UUserWidget* CursorWidget);
    void SetHapticsByValue(const float Frequency, const float Amplitude, EControllerHand hand);
    void SetDisableHaptics(bool bNewDisabled);
    void SetControllerLightColor(FColor Color);
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    void SetAudioListenerOverride(class USceneComponent* AttachToComponent, FVector Location, FRotator Rotation);
    void SetAudioListenerAttenuationOverride(class USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride);
    void ServerViewSelf(FViewTargetTransitionParams TransitionParams);
    void ServerViewPrevPlayer();
    void ServerViewNextPlayer();
    void ServerVerifyViewTarget();
    void ServerUpdateMultipleLevelsVisibility(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
    void ServerUpdateLevelVisibility(const FUpdateLevelVisibilityLevelInfo& LevelVisibility);
    void ServerUpdateCamera(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw);
    void ServerUnmutePlayer(FUniqueNetIdRepl PlayerId);
    void ServerToggleAILogging();
    void ServerShortTimeout();
    void ServerSetSpectatorWaiting(bool bWaiting);
    void ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot);
    void ServerRestartPlayer();
    void ServerPause();
    void ServerNotifyLoadedWorld(FName WorldPackageName);
    void ServerMutePlayer(FUniqueNetIdRepl PlayerId);
    void ServerExecRPC(FString Msg);
    void ServerExec(FString Msg);
    void ServerCheckClientPossessionReliable();
    void ServerCheckClientPossession();
    void ServerChangeName(FString S);
    void ServerCamera(FName NewMode);
    void ServerAcknowledgePossession(class APawn* P);
    void SendToConsole(FString Command);
    void RestartLevel();
    void ResetControllerLightColor();
    bool ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D& ScreenLocation, bool bPlayerViewportRelative);
    void PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect, EControllerHand hand, float Scale, bool bLoop);
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction::Type> Action, FLatentActionInfo LatentInfo);
    void Pause();
    void OnServerStartedVisualLogger(bool bIsLogging);
    void LocalTravel(FString URL);
    void K2_ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    bool IsInputKeyDown(FKey Key);
    void GetViewportSize(int32& SizeX, int32& SizeY);
    class ASpectatorPawn* GetSpectatorPawn();
    bool GetMousePosition(float& LocationX, float& LocationY);
    FVector GetInputVectorKeyState(FKey Key);
    void GetInputTouchState(TEnumAsByte<ETouchIndex::Type> FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed);
    void GetInputMouseDelta(float& DeltaX, float& DeltaY);
    void GetInputMotionState(FVector& Tilt, FVector& RotationRate, FVector& Gravity, FVector& Acceleration);
    float GetInputKeyTimeDown(FKey Key);
    void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY);
    float GetInputAnalogKeyState(FKey Key);
    class AHUD* GetHUD();
    bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex::Type> FingerIndex, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex::Type> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex::Type> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursorForObjects(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    FVector GetFocalLocation();
    void FOV(float NewFOV);
    void EnableCheats();
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector& WorldLocation, FVector& WorldDirection);
    bool DeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection);
    void ConsoleKey(FKey Key);
    void ClientWasKicked(const FText& KickReason);
    void ClientVoiceHandshakeComplete();
    void ClientUpdateMultipleLevelsStreamingStatus(const TArray<FUpdateLevelStreamingLevelStatus>& LevelStatuses);
    void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex);
    void ClientUnmutePlayer(FUniqueNetIdRepl PlayerId);
    void ClientTravelInternal(FString URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid);
    void ClientTravel(FString URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid);
    void ClientTeamMessage(class APlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime);
    void ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    void ClientStopCameraShakesFromSource(class UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    void ClientStopCameraShake(TSubclassOf<class UCameraShakeBase> Shake, bool bImmediately);
    void ClientStopCameraAnim(class UCameraAnim* AnimToStop);
    void ClientStartOnlineSession();
    void ClientStartCameraShakeFromSource(TSubclassOf<class UCameraShakeBase> Shake, class UCameraShakeSourceComponent* SourceComponent);
    void ClientStartCameraShake(TSubclassOf<class UCameraShakeBase> Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void ClientSpawnCameraLensEffect(TSubclassOf<class AEmitterCameraLensEffectBase> LensEffectEmitterClass);
    void ClientSetViewTarget(class AActor* A, FViewTargetTransitionParams TransitionParams);
    void ClientSetSpectatorWaiting(bool bWaiting);
    void ClientSetHUD(TSubclassOf<class AHUD> NewHUDClass);
    void ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups);
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
    void ClientSetCameraMode(FName NewCamMode);
    void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);
    void ClientSetBlockOnAsyncLoading();
    void ClientReturnToMainMenuWithTextReason(const FText& ReturnReason);
    void ClientReturnToMainMenu(FString ReturnReason);
    void ClientRetryClientRestart(class APawn* NewPawn);
    void ClientRestart(class APawn* NewPawn);
    void ClientReset();
    void ClientRepObjRef(class UObject* Object);
    void ClientReceiveLocalizedMessage(TSubclassOf<class ULocalMessage> Message, int32 SWITCH, class APlayerState* RelatedPlayerState_1, class APlayerState* RelatedPlayerState_2, class UObject* OptionalObject);
    void ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups);
    void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);
    void ClientPlaySoundAtLocation(class USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlayForceFeedback_Internal(class UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params);
    void ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, FRotator CustomPlaySpace);
    void ClientMutePlayer(FUniqueNetIdRepl PlayerId);
    void ClientMessage(FString S, FName Type, float MsgLifeTime);
    void ClientIgnoreMoveInput(bool bIgnore);
    void ClientIgnoreLookInput(bool bIgnore);
    void ClientGotoState(FName NewState);
    void ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner);
    void ClientForceGarbageCollection();
    void ClientFlushLevelStreaming();
    void ClientEndOnlineSession();
    void ClientEnableNetworkVoice(bool bEnable);
    void ClientCommitMapChange();
    void ClientClearCameraLensEffects();
    void ClientCapBandwidth(int32 Cap);
    void ClientCancelPendingMapChange();
    void ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation);
    void ClearAudioListenerOverride();
    void ClearAudioListenerAttenuationOverride();
    bool CanRestartPlayer();
    void Camera(FName NewMode);
    void AddYawInput(float Val);
    void AddRollInput(float Val);
    void AddPitchInput(float Val);
    void ActivateTouchInterface(class UTouchInterface* NewTouchInterface);
};

class APlayerStart : public ANavigationObjectBase
{
    FName PlayerStartTag;

};

class APlayerStartPIE : public APlayerStart
{
};

class APlayerState : public AInfo
{
    float Score;
    int32 PlayerId;
    uint8 Ping;
    uint8 bShouldUpdateReplicatedPing;
    uint8 bIsSpectator;
    uint8 bOnlySpectator;
    uint8 bIsABot;
    uint8 bIsInactive;
    uint8 bFromPreviousLevel;
    int32 StartTime;
    TSubclassOf<class ULocalMessage> EngineMessageClass;
    FString SavedNetworkAddress;
    FUniqueNetIdRepl UniqueId;
    class APawn* PawnPrivate;
    FString PlayerNamePrivate;

    void ReceiveOverrideWith(class APlayerState* OldPlayerState);
    void ReceiveCopyProperties(class APlayerState* NewPlayerState);
    void OnRep_UniqueId();
    void OnRep_Score();
    void OnRep_PlayerName();
    void OnRep_PlayerId();
    void OnRep_bIsInactive();
    bool IsOnlyASpectator();
    FString GetPlayerName();
};

class APointLight : public ALight
{
    class UPointLightComponent* PointLightComponent;

    void SetRadius(float NewRadius);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
};

class APostProcessVolume : public AVolume
{
    FPostProcessSettings Settings;
    float Priority;
    float BlendRadius;
    float BlendWeight;
    uint8 bEnabled;
    uint8 bUnbound;

    void AddOrUpdateBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight);
};

class APrecomputedVisibilityOverrideVolume : public AVolume
{
    TArray<class AActor*> OverrideVisibleActors;
    TArray<class AActor*> OverrideInvisibleActors;
    TArray<FName> OverrideInvisibleLevels;

};

class APrecomputedVisibilityVolume : public AVolume
{
};

class ARadialForceActor : public ARigidBodyBase
{
    class URadialForceComponent* ForceComponent;

    void ToggleForce();
    void FireImpulse();
    void EnableForce();
    void DisableForce();
};

class ARectLight : public ALight
{
    class URectLightComponent* RectLightComponent;

};

class AReflectionCapture : public AActor
{
    class UReflectionCaptureComponent* CaptureComponent;

};

class ARigidBodyBase : public AActor
{
};

class ARuntimeVirtualTextureVolume : public AActor
{
    class URuntimeVirtualTextureComponent* VirtualTextureComponent;

};

class ASceneCapture : public AActor
{
    class UStaticMeshComponent* MeshComp;
    class USceneComponent* SceneComponent;

};

class ASceneCapture2D : public ASceneCapture
{
    class USceneCaptureComponent2D* CaptureComponent2D;

    void OnInterpToggle(bool bEnable);
};

class ASceneCaptureCube : public ASceneCapture
{
    class USceneCaptureComponentCube* CaptureComponentCube;

    void OnInterpToggle(bool bEnable);
};

class AServerStatReplicator : public AInfo
{
    bool bUpdateStatNet;
    bool bOverwriteClientStats;
    uint32 Channels;
    uint32 InRate;
    uint32 OutRate;
    uint32 MaxPacketOverhead;
    uint32 InRateClientMax;
    uint32 InRateClientMin;
    uint32 InRateClientAvg;
    uint32 InPacketsClientMax;
    uint32 InPacketsClientMin;
    uint32 InPacketsClientAvg;
    uint32 OutRateClientMax;
    uint32 OutRateClientMin;
    uint32 OutRateClientAvg;
    uint32 OutPacketsClientMax;
    uint32 OutPacketsClientMin;
    uint32 OutPacketsClientAvg;
    uint32 NetNumClients;
    uint32 InPackets;
    uint32 OutPackets;
    uint32 InBunches;
    uint32 OutBunches;
    uint32 OutLoss;
    uint32 InLoss;
    uint32 VoiceBytesSent;
    uint32 VoiceBytesRecv;
    uint32 VoicePacketsSent;
    uint32 VoicePacketsRecv;
    uint32 PercentInVoice;
    uint32 PercentOutVoice;
    uint32 NumActorChannels;
    uint32 NumConsideredActors;
    uint32 PrioritizedActors;
    uint32 NumRelevantActors;
    uint32 NumRelevantDeletedActors;
    uint32 NumReplicatedActorAttempts;
    uint32 NumReplicatedActors;
    uint32 NumActors;
    uint32 NumNetActors;
    uint32 NumDormantActors;
    uint32 NumInitiallyDormantActors;
    uint32 NumNetGUIDsAckd;
    uint32 NumNetGUIDsPending;
    uint32 NumNetGUIDsUnAckd;
    uint32 ObjPathBytes;
    uint32 NetGUIDOutRate;
    uint32 NetGUIDInRate;
    uint32 NetSaturated;

};

class ASkeletalMeshActor : public AActor
{
    uint8 bShouldDoAnimNotifies;
    uint8 bWakeOnLevelStart;
    class USkeletalMeshComponent* SkeletalMeshComponent;
    class USkeletalMesh* ReplicatedMesh;
    class UPhysicsAsset* ReplicatedPhysAsset;
    class UMaterialInterface* ReplicatedMaterial0;
    class UMaterialInterface* ReplicatedMaterial1;

    void OnRep_ReplicatedPhysAsset();
    void OnRep_ReplicatedMesh();
    void OnRep_ReplicatedMaterial1();
    void OnRep_ReplicatedMaterial0();
};

class ASkyAtmosphere : public AInfo
{
    class USkyAtmosphereComponent* SkyAtmosphereComponent;

};

class ASkyLight : public AInfo
{
    class USkyLightComponent* LightComponent;
    uint8 bEnabled;

    void OnRep_bEnabled();
};

class ASpectatorPawn : public ADefaultPawn
{
};

class ASphereReflectionCapture : public AReflectionCapture
{
    class UDrawSphereComponent* DrawCaptureRadius;

};

class ASplineMeshActor : public AActor
{
    class USplineMeshComponent* SplineMeshComponent;

};

class ASpotLight : public ALight
{
    class USpotLightComponent* SpotLightComponent;

    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
};

class AStaticMeshActor : public AActor
{
    class UStaticMeshComponent* StaticMeshComponent;
    bool bStaticMeshReplicateMovement;
    ENavDataGatheringMode NavigationGeometryGatheringMode;

    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
};

class ATargetPoint : public AActor
{
};

class ATextRenderActor : public AActor
{
    class UTextRenderComponent* TextRender;

};

class ATriggerBase : public AActor
{
    class UShapeComponent* CollisionComponent;

};

class ATriggerBox : public ATriggerBase
{
};

class ATriggerCapsule : public ATriggerBase
{
};

class ATriggerSphere : public ATriggerBase
{
};

class ATriggerVolume : public AVolume
{
};

class AVectorFieldVolume : public AActor
{
    class UVectorFieldComponent* VectorFieldComponent;

};

class AVolume : public ABrush
{
};

class AVolumetricCloud : public AInfo
{
    class UVolumetricCloudComponent* VolumetricCloudComponent;

};

class AVolumetricLightmapDensityVolume : public AVolume
{
    FInt32Interval AllowedMipLevelRange;

};

class AWindDirectionalSource : public AInfo
{
    class UWindDirectionalSourceComponent* Component;

};

class AWorldSettings : public AInfo
{
    int32 VisibilityCellSize;
    TEnumAsByte<EVisibilityAggressiveness> VisibilityAggressiveness;
    uint8 bPrecomputeVisibility;
    uint8 bPlaceCellsOnlyAlongCameraTracks;
    uint8 bEnableWorldBoundsChecks;
    uint8 bEnableNavigationSystem;
    uint8 bEnableAISystem;
    uint8 bEnableWorldComposition;
    uint8 bUseClientSideLevelStreamingVolumes;
    uint8 bEnableWorldOriginRebasing;
    uint8 bWorldGravitySet;
    uint8 bGlobalGravitySet;
    uint8 bMinimizeBSPSections;
    uint8 bForceNoPrecomputedLighting;
    uint8 bHighPriorityLoading;
    uint8 bHighPriorityLoadingLocal;
    uint8 bOverrideDefaultBroadphaseSettings;
    class UNavigationSystemConfig* NavigationSystemConfig;
    class UNavigationSystemConfig* NavigationSystemConfigOverride;
    float WorldToMeters;
    float KillZ;
    TSubclassOf<class UDamageType> KillZDamageType;
    float WorldGravityZ;
    float GlobalGravityZ;
    TSubclassOf<class ADefaultPhysicsVolume> DefaultPhysicsVolumeClass;
    TSubclassOf<class UPhysicsCollisionHandler> PhysicsCollisionHandlerClass;
    TSubclassOf<class AGameModeBase> DefaultGameMode;
    TSubclassOf<class AGameNetworkManager> GameNetworkManagerClass;
    int32 PackedLightAndShadowMapTextureSize;
    FVector DefaultColorScale;
    float DefaultMaxDistanceFieldOcclusionDistance;
    float GlobalDistanceFieldViewDistance;
    float DynamicIndirectShadowsSelfShadowingIntensity;
    FReverbSettings DefaultReverbSettings;
    FInteriorSettings DefaultAmbientZoneSettings;
    class USoundMix* DefaultBaseSoundMix;
    float TimeDilation;
    float MatineeTimeDilation;
    float DemoPlayTimeDilation;
    float MinGlobalTimeDilation;
    float MaxGlobalTimeDilation;
    float MinUndilatedFrameTime;
    float MaxUndilatedFrameTime;
    FBroadphaseSettings BroadphaseSettings;
    class APlayerState* Pauser;
    TArray<FNetViewer> ReplicationViewers;
    TArray<class UAssetUserData*> AssetUserData;
    class APlayerState* PauserPlayerState;
    int32 MaxNumberOfBookmarks;
    TSubclassOf<class UBookmarkBase> DefaultBookmarkClass;
    TArray<class UBookmarkBase*> BookmarkArray;
    TSubclassOf<class UBookmarkBase> LastBookmarkClass;

    void OnRep_WorldGravityZ();
};

class IAnimClassInterface : public IInterface
{
};

class IAnimLayerInterface : public IInterface
{
};

class IBlendableInterface : public IInterface
{
};

class IBoneReferenceSkeletonProvider : public IInterface
{
};

class ICurveSourceInterface : public IInterface
{

    float GetCurveValue(FName CurveName);
    void GetCurves(TArray<FNamedCurveValue>& OutValues);
    FName GetBindingName();
};

class IDestructibleInterface : public IInterface
{
};

class IImportantToggleSettingInterface : public IInterface
{
};

class IInterface_ActorSubobject : public IInterface
{
};

class IInterface_AssetUserData : public IInterface
{
};

class IInterface_CollisionDataProvider : public IInterface
{
};

class IInterface_PostProcessVolume : public IInterface
{
};

class IInterface_PreviewMeshProvider : public IInterface
{
};

class ILODSyncInterface : public IInterface
{
};

class ILevelPartitionInterface : public IInterface
{
};

class IMatineeAnimInterface : public IInterface
{
};

class IMatineeInterface : public IInterface
{
};

class INavAgentInterface : public IInterface
{
};

class INavEdgeProviderInterface : public IInterface
{
};

class INavPathObserverInterface : public IInterface
{
};

class INavRelevantInterface : public IInterface
{
};

class INavigationDataInterface : public IInterface
{
};

class INetworkPredictionInterface : public IInterface
{
};

class INodeMappingProviderInterface : public IInterface
{
};

class IPathFollowingAgentInterface : public IInterface
{
};

class IPreviewCollectionInterface : public IInterface
{
};

class IRVOAvoidanceInterface : public IInterface
{
};

class ISlateTextureAtlasInterface : public IInterface
{
};

class IVisualLoggerDebugSnapshotInterface : public IInterface
{
};

class UAISystemBase : public UObject
{
    FSoftClassPath AISystemClassName;
    FName AISystemModuleName;
    bool bInstantiateAISystemOnClient;

};

class UActorChannel : public UChannel
{
    class AActor* Actor;
    TArray<class UObject*> CreateSubObjects;

};

class UActorComponent : public UObject
{
    FActorComponentTickFunction PrimaryComponentTick;
    TArray<FName> ComponentTags;
    TArray<class UAssetUserData*> AssetUserData;
    int32 UCSSerializationIndex;
    uint8 bNetAddressable;
    uint8 bReplicates;
    uint8 bAutoActivate;
    uint8 bIsActive;
    uint8 bEditableWhenInherited;
    uint8 bCanEverAffectNavigation;
    uint8 bIsEditorOnly;
    EComponentCreationMethod CreationMethod;
    FActorComponentOnComponentActivated OnComponentActivated;
    void ActorComponentActivatedSignature(class UActorComponent* Component, bool bReset);
    FActorComponentOnComponentDeactivated OnComponentDeactivated;
    void ActorComponentDeactivateSignature(class UActorComponent* Component);
    TArray<FSimpleMemberReference> UCSModifiedProperties;

    void ToggleActive();
    void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetIsReplicated(bool ShouldReplicate);
    void SetComponentTickIntervalAndCooldown(float TickInterval);
    void SetComponentTickInterval(float TickInterval);
    void SetComponentTickEnabled(bool bEnabled);
    void SetAutoActivate(bool bNewAutoActivate);
    void SetActive(bool bNewActive, bool bReset);
    void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void OnRep_IsActive();
    void K2_DestroyComponent(class UObject* Object);
    bool IsComponentTickEnabled();
    bool IsBeingDestroyed();
    bool IsActive();
    class AActor* GetOwner();
    float GetComponentTickInterval();
    void Deactivate();
    bool ComponentHasTag(FName Tag);
    void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
    void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
    void Activate(bool bReset);
};

class UActorComponentInstanceDataTransientOuter : public UObject
{
};

class UAimOffsetBlendSpace : public UBlendSpace
{
};

class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
};

class UAnimBlueprint : public UBlueprint
{
    class USkeleton* TargetSkeleton;
    TArray<FAnimGroupInfo> Groups;
    bool bUseMultiThreadedAnimationUpdate;
    bool bWarnAboutBlueprintUsage;

};

class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
    TArray<FBakedAnimationStateMachine> BakedStateMachines;
    class USkeleton* TargetSkeleton;
    TArray<FAnimNotifyEvent> AnimNotifies;
    TMap<class FName, class FCachedPoseIndices> OrderedSavedPoseIndicesMap;
    TArray<FName> SyncGroupNames;
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs;
    TMap<class FName, class FGraphAssetPlayerInformation> GraphAssetPlayerInformation;
    TMap<class FName, class FAnimGraphBlendOptions> GraphBlendOptions;
    FPropertyAccessLibrary PropertyAccessLibrary;

};

class UAnimBoneCompressionCodec : public UObject
{
    FString Description;

};

class UAnimBoneCompressionSettings : public UObject
{
    TArray<class UAnimBoneCompressionCodec*> Codecs;

};

class UAnimClassData : public UObject
{
    TArray<FBakedAnimationStateMachine> BakedStateMachines;
    class USkeleton* TargetSkeleton;
    TArray<FAnimNotifyEvent> AnimNotifies;
    TMap<class FName, class FCachedPoseIndices> OrderedSavedPoseIndicesMap;
    TArray<FAnimBlueprintFunction> AnimBlueprintFunctions;
    TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData;
    TArray<TFieldPath<FStructProperty>> AnimNodeProperties;
    TArray<TFieldPath<FStructProperty>> LinkedAnimGraphNodeProperties;
    TArray<TFieldPath<FStructProperty>> LinkedAnimLayerNodeProperties;
    TArray<TFieldPath<FStructProperty>> PreUpdateNodeProperties;
    TArray<TFieldPath<FStructProperty>> DynamicResetNodeProperties;
    TArray<TFieldPath<FStructProperty>> StateMachineNodeProperties;
    TArray<TFieldPath<FStructProperty>> InitializationNodeProperties;
    TMap<class FName, class FGraphAssetPlayerInformation> GraphNameAssetPlayers;
    TArray<FName> SyncGroupNames;
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs;
    TMap<class FName, class FAnimGraphBlendOptions> GraphBlendOptions;
    FPropertyAccessLibrary PropertyAccessLibrary;

};

class UAnimComposite : public UAnimCompositeBase
{
    FAnimTrack AnimationTrack;

};

class UAnimCompositeBase : public UAnimSequenceBase
{
};

class UAnimCompress : public UAnimBoneCompressionCodec
{
    uint8 bNeedsSkeleton;
    TEnumAsByte<AnimationCompressionFormat> TranslationCompressionFormat;
    TEnumAsByte<AnimationCompressionFormat> RotationCompressionFormat;
    TEnumAsByte<AnimationCompressionFormat> ScaleCompressionFormat;

};

class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
};

class UAnimCompress_LeastDestructive : public UAnimCompress_BitwiseCompressOnly
{
};

class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
    float MaxZeroingThreshold;
    float MaxPosDiffBitwise;
    float MaxAngleDiffBitwise;
    float MaxScaleDiffBitwise;
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedRotationFormats;
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedTranslationFormats;
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedScaleFormats;
    uint8 bResampleAnimation;
    float ResampledFramerate;
    int32 MinKeysForResampling;
    uint8 bUseAdaptiveError;
    uint8 bUseOverrideForEndEffectors;
    int32 TrackHeightBias;
    float ParentingDivisor;
    float ParentingDivisorExponent;
    uint8 bUseAdaptiveError2;
    float RotationErrorSourceRatio;
    float TranslationErrorSourceRatio;
    float ScaleErrorSourceRatio;
    float MaxErrorPerTrackRatio;
    float PerturbationProbeSize;

};

class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
    int32 MinKeys;
    uint8 bStartAtSecondKey;

};

class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
    float MaxPosDiff;
    float MaxAngleDiff;
    float MaxScaleDiff;
    float MaxEffectorDiff;
    float MinEffectorDiff;
    float EffectorDiffSocket;
    float ParentKeyScale;
    uint8 bRetarget;
    uint8 bActuallyFilterLinearKeys;

};

class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
    float MaxPosDiff;
    float MaxAngleDiff;
    float MaxScaleDiff;

};

class UAnimCurveCompressionCodec : public UObject
{
};

class UAnimCurveCompressionCodec_CompressedRichCurve : public UAnimCurveCompressionCodec
{
};

class UAnimCurveCompressionCodec_UniformIndexable : public UAnimCurveCompressionCodec
{
};

class UAnimCurveCompressionCodec_UniformlySampled : public UAnimCurveCompressionCodec
{
};

class UAnimCurveCompressionSettings : public UObject
{
    class UAnimCurveCompressionCodec* Codec;

};

class UAnimInstance : public UObject
{
    class USkeleton* CurrentSkeleton;
    TEnumAsByte<ERootMotionMode::Type> RootMotionMode;
    uint8 bUseMultiThreadedAnimationUpdate;
    uint8 bUsingCopyPoseFromMesh;
    uint8 bReceiveNotifiesFromLinkedInstances;
    uint8 bPropagateNotifiesToLinkedInstances;
    uint8 bQueueMontageEvents;
    FAnimInstanceOnMontageBlendingOut OnMontageBlendingOut;
    void OnMontageBlendingOutStartedMCDelegate(class UAnimMontage* Montage, bool bInterrupted);
    FAnimInstanceOnMontageStarted OnMontageStarted;
    void OnMontageStartedMCDelegate(class UAnimMontage* Montage);
    FAnimInstanceOnMontageEnded OnMontageEnded;
    void OnMontageEndedMCDelegate(class UAnimMontage* Montage, bool bInterrupted);
    FAnimInstanceOnAllMontageInstancesEnded OnAllMontageInstancesEnded;
    void OnAllMontageInstancesEndedMCDelegate();
    FAnimNotifyQueue NotifyQueue;
    TArray<FAnimNotifyEvent> ActiveAnimNotifyState;

    void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
    void UnlinkAnimClassLayers(TSubclassOf<class UAnimInstance> InClass);
    class APawn* TryGetPawnOwner();
    void StopSlotAnimation(float InBlendOutTime, FName SlotNodeName);
    void SnapshotPose(FPoseSnapshot& Snapshot);
    void SetRootMotionMode(TEnumAsByte<ERootMotionMode::Type> Value);
    void SetReceiveNotifiesFromLinkedInstances(bool bSet);
    void SetPropagateNotifiesToLinkedInstances(bool bSet);
    void SetMorphTarget(FName MorphTargetName, float Value);
    void SavePoseSnapshot(FName SnapshotName);
    void ResetDynamics(ETeleportType InTeleportType);
    class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    float PlaySlotAnimation(class UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount);
    void Montage_StopGroupByName(float InBlendOutTime, FName GroupName);
    void Montage_Stop(float InBlendOutTime, const class UAnimMontage* Montage);
    void Montage_SetPosition(const class UAnimMontage* Montage, float NewPosition);
    void Montage_SetPlayRate(const class UAnimMontage* Montage, float NewPlayRate);
    void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, const class UAnimMontage* Montage);
    void Montage_Resume(const class UAnimMontage* Montage);
    float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    void Montage_Pause(const class UAnimMontage* Montage);
    void Montage_JumpToSectionsEnd(FName SectionName, const class UAnimMontage* Montage);
    void Montage_JumpToSection(FName SectionName, const class UAnimMontage* Montage);
    bool Montage_IsPlaying(const class UAnimMontage* Montage);
    bool Montage_IsActive(const class UAnimMontage* Montage);
    float Montage_GetPosition(const class UAnimMontage* Montage);
    float Montage_GetPlayRate(const class UAnimMontage* Montage);
    bool Montage_GetIsStopped(const class UAnimMontage* Montage);
    FName Montage_GetCurrentSection(const class UAnimMontage* Montage);
    float Montage_GetBlendTime(const class UAnimMontage* Montage);
    void LockAIResources(bool bLockMovement, bool LockAILogic);
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<class UAnimInstance> InClass);
    void LinkAnimClassLayers(TSubclassOf<class UAnimInstance> InClass);
    bool IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder);
    bool IsPlayingSlotAnimation(const class UAnimSequenceBase* Asset, FName SlotNodeName);
    bool IsAnyMontagePlaying();
    bool HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName);
    bool GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime);
    FMarkerSyncAnimPosition GetSyncGroupPosition(FName InSyncGroupName);
    float GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex);
    float GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex);
    float GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex);
    float GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex);
    float GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex);
    bool GetReceiveNotifiesFromLinkedInstances();
    bool GetPropagateNotifiesToLinkedInstances();
    class USkeletalMeshComponent* GetOwningComponent();
    class AActor* GetOwningActor();
    void GetLinkedAnimLayerInstancesByGroup(FName InGroup, TArray<class UAnimInstance*>& OutLinkedInstances);
    class UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(FName InGroup, TSubclassOf<class UAnimInstance> InClass);
    class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);
    class UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<class UAnimInstance> InClass);
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<class UAnimInstance*>& OutLinkedInstances);
    class UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);
    float GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex);
    float GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex);
    float GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex);
    float GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex);
    float GetInstanceMachineWeight(int32 MachineIndex);
    float GetInstanceCurrentStateElapsedTime(int32 MachineIndex);
    float GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex);
    float GetInstanceAssetPlayerTime(int32 AssetPlayerIndex);
    float GetInstanceAssetPlayerLength(int32 AssetPlayerIndex);
    float GetCurveValue(FName CurveName);
    FName GetCurrentStateName(int32 MachineIndex);
    class UAnimMontage* GetCurrentActiveMontage();
    void GetAllCurveNames(TArray<FName>& OutNames);
    void GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames);
    void ClearMorphTargets();
    float CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintPostEvaluateAnimation();
    void BlueprintLinkedAnimationLayersInitialized();
    void BlueprintInitializeAnimation();
    void BlueprintBeginPlay();
};

class UAnimMetaData : public UObject
{
};

class UAnimMontage : public UAnimCompositeBase
{
    FAlphaBlend BlendIn;
    float BlendInTime;
    FAlphaBlend BlendOut;
    float BlendOutTime;
    float BlendOutTriggerTime;
    FName SyncGroup;
    int32 SyncSlotIndex;
    FMarkerSyncData MarkerData;
    TArray<FCompositeSection> CompositeSections;
    TArray<FSlotAnimationTrack> SlotAnimTracks;
    TArray<FBranchingPoint> BranchingPoints;
    bool bEnableRootMotionTranslation;
    bool bEnableRootMotionRotation;
    bool bEnableAutoBlendOut;
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    TArray<FBranchingPointMarker> BranchingPointMarkers;
    TArray<int32> BranchingPointStateNotifyIndices;
    FTimeStretchCurve TimeStretchCurve;
    FName TimeStretchCurveName;

    float GetDefaultBlendOutTime();
};

class UAnimNotify : public UObject
{

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    FString GetNotifyName();
};

class UAnimNotifyState : public UObject
{

    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    FString GetNotifyName();
};

class UAnimNotifyState_DisableRootMotion : public UAnimNotifyState
{
};

class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
    class UParticleSystem* PSTemplate;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool bDestroyAtEnd;

};

class UAnimNotifyState_Trail : public UAnimNotifyState
{
    class UParticleSystem* PSTemplate;
    FName FirstSocketName;
    FName SecondSocketName;
    TEnumAsByte<ETrailWidthMode> WidthScaleMode;
    FName WidthScaleCurve;
    uint8 bRecycleSpawnedSystems;

    class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

class UAnimNotify_PauseClothingSimulation : public UAnimNotify
{
};

class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
    class UParticleSystem* PSTemplate;
    FVector LocationOffset;
    FRotator RotationOffset;
    FVector Scale;
    uint8 Attached;
    FName SocketName;

};

class UAnimNotify_PlaySound : public UAnimNotify
{
    class USoundBase* Sound;
    float VolumeMultiplier;
    float PitchMultiplier;
    uint8 bFollow;
    FName AttachName;

};

class UAnimNotify_ResetClothingSimulation : public UAnimNotify
{
};

class UAnimNotify_ResetDynamics : public UAnimNotify
{
};

class UAnimNotify_ResumeClothingSimulation : public UAnimNotify
{
};

class UAnimSequence : public UAnimSequenceBase
{
    int32 NumFrames;
    TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable;
    class UAnimBoneCompressionSettings* BoneCompressionSettings;
    class UAnimCurveCompressionSettings* CurveCompressionSettings;
    TEnumAsByte<EAdditiveAnimationType> AdditiveAnimType;
    TEnumAsByte<EAdditiveBasePoseType> RefPoseType;
    class UAnimSequence* RefPoseSeq;
    int32 RefFrameIndex;
    FName RetargetSource;
    TArray<FTransform> RetargetSourceAssetReferencePose;
    EAnimInterpolationType Interpolation;
    bool bEnableRootMotion;
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    bool bForceRootLock;
    bool bUseNormalizedRootMotionScale;
    bool bRootMotionSettingsCopiedFromMontage;
    TArray<FAnimSyncMarker> AuthoredSyncMarkers;
    TArray<FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData;

};

class UAnimSequenceBase : public UAnimationAsset
{
    TArray<FAnimNotifyEvent> Notifies;
    float SequenceLength;
    float RateScale;
    FRawCurveTracks RawCurveData;

    float GetPlayLength();
};

class UAnimSet : public UObject
{
    uint8 bAnimRotationOnly;
    TArray<FName> TrackBoneNames;
    TArray<FAnimSetMeshLinkup> LinkupCache;
    TArray<uint8> BoneUseAnimTranslation;
    TArray<uint8> ForceUseMeshTranslation;
    TArray<FName> UseTranslationBoneNames;
    TArray<FName> ForceMeshTranslationBoneNames;
    FName PreviewSkelMeshName;
    FName BestRatioSkelMeshName;

};

class UAnimSingleNodeInstance : public UAnimInstance
{
    class UAnimationAsset* CurrentAsset;
    FAnimSingleNodeInstancePostEvaluateAnimEvent PostEvaluateAnimEvent;
    void PostEvaluateAnimEvent();

    void StopAnim();
    void SetReverse(bool bInReverse);
    void SetPreviewCurveOverride(const FName& PoseName, float Value, bool bRemoveIfZero);
    void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
    void SetPosition(float InPosition, bool bFireNotifies);
    void SetPlayRate(float InPlayRate);
    void SetPlaying(bool bIsPlaying);
    void SetLooping(bool bIsLooping);
    void SetBlendSpaceInput(const FVector& InBlendInput);
    void SetAnimationAsset(class UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
    void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
    float GetLength();
    class UAnimationAsset* GetAnimationAsset();
};

class UAnimStateMachineTypes : public UObject
{
};

class UAnimStreamable : public UAnimSequenceBase
{
    int32 NumFrames;
    EAnimInterpolationType Interpolation;
    FName RetargetSource;
    class UAnimBoneCompressionSettings* BoneCompressionSettings;
    class UAnimCurveCompressionSettings* CurveCompressionSettings;
    bool bEnableRootMotion;
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    bool bForceRootLock;
    bool bUseNormalizedRootMotionScale;

};

class UAnimationAsset : public UObject
{
    class USkeleton* Skeleton;
    TArray<class UAnimMetaData*> MetaData;
    TArray<class UAssetUserData*> AssetUserData;

};

class UAnimationSettings : public UDeveloperSettings
{
    int32 CompressCommandletVersion;
    TArray<FString> KeyEndEffectorsMatchNameArray;
    bool ForceRecompression;
    bool bForceBelowThreshold;
    bool bFirstRecompressUsingCurrentOrDefault;
    bool bRaiseMaxErrorToExisting;
    bool bEnablePerformanceLog;
    bool bStripAnimationDataOnDedicatedServer;
    bool bTickAnimationOnSkeletalMeshInit;
    TArray<FCustomAttributeSetting> BoneCustomAttributesNames;
    TArray<FString> BoneNamesWithCustomAttributes;
    TMap<class FName, class ECustomAttributeBlendType> AttributeBlendModes;
    ECustomAttributeBlendType DefaultAttributeBlendMode;

};

class UApplicationLifecycleComponent : public UActorComponent
{
    FApplicationLifecycleComponentApplicationWillDeactivateDelegate ApplicationWillDeactivateDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationHasReactivatedDelegate ApplicationHasReactivatedDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationWillEnterBackgroundDelegate ApplicationWillEnterBackgroundDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationHasEnteredForegroundDelegate ApplicationHasEnteredForegroundDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationWillTerminateDelegate ApplicationWillTerminateDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationShouldUnloadResourcesDelegate ApplicationShouldUnloadResourcesDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationReceivedStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;
    void ApplicationStartupArgumentsDelegate(const TArray<FString>& StartupArguments);
    FApplicationLifecycleComponentOnTemperatureChangeDelegate OnTemperatureChangeDelegate;
    void OnTemperatureChangeDelegate(ETemperatureSeverityType Severity);
    FApplicationLifecycleComponentOnLowPowerModeDelegate OnLowPowerModeDelegate;
    void OnLowPowerModeDelegate(bool bInLowPowerMode);

};

class UArrowComponent : public UPrimitiveComponent
{
    FColor ArrowColor;
    float ArrowSize;
    float ArrowLength;
    float ScreenSize;
    uint8 bIsScreenSizeScaled;
    uint8 bTreatAsASprite;

    void SetArrowColor(FLinearColor NewColor);
};

class UAssetExportTask : public UObject
{
    class UObject* Object;
    class UExporter* Exporter;
    FString Filename;
    bool bSelected;
    bool bReplaceIdentical;
    bool bPrompt;
    bool bAutomated;
    bool bUseFileArchive;
    bool bWriteEmptyFiles;
    TArray<class UObject*> IgnoreObjectList;
    class UObject* options;
    TArray<FString> Errors;

};

class UAssetImportData : public UObject
{
};

class UAssetManager : public UObject
{
    TArray<class UObject*> ObjectReferenceList;
    bool bIsGlobalAsyncScanEnvironment;
    bool bShouldGuessTypeAndName;
    bool bShouldUseSynchronousLoad;
    bool bIsLoadingFromPakFiles;
    bool bShouldAcquireMissingChunksOnLoad;
    bool bOnlyCookProductionAssets;
    bool bIsBulkScanning;
    bool bIsPrimaryAssetDirectoryCurrent;
    bool bIsManagementDatabaseCurrent;
    bool bUpdateManagementDatabaseAfterScan;
    bool bIncludeOnlyOnDiskAssets;
    bool bHasCompletedInitialScan;
    int32 NumberOfSpawnedNotifications;

};

class UAssetManagerSettings : public UDeveloperSettings
{
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;
    TArray<FDirectoryPath> DirectoriesToExclude;
    TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules;
    TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules;
    bool bOnlyCookProductionAssets;
    bool bShouldManagerDetermineTypeAndName;
    bool bShouldGuessTypeAndNameInEditor;
    bool bShouldAcquireMissingChunksOnLoad;
    TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects;
    TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects;
    TArray<FAssetManagerRedirect> AssetPathRedirects;
    TSet<FName> MetaDataTagsForAssetRegistry;

};

class UAssetMappingTable : public UObject
{
    TArray<FAssetMapping> MappedAssets;

};

class UAssetUserData : public UObject
{
};

class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionChangePrimaryAssetBundlesCompleted Completed;
    void OnPrimaryAssetBundlesChanged();

    class UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(class UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& AddBundles, const TArray<FName>& RemoveBundles);
    class UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(class UObject* WorldContextObject, const TArray<FName>& NewBundles, const TArray<FName>& OldBundles);
};

class UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase
{
    FAsyncActionHandleSaveGameCompleted Completed;
    void OnAsyncHandleSaveGame(class USaveGame* SaveGame, bool bSuccess);
    class USaveGame* SaveGameObject;

    class UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(class UObject* WorldContextObject, class USaveGame* SaveGameObject, FString slotName, const int32 UserIndex);
    class UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(class UObject* WorldContextObject, FString slotName, const int32 UserIndex);
};

class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionLoadPrimaryAssetCompleted Completed;
    void OnPrimaryAssetLoaded(class UObject* Loaded);

    class UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(class UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, const TArray<FName>& LoadBundles);
};

class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase
{
};

class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionLoadPrimaryAssetClassCompleted Completed;
    void OnPrimaryAssetClassLoaded(UClass* Loaded);

    class UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(class UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, const TArray<FName>& LoadBundles);
};

class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionLoadPrimaryAssetClassListCompleted Completed;
    void OnPrimaryAssetClassListLoaded(const TArray<class UClass*>& Loaded);

    class UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(class UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);
};

class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionLoadPrimaryAssetListCompleted Completed;
    void OnPrimaryAssetListLoaded(const TArray<class UObject*>& Loaded);

    class UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(class UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);
};

class UAtmosphericFogComponent : public USceneComponent
{
    float SunMultiplier;
    float FogMultiplier;
    float DensityMultiplier;
    float DensityOffset;
    float DistanceScale;
    float AltitudeScale;
    float DistanceOffset;
    float GroundOffset;
    float StartDistance;
    float SunDiscScale;
    float DefaultBrightness;
    FColor DefaultLightColor;
    uint8 bDisableSunDisk;
    uint8 bAtmosphereAffectsSunIlluminance;
    uint8 bDisableGroundScattering;
    FAtmospherePrecomputeParameters PrecomputeParams;
    class UTexture2D* TransmittanceTexture;
    class UTexture2D* IrradianceTexture;

    void StartPrecompute();
    void SetSunMultiplier(float NewSunMultiplier);
    void SetStartDistance(float NewStartDistance);
    void SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum);
    void SetFogMultiplier(float NewFogMultiplier);
    void SetDistanceScale(float NewDistanceScale);
    void SetDistanceOffset(float NewDistanceOffset);
    void SetDensityOffset(float NewDensityOffset);
    void SetDensityMultiplier(float NewDensityMultiplier);
    void SetDefaultLightColor(FLinearColor NewLightColor);
    void SetDefaultBrightness(float NewBrightness);
    void SetAltitudeScale(float NewAltitudeScale);
    void DisableSunDisk(bool NewSunDisk);
    void DisableGroundScattering(bool NewGroundScattering);
};

class UAudioBus : public UObject
{
    EAudioBusChannels AudioBusChannels;

};

class UAudioComponent : public USceneComponent
{
    class USoundBase* Sound;
    TArray<FAudioComponentParam> InstanceParameters;
    class USoundClass* SoundClassOverride;
    uint8 bAutoDestroy;
    uint8 bStopWhenOwnerDestroyed;
    uint8 bShouldRemainActiveIfDropped;
    uint8 bAllowSpatialization;
    uint8 bOverrideAttenuation;
    uint8 bOverrideSubtitlePriority;
    uint8 bIsUISound;
    uint8 bEnableLowPassFilter;
    uint8 bOverridePriority;
    uint8 bSuppressSubtitles;
    uint8 bAutoManageAttachment;
    FName AudioComponentUserID;
    float PitchModulationMin;
    float PitchModulationMax;
    float VolumeModulationMin;
    float VolumeModulationMax;
    float VolumeMultiplier;
    int32 EnvelopeFollowerAttackTime;
    int32 EnvelopeFollowerReleaseTime;
    float Priority;
    float SubtitlePriority;
    class USoundEffectSourcePresetChain* SourceEffectChain;
    float PitchMultiplier;
    float LowPassFilterFrequency;
    class USoundAttenuation* AttenuationSettings;
    FSoundAttenuationSettings AttenuationOverrides;
    class USoundConcurrency* ConcurrencySettings;
    TSet<USoundConcurrency*> ConcurrencySet;
    EAttachmentRule AutoAttachLocationRule;
    EAttachmentRule AutoAttachRotationRule;
    EAttachmentRule AutoAttachScaleRule;
    FSoundModulationDefaultRoutingSettings ModulationRouting;
    FAudioComponentOnAudioPlayStateChanged OnAudioPlayStateChanged;
    void OnAudioPlayStateChanged(EAudioComponentPlayState PlayState);
    FAudioComponentOnAudioVirtualizationChanged OnAudioVirtualizationChanged;
    void OnAudioVirtualizationChanged(bool bIsVirtualized);
    FAudioComponentOnAudioFinished OnAudioFinished;
    void OnAudioFinished();
    FAudioComponentOnAudioPlaybackPercent OnAudioPlaybackPercent;
    void OnAudioPlaybackPercent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);
    FAudioComponentOnAudioSingleEnvelopeValue OnAudioSingleEnvelopeValue;
    void OnAudioSingleEnvelopeValue(const class USoundWave* PlayingSoundWave, const float EnvelopeValue);
    FAudioComponentOnAudioMultiEnvelopeValue OnAudioMultiEnvelopeValue;
    void OnAudioMultiEnvelopeValue(const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances);
    FAudioComponentOnQueueSubtitles OnQueueSubtitles;
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    TWeakObjectPtr<class USceneComponent> AutoAttachParent;
    FName AutoAttachSocketName;

    void StopDelayed(float DelayTime);
    void Stop();
    void SetWaveParameter(FName InName, class USoundWave* InWave);
    void SetVolumeMultiplier(float NewVolumeMultiplier);
    void SetUISound(bool bInUISound);
    void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
    void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSound(class USoundBase* NewSound);
    void SetPitchMultiplier(float NewPitchMultiplier);
    void SetPaused(bool bPause);
    void SetOutputToBusOnly(bool bInOutputToBusOnly);
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    void SetIntParameter(FName InName, int32 inInt);
    void SetFloatParameter(FName InName, float InFloat);
    void SetBoolParameter(FName InName, bool InBool);
    void SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
    void SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
    void PlayQuantized(const class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle, FQuartzQuantizationBoundary& InQuantizationBoundary, const FPlayQuantizedInDelegate& InDelegate, float InStartTime, float InFadeInDuration, float InFadeVolumeLevel, EAudioFaderCurve InFadeCurve);
    void Play(float StartTime);
    bool IsVirtualized();
    bool IsPlaying();
    bool HasCookedFFTData();
    bool HasCookedAmplitudeEnvelopeData();
    EAudioComponentPlayState GetPlayState();
    bool GetCookedFFTDataForAllPlayingSounds(TArray<FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData);
    bool GetCookedFFTData(const TArray<float>& FrequenciesToGet, TArray<FSoundWaveSpectralData>& OutSoundWaveSpectralData);
    bool GetCookedEnvelopeDataForAllPlayingSounds(TArray<FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData);
    bool GetCookedEnvelopeData(float& OutEnvelopeData);
    void FadeOut(float FadeoutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve);
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve);
    void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);
};

class UAudioSettings : public UDeveloperSettings
{
    FSoftObjectPath DefaultSoundClassName;
    FSoftObjectPath DefaultMediaSoundClassName;
    FSoftObjectPath DefaultSoundConcurrencyName;
    FSoftObjectPath DefaultBaseSoundMix;
    FSoftObjectPath VoiPSoundClass;
    FSoftObjectPath MasterSubmix;
    FSoftObjectPath BaseDefaultSubmix;
    FSoftObjectPath ReverbSubmix;
    FSoftObjectPath EQSubmix;
    EVoiceSampleRate VoiPSampleRate;
    float DefaultReverbSendLevel;
    int32 MaximumConcurrentStreams;
    float GlobalMinPitchScale;
    float GlobalMaxPitchScale;
    TArray<FAudioQualitySettings> QualityLevels;
    uint8 bAllowPlayWhenSilent;
    uint8 bDisableMasterEQ;
    uint8 bAllowCenterChannel3DPanning;
    uint32 NumStoppingSources;
    EPanningMethod PanningMethod;
    EMonoChannelUpmixMethod MonoChannelUpmixMethod;
    FString DialogueFilenameFormat;
    TArray<FSoundDebugEntry> DebugSounds;
    TArray<FDefaultAudioBusSettings> DefaultAudioBuses;
    class USoundClass* DefaultSoundClass;
    class USoundClass* DefaultMediaSoundClass;
    class USoundConcurrency* DefaultSoundConcurrency;

};

class UAutoDestroySubsystem : public UTickableWorldSubsystem
{
    TArray<class AActor*> ActorsToPoll;

    void OnActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
};

class UAutomationTestSettings : public UObject
{
    TArray<FString> EngineTestModules;
    TArray<FString> EditorTestModules;
    FSoftObjectPath AutomationTestmap;
    TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps;
    TArray<FSoftObjectPath> AssetsToOpen;
    TArray<FString> MapsToPIETest;
    FBuildPromotionTestSettings BuildPromotionTest;
    FMaterialEditorPromotionSettings MaterialEditorPromotionTest;
    FParticleEditorPromotionSettings ParticleEditorPromotionTest;
    FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest;
    TArray<FString> TestLevelFolders;
    TArray<FExternalToolDefinition> ExternalTools;
    TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions;
    TArray<FLaunchOnTestSettings> LaunchOnSettings;
    FIntPoint DefaultScreenshotResolution;
    float PIETestDuration;

};

class UAvoidanceManager : public UObject
{
    float DefaultTimeToLive;
    float LockTimeAfterAvoid;
    float LockTimeAfterClean;
    float DeltaTimeToPredict;
    float ArtificialRadiusExpansion;
    float TestHeightDifference;
    float HeightCheckMargin;

    bool RegisterMovementComponent(class UMovementComponent* MovementComp, float AvoidanceWeight);
    int32 GetObjectCount();
    int32 GetNewAvoidanceUID();
    FVector GetAvoidanceVelocityForComponent(class UMovementComponent* MovementComp);
};

class UBillboardComponent : public UPrimitiveComponent
{
    class UTexture2D* Sprite;
    uint8 bIsScreenSizeScaled;
    float ScreenSize;
    float U;
    float UL;
    float V;
    float VL;

    void SetUV(int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);
    void SetSpriteAndUV(class UTexture2D* NewSprite, int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);
    void SetSprite(class UTexture2D* NewSprite);
};

class UBlendProfile : public UObject
{
    class USkeleton* OwningSkeleton;
    TArray<FBlendProfileBoneEntry> ProfileEntries;

};

class UBlendSpace : public UBlendSpaceBase
{
    TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation;

};

class UBlendSpace1D : public UBlendSpaceBase
{
    bool bScaleAnimation;

};

class UBlendSpaceBase : public UAnimationAsset
{
    bool bRotationBlendInMeshSpace;
    float AnimLength;
    FInterpolationParameter InterpolationParam;
    float TargetWeightInterpolationSpeedPerSec;
    TEnumAsByte<ENotifyTriggerMode::Type> NotifyTriggerMode;
    TArray<FPerBoneInterpolation> PerBoneBlend;
    int32 SampleIndexWithMarkers;
    TArray<FBlendSample> SampleData;
    TArray<FEditorElement> GridSamples;
    FBlendParameter BlendParameters;

};

class UBlueprint : public UBlueprintCore
{
    UClass* ParentClass;
    TEnumAsByte<EBlueprintType> BlueprintType;
    uint8 bRecompileOnLoad;
    uint8 bHasBeenRegenerated;
    uint8 bIsRegeneratingOnLoad;
    int32 BlueprintSystemVersion;
    class USimpleConstructionScript* SimpleConstructionScript;
    TArray<class UActorComponent*> ComponentTemplates;
    TArray<class UTimelineTemplate*> Timelines;
    TArray<FBPComponentClassOverride> ComponentClassOverrides;
    class UInheritableComponentHandler* InheritableComponentHandler;

};

class UBlueprintAsyncActionBase : public UObject
{

    void Activate();
};

class UBlueprintCore : public UObject
{
    UClass* SkeletonGeneratedClass;
    UClass* GeneratedClass;
    bool bLegacyNeedToPurgeSkelRefs;
    FGuid BlueprintGuid;

};

class UBlueprintExtension : public UObject
{
};

class UBlueprintFunctionLibrary : public UObject
{
};

class UBlueprintGeneratedClass : public UClass
{
    int32 NumReplicatedProperties;
    uint8 bHasNativizedParent;
    uint8 bHasCookedComponentInstancingData;
    TArray<class UDynamicBlueprintBinding*> DynamicBindingObjects;
    TArray<class UActorComponent*> ComponentTemplates;
    TArray<class UTimelineTemplate*> Timelines;
    TArray<FBPComponentClassOverride> ComponentClassOverrides;
    class USimpleConstructionScript* SimpleConstructionScript;
    class UInheritableComponentHandler* InheritableComponentHandler;
    class UStructProperty* UberGraphFramePointerProperty;
    class UFunction* UberGraphFunction;
    TMap<class FName, class FBlueprintCookedComponentInstancingData> CookedComponentInstancingData;

};

class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{

    void SetMapPropertyByName(class UObject* Object, FName PropertyName, const TMap<int32, int32>& Value);
    void Map_Values(const TMap<int32, int32>& TargetMap, TArray<int32>& Values);
    bool Map_Remove(const TMap<int32, int32>& TargetMap, const int32& Key);
    int32 Map_Length(const TMap<int32, int32>& TargetMap);
    void Map_Keys(const TMap<int32, int32>& TargetMap, TArray<int32>& Keys);
    bool Map_Find(const TMap<int32, int32>& TargetMap, const int32& Key, int32& Value);
    bool Map_Contains(const TMap<int32, int32>& TargetMap, const int32& Key);
    void Map_Clear(const TMap<int32, int32>& TargetMap);
    void Map_Add(const TMap<int32, int32>& TargetMap, const int32& Key, const int32& Value);
};

class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary
{

    FString VideoCaptureDir();
    void ValidatePath(FString InPath, bool& bDidSucceed, FText& OutReason);
    void Split(FString InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart);
    FString SourceConfigDir();
    bool ShouldSaveToUserDir();
    FString ShaderWorkingDir();
    void SetProjectFilePath(FString NewGameProjectFilePath);
    FString SetExtension(FString InPath, FString InNewExtension);
    FString ScreenShotDir();
    FString SandboxesDir();
    FString RootDir();
    void RemoveDuplicateSlashes(FString InPath, FString& outPath);
    FString ProjectUserDir();
    FString ProjectSavedDir();
    FString ProjectPluginsDir();
    FString ProjectPersistentDownloadDir();
    FString ProjectModsDir();
    FString ProjectLogDir();
    FString ProjectIntermediateDir();
    FString ProjectDir();
    FString ProjectContentDir();
    FString ProjectConfigDir();
    FString ProfilingDir();
    void NormalizeFilename(FString InPath, FString& outPath);
    void NormalizeDirectoryName(FString InPath, FString& outPath);
    FString MakeValidFileName(FString inString, FString InReplacementChar);
    void MakeStandardFilename(FString InPath, FString& outPath);
    void MakePlatformFilename(FString InPath, FString& outPath);
    bool MakePathRelativeTo(FString InPath, FString InRelativeTo, FString& outPath);
    FString LaunchDir();
    bool IsSamePath(FString PathA, FString PathB);
    bool IsRestrictedPath(FString InPath);
    bool IsRelative(FString InPath);
    bool IsProjectFilePathSet();
    bool IsDrive(FString InPath);
    bool HasProjectPersistentDownloadDir();
    TArray<FString> GetToolTipLocalizationPaths();
    TArray<FString> GetRestrictedFolderNames();
    FString GetRelativePathToRoot();
    TArray<FString> GetPropertyNameLocalizationPaths();
    FString GetProjectFilePath();
    FString GetPath(FString InPath);
    FString GetInvalidFileSystemChars();
    TArray<FString> GetGameLocalizationPaths();
    FString GetExtension(FString InPath, bool bIncludeDot);
    TArray<FString> GetEngineLocalizationPaths();
    TArray<FString> GetEditorLocalizationPaths();
    FString GetCleanFilename(FString InPath);
    FString GetBaseFilename(FString InPath, bool bRemovePath);
    FString GeneratedConfigDir();
    FString GameUserDeveloperDir();
    FString GameSourceDir();
    FString GameDevelopersDir();
    FString GameAgnosticSavedDir();
    bool FileExists(FString InPath);
    FString FeaturePackDir();
    FString EnterprisePluginsDir();
    FString EnterpriseFeaturePackDir();
    FString EnterpriseDir();
    FString EngineVersionAgnosticUserDir();
    FString EngineUserDir();
    FString EngineSourceDir();
    FString EngineSavedDir();
    FString EnginePluginsDir();
    FString EngineIntermediateDir();
    FString EngineDir();
    FString EngineContentDir();
    FString EngineConfigDir();
    bool DirectoryExists(FString InPath);
    FString DiffDir();
    FString CreateTempFilename(FString Path, FString Prefix, FString Extension);
    FString ConvertToSandboxPath(FString InPath, FString InSandboxName);
    FString ConvertRelativePathToFull(FString InPath, FString InBasePath);
    FString ConvertFromSandboxPath(FString InPath, FString InSandboxName);
    FString Combine(const TArray<FString>& InPaths);
    bool CollapseRelativeDirectories(FString InPath, FString& outPath);
    FString CloudDir();
    FString ChangeExtension(FString InPath, FString InNewExtension);
    FString BugItDir();
    FString AutomationTransientDir();
    FString AutomationLogDir();
    FString AutomationDir();
};

class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{

    int32 ScheduleLocalNotificationFromNow(int32 inSecondsFromNow, const FText& Title, const FText& Body, const FText& Action, FString ActivationEvent);
    void ScheduleLocalNotificationBadgeFromNow(int32 inSecondsFromNow, FString ActivationEvent);
    int32 ScheduleLocalNotificationBadgeAtTime(const FDateTime& FireDateTime, bool LocalTime, FString ActivationEvent);
    int32 ScheduleLocalNotificationAtTime(const FDateTime& FireDateTime, bool LocalTime, const FText& Title, const FText& Body, const FText& Action, FString ActivationEvent);
    void GetLaunchNotification(bool& NotificationLaunchedApp, FString& ActivationEvent, int32& FireDate);
    TEnumAsByte<EScreenOrientation::Type> GetDeviceOrientation();
    void ClearAllLocalNotifications();
    void CancelLocalNotificationById(int32 NotificationId);
    void CancelLocalNotification(FString ActivationEvent);
};

class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{

    void SetSetPropertyByName(class UObject* Object, FName PropertyName, const TSet<int32>& Value);
    void Set_Union(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);
    void Set_ToArray(const TSet<int32>& A, TArray<int32>& Result);
    void Set_RemoveItems(const TSet<int32>& TargetSet, const TArray<int32>& Items);
    bool Set_Remove(const TSet<int32>& TargetSet, const int32& Item);
    int32 Set_Length(const TSet<int32>& TargetSet);
    void Set_Intersection(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);
    void Set_Difference(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);
    bool Set_Contains(const TSet<int32>& TargetSet, const int32& ItemToFind);
    void Set_Clear(const TSet<int32>& TargetSet);
    void Set_AddItems(const TSet<int32>& TargetSet, const TArray<int32>& NewItems);
    void Set_Add(const TSet<int32>& TargetSet, const int32& NewItem);
};

class UBodySetup : public UBodySetupCore
{
    FKAggregateGeom AggGeom;
    uint8 bAlwaysFullAnimWeight;
    uint8 bConsiderForBounds;
    uint8 bMeshCollideAll;
    uint8 bDoubleSidedGeometry;
    uint8 bGenerateNonMirroredCollision;
    uint8 bSharedCookedData;
    uint8 bGenerateMirroredCollision;
    uint8 bSupportUVsAndFaceRemap;
    class UPhysicalMaterial* PhysMaterial;
    FWalkableSlopeOverride WalkableSlopeOverride;
    FBodyInstance DefaultInstance;
    FVector BuildScale3D;

};

class UBoneMaskFilter : public UObject
{
    TArray<FInputBlendPose> BlendPoses;

};

class UBookMark : public UBookmarkBase
{
    FVector Location;
    FRotator Rotation;
    TArray<FString> HiddenLevels;

};

class UBookMark2D : public UBookmarkBase
{
    float Zoom2D;
    FIntPoint Location;

};

class UBookmarkBase : public UObject
{
};

class UBoundsCopyComponent : public UActorComponent
{
    TSoftObjectPtr<AActor> BoundsSourceActor;
    bool bUseCollidingComponentsForSourceBounds;
    bool bKeepOwnBoundsScale;
    bool bUseCollidingComponentsForOwnBounds;
    FTransform PostTransform;
    bool bCopyXBounds;
    bool bCopyYBounds;
    bool bCopyZBounds;

};

class UBoxComponent : public UShapeComponent
{
    FVector BoxExtent;
    float LineThickness;

    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    FVector GetUnscaledBoxExtent();
    FVector GetScaledBoxExtent();
};

class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
    float BoxTransitionDistance;
    class UBoxComponent* PreviewInfluenceBox;
    class UBoxComponent* PreviewCaptureBox;

};

class UBreakpoint : public UObject
{
    uint8 bEnabled;
    class UEdGraphNode* Node;
    uint8 bStepOnce;
    uint8 bStepOnce_WasPreviouslyDisabled;
    uint8 bStepOnce_RemoveAfterHit;

};

class UBrushBuilder : public UObject
{
    FString BitmapFilename;
    FString ToolTip;
    uint8 NotifyBadParams;
    TArray<FVector> Vertices;
    TArray<FBuilderPoly> Polys;
    FName Layer;
    uint8 MergeCoplanars;

};

class UBrushComponent : public UPrimitiveComponent
{
    class UModel* Brush;
    class UBodySetup* BrushBodySetup;

};

class UButtonStyleAsset : public UObject
{
    FButtonStyle ButtonStyle;

};

class UCameraAnim : public UObject
{
    class UInterpGroup* CameraInterpGroup;
    float AnimLength;
    FBox BoundingBox;
    uint8 bRelativeToInitialTransform;
    uint8 bRelativeToInitialFOV;
    float BaseFOV;
    FPostProcessSettings BasePostProcessSettings;
    float BasePostProcessBlendWeight;

};

class UCameraAnimInst : public UObject
{
    class UCameraAnim* CamAnim;
    class UInterpGroupInst* InterpGroupInst;
    float PlayRate;
    class UInterpTrackMove* MoveTrack;
    class UInterpTrackInstMove* MoveInst;
    ECameraShakePlaySpace PlaySpace;

    void Stop(bool bImmediate);
    void SetScale(float NewDuration);
    void SetDuration(float NewDuration);
};

class UCameraComponent : public USceneComponent
{
    float FieldOfView;
    float OrthoWidth;
    float OrthoNearClipPlane;
    float OrthoFarClipPlane;
    float AspectRatio;
    uint8 bConstrainAspectRatio;
    uint8 bUseFieldOfViewForLOD;
    uint8 bLockToHmd;
    uint8 bUsePawnControlRotation;
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    float PostProcessBlendWeight;
    FPostProcessSettings PostProcessSettings;

    void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
    void SetProjectionMode(TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode);
    void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
    void SetOrthoWidth(float InOrthoWidth);
    void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
    void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
    void SetFieldOfView(float InFieldOfView);
    void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
    void SetAspectRatio(float InAspectRatio);
    void RemoveBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject);
    void OnCameraMeshHiddenChanged();
    void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView);
    void AddOrUpdateBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight);
};

class UCameraModifier : public UObject
{
    uint8 bDebug;
    uint8 bExclusive;
    uint8 Priority;
    class APlayerCameraManager* CameraOwner;
    float AlphaInTime;
    float AlphaOutTime;
    float alpha;

    bool IsDisabled();
    class AActor* GetViewTarget();
    void EnableModifier();
    void DisableModifier(bool bImmediate);
    void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);
    void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV);
};

class UCameraModifier_CameraShake : public UCameraModifier
{
    TArray<FActiveCameraShakeInfo> ActiveShakes;
    TMap<class TSubclassOf<UCameraShakeBase>, class FPooledCameraShakes> ExpiredPooledShakesMap;
    float SplitScreenShakeScale;

};

class UCameraShakeBase : public UObject
{
    bool bSingleInstance;
    float ShakeScale;
    class UCameraShakePattern* RootShakePattern;
    class APlayerCameraManager* CameraManager;

    void SetRootShakePattern(class UCameraShakePattern* InPattern);
    class UCameraShakePattern* GetRootShakePattern();
};

class UCameraShakePattern : public UObject
{
};

class UCameraShakeSourceComponent : public USceneComponent
{
    ECameraShakeAttenuation Attenuation;
    float InnerAttenuationRadius;
    float OuterAttenuationRadius;
    TSubclassOf<class UCameraShakeBase> CameraShake;
    bool bAutoStart;

    void StopAllCameraShakesOfType(TSubclassOf<class UCameraShakeBase> InCameraShake, bool bImmediately);
    void StopAllCameraShakes(bool bImmediately);
    void StartCameraShake(TSubclassOf<class UCameraShakeBase> InCameraShake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void Start();
    float GetAttenuationFactor(const FVector& Location);
};

class UCanvas : public UObject
{
    float OrgX;
    float OrgY;
    float ClipX;
    float ClipY;
    FColor DrawColor;
    uint8 bCenterX;
    uint8 bCenterY;
    uint8 bNoSmooth;
    int32 SizeX;
    int32 SizeY;
    FPlane ColorModulate;
    class UTexture2D* DefaultTexture;
    class UTexture2D* GradientTexture0;
    class UReporterGraph* ReporterGraph;

    FVector2D K2_TextSize(class UFont* RenderFont, FString RenderText, FVector2D Scale);
    FVector2D K2_StrLen(class UFont* RenderFont, FString RenderText);
    FVector K2_Project(FVector WorldLocation);
    void K2_DrawTriangle(class UTexture* RenderTexture, TArray<FCanvasUVTri> Triangles);
    void K2_DrawTexture(class UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, FVector2D PivotPoint);
    void K2_DrawText(class UFont* RenderFont, FString RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor ShadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor);
    void K2_DrawPolygon(class UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int32 NumberOfSides, FLinearColor RenderColor);
    void K2_DrawMaterialTriangle(class UMaterialInterface* RenderMaterial, TArray<FCanvasUVTri> Triangles);
    void K2_DrawMaterial(class UMaterialInterface* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint);
    void K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor);
    void K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor);
    void K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize);
    void K2_Deproject(FVector2D ScreenPosition, FVector& WorldOrigin, FVector& WorldDirection);
};

class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
    FCanvasRenderTarget2DOnCanvasRenderTargetUpdate OnCanvasRenderTargetUpdate;
    void OnCanvasRenderTargetUpdate(class UCanvas* Canvas, int32 Width, int32 Height);
    TWeakObjectPtr<class UWorld> World;
    bool bShouldClearRenderTargetOnReceiveUpdate;

    void UpdateResource();
    void ReceiveUpdate(class UCanvas* Canvas, int32 Width, int32 Height);
    void GetSize(int32& Width, int32& Height);
    class UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(class UObject* WorldContextObject, TSubclassOf<class UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int32 Width, int32 Height);
};

class UCapsuleComponent : public UShapeComponent
{
    float CapsuleHalfHeight;
    float CapsuleRadius;

    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
    void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere);
    void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight);
    float GetUnscaledCapsuleRadius();
    float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
    float GetUnscaledCapsuleHalfHeight();
    float GetShapeScale();
    void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere);
    void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight);
    float GetScaledCapsuleRadius();
    float GetScaledCapsuleHalfHeight_WithoutHemisphere();
    float GetScaledCapsuleHalfHeight();
};

class UChannel : public UObject
{
    class UNetConnection* Connection;

};

class UCharacterMovementComponent : public UPawnMovementComponent
{
    class ACharacter* CharacterOwner;
    float GravityScale;
    float MaxStepHeight;
    float JumpZVelocity;
    float JumpOffJumpZFactor;
    float WalkableFloorAngle;
    float WalkableFloorZ;
    TEnumAsByte<EMovementMode> MovementMode;
    uint8 CustomMovementMode;
    ENetworkSmoothingMode NetworkSmoothingMode;
    float GroundFriction;
    float MaxWalkSpeed;
    float MaxWalkSpeedCrouched;
    float MaxSwimSpeed;
    float MaxFlySpeed;
    float MaxCustomMovementSpeed;
    float MaxAcceleration;
    float MinAnalogWalkSpeed;
    float BrakingFrictionFactor;
    float BrakingFriction;
    float BrakingSubStepTime;
    float BrakingDecelerationWalking;
    float BrakingDecelerationFalling;
    float BrakingDecelerationSwimming;
    float BrakingDecelerationFlying;
    float AirControl;
    float AirControlBoostMultiplier;
    float AirControlBoostVelocityThreshold;
    float FallingLateralFriction;
    float CrouchedHalfHeight;
    float Buoyancy;
    float PerchRadiusThreshold;
    float PerchAdditionalHeight;
    FRotator RotationRate;
    uint8 bUseSeparateBrakingFriction;
    uint8 bApplyGravityWhileJumping;
    uint8 bUseControllerDesiredRotation;
    uint8 bOrientRotationToMovement;
    uint8 bSweepWhileNavWalking;
    uint8 bMovementInProgress;
    uint8 bEnableScopedMovementUpdates;
    uint8 bEnableServerDualMoveScopedMovementUpdates;
    uint8 bForceMaxAccel;
    uint8 bRunPhysicsWithNoController;
    uint8 bForceNextFloorCheck;
    uint8 bShrinkProxyCapsule;
    uint8 bCanWalkOffLedges;
    uint8 bCanWalkOffLedgesWhenCrouching;
    uint8 bNetworkSkipProxyPredictionOnNetUpdate;
    uint8 bNetworkAlwaysReplicateTransformUpdateTimestamp;
    uint8 bDeferUpdateMoveComponent;
    uint8 bEnablePhysicsInteraction;
    uint8 bTouchForceScaledToMass;
    uint8 bPushForceScaledToMass;
    uint8 bPushForceUsingZOffset;
    uint8 bScalePushForceToVelocity;
    class USceneComponent* DeferredUpdatedMoveComponent;
    float MaxOutOfWaterStepHeight;
    float OutofWaterZ;
    float Mass;
    float StandingDownwardForceScale;
    float InitialPushForceFactor;
    float PushForceFactor;
    float PushForcePointZOffsetFactor;
    float TouchForceFactor;
    float MinTouchForce;
    float MaxTouchForce;
    float RepulsionForce;
    FVector Acceleration;
    FQuat LastUpdateRotation;
    FVector LastUpdateLocation;
    FVector LastUpdateVelocity;
    float ServerLastTransformUpdateTimeStamp;
    float ServerLastClientGoodMoveAckTime;
    float ServerLastClientAdjustmentTime;
    FVector PendingImpulseToApply;
    FVector PendingForceToApply;
    float AnalogInputModifier;
    float MaxSimulationTimeStep;
    int32 MaxSimulationIterations;
    int32 MaxJumpApexAttemptsPerSimulation;
    float MaxDepenetrationWithGeometry;
    float MaxDepenetrationWithGeometryAsProxy;
    float MaxDepenetrationWithPawn;
    float MaxDepenetrationWithPawnAsProxy;
    float NetworkSimulatedSmoothLocationTime;
    float NetworkSimulatedSmoothRotationTime;
    float ListenServerNetworkSimulatedSmoothLocationTime;
    float ListenServerNetworkSimulatedSmoothRotationTime;
    float NetProxyShrinkRadius;
    float NetProxyShrinkHalfHeight;
    float NetworkMaxSmoothUpdateDistance;
    float NetworkNoSmoothUpdateDistance;
    float NetworkMinTimeBetweenClientAckGoodMoves;
    float NetworkMinTimeBetweenClientAdjustments;
    float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection;
    float NetworkLargeClientCorrectionDistance;
    float LedgeCheckThreshold;
    float JumpOutOfWaterPitch;
    FFindFloorResult CurrentFloor;
    TEnumAsByte<EMovementMode> DefaultLandMovementMode;
    TEnumAsByte<EMovementMode> DefaultWaterMovementMode;
    TEnumAsByte<EMovementMode> GroundMovementMode;
    uint8 bMaintainHorizontalGroundVelocity;
    uint8 bImpartBaseVelocityX;
    uint8 bImpartBaseVelocityY;
    uint8 bImpartBaseVelocityZ;
    uint8 bImpartBaseAngularVelocity;
    uint8 bJustTeleported;
    uint8 bNetworkUpdateReceived;
    uint8 bNetworkMovementModeChanged;
    uint8 bIgnoreClientMovementErrorChecksAndCorrection;
    uint8 bServerAcceptClientAuthoritativePosition;
    uint8 bNotifyApex;
    uint8 bCheatFlying;
    uint8 bWantsToCrouch;
    uint8 bCrouchMaintainsBaseLocation;
    uint8 bIgnoreBaseRotation;
    uint8 bFastAttachedMove;
    uint8 bAlwaysCheckFloor;
    uint8 bUseFlatBaseForFloorChecks;
    uint8 bPerformingJumpOff;
    uint8 bWantsToLeaveNavWalking;
    uint8 bUseRVOAvoidance;
    uint8 bRequestedMoveUseAcceleration;
    uint8 bWasSimulatingRootMotion;
    uint8 bAllowPhysicsRotationDuringAnimRootMotion;
    uint8 bHasRequestedVelocity;
    uint8 bRequestedMoveWithMaxSpeed;
    uint8 bWasAvoidanceUpdated;
    uint8 bProjectNavMeshWalking;
    uint8 bProjectNavMeshOnBothWorldChannels;
    float AvoidanceConsiderationRadius;
    FVector RequestedVelocity;
    int32 AvoidanceUID;
    FNavAvoidanceMask AvoidanceGroup;
    FNavAvoidanceMask GroupsToAvoid;
    FNavAvoidanceMask GroupsToIgnore;
    float AvoidanceWeight;
    FVector PendingLaunchVelocity;
    float NavMeshProjectionInterval;
    float NavMeshProjectionTimer;
    float NavMeshProjectionInterpSpeed;
    float NavMeshProjectionHeightScaleUp;
    float NavMeshProjectionHeightScaleDown;
    float NavWalkingFloorDistTolerance;
    FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction;
    float MinTimeBetweenTimeStampResets;
    FRootMotionSourceGroup CurrentRootMotion;
    FRootMotionSourceGroup ServerCorrectionRootMotion;
    FRootMotionMovementParams RootMotionParams;
    FVector AnimRootMotionVelocity;

    void SetWalkableFloorZ(float InWalkableFloorZ);
    void SetWalkableFloorAngle(float InWalkableFloorAngle);
    void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, uint8 NewCustomMode);
    void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToIgnore(int32 GroupFlags);
    void SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToAvoid(int32 GroupFlags);
    void SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask);
    void SetAvoidanceGroup(int32 GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    float K2_GetWalkableFloorZ();
    float K2_GetWalkableFloorAngle();
    float K2_GetModifiedMaxAcceleration();
    void K2_FindFloor(FVector CapsuleLocation, FFindFloorResult& FloorResult);
    void K2_ComputeFloorDist(FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, FFindFloorResult& FloorResult);
    bool IsWalking();
    bool IsWalkable(const FHitResult& Hit);
    float GetValidPerchRadius();
    float GetPerchRadiusThreshold();
    class UPrimitiveComponent* GetMovementBase();
    float GetMinAnalogSpeed();
    float GetMaxJumpHeightWithJumpTime();
    float GetMaxJumpHeight();
    float GetMaxBrakingDeceleration();
    float GetMaxAcceleration();
    FVector GetLastUpdateVelocity();
    FRotator GetLastUpdateRotation();
    FVector GetLastUpdateLocation();
    FVector GetImpartedMovementBaseVelocity();
    FVector GetCurrentAcceleration();
    class ACharacter* GetCharacterOwner();
    float GetAnalogInputModifier();
    void DisableMovement();
    void ClearAccumulatedForces();
    void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
    void AddImpulse(FVector Impulse, bool bVelocityChange);
    void AddForce(FVector force);
};

class UCheatManager : public UObject
{
    class ADebugCameraController* DebugCameraControllerRef;
    TSubclassOf<class ADebugCameraController> DebugCameraControllerClass;
    TArray<class UCheatManagerExtension*> CheatManagerExtensions;

    void Walk();
    void ViewSelf();
    void ViewPlayer(FString S);
    void ViewClass(TSubclassOf<class AActor> DesiredClass);
    void ViewActor(FName ActorName);
    void UpdateSafeArea();
    void ToggleServerStatReplicatorUpdateStatNet();
    void ToggleServerStatReplicatorClientOverwrite();
    void ToggleDebugCamera();
    void ToggleAILogging();
    void TestCollisionDistance();
    void Teleport();
    void Summon(FString ClassName);
    void StreamLevelOut(FName PackageName);
    void StreamLevelIn(FName PackageName);
    void SpawnServerStatReplicator();
    void Slomo(float NewTimeDilation);
    void SetWorldOrigin();
    void SetMouseSensitivityToDefault();
    void ServerToggleAILogging();
    void ReceiveInitCheatManager();
    void ReceiveEndPlay();
    void PlayersOnly();
    void OnlyLoadLevel(FName PackageName);
    void LogLoc();
    void InvertMouse();
    void God();
    void Ghost();
    void FreezeFrame(float Delay);
    void Fly();
    void FlushLog();
    void EnableDebugCamera();
    void DumpVoiceMutingState();
    void DumpPartyState();
    void DumpOnlineSessionState();
    void DumpChatState();
    void DisableDebugCamera();
    void DestroyTarget();
    void DestroyServerStatReplicator();
    void DestroyPawns(TSubclassOf<class APawn> aClass);
    void DestroyAllPawnsExceptTarget();
    void DestroyAll(TSubclassOf<class AActor> aClass);
    void DebugCapsuleSweepSize(float HalfHeight, float Radius);
    void DebugCapsuleSweepPawn();
    void DebugCapsuleSweepComplex(bool bTraceComplex);
    void DebugCapsuleSweepClear();
    void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);
    void DebugCapsuleSweepCapture();
    void DebugCapsuleSweep();
    void DamageTarget(float damageAmount);
    void CheatScript(FString ScriptName);
    void ChangeSize(float F);
    void BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString& GoString, FString& LocString);
    void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    void BugIt(FString ScreenShotDescription);
};

class UCheatManagerExtension : public UObject
{
};

class UCheckBoxStyleAsset : public UObject
{
    FCheckBoxStyle CheckBoxStyle;

};

class UChildActorComponent : public USceneComponent
{
    TSubclassOf<class AActor> ChildActorClass;
    class AActor* ChildActor;
    class AActor* ChildActorTemplate;

    void SetChildActorClass(TSubclassOf<class AActor> InClass);
};

class UChildConnection : public UNetConnection
{
    class UNetConnection* Parent;

};

class UCloudStorageBase : public UPlatformInterfaceBase
{
    TArray<FString> LocalCloudFiles;
    uint8 bSuppressDelegateCalls;

};

class UCollisionProfile : public UDeveloperSettings
{
    TArray<FCollisionResponseTemplate> Profiles;
    TArray<FCustomChannelSetup> DefaultChannelResponses;
    TArray<FCustomProfile> EditProfiles;
    TArray<FRedirector> ProfileRedirects;
    TArray<FRedirector> CollisionChannelRedirects;

};

class UCommandlet : public UObject
{
    FString HelpDescription;
    FString HelpUsage;
    FString HelpWebLink;
    TArray<FString> HelpParamNames;
    TArray<FString> HelpParamDescriptions;
    uint8 IsServer;
    uint8 IsClient;
    uint8 IsEditor;
    uint8 LogToConsole;
    uint8 ShowErrorCount;
    uint8 ShowProgress;

};

class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
    TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings;

};

class UCompositeCurveTable : public UCurveTable
{
    TArray<class UCurveTable*> ParentTables;
    TArray<class UCurveTable*> OldParentTables;

};

class UCompositeDataTable : public UDataTable
{
    TArray<class UDataTable*> ParentTables;
    TArray<class UDataTable*> OldParentTables;

};

class UConsole : public UObject
{
    class ULocalPlayer* ConsoleTargetPlayer;
    class UTexture2D* DefaultTexture_Black;
    class UTexture2D* DefaultTexture_White;
    TArray<FString> HistoryBuffer;

};

class UControlChannel : public UChannel
{
};

class UCurveBase : public UObject
{

    void GetValueRange(float& MinValue, float& MaxValue);
    void GetTimeRange(float& MinTime, float& MaxTime);
};

class UCurveFloat : public UCurveBase
{
    FRichCurve FloatCurve;
    bool bIsEventCurve;

    float GetFloatValue(float InTime);
};

class UCurveLinearColor : public UCurveBase
{
    FRichCurve FloatCurves;
    float AdjustHue;
    float AdjustSaturation;
    float AdjustBrightness;
    float AdjustBrightnessCurve;
    float AdjustVibrance;
    float AdjustMinAlpha;
    float AdjustMaxAlpha;

    FLinearColor GetUnadjustedLinearColorValue(float InTime);
    FLinearColor GetLinearColorValue(float InTime);
    FLinearColor GetClampedLinearColorValue(float InTime);
};

class UCurveLinearColorAtlas : public UTexture2D
{
    uint32 TextureSize;
    uint8 bSquareResolution;
    uint32 TextureHeight;
    TArray<class UCurveLinearColor*> GradientCurves;

    bool GetCurvePosition(class UCurveLinearColor* InCurve, float& Position);
};

class UCurveTable : public UObject
{
};

class UCurveVector : public UCurveBase
{
    FRichCurve FloatCurves;

    FVector GetVectorValue(float InTime);
};

class UDEPRECATED_CurveEdPresetCurve : public UObject
{
};

class UDPICustomScalingRule : public UObject
{
};

class UDamageType : public UObject
{
    uint8 bCausedByWorld;
    uint8 bScaleMomentumByMass;
    uint8 bRadialDamageVelChange;
    float DamageImpulse;
    float DestructibleImpulse;
    float DestructibleDamageSpreadScale;
    float DamageFalloff;

};

class UDataAsset : public UObject
{
    TSubclassOf<class UDataAsset> NativeClass;

};

class UDataDrivenCVarEngineSubsystem : public UEngineSubsystem
{
    FDataDrivenCVarEngineSubsystemOnDataDrivenCVarDelegate OnDataDrivenCVarDelegate;
    void OnDataDrivenCVarChanged(FString CVarName);

};

class UDataDrivenConsoleVariableSettings : public UDeveloperSettings
{
    TArray<FDataDrivenConsoleVariable> CVarsArray;

};

class UDataTable : public UObject
{
    class UScriptStruct* RowStruct;
    uint8 bStripFromClientBuilds;
    uint8 bIgnoreExtraFields;
    uint8 bIgnoreMissingFields;
    FString ImportKeyField;

};

class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetDataTableRowNames(class UDataTable* Table, TArray<FName>& OutRowNames);
    bool GetDataTableRowFromName(class UDataTable* Table, FName RowName, FTableRowBase& OutRow);
    TArray<FString> GetDataTableColumnAsString(const class UDataTable* DataTable, FName PropertyName);
    void EvaluateCurveTableRow(class UCurveTable* CurveTable, FName RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult::Type>& OutResult, float& OutXY, FString ContextString);
    bool DoesDataTableRowExist(class UDataTable* Table, FName RowName);
};

class UDebugCameraControllerSettings : public UDeveloperSettings
{
    TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes;

};

class UDebugDrawService : public UBlueprintFunctionLibrary
{
};

class UDecalComponent : public USceneComponent
{
    class UMaterialInterface* DecalMaterial;
    int32 SortOrder;
    float FadeScreenSize;
    float FadeStartDelay;
    float FadeDuration;
    float FadeInDuration;
    float FadeInStartDelay;
    uint8 bDestroyOwnerAfterFade;
    FVector DecalSize;

    void SetSortOrder(int32 Value);
    void SetFadeScreenSize(float NewFadeScreenSize);
    void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
    void SetFadeIn(float StartDelay, float Duaration);
    void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
    float GetFadeStartDelay();
    float GetFadeInStartDelay();
    float GetFadeInDuration();
    float GetFadeDuration();
    class UMaterialInterface* GetDecalMaterial();
    class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};

class UDefault__AnimBlueprintGeneratedClass
{
};

class UDefault__BlueprintGeneratedClass
{
};

class UDemoNetConnection : public UNetConnection
{
};

class UDemoNetDriver : public UNetDriver
{
    TMap<class FString, class FRollbackNetStartupActorInfo> RollbackNetStartupActors;
    float CheckpointSaveMaxMSPerFrame;
    TArray<FMulticastRecordOptions> MulticastRecordOptions;
    bool bIsLocalReplay;
    TArray<class APlayerController*> SpectatorControllers;

};

class UDemoPendingNetGame : public UPendingNetGame
{
};

class UDeviceProfile : public UTextureLODSettings
{
    FString DeviceType;
    FString BaseProfileName;
    class UObject* Parent;
    TArray<FString> CVars;

};

class UDeviceProfileFragment : public UObject
{
};

class UDeviceProfileManager : public UObject
{
    TArray<class UObject*> Profiles;

};

class UDialogueSoundWaveProxy : public USoundBase
{
};

class UDialogueVoice : public UObject
{
    TEnumAsByte<EGrammaticalGender::Type> Gender;
    TEnumAsByte<EGrammaticalNumber::Type> Plurality;
    FGuid LocalizationGUID;

};

class UDialogueWave : public UObject
{
    uint8 bMature;
    uint8 bOverride_SubtitleOverride;
    FString SpokenText;
    FString SubtitleOverride;
    TArray<FDialogueContextMapping> ContextMappings;
    FGuid LocalizationGUID;

};

class UDirectionalLightComponent : public ULightComponent
{
    float ShadowCascadeBiasDistribution;
    uint8 bEnableLightShaftOcclusion;
    float OcclusionMaskDarkness;
    float OcclusionDepthRange;
    FVector LightShaftOverrideDirection;
    float WholeSceneDynamicShadowRadius;
    float DynamicShadowDistanceMovableLight;
    float DynamicShadowDistanceStationaryLight;
    int32 DynamicShadowCascades;
    float CascadeDistributionExponent;
    float CascadeTransitionFraction;
    float ShadowDistanceFadeoutFraction;
    uint8 bUseInsetShadowsForMovableObjects;
    int32 FarShadowCascadeCount;
    float FarShadowDistance;
    float DistanceFieldShadowDistance;
    float LightSourceAngle;
    float LightSourceSoftAngle;
    float ShadowSourceAngleFactor;
    float TraceDistance;
    uint8 bUsedAsAtmosphereSunLight;
    int32 AtmosphereSunLightIndex;
    FLinearColor AtmosphereSunDiskColorScale;
    uint8 bPerPixelAtmosphereTransmittance;
    uint8 bCastShadowsOnClouds;
    uint8 bCastShadowsOnAtmosphere;
    uint8 bCastCloudShadows;
    float CloudShadowStrength;
    float CloudShadowOnAtmosphereStrength;
    float CloudShadowOnSurfaceStrength;
    float CloudShadowDepthBias;
    float CloudShadowExtent;
    float CloudShadowMapResolutionScale;
    float CloudShadowRaySampleCountScale;
    FLinearColor CloudScatteredLuminanceScale;
    FLightmassDirectionalLightSettings LightmassSettings;
    uint8 bCastModulatedShadows;
    FColor ModulatedShadowColor;
    float ShadowAmount;

    void SetShadowDistanceFadeoutFraction(float NewValue);
    void SetShadowAmount(float NewValue);
    void SetOcclusionMaskDarkness(float NewValue);
    void SetLightShaftOverrideDirection(FVector NewValue);
    void SetEnableLightShaftOcclusion(bool bNewValue);
    void SetDynamicShadowDistanceStationaryLight(float NewValue);
    void SetDynamicShadowDistanceMovableLight(float NewValue);
    void SetDynamicShadowCascades(int32 NewValue);
    void SetCascadeTransitionFraction(float NewValue);
    void SetCascadeDistributionExponent(float NewValue);
    void SetAtmosphereSunLightIndex(int32 NewValue);
    void SetAtmosphereSunLight(bool bNewValue);
};

class UDistribution : public UObject
{
};

class UDistributionFloat : public UDistribution
{
    uint8 bCanBeBaked;
    uint8 bBakedDataSuccesfully;

};

class UDistributionFloatConstant : public UDistributionFloat
{
    float Constant;

};

class UDistributionFloatConstantCurve : public UDistributionFloat
{
    FInterpCurveFloat ConstantCurve;

};

class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
    FName ParameterName;
    float MinInput;
    float MaxInput;
    float MinOutput;
    float MaxOutput;
    TEnumAsByte<DistributionParamMode> ParamMode;

};

class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
};

class UDistributionFloatUniform : public UDistributionFloat
{
    float Min;
    float Max;

};

class UDistributionFloatUniformCurve : public UDistributionFloat
{
    FInterpCurveVector2D ConstantCurve;

};

class UDistributionVector : public UDistribution
{
    uint8 bCanBeBaked;
    uint8 bIsDirty;
    uint8 bBakedDataSuccesfully;

};

class UDistributionVectorConstant : public UDistributionVector
{
    FVector Constant;
    uint8 bLockAxes;
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;

};

class UDistributionVectorConstantCurve : public UDistributionVector
{
    FInterpCurveVector ConstantCurve;
    uint8 bLockAxes;
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;

};

class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
    FName ParameterName;
    FVector MinInput;
    FVector MaxInput;
    FVector MinOutput;
    FVector MaxOutput;
    TEnumAsByte<DistributionParamMode> ParamModes;

};

class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
};

class UDistributionVectorUniform : public UDistributionVector
{
    FVector Max;
    FVector Min;
    uint8 bLockAxes;
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags;
    uint8 bUseExtremes;

};

class UDistributionVectorUniformCurve : public UDistributionVector
{
    FInterpCurveTwoVectors ConstantCurve;
    uint8 bLockAxes1;
    uint8 bLockAxes2;
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags;
    uint8 bUseExtremes;

};

class UDrawFrustumComponent : public UPrimitiveComponent
{
    FColor FrustumColor;
    float FrustumAngle;
    float FrustumAspectRatio;
    float FrustumStartDist;
    float FrustumEndDist;
    class UTexture* Texture;

};

class UDrawSphereComponent : public USphereComponent
{
};

class UDynamicBlueprintBinding : public UObject
{
};

class UDynamicSubsystem : public USubsystem
{
};

class UEdGraph : public UObject
{
    TSubclassOf<class UEdGraphSchema> Schema;
    TArray<class UEdGraphNode*> Nodes;
    uint8 bEditable;
    uint8 bAllowDeletion;
    uint8 bAllowRenaming;

};

class UEdGraphNode : public UObject
{
    TArray<class UEdGraphPin_Deprecated*> DeprecatedPins;
    int32 NodePosX;
    int32 NodePosY;
    int32 NodeWidth;
    int32 NodeHeight;
    TEnumAsByte<ENodeAdvancedPins::Type> AdvancedPinDisplay;
    ENodeEnabledState EnabledState;
    uint8 bDisplayAsDisabled;
    uint8 bUserSetEnabledState;
    uint8 bIsNodeEnabled;
    uint8 bHasCompilerMessage;
    FString NodeComment;
    int32 ErrorType;
    FString ErrorMsg;
    FGuid NodeGuid;

};

class UEdGraphNode_Documentation : public UEdGraphNode
{
    FString Link;
    FString Excerpt;

};

class UEdGraphPin_Deprecated : public UObject
{
    FString PinName;
    FString PinToolTip;
    TEnumAsByte<EEdGraphPinDirection> Direction;
    FEdGraphPinType PinType;
    FString DefaultValue;
    FString AutogeneratedDefaultValue;
    class UObject* DefaultObject;
    FText DefaultTextValue;
    TArray<class UEdGraphPin_Deprecated*> LinkedTo;
    TArray<class UEdGraphPin_Deprecated*> SubPins;
    class UEdGraphPin_Deprecated* ParentPin;
    class UEdGraphPin_Deprecated* ReferencePassThroughConnection;

};

class UEdGraphSchema : public UObject
{
};

class UEndpointSubmix : public USoundSubmixBase
{
    FName EndpointType;
    TSubclassOf<class UAudioEndpointSettingsBase> EndpointSettingsClass;
    class UAudioEndpointSettingsBase* EndpointSettings;

};

class UEngine : public UObject
{
    class UFont* TinyFont;
    FSoftObjectPath TinyFontName;
    class UFont* SmallFont;
    FSoftObjectPath SmallFontName;
    class UFont* MediumFont;
    FSoftObjectPath MediumFontName;
    class UFont* LargeFont;
    FSoftObjectPath LargeFontName;
    class UFont* SubtitleFont;
    FSoftObjectPath SubtitleFontName;
    TArray<class UFont*> AdditionalFonts;
    TArray<FString> AdditionalFontNames;
    TSubclassOf<class UConsole> ConsoleClass;
    FSoftClassPath ConsoleClassName;
    TSubclassOf<class UGameViewportClient> GameViewportClientClass;
    FSoftClassPath GameViewportClientClassName;
    TSubclassOf<class ULocalPlayer> LocalPlayerClass;
    FSoftClassPath LocalPlayerClassName;
    TSubclassOf<class AWorldSettings> WorldSettingsClass;
    FSoftClassPath WorldSettingsClassName;
    FSoftClassPath NavigationSystemClassName;
    TSubclassOf<class UNavigationSystemBase> NavigationSystemClass;
    FSoftClassPath NavigationSystemConfigClassName;
    TSubclassOf<class UNavigationSystemConfig> NavigationSystemConfigClass;
    FSoftClassPath AvoidanceManagerClassName;
    TSubclassOf<class UAvoidanceManager> AvoidanceManagerClass;
    FSoftClassPath AIControllerClassName;
    TSubclassOf<class UPhysicsCollisionHandler> PhysicsCollisionHandlerClass;
    FSoftClassPath PhysicsCollisionHandlerClassName;
    FSoftClassPath GameUserSettingsClassName;
    TSubclassOf<class UGameUserSettings> GameUserSettingsClass;
    class UGameUserSettings* GameUserSettings;
    TSubclassOf<class ALevelScriptActor> LevelScriptActorClass;
    FSoftClassPath LevelScriptActorClassName;
    FSoftClassPath DefaultBlueprintBaseClassName;
    FSoftClassPath GameSingletonClassName;
    class UObject* GameSingleton;
    FSoftClassPath AssetManagerClassName;
    class UAssetManager* AssetManager;
    class UTexture2D* DefaultTexture;
    FSoftObjectPath DefaultTextureName;
    class UTexture* DefaultDiffuseTexture;
    FSoftObjectPath DefaultDiffuseTextureName;
    class UTexture2D* DefaultBSPVertexTexture;
    FSoftObjectPath DefaultBSPVertexTextureName;
    class UTexture2D* HighFrequencyNoiseTexture;
    FSoftObjectPath HighFrequencyNoiseTextureName;
    class UTexture2D* DefaultBokehTexture;
    FSoftObjectPath DefaultBokehTextureName;
    class UTexture2D* DefaultBloomKernelTexture;
    FSoftObjectPath DefaultBloomKernelTextureName;
    class UMaterial* WireframeMaterial;
    FString WireframeMaterialName;
    class UMaterial* DebugMeshMaterial;
    FSoftObjectPath DebugMeshMaterialName;
    class UMaterial* EmissiveMeshMaterial;
    FSoftObjectPath EmissiveMeshMaterialName;
    class UMaterial* LevelColorationLitMaterial;
    FString LevelColorationLitMaterialName;
    class UMaterial* LevelColorationUnlitMaterial;
    FString LevelColorationUnlitMaterialName;
    class UMaterial* LightingTexelDensityMaterial;
    FString LightingTexelDensityName;
    class UMaterial* ShadedLevelColorationLitMaterial;
    FString ShadedLevelColorationLitMaterialName;
    class UMaterial* ShadedLevelColorationUnlitMaterial;
    FString ShadedLevelColorationUnlitMaterialName;
    class UMaterial* RemoveSurfaceMaterial;
    FSoftObjectPath RemoveSurfaceMaterialName;
    class UMaterial* VertexColorMaterial;
    FString VertexColorMaterialName;
    class UMaterial* VertexColorViewModeMaterial_ColorOnly;
    FString VertexColorViewModeMaterialName_ColorOnly;
    class UMaterial* VertexColorViewModeMaterial_AlphaAsColor;
    FString VertexColorViewModeMaterialName_AlphaAsColor;
    class UMaterial* VertexColorViewModeMaterial_RedOnly;
    FString VertexColorViewModeMaterialName_RedOnly;
    class UMaterial* VertexColorViewModeMaterial_GreenOnly;
    FString VertexColorViewModeMaterialName_GreenOnly;
    class UMaterial* VertexColorViewModeMaterial_BlueOnly;
    FString VertexColorViewModeMaterialName_BlueOnly;
    FSoftObjectPath DebugEditorMaterialName;
    class UMaterial* ConstraintLimitMaterial;
    class UMaterialInstanceDynamic* ConstraintLimitMaterialX;
    class UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis;
    class UMaterialInstanceDynamic* ConstraintLimitMaterialY;
    class UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis;
    class UMaterialInstanceDynamic* ConstraintLimitMaterialZ;
    class UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis;
    class UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic;
    class UMaterial* InvalidLightmapSettingsMaterial;
    FSoftObjectPath InvalidLightmapSettingsMaterialName;
    class UMaterial* PreviewShadowsIndicatorMaterial;
    FSoftObjectPath PreviewShadowsIndicatorMaterialName;
    class UMaterial* ArrowMaterial;
    class UMaterialInstanceDynamic* ArrowMaterialYellow;
    FSoftObjectPath ArrowMaterialName;
    FLinearColor LightingOnlyBrightness;
    TArray<FLinearColor> ShaderComplexityColors;
    TArray<FLinearColor> QuadComplexityColors;
    TArray<FLinearColor> LightComplexityColors;
    TArray<FLinearColor> StationaryLightOverlapColors;
    TArray<FLinearColor> LODColorationColors;
    TArray<FLinearColor> HLODColorationColors;
    TArray<FLinearColor> StreamingAccuracyColors;
    float MaxPixelShaderAdditiveComplexityCount;
    float MaxES3PixelShaderAdditiveComplexityCount;
    float MinLightMapDensity;
    float IdealLightMapDensity;
    float MaxLightMapDensity;
    uint8 bRenderLightMapDensityGrayscale;
    float RenderLightMapDensityGrayscaleScale;
    float RenderLightMapDensityColorScale;
    FLinearColor LightMapDensityVertexMappedColor;
    FLinearColor LightMapDensitySelectedColor;
    TArray<FStatColorMapping> StatColorMappings;
    class UPhysicalMaterial* DefaultPhysMaterial;
    FSoftObjectPath DefaultPhysMaterialName;
    TArray<FGameNameRedirect> ActiveGameNameRedirects;
    TArray<FClassRedirect> ActiveClassRedirects;
    TArray<FPluginRedirect> ActivePluginRedirects;
    TArray<FStructRedirect> ActiveStructRedirects;
    class UTexture2D* PreIntegratedSkinBRDFTexture;
    FSoftObjectPath PreIntegratedSkinBRDFTextureName;
    class UTexture2D* BlueNoiseTexture;
    FSoftObjectPath BlueNoiseTextureName;
    class UTexture2D* MiniFontTexture;
    FSoftObjectPath MiniFontTextureName;
    class UTexture* WeightMapPlaceholderTexture;
    FSoftObjectPath WeightMapPlaceholderTextureName;
    class UTexture2D* LightMapDensityTexture;
    FSoftObjectPath LightMapDensityTextureName;
    class UGameViewportClient* GameViewport;
    TArray<FString> DeferredCommands;
    float NearClipPlane;
    uint8 bSubtitlesEnabled;
    uint8 bSubtitlesForcedOff;
    int32 MaximumLoopIterationCount;
    uint8 bCanBlueprintsTickByDefault;
    uint8 bOptimizeAnimBlueprintMemberVariableAccess;
    uint8 bAllowMultiThreadedAnimationUpdate;
    uint8 bEnableEditorPSysRealtimeLOD;
    uint8 bSmoothFrameRate;
    uint8 bUseFixedFrameRate;
    float FixedFrameRate;
    FFloatRange SmoothedFrameRateRange;
    class UEngineCustomTimeStep* CustomTimeStep;
    FSoftClassPath CustomTimeStepClassName;
    class UTimecodeProvider* TimecodeProvider;
    FSoftClassPath TimecodeProviderClassName;
    bool bGenerateDefaultTimecode;
    FFrameRate GenerateDefaultTimecodeFrameRate;
    float GenerateDefaultTimecodeFrameDelay;
    uint8 bCheckForMultiplePawnsSpawnedInAFrame;
    int32 NumPawnsAllowedToBeSpawnedInAFrame;
    uint8 bShouldGenerateLowQualityLightmaps;
    FColor C_WorldBox;
    FColor C_BrushWire;
    FColor C_AddWire;
    FColor C_SubtractWire;
    FColor C_SemiSolidWire;
    FColor C_NonSolidWire;
    FColor C_WireBackground;
    FColor C_ScaleBoxHi;
    FColor C_VolumeCollision;
    FColor C_BSPCollision;
    FColor C_OrthoBackground;
    FColor C_Volume;
    FColor C_BrushShape;
    float StreamingDistanceFactor;
    FDirectoryPath GameScreenshotSaveDirectory;
    ETransitionType TransitionType;
    FString TransitionDescription;
    FString TransitionGameMode;
    uint8 bAllowMatureLanguage;
    float CameraRotationThreshold;
    float CameraTranslationThreshold;
    float PrimitiveProbablyVisibleTime;
    float MaxOcclusionPixelsFraction;
    uint8 bPauseOnLossOfFocus;
    int32 MaxParticleResize;
    int32 MaxParticleResizeWarn;
    TArray<FDropNoteInfo> PendingDroppedNotes;
    float NetClientTicksPerSecond;
    float DisplayGamma;
    float MinDesiredFrameRate;
    FLinearColor DefaultSelectedMaterialColor;
    FLinearColor SelectedMaterialColor;
    FLinearColor SelectionOutlineColor;
    FLinearColor SubduedSelectionOutlineColor;
    FLinearColor SelectedMaterialColorOverride;
    bool bIsOverridingSelectedColor;
    uint8 bEnableOnScreenDebugMessages;
    uint8 bEnableOnScreenDebugMessagesDisplay;
    uint8 bSuppressMapWarnings;
    uint8 bDisableAILogging;
    uint32 bEnableVisualLogRecordingOnStart;
    int32 ScreenSaverInhibitorSemaphore;
    uint8 bLockReadOnlyLevels;
    FString ParticleEventManagerClassPath;
    float SelectionHighlightIntensity;
    float BSPSelectionHighlightIntensity;
    float SelectionHighlightIntensityBillboards;
    TArray<FNetDriverDefinition> NetDriverDefinitions;
    TArray<FString> ServerActors;
    TArray<FString> RuntimeServerActors;
    float NetErrorLogInterval;
    uint8 bStartedLoadMapMovie;
    int32 NextWorldContextHandle;

};

class UEngineBaseTypes : public UObject
{
};

class UEngineCustomTimeStep : public UObject
{
};

class UEngineHandlerComponentFactory : public UHandlerComponentFactory
{
};

class UEngineMessage : public ULocalMessage
{
    FString FailedPlaceMessage;
    FString MaxedOutMessage;
    FString EnteredMessage;
    FString LeftMessage;
    FString GlobalNameChange;
    FString SpecEnteredMessage;
    FString NewPlayerMessage;
    FString NewSpecMessage;

};

class UEngineSubsystem : public UDynamicSubsystem
{
};

class UEngineTypes : public UObject
{
};

class UExponentialHeightFogComponent : public USceneComponent
{
    float FogDensity;
    float FogHeightFalloff;
    FExponentialHeightFogData SecondFogData;
    FLinearColor FogInscatteringColor;
    class UTextureCube* InscatteringColorCubemap;
    float InscatteringColorCubemapAngle;
    FLinearColor InscatteringTextureTint;
    float FullyDirectionalInscatteringColorDistance;
    float NonDirectionalInscatteringColorDistance;
    float DirectionalInscatteringExponent;
    float DirectionalInscatteringStartDistance;
    FLinearColor DirectionalInscatteringColor;
    float FogMaxOpacity;
    float StartDistance;
    float FogCutoffDistance;
    bool bEnableVolumetricFog;
    float VolumetricFogScatteringDistribution;
    FColor VolumetricFogAlbedo;
    FLinearColor VolumetricFogEmissive;
    float VolumetricFogExtinctionScale;
    float VolumetricFogDistance;
    float VolumetricFogStaticLightingScatteringIntensity;
    bool bOverrideLightColorsWithFogInscatteringColors;

    void SetVolumetricFogScatteringDistribution(float NewValue);
    void SetVolumetricFogExtinctionScale(float NewValue);
    void SetVolumetricFogEmissive(FLinearColor NewValue);
    void SetVolumetricFogDistance(float NewValue);
    void SetVolumetricFogAlbedo(FColor NewValue);
    void SetVolumetricFog(bool bNewValue);
    void SetStartDistance(float Value);
    void SetNonDirectionalInscatteringColorDistance(float Value);
    void SetInscatteringTextureTint(FLinearColor Value);
    void SetInscatteringColorCubemapAngle(float Value);
    void SetInscatteringColorCubemap(class UTextureCube* Value);
    void SetFullyDirectionalInscatteringColorDistance(float Value);
    void SetFogMaxOpacity(float Value);
    void SetFogInscatteringColor(FLinearColor Value);
    void SetFogHeightFalloff(float Value);
    void SetFogDensity(float Value);
    void SetFogCutoffDistance(float Value);
    void SetDirectionalInscatteringStartDistance(float Value);
    void SetDirectionalInscatteringExponent(float Value);
    void SetDirectionalInscatteringColor(FLinearColor Value);
};

class UExporter : public UObject
{
    UClass* SupportedClass;
    class UObject* ExportRootScope;
    TArray<FString> FormatExtension;
    TArray<FString> FormatDescription;
    int32 PreferredFormatIndex;
    int32 TextIndent;
    uint8 bText;
    uint8 bSelectedOnly;
    uint8 bForceFileOperations;
    class UAssetExportTask* ExportTask;

    bool ScriptRunAssetExportTask(class UAssetExportTask* Task);
    bool RunAssetExportTasks(const TArray<class UAssetExportTask*>& ExportTasks);
    bool RunAssetExportTask(class UAssetExportTask* Task);
};

class UFXSystemAsset : public UObject
{
    uint32 MaxPoolSize;
    uint32 PoolPrimeSize;

};

class UFXSystemComponent : public UPrimitiveComponent
{

    void SetVectorParameter(FName ParameterName, FVector Param);
    void SetUseAutoManageAttachment(bool bAutoManage);
    void SetIntParameter(FName ParameterName, int32 Param);
    void SetFloatParameter(FName ParameterName, float Param);
    void SetEmitterEnable(FName EmitterName, bool bNewEnableState);
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    void SetBoolParameter(FName ParameterName, bool Param);
    void SetAutoAttachmentParameters(class USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
    void SetActorParameter(FName ParameterName, class AActor* Param);
    void ReleaseToPool();
    class UFXSystemAsset* GetFXSystemAsset();
};

class UFloatingPawnMovement : public UPawnMovementComponent
{
    float MaxSpeed;
    float Acceleration;
    float Deceleration;
    float TurningBoost;
    uint8 bPositionCorrected;

};

class UFont : public UObject
{
    EFontCacheType FontCacheType;
    TArray<FFontCharacter> Characters;
    TArray<class UTexture2D*> Textures;
    int32 IsRemapped;
    float EmScale;
    float Ascent;
    float Descent;
    float Leading;
    int32 Kerning;
    FFontImportOptionsData ImportOptions;
    int32 NumCharacters;
    TArray<int32> MaxCharHeight;
    float ScalingFactor;
    int32 LegacyFontSize;
    FName LegacyFontName;
    FCompositeFont CompositeFont;

};

class UFontFace : public UObject
{
    FString SourceFilename;
    EFontHinting Hinting;
    EFontLoadingPolicy LoadingPolicy;
    EFontLayoutMethod LayoutMethod;

};

class UFontImportOptions : public UObject
{
    FFontImportOptionsData Data;

};

class UForceFeedbackAttenuation : public UObject
{
    FForceFeedbackAttenuationSettings Attenuation;

};

class UForceFeedbackComponent : public USceneComponent
{
    class UForceFeedbackEffect* ForceFeedbackEffect;
    uint8 bAutoDestroy;
    uint8 bStopWhenOwnerDestroyed;
    uint8 bLooping;
    uint8 bIgnoreTimeDilation;
    uint8 bOverrideAttenuation;
    float IntensityMultiplier;
    class UForceFeedbackAttenuation* AttenuationSettings;
    FForceFeedbackAttenuationSettings AttenuationOverrides;
    FForceFeedbackComponentOnForceFeedbackFinished OnForceFeedbackFinished;
    void OnForceFeedbackFinished(class UForceFeedbackComponent* ForceFeedbackComponent);

    void Stop();
    void SetIntensityMultiplier(float NewIntensityMultiplier);
    void SetForceFeedbackEffect(class UForceFeedbackEffect* NewForceFeedbackEffect);
    void Play(float StartTime);
    bool BP_GetAttenuationSettingsToApply(FForceFeedbackAttenuationSettings& OutAttenuationSettings);
    void AdjustAttenuation(const FForceFeedbackAttenuationSettings& InAttenuationSettings);
};

class UForceFeedbackEffect : public UObject
{
    TArray<FForceFeedbackChannelDetails> ChannelDetails;
    float Duration;

};

class UGameEngine : public UEngine
{
    float MaxDeltaTime;
    float ServerFlushLogInterval;
    class UGameInstance* GameInstance;

};

class UGameInstance : public UObject
{
    TArray<class ULocalPlayer*> LocalPlayers;
    class UOnlineSession* OnlineSession;
    TArray<class UObject*> ReferencedObjects;
    FGameInstanceOnPawnControllerChangedDelegates OnPawnControllerChangedDelegates;
    void OnPawnControllerChanged(class APawn* Pawn, class AController* Controller);

    void ReceiveShutdown();
    void ReceiveInit();
    void HandleTravelError(TEnumAsByte<ETravelFailure::Type> FailureType);
    void HandleNetworkError(TEnumAsByte<ENetworkFailure::Type> FailureType, bool bIsServer);
    void DebugRemovePlayer(int32 ControllerId);
    void DebugCreatePlayer(int32 ControllerId);
};

class UGameInstanceSubsystem : public USubsystem
{
};

class UGameUserSettings : public UObject
{
    bool bUseVSync;
    bool bUseDynamicResolution;
    uint32 ResolutionSizeX;
    uint32 ResolutionSizeY;
    uint32 LastUserConfirmedResolutionSizeX;
    uint32 LastUserConfirmedResolutionSizeY;
    int32 WindowPosX;
    int32 WindowPosY;
    int32 FullscreenMode;
    int32 LastConfirmedFullscreenMode;
    int32 PreferredFullscreenMode;
    uint32 Version;
    int32 AudioQualityLevel;
    int32 LastConfirmedAudioQualityLevel;
    float FrameRateLimit;
    int32 DesiredScreenWidth;
    bool bUseDesiredScreenHeight;
    int32 DesiredScreenHeight;
    int32 LastUserConfirmedDesiredScreenWidth;
    int32 LastUserConfirmedDesiredScreenHeight;
    float LastRecommendedScreenWidth;
    float LastRecommendedScreenHeight;
    float LastCPUBenchmarkResult;
    float LastGPUBenchmarkResult;
    TArray<float> LastCPUBenchmarkSteps;
    TArray<float> LastGPUBenchmarkSteps;
    float LastGPUBenchmarkMultiplier;
    bool bUseHDRDisplayOutput;
    int32 HDRDisplayOutputNits;
    FGameUserSettingsOnGameUserSettingsUINeedsUpdate OnGameUserSettingsUINeedsUpdate;
    void OnGameUserSettingsUINeedsUpdate();

    void ValidateSettings();
    bool SupportsHDRDisplayOutput();
    void SetVSyncEnabled(bool bEnable);
    void SetVisualEffectQuality(int32 Value);
    void SetViewDistanceQuality(int32 Value);
    void SetToDefaults();
    void SetTextureQuality(int32 Value);
    void SetShadowQuality(int32 Value);
    void SetShadingQuality(int32 Value);
    void SetScreenResolution(FIntPoint Resolution);
    void SetResolutionScaleValueEx(float NewScaleValue);
    void SetResolutionScaleValue(int32 NewScaleValue);
    void SetResolutionScaleNormalized(float NewScaleNormalized);
    void SetPostProcessingQuality(int32 Value);
    void SetOverallScalabilityLevel(int32 Value);
    void SetFullscreenMode(TEnumAsByte<EWindowMode::Type> InFullscreenMode);
    void SetFrameRateLimit(float NewLimit);
    void SetFoliageQuality(int32 Value);
    void SetDynamicResolutionEnabled(bool bEnable);
    void SetBenchmarkFallbackValues();
    void SetAudioQualityLevel(int32 QualityLevel);
    void SetAntiAliasingQuality(int32 Value);
    void SaveSettings();
    void RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    void RevertVideoMode();
    void ResetToCurrentSettings();
    void LoadSettings(bool bForceReload);
    bool IsVSyncEnabled();
    bool IsVSyncDirty();
    bool IsScreenResolutionDirty();
    bool IsHDREnabled();
    bool IsFullscreenModeDirty();
    bool IsDynamicResolutionEnabled();
    bool IsDynamicResolutionDirty();
    bool IsDirty();
    int32 GetVisualEffectQuality();
    int32 GetViewDistanceQuality();
    int32 GetTextureQuality();
    int32 GetSyncInterval();
    int32 GetShadowQuality();
    int32 GetShadingQuality();
    FIntPoint GetScreenResolution();
    float GetResolutionScaleNormalized();
    void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue);
    void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32& CurrentScaleValue, int32& MinScaleValue, int32& MaxScaleValue);
    float GetRecommendedResolutionScale();
    TEnumAsByte<EWindowMode::Type> GetPreferredFullscreenMode();
    int32 GetPostProcessingQuality();
    int32 GetOverallScalabilityLevel();
    FIntPoint GetLastConfirmedScreenResolution();
    TEnumAsByte<EWindowMode::Type> GetLastConfirmedFullscreenMode();
    class UGameUserSettings* GetGameUserSettings();
    TEnumAsByte<EWindowMode::Type> GetFullscreenMode();
    float GetFrameRateLimit();
    int32 GetFramePace();
    int32 GetFoliageQuality();
    FIntPoint GetDesktopResolution();
    FIntPoint GetDefaultWindowPosition();
    TEnumAsByte<EWindowMode::Type> GetDefaultWindowMode();
    float GetDefaultResolutionScale();
    FIntPoint GetDefaultResolution();
    int32 GetCurrentHDRDisplayNits();
    int32 GetAudioQualityLevel();
    int32 GetAntiAliasingQuality();
    void EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits);
    void ConfirmVideoMode();
    void ApplySettings(bool bCheckForCommandLineOverrides);
    void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
    void ApplyNonResolutionSettings();
    void ApplyHardwareBenchmarkResults();
};

class UGameViewportClient : public UScriptViewportClient
{
    class UConsole* ViewportConsole;
    TArray<FDebugDisplayProperty> DebugProperties;
    int32 MaxSplitscreenPlayers;
    class UWorld* World;
    class UGameInstance* GameInstance;

    void SSSwapControllers();
    void ShowTitleSafeArea();
    void SetConsoleTarget(int32 PlayerIndex);
};

class UGameplayStatics : public UBlueprintFunctionLibrary
{

    void UnRetainAllSoundsInSoundClass(class USoundClass* InSoundClass);
    void UnloadStreamLevelBySoftObjectPtr(const class UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
    void UnloadStreamLevel(const class UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
    bool SuggestProjectileVelocity_CustomArc(const class UObject* WorldContextObject, FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float OverrideGravityZ, float ArcParam);
    class UAudioComponent* SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    class UAudioComponent* SpawnSoundAtLocation(const class UObject* WorldContextObject, class USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    class UAudioComponent* SpawnSound2D(const class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    class UObject* SpawnObject(UClass* objectClass, class UObject* Outer);
    class UForceFeedbackComponent* SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    class UForceFeedbackComponent* SpawnForceFeedbackAtLocation(const class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    class UParticleSystemComponent* SpawnEmitterAtLocation(const class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);
    class UAudioComponent* SpawnDialogueAttached(class UDialogueWave* Dialogue, const FDialogueContext& Context, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    class UAudioComponent* SpawnDialogueAtLocation(const class UObject* WorldContextObject, class UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    class UAudioComponent* SpawnDialogue2D(const class UObject* WorldContextObject, class UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
    class UDecalComponent* SpawnDecalAttached(class UMaterialInterface* DecalMaterial, FVector DecalSize, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan);
    class UDecalComponent* SpawnDecalAtLocation(const class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    void SetWorldOriginLocation(const class UObject* WorldContextObject, FIntVector NewLocation);
    void SetViewportMouseCaptureMode(const class UObject* WorldContextObject, const EMouseCaptureMode MouseCaptureMode);
    void SetSubtitlesEnabled(bool bEnabled);
    void SetSoundMixClassOverride(const class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
    void SetSoundClassDistanceScale(const class UObject* WorldContextObject, class USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec);
    void SetPlayerControllerID(class APlayerController* Player, int32 ControllerId);
    void SetMaxAudioChannelsScaled(const class UObject* WorldContextObject, float MaxChannelCountScale);
    void SetGlobalTimeDilation(const class UObject* WorldContextObject, float TimeDilation);
    void SetGlobalPitchModulation(const class UObject* WorldContextObject, float PitchModulation, float TimeSec);
    void SetGlobalListenerFocusParameters(const class UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
    bool SetGamePaused(const class UObject* WorldContextObject, bool bPaused);
    void SetForceDisableSplitscreen(const class UObject* WorldContextObject, bool bDisable);
    void SetEnableWorldRendering(const class UObject* WorldContextObject, bool bEnable);
    void SetBaseSoundMix(const class UObject* WorldContextObject, class USoundMix* InSoundMix);
    bool SaveGameToSlot(class USaveGame* SaveGameObject, FString slotName, const int32 UserIndex);
    void RemovePlayer(class APlayerController* Player, bool bDestroyPawn);
    FVector RebaseZeroOriginOntoLocal(class UObject* WorldContextObject, FVector WorldLocation);
    FVector RebaseLocalOriginOntoZero(class UObject* WorldContextObject, FVector WorldLocation);
    void PushSoundMixModifier(const class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
    bool ProjectWorldToScreen(class APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    void PrimeSound(class USoundBase* InSound);
    void PrimeAllSoundsInSoundClass(class USoundClass* InSoundClass);
    void PopSoundMixModifier(const class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
    void PlayWorldCameraShake(const class UObject* WorldContextObject, TSubclassOf<class UCameraShakeBase> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
    void PlaySoundAtLocation(const class UObject* WorldContextObject, class USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* owningActor);
    void PlaySound2D(const class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* owningActor, bool bIsUISound);
    void PlayDialogueAtLocation(const class UObject* WorldContextObject, class UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
    void PlayDialogue2D(const class UObject* WorldContextObject, class UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    FString ParseOption(FString options, FString Key);
    void OpenLevelBySoftObjectPtr(const class UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bAbsolute, FString options);
    void OpenLevel(const class UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString options);
    FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, class UPhysicalMaterial* PhysMat, class AActor* hitActor, class UPrimitiveComponent* HitComponent, FName HitBoneName, int32 HitItem, int32 ElementIndex, int32 FaceIndex, FVector TraceStart, FVector TraceEnd);
    void LoadStreamLevelBySoftObjectPtr(const class UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
    void LoadStreamLevel(const class UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
    class USaveGame* LoadGameFromSlot(FString slotName, const int32 UserIndex);
    bool IsSplitscreenForceDisabled(const class UObject* WorldContextObject);
    bool IsGamePaused(const class UObject* WorldContextObject);
    bool HasOption(FString options, FString InKey);
    bool HasLaunchOption(FString OptionToCheck);
    int32 GrassOverlappingSphereCount(const class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    FIntVector GetWorldOriginLocation(const class UObject* WorldContextObject);
    float GetWorldDeltaSeconds(const class UObject* WorldContextObject);
    void GetViewProjectionMatrix(FMinimalViewInfo DesiredView, FMatrix& ViewMatrix, FMatrix& ProjectionMatrix, FMatrix& ViewProjectionMatrix);
    EMouseCaptureMode GetViewportMouseCaptureMode(const class UObject* WorldContextObject);
    float GetUnpausedTimeSeconds(const class UObject* WorldContextObject);
    float GetTimeSeconds(const class UObject* WorldContextObject);
    TEnumAsByte<EPhysicalSurface> GetSurfaceType(const FHitResult& Hit);
    class ULevelStreaming* GetStreamingLevel(const class UObject* WorldContextObject, FName PackageName);
    float GetRealTimeSeconds(const class UObject* WorldContextObject);
    class APawn* GetPlayerPawn(const class UObject* WorldContextObject, int32 PlayerIndex);
    int32 GetPlayerControllerID(class APlayerController* Player);
    class APlayerController* GetPlayerControllerFromID(const class UObject* WorldContextObject, int32 ControllerId);
    class APlayerController* GetPlayerController(const class UObject* WorldContextObject, int32 PlayerIndex);
    class ACharacter* GetPlayerCharacter(const class UObject* WorldContextObject, int32 PlayerIndex);
    class APlayerCameraManager* GetPlayerCameraManager(const class UObject* WorldContextObject, int32 PlayerIndex);
    FString GetPlatformName();
    UClass* GetObjectClass(const class UObject* Object);
    int32 GetMaxAudioChannelCount(const class UObject* WorldContextObject);
    void GetKeyValue(FString Pair, FString& Key, FString& Value);
    int32 GetIntOption(FString options, FString Key, int32 DefaultValue);
    float GetGlobalTimeDilation(const class UObject* WorldContextObject);
    class AGameStateBase* GetGameState(const class UObject* WorldContextObject);
    class AGameModeBase* GetGameMode(const class UObject* WorldContextObject);
    class UGameInstance* GetGameInstance(const class UObject* WorldContextObject);
    bool GetEnableWorldRendering(const class UObject* WorldContextObject);
    class UReverbEffect* GetCurrentReverbEffect(const class UObject* WorldContextObject);
    FString GetCurrentLevelName(const class UObject* WorldContextObject, bool bRemovePrefixString);
    bool GetClosestListenerLocation(const class UObject* WorldContextObject, const FVector& Location, float MaximumRange, const bool bAllowAttenuationOverride, FVector& ListenerPosition);
    float GetAudioTimeSeconds(const class UObject* WorldContextObject);
    void GetAllActorsWithTag(const class UObject* WorldContextObject, FName Tag, TArray<class AActor*>& OutActors);
    void GetAllActorsWithInterface(const class UObject* WorldContextObject, TSubclassOf<class UInterface> Interface, TArray<class AActor*>& OutActors);
    void GetAllActorsOfClassWithTag(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, FName Tag, TArray<class AActor*>& OutActors);
    void GetAllActorsOfClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, TArray<class AActor*>& OutActors);
    class AActor* GetActorOfClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass);
    void GetActorArrayBounds(const TArray<class AActor*>& Actors, bool bOnlyCollidingComponents, FVector& Center, FVector& BoxExtent);
    FVector GetActorArrayAverageLocation(const TArray<class AActor*>& Actors);
    void GetAccurateRealTime(int32& Seconds, float& PartialSeconds);
    void FlushLevelStreaming(const class UObject* WorldContextObject);
    class AActor* FinishSpawningActor(class AActor* Actor, const FTransform& SpawnTransform);
    class AActor* FindNearestActor(FVector Origin, const TArray<class AActor*>& ActorsToCheck, float& Distance);
    bool FindCollisionUV(const FHitResult& Hit, int32 UVChannel, FVector2D& UV);
    void EnableLiveStreaming(bool Enable);
    bool DoesSaveGameExist(FString slotName, const int32 UserIndex);
    bool DeprojectScreenToWorld(class APlayerController* Player, const FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);
    bool DeleteGameInSlot(FString slotName, const int32 UserIndex);
    void DeactivateReverbEffect(const class UObject* WorldContextObject, FName TagName);
    class UAudioComponent* CreateSound2D(const class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    class USaveGame* CreateSaveGameObject(TSubclassOf<class USaveGame> SaveGameClass);
    class APlayerController* CreatePlayer(const class UObject* WorldContextObject, int32 ControllerId, bool bSpawnPlayerController);
    void ClearSoundMixModifiers(const class UObject* WorldContextObject);
    void ClearSoundMixClassOverride(const class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float FadeOutTime);
    void CancelAsyncLoading();
    void BreakHitResult(const FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, class UPhysicalMaterial*& PhysMat, class AActor*& hitActor, class UPrimitiveComponent*& HitComponent, FName& HitBoneName, int32& HitItem, int32& ElementIndex, int32& FaceIndex, FVector& TraceStart, FVector& TraceEnd);
    bool BlueprintSuggestProjectileVelocity(const class UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption::Type> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
    bool Blueprint_PredictProjectilePath_ByTraceChannel(const class UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    bool Blueprint_PredictProjectilePath_ByObjectType(const class UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    bool Blueprint_PredictProjectilePath_Advanced(const class UObject* WorldContextObject, const FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult);
    class AActor* BeginSpawningActorFromClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner);
    class AActor* BeginSpawningActorFromBlueprint(const class UObject* WorldContextObject, const class UBlueprint* Blueprint, const FTransform& SpawnTransform, bool bNoCollisionFail);
    class AActor* BeginDeferredActorSpawnFromClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
    bool AreSubtitlesEnabled();
    bool AreAnyListenersWithinRange(const class UObject* WorldContextObject, const FVector& Location, float MaximumRange);
    bool ApplyRadialDamageWithFalloff(const class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<class UDamageType> DamageTypeClass, const TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    bool ApplyRadialDamage(const class UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<class UDamageType> DamageTypeClass, const TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    float ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass);
    float ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass);
    void AnnounceAccessibleString(FString AnnouncementString);
    void ActivateReverbEffect(const class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime);
};

class UGarbageCollectionSettings : public UDeveloperSettings
{
    float TimeBetweenPurgingPendingKillObjects;
    uint8 FlushStreamingOnGC;
    uint8 AllowParallelGC;
    uint8 IncrementalBeginDestroyEnabled;
    uint8 MultithreadedDestructionEnabled;
    uint8 CreateGCClusters;
    uint8 AssetClusteringEnabled;
    uint8 ActorClusteringEnabled;
    uint8 BlueprintClusteringEnabled;
    uint8 UseDisregardForGCOnDedicatedServers;
    int32 MinGCClusterSize;
    int32 NumRetriesBeforeForcingGC;
    int32 MaxObjectsNotConsideredByGC;
    int32 SizeOfPermanentObjectPool;
    int32 MaxObjectsInGame;
    int32 MaxObjectsInEditor;

};

class UGraphNodeContextMenuContext : public UObject
{
    class UBlueprint* Blueprint;
    class UEdGraph* Graph;
    class UEdGraphNode* Node;
    bool bIsDebugging;

};

class UHLODEngineSubsystem : public UEngineSubsystem
{
};

class UHLODProxy : public UObject
{
    TArray<FHLODProxyMesh> ProxyMeshes;
    TMap<class UHLODProxyDesc*, class FHLODProxyMesh> HLODActors;

};

class UHLODProxyDesc : public UObject
{
};

class UHapticFeedbackEffect_Base : public UObject
{
};

class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
    TArray<uint8> Amplitudes;
    int32 SampleRate;

};

class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base
{
    FHapticFeedbackDetails_Curve HapticDetails;

};

class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
    class USoundWave* SoundWave;

};

class UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void StopPerformanceSnapshots();
    void StartPerformanceSnapshots();
    void LogPerformanceSnapshot(const FString SnapshotTitle, bool bResetStats);
};

class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
    TArray<int32> SortedInstances;
    int32 NumBuiltInstances;
    FBox BuiltInstanceBounds;
    FBox UnbuiltInstanceBounds;
    TArray<FBox> UnbuiltInstanceBoundsList;
    uint8 bEnableDensityScaling;
    int32 OcclusionLayerNumNodes;
    FBoxSphereBounds CacheMeshExtendedBounds;
    bool bDisableCollision;
    int32 InstanceCountToRender;

    bool RemoveInstances(const TArray<int32>& InstancesToRemove);
};

class UHierarchicalLODSetup : public UObject
{
    TArray<FHierarchicalSimplification> HierarchicalLODSetup;
    TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial;

};

class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary
{

    float RandomSobolFloat(int32 Index, int32 Dimension, float Seed);
    FVector RandomSobolCell3D(int32 Index, int32 NumCells, FVector Cell, FVector Seed);
    FVector2D RandomSobolCell2D(int32 Index, int32 NumCells, FVector2D Cell, FVector2D Seed);
    float NextSobolFloat(int32 Index, int32 Dimension, float PreviousValue);
    FVector NextSobolCell3D(int32 Index, int32 NumCells, FVector PreviousValue);
    FVector2D NextSobolCell2D(int32 Index, int32 NumCells, FVector2D PreviousValue);
    FImportanceTexture MakeImportanceTexture(class UTexture2D* Texture, TEnumAsByte<EImportanceWeight::Type> WeightingFunc);
    void ImportanceSample(const FImportanceTexture& Texture, const FVector2D& Rand, int32 Samples, float Intensity, FVector2D& SamplePosition, FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize);
    void BreakImportanceTexture(const FImportanceTexture& ImportanceTexture, class UTexture2D*& Texture, TEnumAsByte<EImportanceWeight::Type>& WeightingFunc);
};

class UInGameAdManager : public UPlatformInterfaceBase
{
    uint8 bShouldPauseWhileAdOpen;
    TArray<FInGameAdManagerClickedBannerDelegates> ClickedBannerDelegates;
    TArray<FInGameAdManagerClosedAdDelegates> ClosedAdDelegates;

};

class UInheritableComponentHandler : public UObject
{
    TArray<FComponentOverrideRecord> Records;
    TArray<class UActorComponent*> UnnecessaryComponents;

};

class UInputActionDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings;

};

class UInputAxisDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings;

};

class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings;

};

class UInputComponent : public UActorComponent
{
    TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo;

    bool WasControllerKeyJustReleased(FKey Key);
    bool WasControllerKeyJustPressed(FKey Key);
    bool IsControllerKeyDown(FKey Key);
    void GetTouchState(int32 FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed);
    FVector GetControllerVectorKeyState(FKey Key);
    void GetControllerMouseDelta(float& DeltaX, float& DeltaY);
    float GetControllerKeyTimeDown(FKey Key);
    void GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY);
    float GetControllerAnalogKeyState(FKey Key);
};

class UInputDelegateBinding : public UDynamicBlueprintBinding
{
};

class UInputKeyDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;

};

class UInputSettings : public UObject
{
    TArray<FInputAxisConfigEntry> AxisConfig;
    uint8 bAltEnterTogglesFullscreen;
    uint8 bF11TogglesFullscreen;
    uint8 bUseMouseForTouch;
    uint8 bEnableMouseSmoothing;
    uint8 bEnableFOVScaling;
    uint8 bCaptureMouseOnLaunch;
    uint8 bDefaultViewportMouseLock;
    uint8 bAlwaysShowTouchInterface;
    uint8 bShowConsoleOnFourFingerTap;
    uint8 bEnableGestureRecognizer;
    bool bUseAutocorrect;
    TArray<FString> ExcludedAutocorrectOS;
    TArray<FString> ExcludedAutocorrectCultures;
    TArray<FString> ExcludedAutocorrectDeviceModels;
    EMouseCaptureMode DefaultViewportMouseCaptureMode;
    EMouseLockMode DefaultViewportMouseLockMode;
    float FOVScale;
    float DoubleClickTime;
    TArray<FInputActionKeyMapping> ActionMappings;
    TArray<FInputAxisKeyMapping> AxisMappings;
    TArray<FInputActionSpeechMapping> SpeechMappings;
    TSoftClassPtr<UPlayerInput> DefaultPlayerInputClass;
    TSoftClassPtr<UInputComponent> DefaultInputComponentClass;
    FSoftObjectPath DefaultTouchInterface;
    FKey ConsoleKey;
    TArray<FKey> ConsoleKeys;

    void SaveKeyMappings();
    void RemoveAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void RemoveActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    class UInputSettings* GetInputSettings();
    void GetAxisNames(TArray<FName>& AxisNames);
    void GetAxisMappingByName(const FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings);
    void GetActionNames(TArray<FName>& ActionNames);
    void GetActionMappingByName(const FName InActionName, TArray<FInputActionKeyMapping>& OutMappings);
    void ForceRebuildKeymaps();
    void AddAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void AddActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
};

class UInputTouchDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings;

};

class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
};

class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    int32 NumCustomDataFloats;
    TArray<float> PerInstanceSMCustomData;
    int32 InstancingRandomSeed;
    int32 InstanceStartCullDistance;
    int32 InstanceEndCullDistance;
    TArray<int32> InstanceReorderTable;
    int32 NumPendingLightmaps;
    TArray<FInstancedStaticMeshMappingInfo> CachedMappings;

    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool SetCustomDataValue(int32 InstanceIndex, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    void SetCullDistances(int32 StartCullDistance, int32 EndCullDistance);
    bool RemoveInstance(int32 InstanceIndex);
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);
    TArray<int32> GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace);
    TArray<int32> GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace);
    int32 GetInstanceCount();
    void ClearInstances();
    bool BatchUpdateInstancesTransforms(int32 StartInstanceIndex, const TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool BatchUpdateInstancesTransform(int32 StartInstanceIndex, int32 NumInstances, const FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    int32 AddInstanceWorldSpace(const FTransform& WorldTransform);
    TArray<int32> AddInstances(const TArray<FTransform>& InstanceTransforms, bool bShouldReturnIndices);
    int32 AddInstance(const FTransform& InstanceTransform);
};

class UIntSerialization : public UObject
{
    uint16 UnsignedInt16Variable;
    uint32 UnsignedInt32Variable;
    uint64 UnsignedInt64Variable;
    int8 SignedInt8Variable;
    int16 SignedInt16Variable;
    int64 SignedInt64Variable;
    uint8 UnsignedInt8Variable;
    int32 SignedInt32Variable;

};

class UInterpCurveEdSetup : public UObject
{
    TArray<FCurveEdTab> Tabs;
    int32 ActiveTab;

};

class UInterpData : public UObject
{
    float InterpLength;
    float PathBuildTime;
    TArray<class UInterpGroup*> InterpGroups;
    class UInterpCurveEdSetup* CurveEdSetup;
    float EdSectionStart;
    float EdSectionEnd;
    uint8 bShouldBakeAndPrune;
    class UInterpGroupDirector* CachedDirectorGroup;
    TArray<FName> AllEventNames;

};

class UInterpFilter : public UObject
{
    FString Caption;

};

class UInterpFilter_Classes : public UInterpFilter
{
};

class UInterpFilter_Custom : public UInterpFilter
{
};

class UInterpGroup : public UObject
{
    TArray<class UInterpTrack*> InterpTracks;
    FName GroupName;
    FColor GroupColor;
    uint8 bCollapsed;
    uint8 bVisible;
    uint8 bIsFolder;
    uint8 bIsParented;
    uint8 bIsSelected;

};

class UInterpGroupCamera : public UInterpGroup
{
    class UCameraAnim* CameraAnimInst;
    float CompressTolerance;

};

class UInterpGroupDirector : public UInterpGroup
{
};

class UInterpGroupInst : public UObject
{
    class UInterpGroup* Group;
    class AActor* GroupActor;
    TArray<class UInterpTrackInst*> TrackInst;

};

class UInterpGroupInstCamera : public UInterpGroupInst
{
};

class UInterpGroupInstDirector : public UInterpGroupInst
{
};

class UInterpToMovementComponent : public UMovementComponent
{
    float Duration;
    uint8 bPauseOnImpact;
    bool bSweep;
    ETeleportType TeleportType;
    EInterpToBehaviourType BehaviourType;
    bool bCheckIfStillInWorld;
    uint8 bForceSubStepping;
    FInterpToMovementComponentOnInterpToReverse OnInterpToReverse;
    void OnInterpToReverseDelegate(const FHitResult& ImpactResult, float Time);
    FInterpToMovementComponentOnInterpToStop OnInterpToStop;
    void OnInterpToStopDelegate(const FHitResult& ImpactResult, float Time);
    FInterpToMovementComponentOnWaitBeginDelegate OnWaitBeginDelegate;
    void OnInterpToWaitBeginDelegate(const FHitResult& ImpactResult, float Time);
    FInterpToMovementComponentOnWaitEndDelegate OnWaitEndDelegate;
    void OnInterpToWaitEndDelegate(const FHitResult& ImpactResult, float Time);
    FInterpToMovementComponentOnResetDelegate OnResetDelegate;
    void OnInterpToResetDelegate(const FHitResult& ImpactResult, float Time);
    float MaxSimulationTimeStep;
    int32 MaxSimulationIterations;
    TArray<FInterpControlPoint> ControlPoints;

    void StopSimulating(const FHitResult& HitResult);
    void RestartMovement(float InitialDirection);
    void ResetControlPoints();
    void OnInterpToWaitEndDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void OnInterpToWaitBeginDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void OnInterpToStopDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void OnInterpToReverseDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void OnInterpToResetDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void FinaliseControlPoints();
    void AddControlPointPosition(FVector Pos, bool bPositionIsRelative);
};

class UInterpTrack : public UObject
{
    TArray<class UInterpTrack*> SubTracks;
    TSubclassOf<class UInterpTrackInst> TrackInstClass;
    TEnumAsByte<ETrackActiveCondition> ActiveCondition;
    FString TrackTitle;
    uint8 bOnePerGroup;
    uint8 bDirGroupOnly;
    uint8 bDisableTrack;
    uint8 bIsSelected;
    uint8 bIsAnimControlTrack;
    uint8 bSubTrackOnly;
    uint8 bVisible;
    uint8 bIsRecording;

};

class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
    FName slotName;
    TArray<FAnimControlTrackKey> AnimSeqs;
    uint8 bSkipAnimNotifiers;

};

class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
};

class UInterpTrackBoolProp : public UInterpTrack
{
    TArray<FBoolTrackKey> BoolTrack;
    FName PropertyName;

};

class UInterpTrackColorProp : public UInterpTrackVectorBase
{
    FName PropertyName;

};

class UInterpTrackColorScale : public UInterpTrackVectorBase
{
};

class UInterpTrackDirector : public UInterpTrack
{
    TArray<FDirectorTrackCut> CutTrack;
    uint8 bSimulateCameraCutsOnClients;

};

class UInterpTrackEvent : public UInterpTrack
{
    TArray<FEventTrackKey> EventTrack;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    uint8 bFireEventsWhenJumpingForwards;
    uint8 bUseCustomEventName;

};

class UInterpTrackFade : public UInterpTrackFloatBase
{
    uint8 bPersistFade;
    uint8 bFadeAudio;
    FLinearColor FadeColor;

};

class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
    UClass* AnimBlueprintClass;
    TSubclassOf<class UAnimInstance> AnimClass;
    FName ParamName;

};

class UInterpTrackFloatBase : public UInterpTrack
{
    FInterpCurveFloat FloatTrack;
    float CurveTension;

};

class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
    TArray<class UMaterialInterface*> TargetMaterials;
    FName ParamName;

};

class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
    FName ParamName;

};

class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
    FName PropertyName;

};

class UInterpTrackInst : public UObject
{
};

class UInterpTrackInstAnimControl : public UInterpTrackInst
{
    float LastUpdatePosition;

};

class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
};

class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
    bool ResetBool;

};

class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
    FColor ResetColor;

};

class UInterpTrackInstColorScale : public UInterpTrackInst
{
};

class UInterpTrackInstDirector : public UInterpTrackInst
{
    class AActor* OldViewTarget;

};

class UInterpTrackInstEvent : public UInterpTrackInst
{
    float LastUpdatePosition;

};

class UInterpTrackInstFade : public UInterpTrackInst
{
};

class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
    class UAnimInstance* AnimScriptInstance;
    float ResetFloat;

};

class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
    TArray<class UMaterialInstanceDynamic*> MaterialInstances;
    TArray<float> ResetFloats;
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;
    class UInterpTrackFloatMaterialParam* InstancedTrack;

};

class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
    float ResetFloat;

};

class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
    float ResetFloat;

};

class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
    FLinearColor ResetColor;

};

class UInterpTrackInstMove : public UInterpTrackInst
{
    FVector ResetLocation;
    FRotator ResetRotation;

};

class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
    float LastUpdatePosition;

};

class UInterpTrackInstProperty : public UInterpTrackInst
{
    TFieldPath<FProperty> InterpProperty;
    class UObject* PropertyOuterObjectInst;

};

class UInterpTrackInstSlomo : public UInterpTrackInst
{
    float OldTimeDilation;

};

class UInterpTrackInstSound : public UInterpTrackInst
{
    float LastUpdatePosition;
    class UAudioComponent* PlayAudioComp;

};

class UInterpTrackInstToggle : public UInterpTrackInst
{
    TEnumAsByte<ETrackToggleAction> Action;
    float LastUpdatePosition;
    uint8 bSavedActiveState;

};

class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
    TArray<class UMaterialInstanceDynamic*> MaterialInstances;
    TArray<FVector> ResetVectors;
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;
    class UInterpTrackVectorMaterialParam* InstancedTrack;

};

class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
    FVector ResetVector;

};

class UInterpTrackInstVisibility : public UInterpTrackInst
{
    TEnumAsByte<EVisibilityTrackAction> Action;
    float LastUpdatePosition;

};

class UInterpTrackLinearColorBase : public UInterpTrack
{
    FInterpCurveLinearColor LinearColorTrack;
    float CurveTension;

};

class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
    FName PropertyName;

};

class UInterpTrackMove : public UInterpTrack
{
    FInterpCurveVector PosTrack;
    FInterpCurveVector EulerTrack;
    FInterpLookupTrack LookupTrack;
    FName LookAtGroupName;
    float LinCurveTension;
    float AngCurveTension;
    uint8 bUseQuatInterpolation;
    uint8 bShowArrowAtKeys;
    uint8 bDisableMovement;
    uint8 bShowTranslationOnCurveEd;
    uint8 bShowRotationOnCurveEd;
    uint8 bHide3DTrack;
    TEnumAsByte<EInterpTrackMoveRotMode> RotMode;

};

class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
    TEnumAsByte<EInterpMoveAxis> MoveAxis;
    FInterpLookupTrack LookupTrack;

};

class UInterpTrackParticleReplay : public UInterpTrack
{
    TArray<FParticleReplayTrackKey> TrackKeys;

};

class UInterpTrackSlomo : public UInterpTrackFloatBase
{
};

class UInterpTrackSound : public UInterpTrackVectorBase
{
    TArray<FSoundTrackKey> Sounds;
    uint8 bPlayOnReverse;
    uint8 bContinueSoundOnMatineeEnd;
    uint8 bSuppressSubtitles;
    uint8 bTreatAsDialogue;
    uint8 bAttach;

};

class UInterpTrackToggle : public UInterpTrack
{
    TArray<FToggleTrackKey> ToggleTrack;
    uint8 bActivateSystemEachUpdate;
    uint8 bActivateWithJustAttachedFlag;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    uint8 bFireEventsWhenJumpingForwards;

};

class UInterpTrackVectorBase : public UInterpTrack
{
    FInterpCurveVector VectorTrack;
    float CurveTension;

};

class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
    TArray<class UMaterialInterface*> TargetMaterials;
    FName ParamName;

};

class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
    FName PropertyName;

};

class UInterpTrackVisibility : public UInterpTrack
{
    TArray<FVisibilityTrackKey> VisibilityTrack;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    uint8 bFireEventsWhenJumpingForwards;

};

class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{

    void SetArrayPropertyByName(class UObject* Object, FName PropertyName, const TArray<int32>& Value);
    void FilterArray(const TArray<class AActor*>& TargetArray, TSubclassOf<class AActor> FilterClass, TArray<class AActor*>& FilteredArray);
    void Array_Swap(const TArray<int32>& TargetArray, int32 FirstIndex, int32 SecondIndex);
    void Array_Shuffle(const TArray<int32>& TargetArray);
    void Array_Set(const TArray<int32>& TargetArray, int32 Index, const int32& Item, bool bSizeToFit);
    void Array_Reverse(const TArray<int32>& TargetArray);
    void Array_Resize(const TArray<int32>& TargetArray, int32 Size);
    bool Array_RemoveItem(const TArray<int32>& TargetArray, const int32& Item);
    void Array_Remove(const TArray<int32>& TargetArray, int32 IndexToRemove);
    void Array_RandomFromStream(const TArray<int32>& TargetArray, FRandomStream& RandomStream, int32& OutItem, int32& OutIndex);
    void Array_Random(const TArray<int32>& TargetArray, int32& OutItem, int32& OutIndex);
    int32 Array_Length(const TArray<int32>& TargetArray);
    int32 Array_LastIndex(const TArray<int32>& TargetArray);
    bool Array_IsValidIndex(const TArray<int32>& TargetArray, int32 IndexToTest);
    void Array_Insert(const TArray<int32>& TargetArray, const int32& NewItem, int32 Index);
    bool Array_Identical(const TArray<int32>& ArrayA, const TArray<int32>& ArrayB);
    void Array_Get(const TArray<int32>& TargetArray, int32 Index, int32& Item);
    int32 Array_Find(const TArray<int32>& TargetArray, const int32& ItemToFind);
    bool Array_Contains(const TArray<int32>& TargetArray, const int32& ItemToFind);
    void Array_Clear(const TArray<int32>& TargetArray);
    void Array_Append(const TArray<int32>& TargetArray, const TArray<int32>& SourceArray);
    int32 Array_AddUnique(const TArray<int32>& TargetArray, const int32& NewItem);
    int32 Array_Add(const TArray<int32>& TargetArray, const int32& NewItem);
};

class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{

    void Parse_StringToGuid(FString GuidString, FGuid& OutGuid, bool& success);
    bool NotEqual_GuidGuid(const FGuid& A, const FGuid& B);
    FGuid NewGuid();
    bool IsValid_Guid(const FGuid& InGuid);
    void Invalidate_Guid(FGuid& InGuid);
    bool EqualEqual_GuidGuid(const FGuid& A, const FGuid& B);
    FString Conv_GuidToString(const FGuid& InGuid);
};

class UKismetInputLibrary : public UBlueprintFunctionLibrary
{

    bool PointerEvent_IsTouchEvent(const FPointerEvent& Input);
    bool PointerEvent_IsMouseButtonDown(const FPointerEvent& Input, FKey MouseButton);
    float PointerEvent_GetWheelDelta(const FPointerEvent& Input);
    int32 PointerEvent_GetUserIndex(const FPointerEvent& Input);
    int32 PointerEvent_GetTouchpadIndex(const FPointerEvent& Input);
    FVector2D PointerEvent_GetScreenSpacePosition(const FPointerEvent& Input);
    int32 PointerEvent_GetPointerIndex(const FPointerEvent& Input);
    FVector2D PointerEvent_GetLastScreenSpacePosition(const FPointerEvent& Input);
    ESlateGesture PointerEvent_GetGestureType(const FPointerEvent& Input);
    FVector2D PointerEvent_GetGestureDelta(const FPointerEvent& Input);
    FKey PointerEvent_GetEffectingButton(const FPointerEvent& Input);
    FVector2D PointerEvent_GetCursorDelta(const FPointerEvent& Input);
    bool Key_IsVectorAxis(const FKey& Key);
    bool Key_IsValid(const FKey& Key);
    bool Key_IsMouseButton(const FKey& Key);
    bool Key_IsModifierKey(const FKey& Key);
    bool Key_IsKeyboardKey(const FKey& Key);
    bool Key_IsGamepadKey(const FKey& Key);
    bool Key_IsDigital(const FKey& Key);
    bool Key_IsButtonAxis(const FKey& Key);
    bool Key_IsAxis3D(const FKey& Key);
    bool Key_IsAxis2D(const FKey& Key);
    bool Key_IsAxis1D(const FKey& Key);
    bool Key_IsAnalog(const FKey& Key);
    EUINavigation Key_GetNavigationDirectionFromKey(const FKeyEvent& InKeyEvent);
    EUINavigation Key_GetNavigationDirectionFromAnalog(const FAnalogInputEvent& InAnalogEvent);
    EUINavigationAction Key_GetNavigationActionFromKey(const FKeyEvent& InKeyEvent);
    EUINavigationAction Key_GetNavigationAction(const FKey& InKey);
    FText Key_GetDisplayName(const FKey& Key);
    bool InputEvent_IsShiftDown(const FInputEvent& Input);
    bool InputEvent_IsRightShiftDown(const FInputEvent& Input);
    bool InputEvent_IsRightControlDown(const FInputEvent& Input);
    bool InputEvent_IsRightCommandDown(const FInputEvent& Input);
    bool InputEvent_IsRightAltDown(const FInputEvent& Input);
    bool InputEvent_IsRepeat(const FInputEvent& Input);
    bool InputEvent_IsLeftShiftDown(const FInputEvent& Input);
    bool InputEvent_IsLeftControlDown(const FInputEvent& Input);
    bool InputEvent_IsLeftCommandDown(const FInputEvent& Input);
    bool InputEvent_IsLeftAltDown(const FInputEvent& Input);
    bool InputEvent_IsControlDown(const FInputEvent& Input);
    bool InputEvent_IsCommandDown(const FInputEvent& Input);
    bool InputEvent_IsAltDown(const FInputEvent& Input);
    FText InputChord_GetDisplayName(const FInputChord& Key);
    int32 GetUserIndex(const FKeyEvent& Input);
    FKey GetKey(const FKeyEvent& Input);
    float GetAnalogValue(const FAnalogInputEvent& Input);
    bool EqualEqual_KeyKey(FKey A, FKey B);
    bool EqualEqual_InputChordInputChord(FInputChord A, FInputChord B);
    void CalibrateTilt();
};

class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{

    bool SetCurrentLocale(FString Culture, const bool SaveToConfig);
    bool SetCurrentLanguageAndLocale(FString Culture, const bool SaveToConfig);
    bool SetCurrentLanguage(FString Culture, const bool SaveToConfig);
    bool SetCurrentCulture(FString Culture, const bool SaveToConfig);
    bool SetCurrentAssetGroupCulture(const FName AssetGroup, FString Culture, const bool SaveToConfig);
    FString GetSuitableCulture(const TArray<FString>& AvailableCultures, FString CultureToMatch, FString FallbackCulture);
    FString GetNativeCulture(const ELocalizedTextSourceCategory TextCategory);
    TArray<FString> GetLocalizedCultures(const bool IncludeGame, const bool IncludeEngine, const bool IncludeEditor, const bool IncludeAdditional);
    FString GetCurrentLocale();
    FString GetCurrentLanguage();
    FString GetCurrentCulture();
    FString GetCurrentAssetGroupCulture(const FName AssetGroup);
    FString GetCultureDisplayName(FString Culture, const bool Localized);
    void ClearCurrentAssetGroupCulture(const FName AssetGroup, const bool SaveToConfig);
};

class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{

    void SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, FName ParameterName, const FLinearColor& ParameterValue);
    void SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, FName ParameterName, float ParameterValue);
    FLinearColor GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, FName ParameterName);
    float GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, FName ParameterName);
    class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags);
};

class UKismetMathLibrary : public UBlueprintFunctionLibrary
{

    int32 Xor_IntInt(int32 A, int32 B);
    int64 Xor_Int64Int64(int64 A, int64 B);
    int32 Wrap(int32 Value, int32 Min, int32 Max);
    FVector WeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float Weight);
    FRotator WeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float Weight);
    float WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float Weight);
    float VSizeXYSquared(FVector A);
    float VSizeXY(FVector A);
    float VSizeSquared(FVector A);
    float VSize2DSquared(FVector2D A);
    float VSize2D(FVector2D A);
    float VSize(FVector A);
    FVector VLerp(FVector A, FVector B, float alpha);
    FVector VInterpTo_Constant(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);
    FVector VInterpTo(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);
    FVector VectorSpringInterp(FVector Current, FVector Target, FVectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
    FVector Vector_Zero();
    FVector Vector_Up();
    void Vector_UnwindEuler(FVector& A);
    FVector2D Vector_UnitCartesianToSpherical(FVector A);
    FVector Vector_ToRadians(FVector A);
    FVector Vector_ToDegrees(FVector A);
    FVector Vector_SnappedToGrid(FVector InVect, float InGridSize);
    void Vector_Set(FVector& A, float X, float Y, float Z);
    FVector Vector_Right();
    FVector Vector_Reciprocal(const FVector& A);
    FVector Vector_ProjectOnToNormal(FVector V, FVector InNormal);
    FVector Vector_One();
    FVector Vector_NormalUnsafe(const FVector& A);
    void Vector_Normalize(FVector& A, float Tolerance);
    FVector Vector_Normal2D(FVector A, float Tolerance);
    FVector Vector_MirrorByPlane(FVector A, const FPlane& InPlane);
    FVector Vector_Left();
    bool Vector_IsZero(const FVector& A);
    bool Vector_IsUnit(const FVector& A, float SquaredLenthTolerance);
    bool Vector_IsUniform(const FVector& A, float Tolerance);
    bool Vector_IsNormal(const FVector& A);
    bool Vector_IsNearlyZero(const FVector& A, float Tolerance);
    bool Vector_IsNAN(const FVector& A);
    float Vector_HeadingAngle(FVector A);
    FVector Vector_GetSignVector(FVector A);
    FVector Vector_GetProjection(FVector A);
    float Vector_GetAbsMin(FVector A);
    float Vector_GetAbsMax(FVector A);
    FVector Vector_GetAbs(FVector A);
    FVector Vector_Forward();
    FVector Vector_Down();
    float Vector_DistanceSquared(FVector v1, FVector v2);
    float Vector_Distance2DSquared(FVector v1, FVector v2);
    float Vector_Distance2D(FVector v1, FVector v2);
    float Vector_Distance(FVector v1, FVector v2);
    float Vector_CosineAngle2D(FVector A, FVector B);
    FVector Vector_ComponentMin(FVector A, FVector B);
    FVector Vector_ComponentMax(FVector A, FVector B);
    FVector Vector_ClampSizeMax2D(FVector A, float Max);
    FVector Vector_ClampSizeMax(FVector A, float Max);
    FVector Vector_ClampSize2D(FVector A, float Min, float Max);
    FVector Vector_BoundedToCube(FVector InVect, float InRadius);
    FVector Vector_BoundedToBox(FVector InVect, FVector InBoxMin, FVector InBoxMax);
    FVector Vector_Backward();
    void Vector_Assign(FVector& A, const FVector& InVector);
    void Vector_AddBounded(FVector& A, FVector InAddVect, float InRadius);
    FVector4 Vector4_Zero();
    float Vector4_SizeSquared3(const FVector4& A);
    float Vector4_SizeSquared(const FVector4& A);
    float Vector4_Size3(const FVector4& A);
    float Vector4_Size(const FVector4& A);
    void Vector4_Set(FVector4& A, float X, float Y, float Z, float W);
    FVector4 Vector4_NormalUnsafe3(const FVector4& A);
    void Vector4_Normalize3(FVector4& A, float Tolerance);
    FVector4 Vector4_Normal3(const FVector4& A, float Tolerance);
    FVector4 Vector4_Negated(const FVector4& A);
    FVector4 Vector4_MirrorByVector3(const FVector4& Direction, const FVector4& SurfaceNormal);
    bool Vector4_IsZero(const FVector4& A);
    bool Vector4_IsUnit3(const FVector4& A, float SquaredLenthTolerance);
    bool Vector4_IsNormal3(const FVector4& A);
    bool Vector4_IsNearlyZero3(const FVector4& A, float Tolerance);
    bool Vector4_IsNAN(const FVector4& A);
    float Vector4_DotProduct3(const FVector4& A, const FVector4& B);
    float Vector4_DotProduct(const FVector4& A, const FVector4& B);
    FVector4 Vector4_CrossProduct3(const FVector4& A, const FVector4& B);
    void Vector4_Assign(FVector4& A, const FVector4& InVector);
    FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    FVector2D Vector2D_Zero();
    FVector2D Vector2D_Unit45Deg();
    FVector2D Vector2D_One();
    FVector VEase(FVector A, FVector B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    FDateTime UtcNow();
    FVector4 TransformVector4(const FMatrix& Matrix, const FVector4& Vec4);
    FRotator TransformRotation(const FTransform& T, FRotator Rotation);
    FVector TransformLocation(const FTransform& T, FVector Location);
    FVector TransformDirection(const FTransform& T, FVector Direction);
    float Transform_Determinant(const FTransform& Transform);
    FVector2D ToSign2D(FVector2D A);
    FVector2D ToRounded2D(FVector2D A);
    void ToDirectionAndLength2D(FVector2D A, FVector2D& OutDir, float& OutLength);
    FDateTime Today();
    FTransform TLerp(const FTransform& A, const FTransform& B, float alpha, TEnumAsByte<ELerpInterpolationMode::Type> InterpMode);
    FTransform TInterpTo(const FTransform& Current, const FTransform& Target, float DeltaTime, float InterpSpeed);
    FTimespan TimespanZeroValue();
    float TimespanRatio(FTimespan A, FTimespan B);
    FTimespan TimespanMinValue();
    FTimespan TimespanMaxValue();
    bool TimespanFromString(FString TimespanString, FTimespan& Result);
    FTransform TEase(const FTransform& A, const FTransform& B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    float Tan(float A);
    FVector Subtract_VectorVector(FVector A, FVector B);
    FVector Subtract_VectorInt(FVector A, int32 B);
    FVector Subtract_VectorFloat(FVector A, float B);
    FVector4 Subtract_Vector4Vector4(const FVector4& A, const FVector4& B);
    FVector2D Subtract_Vector2DVector2D(FVector2D A, FVector2D B);
    FVector2D Subtract_Vector2DFloat(FVector2D A, float B);
    FTimespan Subtract_TimespanTimespan(FTimespan A, FTimespan B);
    FQuat Subtract_QuatQuat(const FQuat& A, const FQuat& B);
    FLinearColor Subtract_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    FIntPoint Subtract_IntPointIntPoint(FIntPoint A, FIntPoint B);
    FIntPoint Subtract_IntPointInt(FIntPoint A, int32 B);
    int32 Subtract_IntInt(int32 A, int32 B);
    int64 Subtract_Int64Int64(int64 A, int64 B);
    float Subtract_FloatFloat(float A, float B);
    FDateTime Subtract_DateTimeTimespan(FDateTime A, FTimespan B);
    FTimespan Subtract_DateTimeDateTime(FDateTime A, FDateTime B);
    uint8 Subtract_ByteByte(uint8 A, uint8 B);
    float Square(float A);
    float Sqrt(float A);
    FVector Spherical2DToUnitCartesian(FVector2D A);
    float Sin(float A);
    int64 SignOfInteger64(int64 A);
    int32 SignOfInteger(int32 A);
    float SignOfFloat(float A);
    void SetRandomStreamSeed(FRandomStream& Stream, int32 NewSeed);
    void Set2D(FVector2D& A, float X, float Y);
    FVector SelectVector(FVector A, FVector B, bool bPickA);
    FTransform SelectTransform(const FTransform& A, const FTransform& B, bool bPickA);
    FString SelectString(FString A, FString B, bool bPickA);
    FRotator SelectRotator(FRotator A, FRotator B, bool bPickA);
    class UObject* SelectObject(class UObject* A, class UObject* B, bool bSelectA);
    int32 SelectInt(int32 A, int32 B, bool bPickA);
    float SelectFloat(float A, float B, bool bPickA);
    FLinearColor SelectColor(FLinearColor A, FLinearColor B, bool bPickA);
    UClass* SelectClass(UClass* A, UClass* B, bool bSelectA);
    void SeedRandomStream(FRandomStream& Stream);
    float SafeDivide(float A, float B);
    int64 Round64(float A);
    int32 Round(float A);
    FRotator RotatorFromAxisAndAngle(FVector Axis, float Angle);
    FVector RotateAngleAxis(FVector InVect, float AngleDeg, FVector Axis);
    FRotator RLerp(FRotator A, FRotator B, float alpha, bool bShortestPath);
    FRotator RInterpTo_Constant(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed);
    FRotator RInterpTo(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed);
    void RGBToHSV_Vector(FLinearColor RGB, FLinearColor& HSV);
    void RGBToHSV(FLinearColor InColor, float& H, float& S, float& V, float& A);
    FLinearColor RGBLinearToHSV(FLinearColor RGB);
    void ResetVectorSpringState(FVectorSpringState& SpringState);
    void ResetRandomStream(const FRandomStream& Stream);
    void ResetFloatSpringState(FFloatSpringState& SpringState);
    FRotator REase(FRotator A, FRotator B, float alpha, bool bShortestPath, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(const FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const FRandomStream& Stream);
    FVector RandomUnitVectorInEllipticalConeInRadians(FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians);
    FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(const FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const FRandomStream& Stream);
    FVector RandomUnitVectorInEllipticalConeInDegrees(FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
    FVector RandomUnitVectorInConeInRadiansFromStream(const FVector& ConeDir, float ConeHalfAngleInRadians, const FRandomStream& Stream);
    FVector RandomUnitVectorInConeInRadians(FVector ConeDir, float ConeHalfAngleInRadians);
    FVector RandomUnitVectorInConeInDegreesFromStream(const FVector& ConeDir, float ConeHalfAngleInDegrees, const FRandomStream& Stream);
    FVector RandomUnitVectorInConeInDegrees(FVector ConeDir, float ConeHalfAngleInDegrees);
    FVector RandomUnitVectorFromStream(const FRandomStream& Stream);
    FVector RandomUnitVector();
    FRotator RandomRotatorFromStream(bool bRoll, const FRandomStream& Stream);
    FRotator RandomRotator(bool bRoll);
    FVector RandomPointInBoundingBox(FVector Origin, FVector BoxExtent);
    int32 RandomIntegerInRangeFromStream(int32 Min, int32 Max, const FRandomStream& Stream);
    int32 RandomIntegerInRange(int32 Min, int32 Max);
    int32 RandomIntegerFromStream(int32 Max, const FRandomStream& Stream);
    int64 RandomInteger64InRange(int64 Min, int64 Max);
    int64 RandomInteger64(int64 Max);
    int32 RandomInteger(int32 Max);
    float RandomFloatInRangeFromStream(float Min, float Max, const FRandomStream& Stream);
    float RandomFloatInRange(float Min, float Max);
    float RandomFloatFromStream(const FRandomStream& Stream);
    float RandomFloat();
    bool RandomBoolWithWeightFromStream(float Weight, const FRandomStream& RandomStream);
    bool RandomBoolWithWeight(float Weight);
    bool RandomBoolFromStream(const FRandomStream& Stream);
    bool RandomBool();
    float RadiansToDegrees(float A);
    FVector Quat_VectorUp(const FQuat& Q);
    FVector Quat_VectorRight(const FQuat& Q);
    FVector Quat_VectorForward(const FQuat& Q);
    FVector Quat_UnrotateVector(const FQuat& Q, const FVector& V);
    float Quat_SizeSquared(const FQuat& Q);
    float Quat_Size(const FQuat& Q);
    void Quat_SetFromEuler(FQuat& Q, const FVector& Euler);
    void Quat_SetComponents(FQuat& Q, float X, float Y, float Z, float W);
    FRotator Quat_Rotator(const FQuat& Q);
    FVector Quat_RotateVector(const FQuat& Q, const FVector& V);
    FQuat Quat_Normalized(const FQuat& Q, float Tolerance);
    void Quat_Normalize(FQuat& Q, float Tolerance);
    FQuat Quat_MakeFromEuler(const FVector& Euler);
    FQuat Quat_Log(const FQuat& Q);
    bool Quat_IsNormalized(const FQuat& Q);
    bool Quat_IsNonFinite(const FQuat& Q);
    bool Quat_IsIdentity(const FQuat& Q, float Tolerance);
    bool Quat_IsFinite(const FQuat& Q);
    FQuat Quat_Inversed(const FQuat& Q);
    FQuat Quat_Identity();
    FVector Quat_GetRotationAxis(const FQuat& Q);
    FVector Quat_GetAxisZ(const FQuat& Q);
    FVector Quat_GetAxisY(const FQuat& Q);
    FVector Quat_GetAxisX(const FQuat& Q);
    float Quat_GetAngle(const FQuat& Q);
    FQuat Quat_Exp(const FQuat& Q);
    FVector Quat_Euler(const FQuat& Q);
    void Quat_EnforceShortestArcWith(FQuat& A, const FQuat& B);
    float Quat_AngularDistance(const FQuat& A, const FQuat& B);
    FVector ProjectVectorOnToVector(FVector V, FVector Target);
    FVector ProjectVectorOnToPlane(FVector V, FVector PlaneNormal);
    FVector ProjectPointOnToPlane(FVector Point, FVector PlaneBase, FVector PlaneNormal);
    bool PointsAreCoplanar(const TArray<FVector>& Points, float Tolerance);
    float PerlinNoise1D(const float Value);
    int32 Percent_IntInt(int32 A, int32 B);
    float Percent_FloatFloat(float A, float B);
    uint8 Percent_ByteByte(uint8 A, uint8 B);
    int32 Or_IntInt(int32 A, int32 B);
    int64 Or_Int64Int64(int64 A, int64 B);
    FDateTime Now();
    bool NotEqualExactly_VectorVector(FVector A, FVector B);
    bool NotEqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);
    bool NotEqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
    bool NotEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
    bool NotEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);
    bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    bool NotEqual_TimespanTimespan(FTimespan A, FTimespan B);
    bool NotEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
    bool NotEqual_QuatQuat(const FQuat& A, const FQuat& B, float ErrorTolerance);
    bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
    bool NotEqual_NameName(FName A, FName B);
    bool NotEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);
    bool NotEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    bool NotEqual_IntPointIntPoint(FIntPoint A, FIntPoint B);
    bool NotEqual_IntInt(int32 A, int32 B);
    bool NotEqual_Int64Int64(int64 A, int64 B);
    bool NotEqual_FloatFloat(float A, float B);
    bool NotEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    bool NotEqual_ClassClass(UClass* A, UClass* B);
    bool NotEqual_ByteByte(uint8 A, uint8 B);
    bool NotEqual_BoolBool(bool A, bool B);
    bool Not_PreBool(bool A);
    int64 Not_Int64(int64 A);
    int32 Not_Int(int32 A);
    FVector2D NormalSafe2D(FVector2D A, float Tolerance);
    float NormalizeToRange(float Value, float RangeMin, float RangeMax);
    FRotator NormalizedDeltaRotator(FRotator A, FRotator B);
    float NormalizeAxis(float Angle);
    void Normalize2D(FVector2D& A, float Tolerance);
    FVector2D Normal2D(FVector2D A);
    FVector Normal(FVector A, float Tolerance);
    FVector NegateVector(FVector A);
    FRotator NegateRotator(FRotator A);
    FVector2D Negated2D(const FVector2D& A);
    bool NearlyEqual_TransformTransform(const FTransform& A, const FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
    bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
    float MultiplyMultiply_FloatFloat(float Base, float Exp);
    float MultiplyByPi(float Value);
    FVector Multiply_VectorVector(FVector A, FVector B);
    FVector Multiply_VectorInt(FVector A, int32 B);
    FVector Multiply_VectorFloat(FVector A, float B);
    FVector4 Multiply_Vector4Vector4(const FVector4& A, const FVector4& B);
    FVector2D Multiply_Vector2DVector2D(FVector2D A, FVector2D B);
    FVector2D Multiply_Vector2DFloat(FVector2D A, float B);
    FTimespan Multiply_TimespanFloat(FTimespan A, float Scalar);
    FRotator Multiply_RotatorInt(FRotator A, int32 B);
    FRotator Multiply_RotatorFloat(FRotator A, float B);
    FQuat Multiply_QuatQuat(const FQuat& A, const FQuat& B);
    FMatrix Multiply_MatrixMatrix(const FMatrix& A, const FMatrix& B);
    FMatrix Multiply_MatrixFloat(const FMatrix& A, float B);
    FLinearColor Multiply_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    FLinearColor Multiply_LinearColorFloat(FLinearColor A, float B);
    FIntPoint Multiply_IntPointIntPoint(FIntPoint A, FIntPoint B);
    FIntPoint Multiply_IntPointInt(FIntPoint A, int32 B);
    int32 Multiply_IntInt(int32 A, int32 B);
    float Multiply_IntFloat(int32 A, float B);
    int64 Multiply_Int64Int64(int64 A, int64 B);
    float Multiply_FloatFloat(float A, float B);
    uint8 Multiply_ByteByte(uint8 A, uint8 B);
    FVector MirrorVectorByNormal(FVector InVect, FVector InNormal);
    void MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue);
    void MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue);
    void MinOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMinValue, uint8& MinValue);
    int64 MinInt64(int64 A, int64 B);
    void MinimumAreaRectangle(class UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);
    int32 Min(int32 A, int32 B);
    void MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue);
    void MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue);
    void MaxOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMaxValue, uint8& MaxValue);
    int64 MaxInt64(int64 A, int64 B);
    int32 Max(int32 A, int32 B);
    FVector4 Matrix_TransformVector4(const FMatrix& M, FVector4 V);
    FVector4 Matrix_TransformVector(const FMatrix& M, FVector V);
    FVector4 Matrix_TransformPosition(const FMatrix& M, FVector V);
    FQuat Matrix_ToQuat(const FMatrix& M);
    void Matrix_SetOrigin(FMatrix& M, FVector NewOrigin);
    void Matrix_SetColumn(FMatrix& M, TEnumAsByte<EMatrixColumns::Type> Column, FVector Value);
    void Matrix_SetAxis(FMatrix& M, TEnumAsByte<EAxis::Type> Axis, FVector AxisVector);
    FMatrix Matrix_ScaleTranslation(const FMatrix& M, FVector Scale3D);
    FMatrix Matrix_RemoveTranslation(const FMatrix& M);
    void Matrix_RemoveScaling(FMatrix& M, float Tolerance);
    FMatrix Matrix_Mirror(const FMatrix& M, TEnumAsByte<EAxis::Type> MirrorAxis, TEnumAsByte<EAxis::Type> FlipAxis);
    FVector Matrix_InverseTransformVector(const FMatrix& M, FVector V);
    FVector Matrix_InverseTransformPosition(const FMatrix& M, FVector V);
    FMatrix Matrix_Identity();
    FVector Matrix_GetUnitAxis(const FMatrix& M, TEnumAsByte<EAxis::Type> Axis);
    void Matrix_GetUnitAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);
    FMatrix Matrix_GetTransposed(const FMatrix& M);
    FMatrix Matrix_GetTransposeAdjoint(const FMatrix& M);
    FVector Matrix_GetScaleVector(const FMatrix& M, float Tolerance);
    FVector Matrix_GetScaledAxis(const FMatrix& M, TEnumAsByte<EAxis::Type> Axis);
    void Matrix_GetScaledAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);
    float Matrix_GetRotDeterminant(const FMatrix& M);
    FRotator Matrix_GetRotator(const FMatrix& M);
    FVector Matrix_GetOrigin(const FMatrix& InMatrix);
    float Matrix_GetMaximumAxisScale(const FMatrix& M);
    FMatrix Matrix_GetMatrixWithoutScale(const FMatrix& M, float Tolerance);
    FMatrix Matrix_GetInverse(const FMatrix& M);
    bool Matrix_GetFrustumTopPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumRightPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumNearPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumLeftPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumFarPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumBottomPlane(const FMatrix& M, FPlane& OutPlane);
    float Matrix_GetDeterminant(const FMatrix& M);
    FVector Matrix_GetColumn(const FMatrix& M, TEnumAsByte<EMatrixColumns::Type> Column);
    bool Matrix_ContainsNaN(const FMatrix& M);
    FMatrix Matrix_ConcatenateTranslation(const FMatrix& M, FVector Translation);
    FMatrix Matrix_ApplyScale(const FMatrix& M, float Scale);
    float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    FVector4 MakeVector4(float X, float Y, float Z, float W);
    FVector2D MakeVector2D(float X, float Y);
    FVector MakeVector(float X, float Y, float Z);
    FTransform MakeTransform(FVector Location, FRotator Rotation, FVector Scale);
    FTimespan MakeTimespan2(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 FractionNano);
    FTimespan MakeTimespan(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 Milliseconds);
    FRotator MakeRotFromZY(const FVector& Z, const FVector& Y);
    FRotator MakeRotFromZX(const FVector& Z, const FVector& X);
    FRotator MakeRotFromZ(const FVector& Z);
    FRotator MakeRotFromYZ(const FVector& Y, const FVector& Z);
    FRotator MakeRotFromYX(const FVector& Y, const FVector& X);
    FRotator MakeRotFromY(const FVector& Y);
    FRotator MakeRotFromXZ(const FVector& X, const FVector& Z);
    FRotator MakeRotFromXY(const FVector& X, const FVector& Y);
    FRotator MakeRotFromX(const FVector& X);
    FRotator MakeRotator(float Roll, float Pitch, float Yaw);
    FRotator MakeRotationFromAxes(FVector Forward, FVector Right, FVector Up);
    FTransform MakeRelativeTransform(const FTransform& A, const FTransform& RelativeTo);
    FRandomStream MakeRandomStream(int32 InitialSeed);
    FQualifiedFrameTime MakeQualifiedFrameTime(FFrameNumber Frame, FFrameRate FrameRate, float SubFrame);
    float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
    FPlane MakePlaneFromPointAndNormal(FVector Point, FVector Normal);
    FFrameRate MakeFrameRate(int32 Numerator, int32 Denominator);
    FDateTime MakeDateTime(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second, int32 Millisecond);
    FLinearColor MakeColor(float R, float G, float B, float A);
    FBox2D MakeBox2D(FVector2D Min, FVector2D Max);
    FBox MakeBox(FVector Min, FVector Max);
    float Loge(float A);
    float Log(float A, float Base);
    bool LinePlaneIntersection_OriginNormal(const FVector& LineStart, const FVector& LineEnd, FVector PlaneOrigin, FVector PlaneNormal, float& T, FVector& Intersection);
    bool LinePlaneIntersection(const FVector& LineStart, const FVector& LineEnd, const FPlane& APlane, float& T, FVector& Intersection);
    FLinearColor LinearColorLerpUsingHSV(FLinearColor A, FLinearColor B, float alpha);
    FLinearColor LinearColorLerp(FLinearColor A, FLinearColor B, float alpha);
    FLinearColor LinearColor_Yellow();
    FLinearColor LinearColor_White();
    FLinearColor LinearColor_Transparent();
    FColor LinearColor_ToRGBE(FLinearColor InLinearColor);
    FLinearColor LinearColor_ToNewOpacity(FLinearColor InColor, float InOpacity);
    void LinearColor_SetTemperature(FLinearColor& InOutColor, float InTemperature);
    void LinearColor_SetRGBA(FLinearColor& InOutColor, float R, float G, float B, float A);
    void LinearColor_SetRandomHue(FLinearColor& InOutColor);
    void LinearColor_SetFromSRGB(FLinearColor& InOutColor, const FColor& InSRGB);
    void LinearColor_SetFromPow22(FLinearColor& InOutColor, const FColor& InColor);
    void LinearColor_SetFromHSV(FLinearColor& InOutColor, float H, float S, float V, float A);
    void LinearColor_Set(FLinearColor& InOutColor, FLinearColor InColor);
    FLinearColor LinearColor_Red();
    FColor LinearColor_QuantizeRound(FLinearColor InColor);
    FColor LinearColor_Quantize(FLinearColor InColor);
    bool LinearColor_IsNearEqual(FLinearColor A, FLinearColor B, float Tolerance);
    FLinearColor LinearColor_Green();
    FLinearColor LinearColor_Gray();
    float LinearColor_GetMin(FLinearColor InColor);
    float LinearColor_GetMax(FLinearColor InColor);
    float LinearColor_GetLuminance(FLinearColor InColor);
    float LinearColor_Distance(FLinearColor C1, FLinearColor C2);
    FLinearColor LinearColor_Desaturated(FLinearColor InColor, float InDesaturation);
    FLinearColor LinearColor_Blue();
    FLinearColor LinearColor_Black();
    FVector LessLess_VectorRotator(FVector A, FRotator B);
    bool LessEqual_TimespanTimespan(FTimespan A, FTimespan B);
    bool LessEqual_IntInt(int32 A, int32 B);
    bool LessEqual_Int64Int64(int64 A, int64 B);
    bool LessEqual_FloatFloat(float A, float B);
    bool LessEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    bool LessEqual_ByteByte(uint8 A, uint8 B);
    bool Less_TimespanTimespan(FTimespan A, FTimespan B);
    bool Less_IntInt(int32 A, int32 B);
    bool Less_Int64Int64(int64 A, int64 B);
    bool Less_FloatFloat(float A, float B);
    bool Less_DateTimeDateTime(FDateTime A, FDateTime B);
    bool Less_ByteByte(uint8 A, uint8 B);
    float Lerp(float A, float B, float alpha);
    bool IsZero2D(const FVector2D& A);
    bool IsPointInBoxWithTransform(FVector Point, const FTransform& BoxWorldTransform, FVector BoxExtent);
    bool IsPointInBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);
    bool IsNearlyZero2D(const FVector2D& A, float Tolerance);
    bool IsMorning(FDateTime A);
    bool IsLeapYear(int32 Year);
    bool IsAfternoon(FDateTime A);
    FTransform InvertTransform(const FTransform& T);
    FRotator InverseTransformRotation(const FTransform& T, FRotator Rotation);
    FVector InverseTransformLocation(const FTransform& T, FVector Location);
    FVector InverseTransformDirection(const FTransform& T, FVector Direction);
    FIntPoint IntPoint_Zero();
    FIntPoint IntPoint_Up();
    FIntPoint IntPoint_Right();
    FIntPoint IntPoint_One();
    FIntPoint IntPoint_Left();
    FIntPoint IntPoint_Down();
    bool InRange_IntInt(int32 Value, int32 Min, int32 Max, bool InclusiveMin, bool InclusiveMax);
    bool InRange_Int64Int64(int64 Value, int64 Min, int64 Max, bool InclusiveMin, bool InclusiveMax);
    bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
    float Hypotenuse(float Width, float Height);
    FLinearColor HSVToRGBLinear(FLinearColor HSV);
    void HSVToRGB_Vector(FLinearColor HSV, FLinearColor& RGB);
    FLinearColor HSVToRGB(float H, float S, float V, float A);
    float GridSnap_Float(float Location, float GridSize);
    FVector GreaterGreater_VectorRotator(FVector A, FRotator B);
    bool GreaterEqual_TimespanTimespan(FTimespan A, FTimespan B);
    bool GreaterEqual_IntInt(int32 A, int32 B);
    bool GreaterEqual_Int64Int64(int64 A, int64 B);
    bool GreaterEqual_FloatFloat(float A, float B);
    bool GreaterEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    bool GreaterEqual_ByteByte(uint8 A, uint8 B);
    bool Greater_TimespanTimespan(FTimespan A, FTimespan B);
    bool Greater_IntInt(int32 A, int32 B);
    bool Greater_Int64Int64(int64 A, int64 B);
    bool Greater_FloatFloat(float A, float B);
    bool Greater_DateTimeDateTime(FDateTime A, FDateTime B);
    bool Greater_ByteByte(uint8 A, uint8 B);
    int32 GetYear(FDateTime A);
    void GetYawPitchFromVector(FVector InVec, float& Yaw, float& Pitch);
    FVector GetVectorArrayAverage(const TArray<FVector>& Vectors);
    FVector GetUpVector(FRotator InRot);
    float GetTotalSeconds(FTimespan A);
    float GetTotalMinutes(FTimespan A);
    float GetTotalMilliseconds(FTimespan A);
    float GetTotalHours(FTimespan A);
    float GetTotalDays(FTimespan A);
    FTimespan GetTimeOfDay(FDateTime A);
    float GetTAU();
    void GetSlopeDegreeAngles(const FVector& MyRightYAxis, const FVector& FloorNormal, const FVector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle);
    int32 GetSeconds(FTimespan A);
    int32 GetSecond(FDateTime A);
    FVector2D GetRotated2D(FVector2D A, float AngleDeg);
    FVector GetRightVector(FRotator InRot);
    FVector GetReflectionVector(FVector Direction, FVector SurfaceNormal);
    float GetPointDistanceToSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
    float GetPointDistanceToLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    float GetPI();
    int32 GetMonth(FDateTime A);
    int32 GetMinutes(FTimespan A);
    int32 GetMinute(FDateTime A);
    float GetMinElement(FVector A);
    float GetMin2D(FVector2D A);
    int32 GetMilliseconds(FTimespan A);
    int32 GetMillisecond(FDateTime A);
    float GetMaxElement(FVector A);
    float GetMax2D(FVector2D A);
    int32 GetHours(FTimespan A);
    int32 GetHour12(FDateTime A);
    int32 GetHour(FDateTime A);
    FVector GetForwardVector(FRotator InRot);
    FTimespan GetDuration(FTimespan A);
    FVector GetDirectionUnitVector(FVector From, FVector To);
    int32 GetDays(FTimespan A);
    int32 GetDayOfYear(FDateTime A);
    int32 GetDay(FDateTime A);
    FDateTime GetDate(FDateTime A);
    void GetAzimuthAndElevation(FVector InDirection, const FTransform& ReferenceFrame, float& azimuth, float& elevation);
    void GetAxes(FRotator A, FVector& X, FVector& Y, FVector& Z);
    float GetAbsMax2D(FVector2D A);
    FVector2D GetAbs2D(FVector2D A);
    float FWrap(float Value, float Min, float Max);
    FIntVector FTruncVector(const FVector& InVector);
    int64 FTrunc64(float A);
    int32 FTrunc(float A);
    FTimespan FromSeconds(float Seconds);
    FTimespan FromMinutes(float Minutes);
    FTimespan FromMilliseconds(float Milliseconds);
    FTimespan FromHours(float Hours);
    FTimespan FromDays(float Days);
    float Fraction(float A);
    int32 FMod(float Dividend, float Divisor, float& Remainder);
    float FMin(float A, float B);
    float FMax(float A, float B);
    float FloatSpringInterp(float Current, float Target, FFloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
    float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
    float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);
    float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
    float FInterpEaseInOut(float A, float B, float alpha, float Exponent);
    void FindNearestPointsOnLineSegments(FVector Segment1Start, FVector Segment1End, FVector Segment2Start, FVector Segment2End, FVector& Segment1Point, FVector& Segment2Point);
    FRotator FindLookAtRotation(const FVector& Start, const FVector& Target);
    FVector FindClosestPointOnSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
    FVector FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    int64 FFloor64(float A);
    int32 FFloor(float A);
    float FClamp(float Value, float Min, float Max);
    int64 FCeil64(float A);
    int32 FCeil(float A);
    float Exp(float A);
    bool EqualExactly_VectorVector(FVector A, FVector B);
    bool EqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);
    bool EqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
    bool EqualEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
    bool EqualEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);
    bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    bool EqualEqual_TransformTransform(const FTransform& A, const FTransform& B);
    bool EqualEqual_TimespanTimespan(FTimespan A, FTimespan B);
    bool EqualEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
    bool EqualEqual_QuatQuat(const FQuat& A, const FQuat& B, float Tolerance);
    bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
    bool EqualEqual_NameName(FName A, FName B);
    bool EqualEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);
    bool EqualEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    bool EqualEqual_IntInt(int32 A, int32 B);
    bool EqualEqual_Int64Int64(int64 A, int64 B);
    bool EqualEqual_FloatFloat(float A, float B);
    bool EqualEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    bool EqualEqual_ClassClass(UClass* A, UClass* B);
    bool EqualEqual_ByteByte(uint8 A, uint8 B);
    bool EqualEqual_BoolBool(bool A, bool B);
    bool Equal_IntPointIntPoint(FIntPoint A, FIntPoint B);
    float Ease(float A, float B, float alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    FVector DynamicWeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    FRotator DynamicWeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    float DotProduct2D(FVector2D A, FVector2D B);
    float Dot_VectorVector(FVector A, FVector B);
    FVector Divide_VectorVector(FVector A, FVector B);
    FVector Divide_VectorInt(FVector A, int32 B);
    FVector Divide_VectorFloat(FVector A, float B);
    FVector4 Divide_Vector4Vector4(const FVector4& A, const FVector4& B);
    FVector2D Divide_Vector2DVector2D(FVector2D A, FVector2D B);
    FVector2D Divide_Vector2DFloat(FVector2D A, float B);
    FTimespan Divide_TimespanFloat(FTimespan A, float Scalar);
    FLinearColor Divide_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    FIntPoint Divide_IntPointIntPoint(FIntPoint A, FIntPoint B);
    FIntPoint Divide_IntPointInt(FIntPoint A, int32 B);
    int32 Divide_IntInt(int32 A, int32 B);
    int64 Divide_Int64Int64(int64 A, int64 B);
    float Divide_FloatFloat(float A, float B);
    uint8 Divide_ByteByte(uint8 A, uint8 B);
    float DistanceSquared2D(FVector2D v1, FVector2D v2);
    float Distance2D(FVector2D v1, FVector2D v2);
    float DegTan(float A);
    float DegSin(float A);
    float DegreesToRadians(float A);
    float DegCos(float A);
    float DegAtan2(float Y, float X);
    float DegAtan(float A);
    float DegAsin(float A);
    float DegAcos(float A);
    int32 DaysInYear(int32 Year);
    int32 DaysInMonth(int32 Year, int32 Month);
    FDateTime DateTimeMinValue();
    FDateTime DateTimeMaxValue();
    bool DateTimeFromString(FString DateTimeString, FDateTime& Result);
    bool DateTimeFromIsoString(FString IsoString, FDateTime& Result);
    float CrossProduct2D(FVector2D A, FVector2D B);
    FVector Cross_VectorVector(FVector A, FVector B);
    FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
    float Cos(float A);
    FTransform ConvertTransformToRelative(const FTransform& Transform, const FTransform& ParentTransform);
    FVector2D Conv_VectorToVector2D(FVector InVector);
    FTransform Conv_VectorToTransform(FVector InLocation);
    FRotator Conv_VectorToRotator(FVector InVec);
    FQuat Conv_VectorToQuaternion(FVector InVec);
    FLinearColor Conv_VectorToLinearColor(FVector InVec);
    FVector Conv_Vector4ToVector(const FVector4& InVector4);
    FRotator Conv_Vector4ToRotator(const FVector4& InVec);
    FQuat Conv_Vector4ToQuaternion(const FVector4& InVec);
    FVector Conv_Vector2DToVector(FVector2D InVector2D, float Z);
    FIntPoint Conv_Vector2DToIntPoint(FVector2D InVector2D);
    FMatrix Conv_TransformToMatrix(const FTransform& Transform);
    FVector Conv_RotatorToVector(FRotator InRot);
    FTransform Conv_RotatorToTransform(const FRotator& InRotator);
    FTransform Conv_MatrixToTransform(const FMatrix& InMatrix);
    FRotator Conv_MatrixToRotator(const FMatrix& InMatrix);
    FVector Conv_LinearColorToVector(FLinearColor InLinearColor);
    FColor Conv_LinearColorToColor(FLinearColor InLinearColor, bool InUseSRGB);
    FVector Conv_IntVectorToVector(const FIntVector& InIntVector);
    FIntVector Conv_IntToIntVector(int32 inInt);
    int64 Conv_IntToInt64(int32 inInt);
    float Conv_IntToFloat(int32 inInt);
    uint8 Conv_IntToByte(int32 inInt);
    bool Conv_IntToBool(int32 inInt);
    FVector2D Conv_IntPointToVector2D(FIntPoint InIntPoint);
    int32 Conv_Int64ToInt(int64 inInt);
    uint8 Conv_Int64ToByte(int64 inInt);
    FVector Conv_FloatToVector(float InFloat);
    FLinearColor Conv_FloatToLinearColor(float InFloat);
    FLinearColor Conv_ColorToLinearColor(FColor InColor);
    int32 Conv_ByteToInt(uint8 InByte);
    float Conv_ByteToFloat(uint8 InByte);
    int32 Conv_BoolToInt(bool InBool);
    float Conv_BoolToFloat(bool InBool);
    uint8 Conv_BoolToByte(bool InBool);
    FTransform ComposeTransforms(const FTransform& A, const FTransform& B);
    FRotator ComposeRotators(FRotator A, FRotator B);
    bool ClassIsChildOf(UClass* TestClass, UClass* ParentClass);
    FVector ClampVectorSize(FVector A, float Min, float Max);
    int64 ClampInt64(int64 Value, int64 Min, int64 Max);
    float ClampAxis(float Angle);
    FVector2D ClampAxes2D(FVector2D A, float MinAxisVal, float MaxAxisVal);
    float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
    int32 Clamp(int32 Value, int32 Min, int32 Max);
    FLinearColor CInterpTo(FLinearColor Current, FLinearColor Target, float DeltaTime, float InterpSpeed);
    void BreakVector4(const FVector4& InVec, float& X, float& Y, float& Z, float& W);
    void BreakVector2D(FVector2D InVec, float& X, float& Y);
    void BreakVector(FVector InVec, float& X, float& Y, float& Z);
    void BreakTransform(const FTransform& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale);
    void BreakTimespan2(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& FractionNano);
    void BreakTimespan(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& Milliseconds);
    void BreakRotIntoAxes(const FRotator& InRot, FVector& X, FVector& Y, FVector& Z);
    void BreakRotator(FRotator InRot, float& Roll, float& Pitch, float& Yaw);
    void BreakRandomStream(const FRandomStream& InRandomStream, int32& InitialSeed);
    void BreakQualifiedFrameTime(const FQualifiedFrameTime& InFrameTime, FFrameNumber& Frame, FFrameRate& FrameRate, float& SubFrame);
    void BreakFrameRate(const FFrameRate& InFrameRate, int32& Numerator, int32& Denominator);
    void BreakDateTime(FDateTime InDateTime, int32& Year, int32& Month, int32& Day, int32& Hour, int32& Minute, int32& Second, int32& Millisecond);
    void BreakColor(FLinearColor InColor, float& R, float& G, float& B, float& A);
    bool BooleanXOR(bool A, bool B);
    bool BooleanOR(bool A, bool B);
    bool BooleanNOR(bool A, bool B);
    bool BooleanNAND(bool A, bool B);
    bool BooleanAND(bool A, bool B);
    uint8 BMin(uint8 A, uint8 B);
    uint8 BMax(uint8 A, uint8 B);
    float Atan2(float Y, float X);
    float Atan(float A);
    float Asin(float A);
    int32 And_IntInt(int32 A, int32 B);
    int64 And_Int64Int64(int64 A, int64 B);
    FVector Add_VectorVector(FVector A, FVector B);
    FVector Add_VectorInt(FVector A, int32 B);
    FVector Add_VectorFloat(FVector A, float B);
    FVector4 Add_Vector4Vector4(const FVector4& A, const FVector4& B);
    FVector2D Add_Vector2DVector2D(FVector2D A, FVector2D B);
    FVector2D Add_Vector2DFloat(FVector2D A, float B);
    FTimespan Add_TimespanTimespan(FTimespan A, FTimespan B);
    FQuat Add_QuatQuat(const FQuat& A, const FQuat& B);
    FMatrix Add_MatrixMatrix(const FMatrix& A, const FMatrix& B);
    FLinearColor Add_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    FIntPoint Add_IntPointIntPoint(FIntPoint A, FIntPoint B);
    FIntPoint Add_IntPointInt(FIntPoint A, int32 B);
    int32 Add_IntInt(int32 A, int32 B);
    int64 Add_Int64Int64(int64 A, int64 B);
    float Add_FloatFloat(float A, float B);
    FDateTime Add_DateTimeTimespan(FDateTime A, FTimespan B);
    FDateTime Add_DateTimeDateTime(FDateTime A, FDateTime B);
    uint8 Add_ByteByte(uint8 A, uint8 B);
    float Acos(float A);
    int64 Abs_Int64(int64 A);
    int32 Abs_Int(int32 A);
    float Abs(float A);
};

class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{

    void MarkBit(int32& Data, int32 Index);
    bool HasUnmarkedBit(int32 Data, int32 NumBits);
    bool HasMarkedBit(int32 Data, int32 NumBits);
    uint8 GetValidValue(const class UEnum* Enum, uint8 EnumeratorValue);
    int32 GetUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits, bool bRandom);
    int32 GetRandomUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);
    int32 GetFirstUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);
    uint8 GetEnumeratorValueFromIndex(const class UEnum* Enum, uint8 EnumeratorIndex);
    FString GetEnumeratorUserFriendlyName(const class UEnum* Enum, uint8 EnumeratorValue);
    FName GetEnumeratorName(const class UEnum* Enum, uint8 EnumeratorValue);
    void ClearBit(int32& Data, int32 Index);
    void ClearAllBits(int32& Data);
    bool BitIsMarked(int32 Data, int32 Index);
};

class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{

    void SetCastInsetShadowForAllAttachments(class UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup);
    class UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(class UTextureRenderTarget2D* RenderTarget, FString Name, TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings);
    void ReleaseRenderTarget2D(class UTextureRenderTarget2D* TextureRenderTarget);
    FColor ReadRenderTargetUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
    FLinearColor ReadRenderTargetRawUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
    FLinearColor ReadRenderTargetRawPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);
    FColor ReadRenderTargetPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);
    FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32 Bone0, uint8 Weight0, int32 Bone1, uint8 Weight1, int32 Bone2, uint8 Weight2, int32 Bone3, uint8 Weight3);
    class UTexture2D* ImportFileAsTexture2D(class UObject* WorldContextObject, FString Filename);
    class UTexture2D* ImportBufferAsTexture2D(class UObject* WorldContextObject, const TArray<uint8>& Buffer);
    void ExportTexture2D(class UObject* WorldContextObject, class UTexture2D* Texture, FString FilePath, FString Filename);
    void ExportRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, FString FilePath, FString Filename);
    void EndDrawCanvasToRenderTarget(class UObject* WorldContextObject, const FDrawToRenderTargetContext& Context);
    void DrawMaterialToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material);
    class UTextureRenderTargetVolume* CreateRenderTargetVolume(class UObject* WorldContextObject, int32 Width, int32 Height, int32 Depth, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    class UTextureRenderTarget2DArray* CreateRenderTarget2DArray(class UObject* WorldContextObject, int32 Width, int32 Height, int32 Slices, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    class UTextureRenderTarget2D* CreateRenderTarget2D(class UObject* WorldContextObject, int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    void ConvertRenderTargetToTexture2DEditorOnly(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture2D* Texture);
    void ClearRenderTarget2D(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor);
    void BreakSkinWeightInfo(FSkelMeshSkinWeightInfo InWeight, int32& Bone0, uint8& Weight0, int32& Bone1, uint8& Weight1, int32& Bone2, uint8& Weight2, int32& Bone3, uint8& Weight3);
    void BeginDrawCanvasToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext& Context);
};

class UKismetStringLibrary : public UBlueprintFunctionLibrary
{

    FString TrimTrailing(FString SourceString);
    FString Trim(FString SourceString);
    FString ToUpper(FString SourceString);
    FString ToLower(FString SourceString);
    FString TimeSecondsToString(float InSeconds);
    bool StartsWith(FString SourceString, FString InPrefix, TEnumAsByte<ESearchCase::Type> SearchCase);
    bool Split(FString SourceString, FString InStr, FString& LeftS, FString& RightS, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    FString RightPad(FString SourceString, int32 ChCount);
    FString RightChop(FString SourceString, int32 Count);
    FString Right(FString SourceString, int32 Count);
    FString Reverse(FString SourceString);
    int32 ReplaceInline(FString& SourceString, FString SearchText, FString ReplacementText, TEnumAsByte<ESearchCase::Type> SearchCase);
    FString Replace(FString SourceString, FString From, FString To, TEnumAsByte<ESearchCase::Type> SearchCase);
    TArray<FString> ParseIntoArray(FString SourceString, FString Delimiter, const bool CullEmptyStrings);
    bool NotEqual_StrStr(FString A, FString B);
    bool NotEqual_StriStri(FString A, FString B);
    FString Mid(FString SourceString, int32 Start, int32 Count);
    bool MatchesWildcard(FString SourceString, FString Wildcard, TEnumAsByte<ESearchCase::Type> SearchCase);
    int32 Len(FString S);
    FString LeftPad(FString SourceString, int32 ChCount);
    FString LeftChop(FString SourceString, int32 Count);
    FString Left(FString SourceString, int32 Count);
    FString JoinStringArray(const TArray<FString>& SourceArray, FString Separator);
    bool IsNumeric(FString SourceString);
    bool isEmpty(FString inString);
    FString GetSubstring(FString SourceString, int32 StartIndex, int32 Length);
    int32 GetCharacterAsNumber(FString SourceString, int32 Index);
    TArray<FString> GetCharacterArrayFromString(FString SourceString);
    int32 FindSubstring(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd, int32 StartPosition);
    bool EqualEqual_StrStr(FString A, FString B);
    bool EqualEqual_StriStri(FString A, FString B);
    bool EndsWith(FString SourceString, FString InSuffix, TEnumAsByte<ESearchCase::Type> SearchCase);
    int32 CullArray(FString SourceString, TArray<FString>& inArray);
    FString Conv_VectorToString(FVector InVec);
    FString Conv_Vector2dToString(FVector2D InVec);
    FString Conv_TransformToString(const FTransform& InTrans);
    void Conv_StringToVector2D(FString inString, FVector2D& OutConvertedVector2D, bool& OutIsValid);
    void Conv_StringToVector(FString inString, FVector& OutConvertedVector, bool& OutIsValid);
    void Conv_StringToRotator(FString inString, FRotator& OutConvertedRotator, bool& OutIsValid);
    FName Conv_StringToName(FString inString);
    int32 Conv_StringToInt(FString inString);
    float Conv_StringToFloat(FString inString);
    void Conv_StringToColor(FString inString, FLinearColor& OutConvertedColor, bool& OutIsValid);
    FString Conv_RotatorToString(FRotator InRot);
    FString Conv_ObjectToString(class UObject* InObj);
    FString Conv_NameToString(FName InName);
    FString Conv_MatrixToString(const FMatrix& InMatrix);
    FString Conv_IntVectorToString(FIntVector InIntVec);
    FString Conv_IntToString(int32 inInt);
    FString Conv_IntPointToString(FIntPoint InIntPoint);
    FString Conv_FloatToString(float InFloat);
    FString Conv_ColorToString(FLinearColor InColor);
    FString Conv_ByteToString(uint8 InByte);
    FString Conv_BoolToString(bool InBool);
    bool Contains(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd);
    FString Concat_StrStr(FString A, FString B);
    FString BuildString_Vector2d(FString AppendTo, FString Prefix, FVector2D InVector2D, FString Suffix);
    FString BuildString_Vector(FString AppendTo, FString Prefix, FVector InVector, FString Suffix);
    FString BuildString_Rotator(FString AppendTo, FString Prefix, FRotator InRot, FString Suffix);
    FString BuildString_Object(FString AppendTo, FString Prefix, class UObject* InObj, FString Suffix);
    FString BuildString_Name(FString AppendTo, FString Prefix, FName InName, FString Suffix);
    FString BuildString_IntVector(FString AppendTo, FString Prefix, FIntVector InIntVector, FString Suffix);
    FString BuildString_Int(FString AppendTo, FString Prefix, int32 inInt, FString Suffix);
    FString BuildString_Float(FString AppendTo, FString Prefix, float InFloat, FString Suffix);
    FString BuildString_Color(FString AppendTo, FString Prefix, FLinearColor InColor, FString Suffix);
    FString BuildString_Bool(FString AppendTo, FString Prefix, bool InBool, FString Suffix);
};

class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{

    bool IsRegisteredTableId(const FName TableId);
    bool IsRegisteredTableEntry(const FName TableId, FString Key);
    FString GetTableNamespace(const FName TableId);
    FString GetTableEntrySourceString(const FName TableId, FString Key);
    FString GetTableEntryMetaData(const FName TableId, FString Key, const FName MetadataId);
    TArray<FName> GetRegisteredStringTables();
    TArray<FName> GetMetaDataIdsFromStringTableEntry(const FName TableId, FString Key);
    TArray<FString> GetKeysFromStringTable(const FName TableId);
};

class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{

    void UnregisterForRemoteNotifications();
    void UnloadPrimaryAssetList(const TArray<FPrimaryAssetId>& PrimaryAssetIdList);
    void UnloadPrimaryAsset(FPrimaryAssetId PrimaryAssetId);
    void TransactObject(class UObject* Object);
    void StackTrace();
    bool SphereTraceSingleForObjects(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceSingleByProfile(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceSingle(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMultiForObjects(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMultiByProfile(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMulti(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereOverlapComponents(const class UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>& OutComponents);
    bool SphereOverlapActors(const class UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>& OutActors);
    void SnapshotObject(class UObject* Object);
    void ShowPlatformSpecificLeaderboardScreen(FString CategoryName);
    void ShowPlatformSpecificAchievementsScreen(const class APlayerController* SpecificPlayer);
    void ShowInterstitialAd();
    void ShowAdBanner(int32 AdIdIndex, bool bShowOnBottomOfScreen);
    void SetWindowTitle(const FText& Title);
    void SetVolumeButtonsHandledBySystem(bool bEnabled);
    void SetVectorPropertyByName(class UObject* Object, FName PropertyName, const FVector& Value);
    void SetUserActivity(const FUserActivity& UserActivity);
    void SetTransformPropertyByName(class UObject* Object, FName PropertyName, const FTransform& Value);
    void SetTextPropertyByName(class UObject* Object, FName PropertyName, const FText& Value);
    void SetSuppressViewportTransitionMessage(const class UObject* WorldContextObject, bool bState);
    void SetStructurePropertyByName(class UObject* Object, FName PropertyName, const FGenericStruct& Value);
    void SetStringPropertyByName(class UObject* Object, FName PropertyName, FString Value);
    void SetSoftObjectPropertyByName(class UObject* Object, FName PropertyName, const TSoftObjectPtr<UObject>& Value);
    void SetSoftClassPropertyByName(class UObject* Object, FName PropertyName, const TSoftClassPtr<UObject>& Value);
    void SetRotatorPropertyByName(class UObject* Object, FName PropertyName, const FRotator& Value);
    void SetObjectPropertyByName(class UObject* Object, FName PropertyName, class UObject* Value);
    void SetNamePropertyByName(class UObject* Object, FName PropertyName, const FName& Value);
    void SetLinearColorPropertyByName(class UObject* Object, FName PropertyName, const FLinearColor& Value);
    void SetIntPropertyByName(class UObject* Object, FName PropertyName, int32 Value);
    void SetInterfacePropertyByName(class UObject* Object, FName PropertyName, const FScriptInterface& Value);
    void SetInt64PropertyByName(class UObject* Object, FName PropertyName, int64 Value);
    void SetGamepadsBlockDeviceFeedback(bool bBlock);
    void SetFloatPropertyByName(class UObject* Object, FName PropertyName, float Value);
    void SetFieldPathPropertyByName(class UObject* Object, FName PropertyName, const TFieldPath<FField>& Value);
    void SetColorPropertyByName(class UObject* Object, FName PropertyName, const FColor& Value);
    void SetCollisionProfileNameProperty(class UObject* Object, FName PropertyName, const FCollisionProfileName& Value);
    void SetClassPropertyByName(class UObject* Object, FName PropertyName, UClass* Value);
    void SetBytePropertyByName(class UObject* Object, FName PropertyName, uint8 Value);
    void SetBoolPropertyByName(class UObject* Object, FName PropertyName, bool Value);
    void RetriggerableDelay(const class UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    void ResetGamepadAssignmentToController(int32 ControllerId);
    void ResetGamepadAssignments();
    void RegisterForRemoteNotifications();
    void QuitGame(const class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference::Type> QuitPreference, bool bIgnorePlatformRestrictions);
    void PrintWarning(FString inString);
    void PrintText(const class UObject* WorldContextObject, const FText InText, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    void PrintString(const class UObject* WorldContextObject, FString inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    bool ParseParamValue(FString inString, FString InParam, FString& OutValue);
    bool ParseParam(FString inString, FString InParam);
    void ParseCommandLine(FString InCmdLine, TArray<FString>& OutTokens, TArray<FString>& OutSwitches, TMap<class FString, class FString>& OutParams);
    void OnAssetLoaded__DelegateSignature(class UObject* Loaded);
    void OnAssetClassLoaded__DelegateSignature(UClass* Loaded);
    bool NotEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B);
    bool NotEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B);
    bool NotEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
    bool NotEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
    FString NormalizeFilename(FString InFilename);
    void MoveComponentTo(class USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction::Type> MoveAction, FLatentActionInfo LatentInfo);
    FSoftObjectPath MakeSoftObjectPath(FString PathString);
    FSoftClassPath MakeSoftClassPath(FString PathString);
    FText MakeLiteralText(FText Value);
    FString MakeLiteralString(FString Value);
    FName MakeLiteralName(FName Value);
    int32 MakeLiteralInt(int32 Value);
    float MakeLiteralFloat(float Value);
    uint8 MakeLiteralByte(uint8 Value);
    bool MakeLiteralBool(bool Value);
    void LoadInterstitialAd(int32 AdIdIndex);
    UClass* LoadClassAsset_Blocking(TSoftClassPtr<UObject> AssetClass);
    void LoadAssetClass(const class UObject* WorldContextObject, TSoftClassPtr<UObject> AssetClass, FLoadAssetClassOnLoaded OnLoaded, FLatentActionInfo LatentInfo);
    class UObject* LoadAsset_Blocking(TSoftObjectPtr<UObject> Asset);
    void LoadAsset(const class UObject* WorldContextObject, TSoftObjectPtr<UObject> Asset, FLoadAssetOnLoaded OnLoaded, FLatentActionInfo LatentInfo);
    bool LineTraceSingleForObjects(const class UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceSingleByProfile(const class UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceSingle(const class UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceMultiForObjects(const class UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceMultiByProfile(const class UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceMulti(const class UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void LaunchURL(FString URL);
    void K2_UnPauseTimerHandle(const class UObject* WorldContextObject, FTimerHandle Handle);
    void K2_UnPauseTimerDelegate(FK2_UnPauseTimerDelegateDelegate Delegate);
    void K2_UnPauseTimer(class UObject* Object, FString FunctionName);
    bool K2_TimerExistsHandle(const class UObject* WorldContextObject, FTimerHandle Handle);
    bool K2_TimerExistsDelegate(FK2_TimerExistsDelegateDelegate Delegate);
    bool K2_TimerExists(class UObject* Object, FString FunctionName);
    FTimerHandle K2_SetTimerDelegate(FK2_SetTimerDelegateDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    FTimerHandle K2_SetTimer(class UObject* Object, FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    void K2_PauseTimerHandle(const class UObject* WorldContextObject, FTimerHandle Handle);
    void K2_PauseTimerDelegate(FK2_PauseTimerDelegateDelegate Delegate);
    void K2_PauseTimer(class UObject* Object, FString FunctionName);
    bool K2_IsValidTimerHandle(FTimerHandle Handle);
    bool K2_IsTimerPausedHandle(const class UObject* WorldContextObject, FTimerHandle Handle);
    bool K2_IsTimerPausedDelegate(FK2_IsTimerPausedDelegateDelegate Delegate);
    bool K2_IsTimerPaused(class UObject* Object, FString FunctionName);
    bool K2_IsTimerActiveHandle(const class UObject* WorldContextObject, FTimerHandle Handle);
    bool K2_IsTimerActiveDelegate(FK2_IsTimerActiveDelegateDelegate Delegate);
    bool K2_IsTimerActive(class UObject* Object, FString FunctionName);
    FTimerHandle K2_InvalidateTimerHandle(FTimerHandle& Handle);
    float K2_GetTimerRemainingTimeHandle(const class UObject* WorldContextObject, FTimerHandle Handle);
    float K2_GetTimerRemainingTimeDelegate(FK2_GetTimerRemainingTimeDelegateDelegate Delegate);
    float K2_GetTimerRemainingTime(class UObject* Object, FString FunctionName);
    float K2_GetTimerElapsedTimeHandle(const class UObject* WorldContextObject, FTimerHandle Handle);
    float K2_GetTimerElapsedTimeDelegate(FK2_GetTimerElapsedTimeDelegateDelegate Delegate);
    float K2_GetTimerElapsedTime(class UObject* Object, FString FunctionName);
    void K2_ClearTimerHandle(const class UObject* WorldContextObject, FTimerHandle Handle);
    void K2_ClearTimerDelegate(FK2_ClearTimerDelegateDelegate Delegate);
    void K2_ClearTimer(class UObject* Object, FString FunctionName);
    void K2_ClearAndInvalidateTimerHandle(const class UObject* WorldContextObject, FTimerHandle& Handle);
    bool IsValidSoftObjectReference(const TSoftObjectPtr<UObject>& SoftObjectReference);
    bool IsValidSoftClassReference(const TSoftClassPtr<UObject>& SoftClassReference);
    bool IsValidPrimaryAssetType(FPrimaryAssetType PrimaryAssetType);
    bool IsValidPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    bool IsValidClass(UClass* Class);
    bool IsValid(const class UObject* Object);
    bool IsUnattended();
    bool IsStandalone(const class UObject* WorldContextObject);
    bool IsSplitScreen(const class UObject* WorldContextObject);
    bool IsServer(const class UObject* WorldContextObject);
    bool IsScreensaverEnabled();
    bool IsPackagedForDistribution();
    bool IsLoggedIn(const class APlayerController* SpecificPlayer);
    bool IsInterstitialAdRequested();
    bool IsInterstitialAdAvailable();
    bool IsDedicatedServer(const class UObject* WorldContextObject);
    bool IsControllerAssignedToGamepad(int32 ControllerId);
    void HideAdBanner();
    bool GetVolumeButtonsHandledBySystem();
    FString GetUniqueDeviceId();
    FString GetSystemPath(const class UObject* Object);
    bool GetSupportedFullscreenResolutions(TArray<FIntPoint>& Resolutions);
    TSoftObjectPtr<UObject> GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    TSoftClassPtr<UObject> GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    int32 GetRenderingMaterialQualityLevel();
    int32 GetRenderingDetailMode();
    FString GetProjectSavedDirectory();
    FString GetProjectDirectory();
    FString GetProjectContentDirectory();
    void GetPrimaryAssetsWithBundleState(const TArray<FName>& RequiredBundles, const TArray<FName>& ExcludedBundles, const TArray<FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);
    void GetPrimaryAssetIdList(FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);
    FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(TSoftObjectPtr<UObject> SoftObjectReference);
    FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(TSoftClassPtr<UObject> SoftClassReference);
    FPrimaryAssetId GetPrimaryAssetIdFromObject(class UObject* Object);
    FPrimaryAssetId GetPrimaryAssetIdFromClass(UClass* Class);
    TArray<FString> GetPreferredLanguages();
    FString GetPlatformUserName();
    FString GetPlatformUserDir();
    FString GetPathName(const class UObject* Object);
    class UObject* GetOuterObject(const class UObject* Object);
    FString GetObjectName(const class UObject* Object);
    class UObject* GetObjectFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    int32 GetMinYResolutionForUI();
    int32 GetMinYResolutionFor3DView();
    FString GetLocalCurrencySymbol();
    FString GetLocalCurrencyCode();
    float GetGameTimeInSeconds(const class UObject* WorldContextObject);
    FString GetGamepadControllerName(int32 ControllerId);
    class UTexture2D* GetGamepadButtonGlyph(FString ButtonKey, int32 ControllerIndex);
    FString GetGameName();
    FString GetGameBundleId();
    int64 GetFrameCount();
    FString GetEngineVersion();
    FString GetDisplayName(const class UObject* Object);
    FString GetDeviceId();
    FString GetDefaultLocale();
    FString GetDefaultLanguage();
    bool GetCurrentBundleState(FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<FName>& OutBundles);
    bool GetConvenientWindowedResolutions(TArray<FIntPoint>& Resolutions);
    int32 GetConsoleVariableIntValue(FString VariableName);
    float GetConsoleVariableFloatValue(FString VariableName);
    bool GetConsoleVariableBoolValue(FString VariableName);
    void GetComponentBounds(const class USceneComponent* Component, FVector& Origin, FVector& BoxExtent, float& SphereRadius);
    FString GetCommandLine();
    UClass* GetClassFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    FString GetClassDisplayName(UClass* Class);
    int32 GetAdIDCount();
    void GetActorListFromComponentList(const TArray<class UPrimitiveComponent*>& ComponentList, UClass* ActorClassFilter, TArray<class AActor*>& OutActorList);
    void GetActorBounds(const class AActor* Actor, FVector& Origin, FVector& BoxExtent);
    void ForceCloseAdBanner();
    void FlushPersistentDebugLines(const class UObject* WorldContextObject);
    void FlushDebugStrings(const class UObject* WorldContextObject);
    void ExecuteConsoleCommand(const class UObject* WorldContextObject, FString Command, class APlayerController* SpecificPlayer);
    bool EqualEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B);
    bool EqualEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B);
    bool EqualEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
    bool EqualEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
    int32 EndTransaction();
    void DrawDebugString(const class UObject* WorldContextObject, const FVector TextLocation, FString Text, class AActor* TestBaseActor, FLinearColor TextColor, float Duration);
    void DrawDebugSphere(const class UObject* WorldContextObject, const FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugPoint(const class UObject* WorldContextObject, const FVector Position, float Size, FLinearColor PointColor, float Duration);
    void DrawDebugPlane(const class UObject* WorldContextObject, const FPlane& PlaneCoordinates, const FVector Location, float Size, FLinearColor PlaneColor, float Duration);
    void DrawDebugLine(const class UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugFrustum(const class UObject* WorldContextObject, const FTransform& FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness);
    void DrawDebugFloatHistoryTransform(const class UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, const FTransform& DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    void DrawDebugFloatHistoryLocation(const class UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    void DrawDebugCylinder(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCoordinateSystem(const class UObject* WorldContextObject, const FVector AxisLoc, const FRotator AxisRot, float Scale, float Duration, float Thickness);
    void DrawDebugConeInDegrees(const class UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCone(const class UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCircle(const class UObject* WorldContextObject, FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);
    void DrawDebugCapsule(const class UObject* WorldContextObject, const FVector Center, float HalfHeight, float Radius, const FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCamera(const class ACameraActor* CameraActor, FLinearColor CameraColor, float Duration);
    void DrawDebugBox(const class UObject* WorldContextObject, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation, float Duration, float Thickness);
    void DrawDebugArrow(const class UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness);
    bool DoesImplementInterface(const class UObject* TestObject, TSubclassOf<class UInterface> Interface);
    void Delay(const class UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    void CreateCopyForUndoBuffer(class UObject* ObjectToModify);
    FString ConvertToRelativePath(FString Filename);
    FString ConvertToAbsolutePath(FString Filename);
    TSoftObjectPtr<UObject> Conv_SoftObjPathToSoftObjRef(const FSoftObjectPath& SoftObjectPath);
    FString Conv_SoftObjectReferenceToString(const TSoftObjectPtr<UObject>& SoftObjectReference);
    class UObject* Conv_SoftObjectReferenceToObject(const TSoftObjectPtr<UObject>& SoftObject);
    FString Conv_SoftClassReferenceToString(const TSoftClassPtr<UObject>& SoftClassReference);
    UClass* Conv_SoftClassReferenceToClass(const TSoftClassPtr<UObject>& SoftClass);
    TSoftClassPtr<UObject> Conv_SoftClassPathToSoftClassRef(const FSoftClassPath& SoftClassPath);
    FString Conv_PrimaryAssetTypeToString(FPrimaryAssetType PrimaryAssetType);
    FString Conv_PrimaryAssetIdToString(FPrimaryAssetId PrimaryAssetId);
    TSoftObjectPtr<UObject> Conv_ObjectToSoftObjectReference(class UObject* Object);
    class UObject* Conv_InterfaceToObject(const FScriptInterface& Interface);
    TSoftClassPtr<UObject> Conv_ClassToSoftClassReference(const UClass*& Class);
    void ControlScreensaver(bool bAllowScreenSaver);
    bool ComponentOverlapComponents(class UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>& OutComponents);
    bool ComponentOverlapActors(class UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>& OutActors);
    void CollectGarbage();
    bool CapsuleTraceSingleForObjects(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceSingleByProfile(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceSingle(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMultiForObjects(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMultiByProfile(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMulti(const class UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleOverlapComponents(const class UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>& OutComponents);
    bool CapsuleOverlapActors(const class UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>& OutActors);
    bool CanLaunchURL(FString URL);
    void CancelTransaction(const int32 Index);
    void BreakSoftObjectPath(FSoftObjectPath InSoftObjectPath, FString& PathString);
    void BreakSoftClassPath(FSoftClassPath InSoftClassPath, FString& PathString);
    bool BoxTraceSingleForObjects(const class UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceSingleByProfile(const class UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceSingle(const class UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMultiForObjects(const class UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMultiByProfile(const class UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMulti(const class UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxOverlapComponents(const class UObject* WorldContextObject, const FVector BoxPos, FVector Extent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>& OutComponents);
    bool BoxOverlapActors(const class UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>& OutActors);
    int32 BeginTransaction(FString Context, FText Description, class UObject* PrimaryObject);
    FDebugFloatHistory AddFloatHistorySample(float Value, const FDebugFloatHistory& FloatHistory);
};

class UKismetTextLibrary : public UBlueprintFunctionLibrary
{

    FText TextTrimTrailing(const FText& InText);
    FText TextTrimPrecedingAndTrailing(const FText& InText);
    FText TextTrimPreceding(const FText& InText);
    FText TextToUpper(const FText& InText);
    FText TextToLower(const FText& InText);
    bool TextIsTransient(const FText& InText);
    bool TextIsFromStringTable(const FText& Text);
    bool TextIsEmpty(const FText& InText);
    bool TextIsCultureInvariant(const FText& InText);
    FText TextFromStringTable(const FName TableId, FString Key);
    bool StringTableIdAndKeyFromText(FText Text, FName& OutTableId, FString& OutKey);
    FText PolyglotDataToText(const FPolyglotTextData& PolyglotData);
    bool NotEqual_TextText(const FText& A, const FText& B);
    bool NotEqual_IgnoreCase_TextText(const FText& A, const FText& B);
    void IsPolyglotDataValid(const FPolyglotTextData& PolyglotData, bool& IsValid, FText& errorMessage);
    FText GetEmptyText();
    FText Format(FText InPattern, TArray<FFormatArgumentData> InArgs);
    bool FindTextInLocalizationTable(FString Namespace, FString Key, FText& OutText);
    bool EqualEqual_TextText(const FText& A, const FText& B);
    bool EqualEqual_IgnoreCase_TextText(const FText& A, const FText& B);
    FText Conv_VectorToText(FVector InVec);
    FText Conv_Vector2dToText(FVector2D InVec);
    FText Conv_TransformToText(const FTransform& InTrans);
    FString Conv_TextToString(const FText& InText);
    FText Conv_StringToText(FString inString);
    FText Conv_RotatorToText(FRotator InRot);
    FText Conv_ObjectToText(class UObject* InObj);
    FText Conv_NameToText(FName InName);
    FText Conv_IntToText(int32 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    FText Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
    FText Conv_ColorToText(FLinearColor InColor);
    FText Conv_ByteToText(uint8 Value);
    FText Conv_BoolToText(bool InBool);
    FText AsTimeZoneTime_DateTime(const FDateTime& InDateTime, FString InTimeZone);
    FText AsTimeZoneDateTime_DateTime(const FDateTime& InDateTime, FString InTimeZone);
    FText AsTimeZoneDate_DateTime(const FDateTime& InDateTime, FString InTimeZone);
    FText AsTimespan_Timespan(const FTimespan& InTimespan);
    FText AsTime_DateTime(const FDateTime& In);
    FText AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
    FText AsDateTime_DateTime(const FDateTime& In);
    FText AsDate_DateTime(const FDateTime& InDateTime);
    FText AsCurrencyBase(int32 BaseValue, FString CurrencyCode);
    FText AsCurrency_Integer(int32 Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, FString CurrencyCode);
    FText AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, FString CurrencyCode);
};

class ULODSyncComponent : public UActorComponent
{
    int32 NumLODs;
    int32 ForcedLOD;
    TArray<FComponentSync> ComponentsToSync;
    TMap<class FName, class FLODMappingData> CustomLODMapping;
    int32 CurrentLOD;
    int32 CurrentNumLODs;
    TArray<class UPrimitiveComponent*> DriveComponents;
    TArray<class UPrimitiveComponent*> SubComponents;

    FString GetLODSyncDebugText();
};

class ULayer : public UObject
{
    FName LayerName;
    uint8 bIsVisible;
    TArray<FLayerActorStats> ActorStats;

};

class ULevel : public UObject
{
    class UWorld* OwningWorld;
    class UModel* Model;
    TArray<class UModelComponent*> ModelComponents;
    class ULevelActorContainer* ActorCluster;
    int32 NumTextureStreamingUnbuiltComponents;
    int32 NumTextureStreamingDirtyResources;
    class ALevelScriptActor* LevelScriptActor;
    class ANavigationObjectBase* NavListStart;
    class ANavigationObjectBase* NavListEnd;
    TArray<class UNavigationDataChunk*> NavDataChunks;
    float LightmapTotalSize;
    float ShadowmapTotalSize;
    TArray<FVector> StaticNavigableGeometry;
    TArray<FGuid> StreamingTextureGuids;
    FGuid LevelBuildDataId;
    class UMapBuildDataRegistry* MapBuildData;
    FIntVector LightBuildLevelOffset;
    uint8 bIsLightingScenario;
    uint8 bTextureStreamingRotationChanged;
    uint8 bStaticComponentsRegisteredInStreamingManager;
    uint8 bIsVisible;
    class AWorldSettings* WorldSettings;
    TArray<class UAssetUserData*> AssetUserData;
    TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors;

};

class ULevelActorContainer : public UObject
{
    TArray<class AActor*> Actors;

};

class ULevelScriptBlueprint : public UBlueprint
{
};

class ULevelStreaming : public UObject
{
    TSoftObjectPtr<UWorld> WorldAsset;
    FName PackageNameToLoad;
    TArray<FName> LODPackageNames;
    FTransform LevelTransform;
    int32 LevelLODIndex;
    int32 StreamingPriority;
    uint8 bShouldBeVisible;
    uint8 bShouldBeLoaded;
    uint8 bLocked;
    uint8 bIsStatic;
    uint8 bShouldBlockOnLoad;
    uint8 bShouldBlockOnUnload;
    uint8 bDisableDistanceStreaming;
    uint8 bDrawOnLevelStatusMap;
    FLinearColor LevelColor;
    TArray<class ALevelStreamingVolume*> EditorStreamingVolumes;
    float MinTimeBetweenVolumeUnloadRequests;
    FLevelStreamingOnLevelLoaded OnLevelLoaded;
    void LevelStreamingLoadedStatus();
    FLevelStreamingOnLevelUnloaded OnLevelUnloaded;
    void LevelStreamingLoadedStatus();
    FLevelStreamingOnLevelShown OnLevelShown;
    void LevelStreamingVisibilityStatus();
    FLevelStreamingOnLevelHidden OnLevelHidden;
    void LevelStreamingVisibilityStatus();
    class ULevel* LoadedLevel;
    class ULevel* PendingUnloadLevel;

    bool ShouldBeLoaded();
    void SetShouldBeVisible(bool bInShouldBeVisible);
    void SetShouldBeLoaded(bool bInShouldBeLoaded);
    void SetPriority(int32 NewPriority);
    void SetLevelLODIndex(int32 LODIndex);
    void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval);
    bool IsStreamingStatePending();
    bool IsLevelVisible();
    bool IsLevelLoaded();
    FName GetWorldAssetPackageFName();
    class ULevel* GetLoadedLevel();
    class ALevelScriptActor* GetLevelScriptActor();
    bool GetIsRequestingUnloadAndRemoval();
    class ULevelStreaming* CreateInstance(FString UniqueInstanceName);
};

class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
};

class ULevelStreamingDynamic : public ULevelStreaming
{
    uint8 bInitiallyLoaded;
    uint8 bInitiallyVisible;

    class ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(class UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool& bOutSuccess, FString OptionalLevelNameOverride);
    class ULevelStreamingDynamic* LoadLevelInstance(class UObject* WorldContextObject, FString LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess, FString OptionalLevelNameOverride);
};

class ULevelStreamingPersistent : public ULevelStreaming
{
};

class ULightComponent : public ULightComponentBase
{
    float Temperature;
    float MaxDrawDistance;
    float MaxDistanceFadeRange;
    uint8 bUseTemperature;
    int32 ShadowMapChannel;
    float MinRoughness;
    float SpecularScale;
    float ShadowResolutionScale;
    float ShadowBias;
    float ShadowSlopeBias;
    float ShadowSharpen;
    float ContactShadowLength;
    uint8 ContactShadowLengthInWS;
    uint8 InverseSquaredFalloff;
    uint8 CastTranslucentShadows;
    uint8 bCastShadowsFromCinematicObjectsOnly;
    uint8 bAffectDynamicIndirectLighting;
    uint8 bForceCachedShadowsForMovablePrimitives;
    FLightingChannels LightingChannels;
    class UMaterialInterface* LightFunctionMaterial;
    FVector LightFunctionScale;
    class UTextureLightProfile* IESTexture;
    uint8 bUseIESBrightness;
    float IESBrightnessScale;
    float LightFunctionFadeDistance;
    float DisabledBrightness;
    uint8 bEnableLightShaftBloom;
    float BloomScale;
    float BloomThreshold;
    float BloomMaxBrightness;
    FColor BloomTint;
    bool bUseRayTracedDistanceFieldShadows;
    float RayStartOffsetDepthScale;

    void SetVolumetricScatteringIntensity(float NewIntensity);
    void SetUseTemperature(bool bNewValue);
    void SetUseIESBrightness(bool bNewValue);
    void SetTransmission(bool bNewValue);
    void SetTemperature(float NewTemperature);
    void SetSpecularScale(float NewValue);
    void SetShadowSlopeBias(float NewValue);
    void SetShadowBias(float NewValue);
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightFunctionDisabledBrightness(float NewValue);
    void SetLightColor(FLinearColor NewLightColor, bool bSRGB);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetIESTexture(class UTextureLightProfile* NewValue);
    void SetIESBrightnessScale(float NewValue);
    void SetForceCachedShadowsForMovablePrimitives(bool bNewValue);
    void SetEnableLightShaftBloom(bool bNewValue);
    void SetBloomTint(FColor NewValue);
    void SetBloomThreshold(float NewValue);
    void SetBloomScale(float NewValue);
    void SetBloomMaxBrightness(float NewValue);
    void SetAffectTranslucentLighting(bool bNewValue);
    void SetAffectDynamicIndirectLighting(bool bNewValue);
};

class ULightComponentBase : public USceneComponent
{
    FGuid LightGuid;
    float Brightness;
    float Intensity;
    FColor LightColor;
    uint8 bAffectsWorld;
    uint8 CastShadows;
    uint8 CastStaticShadows;
    uint8 CastDynamicShadows;
    uint8 bAffectTranslucentLighting;
    uint8 bTransmission;
    uint8 bCastVolumetricShadow;
    uint8 bCastDeepShadow;
    uint8 bCastRaytracedShadow;
    uint8 bAffectReflection;
    uint8 bAffectGlobalIllumination;
    float DeepShadowLayerDistribution;
    float IndirectLightingIntensity;
    float VolumetricScatteringIntensity;
    int32 SamplesPerPixel;

    void SetSamplesPerPixel(int32 NewValue);
    void SetCastVolumetricShadow(bool bNewValue);
    void SetCastShadows(bool bNewValue);
    void SetCastRaytracedShadow(bool bNewValue);
    void SetCastDeepShadow(bool bNewValue);
    void SetAffectReflection(bool bNewValue);
    void SetAffectGlobalIllumination(bool bNewValue);
    FLinearColor GetLightColor();
};

class ULightMapTexture2D : public UTexture2D
{
};

class ULightMapVirtualTexture : public UVirtualTexture
{
};

class ULightMapVirtualTexture2D : public UTexture2D
{
    TArray<int8> TypeToLayer;

};

class ULightmappedSurfaceCollection : public UObject
{
    class UModel* SourceModel;
    TArray<int32> Surfaces;

};

class ULightmassPortalComponent : public USceneComponent
{
    class UBoxComponent* PreviewBox;

};

class ULightmassPrimitiveSettingsObject : public UObject
{
    FLightmassPrimitiveSettings LightmassSettings;

};

class ULineBatchComponent : public UPrimitiveComponent
{
};

class ULocalLightComponent : public ULightComponent
{
    ELightUnits IntensityUnits;
    float Radius;
    float AttenuationRadius;
    FLightmassPointLightSettings LightmassSettings;

    void SetIntensityUnits(ELightUnits NewIntensityUnits);
    void SetAttenuationRadius(float NewRadius);
    float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);
};

class ULocalMessage : public UObject
{
};

class ULocalPlayer : public UPlayer
{
    class UGameViewportClient* ViewportClient;
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
    TSubclassOf<class APlayerController> PendingLevelPlayerControllerClass;
    uint8 bSentSplitJoin;
    int32 ControllerId;

};

class ULocalPlayerSubsystem : public USubsystem
{
};

class UMapBuildDataRegistry : public UObject
{
    TEnumAsByte<ELightingBuildQuality> LevelLightingQuality;

};

class UMaterial : public UMaterialInterface
{
    class UPhysicalMaterial* PhysMaterial;
    class UPhysicalMaterialMask* PhysMaterialMask;
    class UPhysicalMaterial* PhysicalMaterialMap;
    FScalarMaterialInput Metallic;
    FScalarMaterialInput Specular;
    FScalarMaterialInput Anisotropy;
    FVectorMaterialInput Normal;
    FVectorMaterialInput Tangent;
    FColorMaterialInput EmissiveColor;
    TEnumAsByte<EMaterialDomain> MaterialDomain;
    TEnumAsByte<EBlendMode> BlendMode;
    TEnumAsByte<EDecalBlendMode> DecalBlendMode;
    TEnumAsByte<EMaterialDecalResponse> MaterialDecalResponse;
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
    uint8 bCastDynamicShadowAsMasked;
    FMaterialShadingModelField ShadingModels;
    float OpacityMaskClipValue;
    FVectorMaterialInput WorldPositionOffset;
    FScalarMaterialInput Refraction;
    FMaterialAttributesInput MaterialAttributes;
    FScalarMaterialInput PixelDepthOffset;
    FShadingModelMaterialInput ShadingModelFromMaterialExpression;
    uint8 bEnableSeparateTranslucency;
    uint8 bEnableResponsiveAA;
    uint8 bScreenSpaceReflections;
    uint8 bContactShadows;
    uint8 TwoSided;
    uint8 DitheredLODTransition;
    uint8 DitherOpacityMask;
    uint8 bAllowNegativeEmissiveColor;
    TEnumAsByte<ETranslucencyLightingMode> TranslucencyLightingMode;
    uint8 bEnableMobileSeparateTranslucency;
    int32 NumCustomizedUVs;
    float TranslucencyDirectionalLightingIntensity;
    float TranslucentShadowDensityScale;
    float TranslucentSelfShadowDensityScale;
    float TranslucentSelfShadowSecondDensityScale;
    float TranslucentSelfShadowSecondOpacity;
    float TranslucentBackscatteringExponent;
    FLinearColor TranslucentMultipleScatteringExtinction;
    float TranslucentShadowStartOffset;
    uint8 bDisableDepthTest;
    uint8 bWriteOnlyAlpha;
    uint8 bGenerateSphericalParticleNormals;
    uint8 bTangentSpaceNormal;
    uint8 bUseEmissiveForDynamicAreaLighting;
    uint8 bBlockGI;
    uint8 bUsedAsSpecialEngineMaterial;
    uint8 bUsedWithSkeletalMesh;
    uint8 bUsedWithEditorCompositing;
    uint8 bUsedWithParticleSprites;
    uint8 bUsedWithBeamTrails;
    uint8 bUsedWithMeshParticles;
    uint8 bUsedWithNiagaraSprites;
    uint8 bUsedWithNiagaraRibbons;
    uint8 bUsedWithNiagaraMeshParticles;
    uint8 bUsedWithGeometryCache;
    uint8 bUsedWithStaticLighting;
    uint8 bUsedWithMorphTargets;
    uint8 bUsedWithSplineMeshes;
    uint8 bUsedWithInstancedStaticMeshes;
    uint8 bUsedWithGeometryCollections;
    uint8 bUsesDistortion;
    uint8 bUsedWithClothing;
    uint8 bUsedWithWater;
    uint8 bUsedWithHairStrands;
    uint8 bUsedWithLidarPointCloud;
    uint8 bUsedWithVirtualHeightfieldMesh;
    uint8 bUsedWithUI;
    uint8 bAutomaticallySetUsageInEditor;
    uint8 bFullyRough;
    uint8 bUseFullPrecision;
    uint8 bUseLightmapDirectionality;
    uint8 bUseAlphaToCoverage;
    uint8 bForwardRenderUsePreintegratedGFForSimpleIBL;
    uint8 bUseHQForwardReflections;
    uint8 bForwardBlendsSkyLightCubemaps;
    uint8 bUsePlanarForwardReflections;
    uint8 bNormalCurvatureToRoughness;
    TEnumAsByte<EMaterialTessellationMode> D3D11TessellationMode;
    uint8 bEnableCrackFreeDisplacement;
    uint8 bEnableAdaptiveTessellation;
    uint8 AllowTranslucentCustomDepthWrites;
    uint8 Wireframe;
    uint8 WriteDepthToTranslucentMaterial;
    TEnumAsByte<EMaterialShadingRate> ShadingRate;
    uint8 bCanMaskedBeAssumedOpaque;
    uint8 bIsMasked;
    uint8 bIsPreviewMaterial;
    uint8 bIsFunctionPreviewMaterial;
    uint8 bUseMaterialAttributes;
    uint8 bCastRayTracedShadows;
    uint8 bUseTranslucencyVertexFog;
    uint8 bApplyCloudFogging;
    uint8 bIsSky;
    uint8 bComputeFogPerPixel;
    uint8 bOutputTranslucentVelocity;
    uint8 bAllowDevelopmentShaderCompile;
    uint8 bIsMaterialEditorStatsMaterial;
    TEnumAsByte<EBlendableLocation> BlendableLocation;
    uint8 BlendableOutputAlpha;
    uint8 bEnableStencilTest;
    TEnumAsByte<EMaterialStencilCompare> StencilCompare;
    uint8 StencilRefValue;
    TEnumAsByte<ERefractionMode> RefractionMode;
    int32 BlendablePriority;
    uint8 bIsBlendable;
    uint32 UsageFlagWarnings;
    float RefractionDepthBias;
    FGuid StateId;
    float MaxDisplacement;
    FMaterialCachedExpressionData CachedExpressionData;

};

class UMaterialBillboardComponent : public UPrimitiveComponent
{
    TArray<FMaterialSpriteElement> Elements;

    void SetElements(const TArray<FMaterialSpriteElement>& NewElements);
    void AddElement(class UMaterialInterface* Material, class UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, class UCurveFloat* DistanceToSizeCurve);
};

class UMaterialExpression : public UObject
{
    class UMaterial* Material;
    class UMaterialFunction* Function;
    uint8 bIsParameterExpression;

};

class UMaterialExpressionAbs : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionActorPositionWS : public UMaterialExpression
{
};

class UMaterialExpressionAdd : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;

};

class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
    float Threshold;
    TEnumAsByte<ETextureColorChannel> Channel;

};

class UMaterialExpressionAppendVector : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;

};

class UMaterialExpressionArccosine : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionArccosineFast : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionArcsine : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionArcsineFast : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionArctangent : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionArctangent2 : public UMaterialExpression
{
    FExpressionInput Y;
    FExpressionInput X;

};

class UMaterialExpressionArctangent2Fast : public UMaterialExpression
{
    FExpressionInput Y;
    FExpressionInput X;

};

class UMaterialExpressionArctangentFast : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
    FExpressionInput WorldPosition;

};

class UMaterialExpressionAtmosphericLightColor : public UMaterialExpression
{
};

class UMaterialExpressionAtmosphericLightVector : public UMaterialExpression
{
};

class UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput
{
    FExpressionInput Input;

};

class UMaterialExpressionBlackBody : public UMaterialExpression
{
    FExpressionInput Temp;

};

class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
    FMaterialAttributesInput A;
    FMaterialAttributesInput B;
    FExpressionInput alpha;
    TEnumAsByte<EMaterialAttributeBlend::Type> PixelAttributeBlendType;
    TEnumAsByte<EMaterialAttributeBlend::Type> VertexAttributeBlendType;

};

class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
    FMaterialAttributesInput MaterialAttributes;

};

class UMaterialExpressionBumpOffset : public UMaterialExpression
{
    FExpressionInput Coordinate;
    FExpressionInput Height;
    FExpressionInput HeightRatioInput;
    float HeightRatio;
    float ReferencePlane;
    uint32 ConstCoordinate;

};

class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
};

class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
};

class UMaterialExpressionCeil : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter
{
    TEnumAsByte<EChannelMaskParameterColor::Type> MaskChannel;

};

class UMaterialExpressionClamp : public UMaterialExpression
{
    FExpressionInput Input;
    FExpressionInput Min;
    FExpressionInput Max;
    TEnumAsByte<EClampMode> ClampMode;
    float MinDefault;
    float MaxDefault;

};

class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
    FExpressionInput Input;

};

class UMaterialExpressionCloudSampleAttribute : public UMaterialExpression
{
};

class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
    class UMaterialParameterCollection* Collection;
    FName ParameterName;
    FGuid ParameterId;

};

class UMaterialExpressionComment : public UMaterialExpression
{
    int32 SizeX;
    int32 SizeY;
    FString Text;
    FLinearColor CommentColor;
    int32 FontSize;

};

class UMaterialExpressionComponentMask : public UMaterialExpression
{
    FExpressionInput Input;
    uint8 R;
    uint8 G;
    uint8 B;
    uint8 A;

};

class UMaterialExpressionConstant : public UMaterialExpression
{
    float R;

};

class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
    float R;
    float G;

};

class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
    FLinearColor Constant;

};

class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
    FLinearColor Constant;

};

class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
    FExpressionInput Input;
    float Bias;
    float Scale;

};

class UMaterialExpressionCosine : public UMaterialExpression
{
    FExpressionInput Input;
    float Period;

};

class UMaterialExpressionCrossProduct : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;

};

class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter
{
    class UCurveLinearColor* Curve;
    class UCurveLinearColorAtlas* Atlas;
    FExpressionInput InputTime;

};

class UMaterialExpressionCustom : public UMaterialExpression
{
    FString code;
    TEnumAsByte<ECustomMaterialOutputType> OutputType;
    FString Description;
    TArray<FCustomInput> Inputs;
    TArray<FCustomOutput> AdditionalOutputs;
    TArray<FCustomDefine> AdditionalDefines;
    TArray<FString> IncludeFilePaths;

};

class UMaterialExpressionCustomOutput : public UMaterialExpression
{
};

class UMaterialExpressionDDX : public UMaterialExpression
{
    FExpressionInput Value;

};

class UMaterialExpressionDDY : public UMaterialExpression
{
    FExpressionInput Value;

};

class UMaterialExpressionDecalDerivative : public UMaterialExpression
{
};

class UMaterialExpressionDecalLifetimeOpacity : public UMaterialExpression
{
};

class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
    FExpressionInput TextureSize;
    float ConstWidth;
    float ConstHeight;

};

class UMaterialExpressionDeltaTime : public UMaterialExpression
{
};

class UMaterialExpressionDepthFade : public UMaterialExpression
{
    FExpressionInput InOpacity;
    FExpressionInput FadeDistance;
    float OpacityDefault;
    float FadeDistanceDefault;

};

class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
    TEnumAsByte<EDepthOfFieldFunctionValue> FunctionValue;
    FExpressionInput Depth;

};

class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
    FExpressionInput InXY;

};

class UMaterialExpressionDesaturation : public UMaterialExpression
{
    FExpressionInput Input;
    FExpressionInput Fraction;
    FLinearColor LuminanceFactors;

};

class UMaterialExpressionDistance : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;

};

class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
};

class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
    FExpressionInput Position;

};

class UMaterialExpressionDistanceFieldsRenderingSwitch : public UMaterialExpression
{
    FExpressionInput No;
    FExpressionInput Yes;

};

class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
    FExpressionInput Position;

};

class UMaterialExpressionDivide : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;

};

class UMaterialExpressionDotProduct : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;

};

class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
    TArray<FString> ParamNames;
    FLinearColor DefaultValue;
    uint32 ParameterIndex;

};

class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
};

class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
    FExpressionInput Default;

};

class UMaterialExpressionFloor : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionFmod : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;

};

class UMaterialExpressionFontSample : public UMaterialExpression
{
    class UFont* Font;
    int32 FontTexturePage;

};

class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
    FName ParameterName;
    FGuid ExpressionGUID;
    FName Group;

};

class UMaterialExpressionFrac : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionFresnel : public UMaterialExpression
{
    FExpressionInput ExponentIn;
    float Exponent;
    FExpressionInput BaseReflectFractionIn;
    float BaseReflectFraction;
    FExpressionInput Normal;

};

class UMaterialExpressionFunctionInput : public UMaterialExpression
{
    FExpressionInput Preview;
    FName InputName;
    FString Description;
    FGuid ID;
    TEnumAsByte<EFunctionInputType> InputType;
    FVector4 PreviewValue;
    uint8 bUsePreviewValueAsDefault;
    int32 SortPriority;
    uint8 bCompilingFunctionPreview;

};

class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
    FName OutputName;
    FString Description;
    int32 SortPriority;
    FExpressionInput A;
    uint8 bLastPreviewed;
    FGuid ID;

};

class UMaterialExpressionGIReplace : public UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput StaticIndirect;
    FExpressionInput DynamicIndirect;

};

class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
    FMaterialAttributesInput MaterialAttributes;
    TArray<FGuid> AttributeGetTypes;

};

class UMaterialExpressionHairAttributes : public UMaterialExpression
{
    uint8 bUseTangentSpace;

};

class UMaterialExpressionHairColor : public UMaterialExpression
{
    FExpressionInput Melanin;
    FExpressionInput Redness;
    FExpressionInput DyeColor;

};

class UMaterialExpressionIf : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput AGreaterThanB;
    FExpressionInput AEqualsB;
    FExpressionInput ALessThanB;
    float EqualsThreshold;
    float ConstB;
    float ConstAEqualsB;

};

class UMaterialExpressionInverseLinearInterpolate : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput Value;
    float ConstA;
    float ConstB;
    float ConstValue;
    bool bClampResult;

};

class UMaterialExpressionLightVector : public UMaterialExpression
{
};

class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
};

class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
    FExpressionInput Realtime;
    FExpressionInput Lightmass;

};

class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput alpha;
    float ConstA;
    float ConstB;
    float ConstAlpha;

};

class UMaterialExpressionLogarithm10 : public UMaterialExpression
{
    FExpressionInput X;

};

class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
    FExpressionInput X;

};

class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
    FExpressionInput BaseColor;
    FExpressionInput Metallic;
    FExpressionInput Specular;
    FExpressionInput Roughness;
    FExpressionInput Anisotropy;
    FExpressionInput EmissiveColor;
    FExpressionInput Opacity;
    FExpressionInput OpacityMask;
    FExpressionInput Normal;
    FExpressionInput Tangent;
    FExpressionInput WorldPositionOffset;
    FExpressionInput WorldDisplacement;
    FExpressionInput TessellationMultiplier;
    FExpressionInput SubsurfaceColor;
    FExpressionInput ClearCoat;
    FExpressionInput ClearCoatRoughness;
    FExpressionInput AmbientOcclusion;
    FExpressionInput Refraction;
    FExpressionInput CustomizedUVs;
    FExpressionInput PixelDepthOffset;
    FExpressionInput ShadingModel;

};

class UMaterialExpressionMapARPassthroughCameraUV : public UMaterialExpression
{
    FExpressionInput Coordinates;

};

class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
    FName ParameterName;
    FGuid ExpressionGUID;
    FMaterialAttributesInput Input;
    FMaterialLayersFunctions DefaultLayers;
    TArray<class UMaterialExpressionMaterialFunctionCall*> LayerCallers;
    int32 NumActiveLayerCallers;
    TArray<class UMaterialExpressionMaterialFunctionCall*> BlendCallers;
    int32 NumActiveBlendCallers;
    bool bIsLayerGraphBuilt;

};

class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
    class UMaterialFunctionInterface* MaterialFunction;
    FMaterialParameterInfo FunctionParameterInfo;

};

class UMaterialExpressionMaterialLayerOutput : public UMaterialExpressionFunctionOutput
{
};

class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
    FExpressionInput Realtime;
    FExpressionInput MaterialProxy;

};

class UMaterialExpressionMax : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;

};

class UMaterialExpressionMin : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;

};

class UMaterialExpressionMultiply : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;

};

class UMaterialExpressionNamedRerouteBase : public UMaterialExpressionRerouteBase
{
};

class UMaterialExpressionNamedRerouteDeclaration : public UMaterialExpressionNamedRerouteBase
{
    FExpressionInput Input;
    FName Name;
    FGuid VariableGuid;

};

class UMaterialExpressionNamedRerouteUsage : public UMaterialExpressionNamedRerouteBase
{
    class UMaterialExpressionNamedRerouteDeclaration* Declaration;
    FGuid DeclarationGuid;

};

class UMaterialExpressionNoise : public UMaterialExpression
{
    FExpressionInput Position;
    FExpressionInput FilterWidth;
    float Scale;
    int32 Quality;
    TEnumAsByte<ENoiseFunction> NoiseFunction;
    uint8 bTurbulence;
    int32 Levels;
    float OutputMin;
    float OutputMax;
    float LevelScale;
    uint8 bTiling;
    uint32 RepeatSize;

};

class UMaterialExpressionNormalize : public UMaterialExpression
{
    FExpressionInput VectorInput;

};

class UMaterialExpressionObjectBounds : public UMaterialExpression
{
};

class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
};

class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
};

class UMaterialExpressionObjectRadius : public UMaterialExpression
{
};

class UMaterialExpressionOneMinus : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionPanner : public UMaterialExpression
{
    FExpressionInput Coordinate;
    FExpressionInput Time;
    FExpressionInput Speed;
    float SpeedX;
    float SpeedY;
    uint32 ConstCoordinate;
    bool bFractionalPart;

};

class UMaterialExpressionParameter : public UMaterialExpression
{
    FName ParameterName;
    FGuid ExpressionGUID;

};

class UMaterialExpressionParticleColor : public UMaterialExpression
{
};

class UMaterialExpressionParticleDirection : public UMaterialExpression
{
};

class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
};

class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
};

class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
};

class UMaterialExpressionParticleRadius : public UMaterialExpression
{
};

class UMaterialExpressionParticleRandom : public UMaterialExpression
{
};

class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
};

class UMaterialExpressionParticleSize : public UMaterialExpression
{
};

class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
};

class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
    uint8 bBlend;

};

class UMaterialExpressionParticleSubUVProperties : public UMaterialExpression
{
};

class UMaterialExpressionPerInstanceCustomData : public UMaterialExpression
{
    FExpressionInput DefaultValue;
    float ConstDefaultValue;
    uint32 DataIndex;

};

class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
};

class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
};

class UMaterialExpressionPixelDepth : public UMaterialExpression
{
};

class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
};

class UMaterialExpressionPower : public UMaterialExpression
{
    FExpressionInput Base;
    FExpressionInput Exponent;
    float ConstExponent;

};

class UMaterialExpressionPreSkinnedLocalBounds : public UMaterialExpression
{
};

class UMaterialExpressionPreSkinnedNormal : public UMaterialExpression
{
};

class UMaterialExpressionPreSkinnedPosition : public UMaterialExpression
{
};

class UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{
};

class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
    FExpressionInput CurrentFrame;
    FExpressionInput PreviousFrame;

};

class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput Inputs;

};

class UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression
{
    FExpressionInput Normal;
    FExpressionInput RayTraced;

};

class UMaterialExpressionReflectionCapturePassSwitch : public UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput Reflection;

};

class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
    FExpressionInput CustomWorldNormal;
    uint8 bNormalizeCustomWorldNormal;

};

class UMaterialExpressionReroute : public UMaterialExpressionRerouteBase
{
    FExpressionInput Input;

};

class UMaterialExpressionRerouteBase : public UMaterialExpression
{
};

class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
    FExpressionInput NormalizedRotationAxis;
    FExpressionInput RotationAngle;
    FExpressionInput PivotPoint;
    FExpressionInput Position;
    float Period;

};

class UMaterialExpressionRotator : public UMaterialExpression
{
    FExpressionInput Coordinate;
    FExpressionInput Time;
    float CenterX;
    float CenterY;
    float Speed;
    uint32 ConstCoordinate;

};

class UMaterialExpressionRound : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionRuntimeVirtualTextureOutput : public UMaterialExpressionCustomOutput
{
    FExpressionInput BaseColor;
    FExpressionInput Specular;
    FExpressionInput Roughness;
    FExpressionInput Normal;
    FExpressionInput WorldHeight;
    FExpressionInput Opacity;
    FExpressionInput Mask;

};

class UMaterialExpressionRuntimeVirtualTextureReplace : public UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput VirtualTextureOutput;

};

class UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression
{
    FExpressionInput Coordinates;
    FExpressionInput WorldPosition;
    FExpressionInput MipValue;
    class URuntimeVirtualTexture* VirtualTexture;
    ERuntimeVirtualTextureMaterialType MaterialType;
    bool bSinglePhysicalSpace;
    bool bAdaptive;
    TEnumAsByte<ERuntimeVirtualTextureMipValueMode> MipValueMode;
    TEnumAsByte<ERuntimeVirtualTextureTextureAddressMode> TextureAddressMode;

};

class UMaterialExpressionRuntimeVirtualTextureSampleParameter : public UMaterialExpressionRuntimeVirtualTextureSample
{
    FName ParameterName;
    FGuid ExpressionGUID;
    FName Group;

};

class UMaterialExpressionSamplePhysicsIntegerField : public UMaterialExpression
{
    FExpressionInput WorldPosition;
    TEnumAsByte<EFieldIntegerType> FieldTarget;

};

class UMaterialExpressionSamplePhysicsScalarField : public UMaterialExpression
{
    FExpressionInput WorldPosition;
    TEnumAsByte<EFieldScalarType> FieldTarget;

};

class UMaterialExpressionSamplePhysicsVectorField : public UMaterialExpression
{
    FExpressionInput WorldPosition;
    TEnumAsByte<EFieldVectorType> FieldTarget;

};

class UMaterialExpressionSaturate : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
    float DefaultValue;
    bool bUseCustomPrimitiveData;
    uint8 PrimitiveDataIndex;

};

class UMaterialExpressionSceneColor : public UMaterialExpression
{
    TEnumAsByte<EMaterialSceneAttributeInputMode::Type> InputMode;
    FExpressionInput Input;
    FExpressionInput OffsetFraction;
    FVector2D ConstInput;

};

class UMaterialExpressionSceneDepth : public UMaterialExpression
{
    TEnumAsByte<EMaterialSceneAttributeInputMode::Type> InputMode;
    FExpressionInput Input;
    FExpressionInput Coordinates;
    FVector2D ConstInput;

};

class UMaterialExpressionSceneDepthWithoutWater : public UMaterialExpression
{
    TEnumAsByte<EMaterialSceneAttributeInputMode::Type> InputMode;
    FExpressionInput Input;
    FVector2D ConstInput;
    float FallbackDepth;

};

class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
};

class UMaterialExpressionSceneTexture : public UMaterialExpression
{
    FExpressionInput Coordinates;
    TEnumAsByte<ESceneTextureId> SceneTextureId;
    bool bFiltered;

};

class UMaterialExpressionScreenPosition : public UMaterialExpression
{
};

class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
    TArray<FExpressionInput> Inputs;
    TArray<FGuid> AttributeSetTypes;

};

class UMaterialExpressionShaderStageSwitch : public UMaterialExpression
{
    FExpressionInput PixelShader;
    FExpressionInput VertexShader;

};

class UMaterialExpressionShadingModel : public UMaterialExpression
{
    TEnumAsByte<EMaterialShadingModel> ShadingModel;

};

class UMaterialExpressionShadingPathSwitch : public UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput Inputs;

};

class UMaterialExpressionShadowReplace : public UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput Shadow;

};

class UMaterialExpressionSign : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionSine : public UMaterialExpression
{
    FExpressionInput Input;
    float Period;

};

class UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput
{
    FExpressionInput ScatteringCoefficients;
    FExpressionInput AbsorptionCoefficients;
    FExpressionInput PhaseG;
    FExpressionInput ColorScaleBehindWater;

};

class UMaterialExpressionSkinningVertexOffsets : public UMaterialExpression
{
};

class UMaterialExpressionSkyAtmosphereAerialPerspective : public UMaterialExpression
{
    FExpressionInput WorldPosition;

};

class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : public UMaterialExpression
{
};

class UMaterialExpressionSkyAtmosphereLightDirection : public UMaterialExpression
{
    int32 LightIndex;

};

class UMaterialExpressionSkyAtmosphereLightDiskLuminance : public UMaterialExpression
{
    int32 LightIndex;

};

class UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression
{
    int32 LightIndex;
    FExpressionInput WorldPosition;

};

class UMaterialExpressionSkyAtmosphereViewLuminance : public UMaterialExpression
{
};

class UMaterialExpressionSmoothStep : public UMaterialExpression
{
    FExpressionInput Min;
    FExpressionInput Max;
    FExpressionInput Value;
    float ConstMin;
    float ConstMax;
    float ConstValue;

};

class UMaterialExpressionSobol : public UMaterialExpression
{
    FExpressionInput Cell;
    FExpressionInput Index;
    FExpressionInput Seed;
    uint32 ConstIndex;
    FVector2D ConstSeed;

};

class UMaterialExpressionSpeedTree : public UMaterialExpression
{
    FExpressionInput GeometryInput;
    FExpressionInput WindInput;
    FExpressionInput LODInput;
    FExpressionInput ExtraBendWS;
    TEnumAsByte<ESpeedTreeGeometryType> GeometryType;
    TEnumAsByte<ESpeedTreeWindType> WindType;
    TEnumAsByte<ESpeedTreeLODType> LODType;
    float BillboardThreshold;
    bool bAccurateWindVelocities;

};

class UMaterialExpressionSphereMask : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput Radius;
    FExpressionInput Hardness;
    float AttenuationRadius;
    float HardnessPercent;

};

class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
    FExpressionInput Density;
    float ConstantDensity;

};

class UMaterialExpressionSquareRoot : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionStaticBool : public UMaterialExpression
{
    uint8 Value;

};

class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
    uint8 DefaultValue;

};

class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
    uint8 DefaultR;
    uint8 DefaultG;
    uint8 DefaultB;
    uint8 DefaultA;

};

class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
    uint8 DefaultValue;
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput Value;

};

class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
};

class UMaterialExpressionStep : public UMaterialExpression
{
    FExpressionInput Y;
    FExpressionInput X;
    float ConstY;
    float ConstX;

};

class UMaterialExpressionSubtract : public UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;

};

class UMaterialExpressionTangent : public UMaterialExpression
{
    FExpressionInput Input;
    float Period;

};

class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
    FExpressionInput Input;

};

class UMaterialExpressionTemporalSobol : public UMaterialExpression
{
    FExpressionInput Index;
    FExpressionInput Seed;
    uint32 ConstIndex;
    FVector2D ConstSeed;

};

class UMaterialExpressionTextureBase : public UMaterialExpression
{
    class UTexture* Texture;

};

class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
    int32 CoordinateIndex;
    float UTiling;
    float VTiling;
    uint8 UnMirrorU;
    uint8 UnMirrorV;

};

class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
};

class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
};

class UMaterialExpressionTextureProperty : public UMaterialExpression
{
    FExpressionInput TextureObject;
    TEnumAsByte<EMaterialExposedTextureProperty> Property;

};

class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
    FExpressionInput Coordinates;

};

class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
    FName ParameterName;
    FGuid ExpressionGUID;
    FName Group;

};

class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
};

class UMaterialExpressionTextureSampleParameter2DArray : public UMaterialExpressionTextureSampleParameter
{
};

class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
};

class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
    uint8 bBlend;

};

class UMaterialExpressionTextureSampleParameterVolume : public UMaterialExpressionTextureSampleParameter
{
};

class UMaterialExpressionThinTranslucentMaterialOutput : public UMaterialExpressionCustomOutput
{
    FExpressionInput TransmittanceColor;

};

class UMaterialExpressionTime : public UMaterialExpression
{
    uint8 bIgnorePause;
    uint8 bOverride_Period;
    float Period;

};

class UMaterialExpressionTransform : public UMaterialExpression
{
    FExpressionInput Input;
    TEnumAsByte<EMaterialVectorCoordTransformSource> TransformSourceType;
    TEnumAsByte<EMaterialVectorCoordTransform> TransformType;

};

class UMaterialExpressionTransformPosition : public UMaterialExpression
{
    FExpressionInput Input;
    TEnumAsByte<EMaterialPositionTransformSource> TransformSourceType;
    TEnumAsByte<EMaterialPositionTransformSource> TransformType;

};

class UMaterialExpressionTruncate : public UMaterialExpression
{
    FExpressionInput Input;

};

class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
};

class UMaterialExpressionVectorNoise : public UMaterialExpression
{
    FExpressionInput Position;
    TEnumAsByte<EVectorNoiseFunction> NoiseFunction;
    int32 Quality;
    uint8 bTiling;
    uint32 TileSize;

};

class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
    FLinearColor DefaultValue;
    bool bUseCustomPrimitiveData;
    uint8 PrimitiveDataIndex;

};

class UMaterialExpressionVertexColor : public UMaterialExpression
{
};

class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput
{
    FExpressionInput Input;

};

class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
};

class UMaterialExpressionVertexTangentWS : public UMaterialExpression
{
};

class UMaterialExpressionViewProperty : public UMaterialExpression
{
    TEnumAsByte<EMaterialExposedViewProperty> Property;

};

class UMaterialExpressionViewSize : public UMaterialExpression
{
};

class UMaterialExpressionVirtualTextureFeatureSwitch : public UMaterialExpression
{
    FExpressionInput No;
    FExpressionInput Yes;

};

class UMaterialExpressionVolumetricAdvancedMaterialInput : public UMaterialExpression
{
};

class UMaterialExpressionVolumetricAdvancedMaterialOutput : public UMaterialExpressionCustomOutput
{
    FExpressionInput PhaseG;
    FExpressionInput PhaseG2;
    FExpressionInput PhaseBlend;
    FExpressionInput MultiScatteringContribution;
    FExpressionInput MultiScatteringOcclusion;
    FExpressionInput MultiScatteringEccentricity;
    FExpressionInput ConservativeDensity;
    float ConstPhaseG;
    float ConstPhaseG2;
    float ConstPhaseBlend;
    bool PerSamplePhaseEvaluation;
    uint32 MultiScatteringApproximationOctaveCount;
    float ConstMultiScatteringContribution;
    float ConstMultiScatteringOcclusion;
    float ConstMultiScatteringEccentricity;
    bool bGroundContribution;
    bool bGrayScaleMaterial;
    bool bRayMarchVolumeShadow;

};

class UMaterialExpressionWorldPosition : public UMaterialExpression
{
    TEnumAsByte<EWorldPositionIncludedOffsets> WorldPositionShaderOffset;

};

class UMaterialFunction : public UMaterialFunctionInterface
{
    FString Description;
    uint8 bExposeToLibrary;
    uint8 bPrefixParameterNames;

};

class UMaterialFunctionInstance : public UMaterialFunctionInterface
{
    class UMaterialFunctionInterface* Parent;
    class UMaterialFunctionInterface* Base;
    TArray<FScalarParameterValue> ScalarParameterValues;
    TArray<FVectorParameterValue> VectorParameterValues;
    TArray<FTextureParameterValue> TextureParameterValues;
    TArray<FFontParameterValue> FontParameterValues;
    TArray<FStaticSwitchParameter> StaticSwitchParameterValues;
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues;
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;

};

class UMaterialFunctionInterface : public UObject
{
    FGuid StateId;
    EMaterialFunctionUsage MaterialFunctionUsage;

};

class UMaterialFunctionMaterialLayer : public UMaterialFunction
{
};

class UMaterialFunctionMaterialLayerBlend : public UMaterialFunction
{
};

class UMaterialFunctionMaterialLayerBlendInstance : public UMaterialFunctionInstance
{
};

class UMaterialFunctionMaterialLayerInstance : public UMaterialFunctionInstance
{
};

class UMaterialInstance : public UMaterialInterface
{
    class UPhysicalMaterial* PhysMaterial;
    class UPhysicalMaterial* PhysicalMaterialMap;
    class UMaterialInterface* Parent;
    uint8 bHasStaticPermutationResource;
    uint8 bOverrideSubsurfaceProfile;
    TArray<FScalarParameterValue> ScalarParameterValues;
    TArray<FVectorParameterValue> VectorParameterValues;
    TArray<FTextureParameterValue> TextureParameterValues;
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;
    TArray<FFontParameterValue> FontParameterValues;
    FMaterialInstanceBasePropertyOverrides BasePropertyOverrides;
    FStaticParameterSet StaticParameters;
    FMaterialCachedParameters CachedLayerParameters;
    TArray<class UObject*> CachedReferencedTextures;

};

class UMaterialInstanceConstant : public UMaterialInstance
{
    class UPhysicalMaterialMask* PhysMaterialMask;

    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    class UTexture* K2_GetTextureParameterValue(FName ParameterName);
    float K2_GetScalarParameterValue(FName ParameterName);
};

class UMaterialInstanceDynamic : public UMaterialInstance
{

    void SetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, FLinearColor Value);
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, class UTexture* Value);
    void SetTextureParameterValue(FName ParameterName, class UTexture* Value);
    void SetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, float Value);
    void SetScalarParameterValue(FName ParameterName, float Value);
    void K2_InterpolateMaterialInstanceParams(class UMaterialInstance* SourceA, class UMaterialInstance* SourceB, float alpha);
    FLinearColor K2_GetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    class UTexture* K2_GetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    class UTexture* K2_GetTextureParameterValue(FName ParameterName);
    float K2_GetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    float K2_GetScalarParameterValue(FName ParameterName);
    void K2_CopyMaterialInstanceParameters(class UMaterialInterface* Source, bool bQuickParametersOnly);
    void CopyParameterOverrides(class UMaterialInstance* MaterialInstance);
    void CopyInterpParameters(class UMaterialInstance* Source);
};

class UMaterialInterface : public UObject
{
    class USubsurfaceProfile* SubsurfaceProfile;
    FLightmassMaterialInterfaceSettings LightmassSettings;
    TArray<FMaterialTextureInfo> TextureStreamingData;
    TArray<class UAssetUserData*> AssetUserData;

    void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse);
    class UPhysicalMaterialMask* GetPhysicalMaterialMask();
    class UPhysicalMaterial* GetPhysicalMaterialFromMap(int32 Index);
    class UPhysicalMaterial* GetPhysicalMaterial();
    FMaterialParameterInfo GetParameterInfo(TEnumAsByte<EMaterialParameterAssociation> Association, FName ParameterName, class UMaterialFunctionInterface* LayerFunction);
    class UMaterial* GetBaseMaterial();
};

class UMaterialParameterCollection : public UObject
{
    FGuid StateId;
    TArray<FCollectionScalarParameter> ScalarParameters;
    TArray<FCollectionVectorParameter> VectorParameters;

};

class UMaterialParameterCollectionInstance : public UObject
{
    class UMaterialParameterCollection* Collection;

};

class UMeshComponent : public UPrimitiveComponent
{
    TArray<class UMaterialInterface*> OverrideMaterials;
    uint8 bEnableMaterialParameterCaching;

    void SetVectorParameterValueOnMaterials(const FName ParameterName, const FVector ParameterValue);
    void SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue);
    void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups);
    bool IsMaterialSlotNameValid(FName MaterialSlotName);
    TArray<FName> GetMaterialSlotNames();
    TArray<class UMaterialInterface*> GetMaterials();
    int32 GetMaterialIndex(FName MaterialSlotName);
};

class UMeshSimplificationSettings : public UDeveloperSettings
{
    FName MeshReductionModuleName;

};

class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{

    void RemovePaintedVertices(class UStaticMeshComponent* StaticMeshComponent);
    void PaintVerticesSingleColor(class UStaticMeshComponent* StaticMeshComponent, const FLinearColor& FillColor, bool bConvertToSRGB);
    void PaintVerticesLerpAlongAxis(class UStaticMeshComponent* StaticMeshComponent, const FLinearColor& StartColor, const FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);
};

class UMicroTransactionBase : public UPlatformInterfaceBase
{
    TArray<FPurchaseInfo> AvailableProducts;
    FString LastError;
    FString LastErrorSolution;

};

class UModel : public UObject
{
};

class UModelComponent : public UPrimitiveComponent
{
    class UBodySetup* ModelBodySetup;

};

class UMorphTarget : public UObject
{
    class USkeletalMesh* BaseSkelMesh;

};

class UMovementComponent : public UActorComponent
{
    class USceneComponent* UpdatedComponent;
    class UPrimitiveComponent* UpdatedPrimitive;
    FVector Velocity;
    FVector PlaneConstraintNormal;
    FVector PlaneConstraintOrigin;
    uint8 bUpdateOnlyIfRendered;
    uint8 bAutoUpdateTickRegistration;
    uint8 bTickBeforeOwner;
    uint8 bAutoRegisterUpdatedComponent;
    uint8 bConstrainToPlane;
    uint8 bSnapToPlaneAtStart;
    uint8 bAutoRegisterPhysicsVolumeUpdates;
    uint8 bComponentShouldUpdatePhysicsVolume;
    EPlaneConstraintAxisSetting PlaneConstraintAxisSetting;

    void StopMovementImmediately();
    void SnapUpdatedComponentToPlane();
    void SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
    void SetPlaneConstraintOrigin(FVector PlaneOrigin);
    void SetPlaneConstraintNormal(FVector PlaneNormal);
    void SetPlaneConstraintFromVectors(FVector Forward, FVector Up);
    void SetPlaneConstraintEnabled(bool bEnabled);
    void SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting);
    void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
    bool K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult& OutHit, bool bSweep, bool bTeleport);
    float K2_GetModifiedMaxSpeed();
    float K2_GetMaxSpeedModifier();
    bool IsExceedingMaxSpeed(float MaxSpeed);
    FVector GetPlaneConstraintOrigin();
    FVector GetPlaneConstraintNormal();
    EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting();
    class APhysicsVolume* GetPhysicsVolume();
    float GetMaxSpeed();
    float GetGravityZ();
    FVector ConstrainNormalToPlane(FVector Normal);
    FVector ConstrainLocationToPlane(FVector Location);
    FVector ConstrainDirectionToPlane(FVector Direction);
};

class UNavAreaBase : public UObject
{
};

class UNavCollisionBase : public UObject
{
    uint8 bIsDynamicObstacle;

};

class UNavLinkDefinition : public UObject
{
    TArray<FNavigationLink> Links;
    TArray<FNavigationSegmentLink> SegmentLinks;

};

class UNavMovementComponent : public UMovementComponent
{
    FNavAgentProperties NavAgentProps;
    float FixedPathBrakingDistance;
    uint8 bUpdateNavAgentWithOwnersCollision;
    uint8 bUseAccelerationForPaths;
    uint8 bUseFixedBrakingDistanceForPaths;
    FMovementProperties MovementState;
    class UObject* PathFollowingComp;

    void StopMovementKeepPathing();
    void StopActiveMovement();
    bool IsSwimming();
    bool IsMovingOnGround();
    bool IsFlying();
    bool IsFalling();
    bool IsCrouching();
};

class UNavigationDataChunk : public UObject
{
    FName NavigationDataName;

};

class UNavigationSystemBase : public UObject
{
};

class UNavigationSystemConfig : public UObject
{
    FSoftClassPath NavigationSystemClass;
    FNavAgentSelector SupportedAgentsMask;
    FName DefaultAgentName;
    uint8 bIsOverriden;

};

class UNetConnection : public UPlayer
{
    TArray<class UChildConnection*> Children;
    class UNetDriver* Driver;
    TSubclassOf<class UPackageMap> PackageMapClass;
    class UPackageMap* PackageMap;
    TArray<class UChannel*> OpenChannels;
    TArray<class AActor*> SentTemporaries;
    class AActor* ViewTarget;
    class AActor* owningActor;
    int32 MaxPacket;
    uint8 InternalAck;
    FUniqueNetIdRepl PlayerId;
    double LastReceiveTime;
    TArray<class UChannel*> ChannelsToTick;

};

class UNetDriver : public UObject
{
    FString NetConnectionClassName;
    FString ReplicationDriverClassName;
    int32 MaxDownloadSize;
    uint8 bClampListenServerTickRate;
    int32 NetServerMaxTickRate;
    int32 MaxNetTickRate;
    int32 MaxInternetClientRate;
    int32 MaxClientRate;
    float ServerTravelPause;
    float SpawnPrioritySeconds;
    float RelevantTimeout;
    float KeepAliveTime;
    float InitialConnectTimeout;
    float ConnectionTimeout;
    float TimeoutMultiplierForUnoptimizedBuilds;
    bool bNoTimeouts;
    bool bNeverApplyNetworkEmulationSettings;
    class UNetConnection* ServerConnection;
    TArray<class UNetConnection*> ClientConnections;
    int32 RecentlyDisconnectedTrackingTime;
    class UWorld* World;
    class UPackage* WorldPackage;
    UClass* NetConnectionClass;
    UClass* ReplicationDriverClass;
    FName NetDriverName;
    TArray<FChannelDefinition> ChannelDefinitions;
    TMap<class FName, class FChannelDefinition> ChannelDefinitionMap;
    TArray<class UChannel*> ActorChannelPool;
    float Time;
    class UReplicationDriver* ReplicationDriver;

};

class UNetPushModelHelpers : public UBlueprintFunctionLibrary
{

    void MarkPropertyDirtyFromRepIndex(class UObject* Object, int32 RepIndex, FName PropertyName);
    void MarkPropertyDirty(class UObject* Object, FName PropertyName);
};

class UNetworkSettings : public UDeveloperSettings
{
    uint8 bVerifyPeer;
    uint8 bEnableMultiplayerWorldOriginRebasing;
    int32 MaxRepArraySize;
    int32 MaxRepArrayMemory;
    TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles;

};

class UNodeMappingContainer : public UObject
{
    TMap<class FName, class FNodeItem> SourceItems;
    TMap<class FName, class FNodeItem> TargetItems;
    TMap<class FName, class FName> SourceToTarget;
    TSoftObjectPtr<UObject> SourceAsset;
    TSoftObjectPtr<UObject> TargetAsset;

};

class UNullNavSysConfig : public UNavigationSystemConfig
{
};

class UObjectLibrary : public UObject
{
    UClass* ObjectBaseClass;
    bool bHasBlueprintClasses;
    TArray<class UObject*> Objects;
    TArray<TWeakObjectPtr<UObject>> WeakObjects;
    bool bUseWeakReferences;
    bool bIsFullyLoaded;

};

class UObjectReferencer : public UObject
{
    TArray<class UObject*> ReferencedObjects;

};

class UObjectTraceWorldSubsystem : public UWorldSubsystem
{
};

class UOnlineBlueprintCallProxyBase : public UBlueprintAsyncActionBase
{
};

class UOnlineEngineInterface : public UObject
{
};

class UOnlineSession : public UObject
{
};

class UPackageMapClient : public UPackageMap
{
};

class UParticleEmitter : public UObject
{
    FName EmitterName;
    int32 SubUVDataOffset;
    TEnumAsByte<EEmitterRenderMode> EmitterRenderMode;
    EParticleSignificanceLevel SignificanceLevel;
    uint8 bUseLegacySpawningBehavior;
    uint8 ConvertedModules;
    uint8 bIsSoloing;
    uint8 bCookedOut;
    uint8 bDisabledLODsKeepEmitterAlive;
    uint8 bDisableWhenInsignficant;
    TArray<class UParticleLODLevel*> LODLevels;
    int32 PeakActiveParticles;
    int32 InitialAllocationCount;
    float QualityLevelSpawnRateScale;
    uint32 DetailModeBitmask;

};

class UParticleLODLevel : public UObject
{
    int32 Level;
    uint8 bEnabled;
    class UParticleModuleRequired* RequiredModule;
    TArray<class UParticleModule*> Modules;
    class UParticleModuleTypeDataBase* TypeDataModule;
    class UParticleModuleSpawn* SpawnModule;
    class UParticleModuleEventGenerator* EventGenerator;
    TArray<class UParticleModuleSpawnBase*> SpawningModules;
    TArray<class UParticleModule*> SpawnModules;
    TArray<class UParticleModule*> UpdateModules;
    TArray<class UParticleModuleOrbit*> OrbitModules;
    TArray<class UParticleModuleEventReceiverBase*> EventReceiverModules;
    uint8 ConvertedModules;
    int32 PeakActiveParticles;

};

class UParticleModule : public UObject
{
    uint8 bSpawnModule;
    uint8 bUpdateModule;
    uint8 bFinalUpdateModule;
    uint8 bUpdateForGPUEmitter;
    uint8 bCurvesAsColor;
    uint8 b3DDrawMode;
    uint8 bSupported3DDrawMode;
    uint8 bEnabled;
    uint8 bEditable;
    uint8 LODDuplicate;
    uint8 bSupportsRandomSeed;
    uint8 bRequiresLoopingNotification;
    uint8 LODValidity;

};

class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
    FRawDistributionVector Acceleration;
    uint8 bApplyOwnerScale;

};

class UParticleModuleAccelerationBase : public UParticleModule
{
    uint8 bAlwaysInWorldSpace;

};

class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
    FVector Acceleration;

};

class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
    class UDistributionFloat* DragCoefficient;
    FRawDistributionFloat DragCoefficientRaw;

};

class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
    class UDistributionFloat* DragScale;
    FRawDistributionFloat DragScaleRaw;

};

class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
    FRawDistributionVector AccelOverLife;

};

class UParticleModuleAttractorBase : public UParticleModule
{
};

class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
    FVector EndPoint0;
    FVector EndPoint1;
    FRawDistributionFloat range;
    FRawDistributionFloat Strength;

};

class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
    FName EmitterName;
    FRawDistributionFloat range;
    uint8 bStrengthByDistance;
    FRawDistributionFloat Strength;
    uint8 bAffectBaseVelocity;
    TEnumAsByte<EAttractorParticleSelectionMethod> SelectionMethod;
    uint8 bRenewSource;
    uint8 bInheritSourceVel;
    int32 LastSelIndex;

};

class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
    FRawDistributionVector Position;
    FRawDistributionFloat range;
    FRawDistributionFloat Strength;
    uint8 StrengthByDistance;
    uint8 bAffectBaseVelocity;
    uint8 bOverrideVelocity;
    uint8 bUseWorldSpacePosition;
    uint8 Positive_X;
    uint8 Positive_Y;
    uint8 Positive_Z;
    uint8 Negative_X;
    uint8 Negative_Y;
    uint8 Negative_Z;

};

class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
    FVector Position;
    float Radius;
    class UDistributionFloat* Strength;
    FRawDistributionFloat StrengthRaw;

};

class UParticleModuleBeamBase : public UParticleModule
{
};

class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
    TEnumAsByte<BeamModifierType> ModifierType;
    FBeamModifierOptions PositionOptions;
    FRawDistributionVector Position;
    FBeamModifierOptions TangentOptions;
    FRawDistributionVector Tangent;
    uint8 bAbsoluteTangent;
    FBeamModifierOptions StrengthOptions;
    FRawDistributionFloat Strength;

};

class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
    uint8 bLowFreq_Enabled;
    int32 Frequency;
    int32 Frequency_LowRange;
    FRawDistributionVector NoiseRange;
    FRawDistributionFloat NoiseRangeScale;
    uint8 bNRScaleEmitterTime;
    FRawDistributionVector NoiseSpeed;
    uint8 bSmooth;
    float NoiseLockRadius;
    uint8 bNoiseLock;
    uint8 bOscillate;
    float NoiseLockTime;
    float NoiseTension;
    uint8 bUseNoiseTangents;
    FRawDistributionFloat NoiseTangentStrength;
    int32 NoiseTessellation;
    uint8 bTargetNoise;
    float FrequencyDistance;
    uint8 bApplyNoiseScale;
    FRawDistributionFloat NoiseScale;

};

class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
    TEnumAsByte<Beam2SourceTargetMethod> SourceMethod;
    FName SourceName;
    uint8 bSourceAbsolute;
    FRawDistributionVector Source;
    uint8 bLockSource;
    TEnumAsByte<Beam2SourceTargetTangentMethod> SourceTangentMethod;
    FRawDistributionVector SourceTangent;
    uint8 bLockSourceTangent;
    FRawDistributionFloat SourceStrength;
    uint8 bLockSourceStength;

};

class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
    TEnumAsByte<Beam2SourceTargetMethod> TargetMethod;
    FName TargetName;
    FRawDistributionVector Target;
    uint8 bTargetAbsolute;
    uint8 bLockTarget;
    TEnumAsByte<Beam2SourceTargetTangentMethod> TargetTangentMethod;
    FRawDistributionVector TargetTangent;
    uint8 bLockTargetTangent;
    FRawDistributionFloat TargetStrength;
    uint8 bLockTargetStength;
    float LockRadius;

};

class UParticleModuleCameraBase : public UParticleModule
{
};

class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
    FRawDistributionFloat CameraOffset;
    uint8 bSpawnTimeOnly;
    TEnumAsByte<EParticleCameraOffsetUpdateMethod> UpdateMethod;

};

class UParticleModuleCollision : public UParticleModuleCollisionBase
{
    FRawDistributionVector DampingFactor;
    FRawDistributionVector DampingFactorRotation;
    FRawDistributionFloat MaxCollisions;
    TEnumAsByte<EParticleCollisionComplete> CollisionCompletionOption;
    TArray<TEnumAsByte<EObjectTypeQuery>> CollisionTypes;
    uint8 bApplyPhysics;
    uint8 bIgnoreTriggerVolumes;
    FRawDistributionFloat ParticleMass;
    float DirScalar;
    uint8 bPawnsDoNotDecrementCount;
    uint8 bOnlyVerticalNormalsDecrementCount;
    float VerticalFudgeFactor;
    FRawDistributionFloat DelayAmount;
    uint8 bDropDetail;
    uint8 bCollideOnlyIfVisible;
    uint8 bIgnoreSourceActor;
    float MaxCollisionDistance;

};

class UParticleModuleCollisionBase : public UParticleModule
{
};

class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
    FRawDistributionFloat Resilience;
    FRawDistributionFloat ResilienceScaleOverLife;
    float Friction;
    float RandomSpread;
    float RandomDistribution;
    float RadiusScale;
    float RadiusBias;
    TEnumAsByte<EParticleCollisionResponse::Type> Response;
    TEnumAsByte<EParticleCollisionMode::Type> CollisionMode;

};

class UParticleModuleColor : public UParticleModuleColorBase
{
    FRawDistributionVector StartColor;
    FRawDistributionFloat StartAlpha;
    uint8 bClampAlpha;

};

class UParticleModuleColorBase : public UParticleModule
{
};

class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
    FRawDistributionVector ColorOverLife;
    FRawDistributionFloat AlphaOverLife;
    uint8 bClampAlpha;

};

class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
    FRawDistributionVector ColorScaleOverLife;
    FRawDistributionFloat AlphaScaleOverLife;
    uint8 bEmitterTime;

};

class UParticleModuleColor_Seeded : public UParticleModuleColor
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleEventBase : public UParticleModule
{
};

class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
    TArray<FParticleEvent_GenerateInfo> Events;

};

class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
    TEnumAsByte<EParticleEventType> EventGeneratorType;
    FName EventName;

};

class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
    uint8 bStopSpawning;

};

class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
    FRawDistributionFloat SpawnCount;
    uint8 bUseParticleTime;
    uint8 bUsePSysLocation;
    uint8 bInheritVelocity;
    FRawDistributionVector InheritVelocityScale;
    TArray<class UPhysicalMaterial*> PhysicalMaterials;
    uint8 bBanPhysicalMaterials;

};

class UParticleModuleEventSendToGame : public UObject
{
};

class UParticleModuleKillBase : public UParticleModule
{
};

class UParticleModuleKillBox : public UParticleModuleKillBase
{
    FRawDistributionVector LowerLeftCorner;
    FRawDistributionVector UpperRightCorner;
    uint8 bAbsolute;
    uint8 bKillInside;
    uint8 bAxisAlignedAndFixedSize;

};

class UParticleModuleKillHeight : public UParticleModuleKillBase
{
    FRawDistributionFloat Height;
    uint8 bAbsolute;
    uint8 bFloor;
    uint8 bApplyPSysScale;

};

class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
    FRawDistributionFloat LifeTime;

};

class UParticleModuleLifetimeBase : public UParticleModule
{
};

class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleLight : public UParticleModuleLightBase
{
    bool bUseInverseSquaredFalloff;
    bool bAffectsTranslucency;
    bool bPreviewLightRadius;
    float SpawnFraction;
    FRawDistributionVector ColorScaleOverLife;
    FRawDistributionFloat BrightnessOverLife;
    FRawDistributionFloat RadiusScale;
    FRawDistributionFloat LightExponent;
    FLightingChannels LightingChannels;
    float VolumetricScatteringIntensity;
    bool bHighQualityLights;
    bool bShadowCastingLights;

};

class UParticleModuleLightBase : public UParticleModule
{
};

class UParticleModuleLight_Seeded : public UParticleModuleLight
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleLocation : public UParticleModuleLocationBase
{
    FRawDistributionVector StartLocation;
    float DistributeOverNPoints;
    float DistributeThreshold;

};

class UParticleModuleLocationBase : public UParticleModule
{
};

class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
    TEnumAsByte<ELocationBoneSocketSource> SourceType;
    FVector UniversalOffset;
    TArray<FLocationBoneSocketInfo> SourceLocations;
    TEnumAsByte<ELocationBoneSocketSelectionMethod> SelectionMethod;
    uint8 bUpdatePositionEachFrame;
    uint8 bOrientMeshEmitters;
    uint8 bInheritBoneVelocity;
    float InheritVelocityScale;
    FName SkelMeshActorParamName;
    int32 NumPreSelectedIndices;

};

class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
    FRawDistributionVector Location;
    FRawDistributionVector LocationOffset;
    FRawDistributionVector ScaleFactor;
    FRawDistributionVector Direction;

};

class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
    FName EmitterName;
    TEnumAsByte<ELocationEmitterSelectionMethod> SelectionMethod;
    uint8 InheritSourceVelocity;
    float InheritSourceVelocityScale;
    uint8 bInheritSourceRotation;
    float InheritSourceRotationScale;

};

class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
    FName EmitterName;

};

class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
    uint8 Positive_X;
    uint8 Positive_Y;
    uint8 Positive_Z;
    uint8 Negative_X;
    uint8 Negative_Y;
    uint8 Negative_Z;
    uint8 SurfaceOnly;
    uint8 Velocity;
    FRawDistributionFloat VelocityScale;
    FRawDistributionVector StartLocation;

};

class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
    uint8 RadialVelocity;
    FRawDistributionFloat StartRadius;
    FRawDistributionFloat StartHeight;
    TEnumAsByte<CylinderHeightAxis> HeightAxis;

};

class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
    FRawDistributionFloat StartRadius;

};

class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
    FRawDistributionVector StartOffset;
    FRawDistributionFloat Height;
    FRawDistributionFloat Angle;
    FRawDistributionFloat Thickness;

};

class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
    TEnumAsByte<ELocationSkelVertSurfaceSource> SourceType;
    FVector UniversalOffset;
    uint8 bUpdatePositionEachFrame;
    uint8 bOrientMeshEmitters;
    uint8 bInheritBoneVelocity;
    float InheritVelocityScale;
    FName SkelMeshActorParamName;
    TArray<FName> ValidAssociatedBones;
    uint8 bEnforceNormalCheck;
    FVector NormalToCompare;
    float NormalCheckToleranceDegrees;
    float NormalCheckTolerance;
    TArray<int32> ValidMaterialIndices;
    uint8 bInheritVertexColor;
    uint8 bInheritUV;
    uint32 InheritUVChannel;

};

class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
};

class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleMaterialBase : public UParticleModule
{
};

class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
    TArray<class UMaterialInterface*> MeshMaterials;

};

class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
    FRawDistributionVector StartRotation;
    uint8 bInheritParent;

};

class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
    FRawDistributionVector StartRotationRate;

};

class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
    FRawDistributionVector LifeMultiplier;

};

class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
    FRawDistributionVector RotRate;
    uint8 bScaleRotRate;

};

class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
    TEnumAsByte<EOrbitChainMode> ChainMode;
    FRawDistributionVector OffsetAmount;
    FOrbitOptions OffsetOptions;
    FRawDistributionVector RotationAmount;
    FOrbitOptions RotationOptions;
    FRawDistributionVector RotationRateAmount;
    FOrbitOptions RotationRateOptions;

};

class UParticleModuleOrbitBase : public UParticleModule
{
    uint8 bUseEmitterTime;

};

class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
    TEnumAsByte<EParticleAxisLock> LockAxisFlags;

};

class UParticleModuleOrientationBase : public UParticleModule
{
};

class UParticleModuleParameterBase : public UParticleModule
{
};

class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
    TArray<FEmitterDynamicParameter> DynamicParams;
    int32 UpdateFlags;
    uint8 bUsesVelocity;

};

class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
    FVector2D PivotOffset;

};

class UParticleModuleRequired : public UParticleModule
{
    class UMaterialInterface* Material;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;
    FVector EmitterOrigin;
    FRotator EmitterRotation;
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    uint8 bUseLocalSpace;
    uint8 bKillOnDeactivate;
    uint8 bKillOnCompleted;
    TEnumAsByte<EParticleSortMode> SortMode;
    uint8 bUseLegacyEmitterTime;
    uint8 bRemoveHMDRoll;
    uint8 bEmitterDurationUseRange;
    float EmitterDuration;
    FRawDistributionFloat SpawnRate;
    TArray<FParticleBurst> BurstList;
    float EmitterDelay;
    float EmitterDelayLow;
    uint8 bDelayFirstLoopOnly;
    TEnumAsByte<EParticleSubUVInterpMethod> InterpolationMethod;
    uint8 bScaleUV;
    uint8 bEmitterDelayUseRange;
    TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;
    uint8 bOverrideSystemMacroUV;
    uint8 bUseMaxDrawCount;
    TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;
    TEnumAsByte<EEmitterNormalsMode> EmitterNormalsMode;
    uint8 bOrbitModuleAffectsVelocityAlignment;
    int32 SubImages_Horizontal;
    int32 SubImages_Vertical;
    float RandomImageTime;
    int32 RandomImageChanges;
    FVector MacroUVPosition;
    float MacroUVRadius;
    EParticleUVFlipMode UVFlippingMode;
    TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;
    uint8 bDurationRecalcEachLoop;
    FVector NormalsSphereCenter;
    float AlphaThreshold;
    int32 EmitterLoops;
    class UTexture2D* CutoutTexture;
    int32 MaxDrawCount;
    float EmitterDurationLow;
    FVector NormalsCylinderDirection;
    TArray<FName> NamedMaterialOverrides;

};

class UParticleModuleRotation : public UParticleModuleRotationBase
{
    FRawDistributionFloat StartRotation;

};

class UParticleModuleRotationBase : public UParticleModule
{
};

class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
    FRawDistributionFloat RotationOverLife;
    uint8 Scale;

};

class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
    FRawDistributionFloat StartRotationRate;

};

class UParticleModuleRotationRateBase : public UParticleModule
{
};

class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
    FRawDistributionFloat LifeMultiplier;

};

class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleSize : public UParticleModuleSizeBase
{
    FRawDistributionVector StartSize;

};

class UParticleModuleSizeBase : public UParticleModule
{
};

class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
    FRawDistributionVector LifeMultiplier;
    uint8 MultiplyX;
    uint8 MultiplyY;
    uint8 MultiplyZ;

};

class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
    FRawDistributionVector SizeScale;
    uint8 EnableX;
    uint8 EnableY;
    uint8 EnableZ;

};

class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
    FVector2D SpeedScale;
    FVector2D MaxScale;

};

class UParticleModuleSize_Seeded : public UParticleModuleSize
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
    FRawDistributionVector SourceMovementScale;

};

class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
    FRawDistributionFloat Rate;
    FRawDistributionFloat RateScale;
    TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;
    TArray<FParticleBurst> BurstList;
    FRawDistributionFloat BurstScale;
    uint8 bApplyGlobalSpawnRateScale;

};

class UParticleModuleSpawnBase : public UParticleModule
{
    uint8 bProcessSpawnRate;
    uint8 bProcessBurstList;

};

class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
    float UnitScalar;
    float MovementTolerance;
    FRawDistributionFloat SpawnPerUnit;
    float MaxFrameDistance;
    uint8 bIgnoreSpawnRateWhenMoving;
    uint8 bIgnoreMovementAlongX;
    uint8 bIgnoreMovementAlongY;
    uint8 bIgnoreMovementAlongZ;

};

class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
    class USubUVAnimation* Animation;
    FRawDistributionFloat SubImageIndex;
    uint8 bUseRealTime;

};

class UParticleModuleSubUVBase : public UParticleModule
{
};

class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
    uint8 bUseEmitterTime;
    FRawDistributionFloat FrameRate;
    int32 StartingFrame;

};

class UParticleModuleTrailBase : public UParticleModule
{
};

class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
    TEnumAsByte<ETrail2SourceMethod> SourceMethod;
    FName SourceName;
    FRawDistributionFloat SourceStrength;
    uint8 bLockSourceStength;
    int32 SourceOffsetCount;
    TArray<FVector> SourceOffsetDefaults;
    TEnumAsByte<EParticleSourceSelectionMethod> SelectionMethod;
    uint8 bInheritRotation;

};

class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
    uint8 bDeadTrailsOnDeactivate;
    uint8 bEnablePreviousTangentRecalculation;
    uint8 bTangentRecalculationEveryFrame;
    float TilingDistance;
    float DistanceTessellationStepSize;
    float TangentTessellationStepSize;
    float WidthTessellationStepSize;

};

class UParticleModuleTypeDataBase : public UParticleModule
{
};

class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
    TEnumAsByte<EBeam2Method> BeamMethod;
    int32 TextureTile;
    float TextureTileDistance;
    int32 Sheets;
    int32 MaxBeamCount;
    float Speed;
    int32 InterpolationPoints;
    uint8 bAlwaysOn;
    int32 UpVectorStepSize;
    FName BranchParentName;
    FRawDistributionFloat Distance;
    TEnumAsByte<EBeamTaperMethod> TaperMethod;
    FRawDistributionFloat TaperFactor;
    FRawDistributionFloat TaperScale;
    uint8 RenderGeometry;
    uint8 RenderDirectLine;
    uint8 RenderLines;
    uint8 RenderTessellation;

};

class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
    FGPUSpriteEmitterInfo EmitterInfo;
    FGPUSpriteResourceData ResourceData;
    float CameraMotionBlurAmount;
    uint8 bClearExistingParticlesOnInit;

};

class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
    class UStaticMesh* Mesh;
    float LODSizeScale;
    uint8 bUseStaticMeshLODs;
    uint8 CastShadows;
    uint8 DoCollisions;
    TEnumAsByte<EMeshScreenAlignment> MeshAlignment;
    uint8 bOverrideMaterial;
    uint8 bOverrideDefaultMotionBlurSettings;
    uint8 bEnableMotionBlur;
    FRawDistributionVector RollPitchYawRange;
    TEnumAsByte<EParticleAxisLock> AxisLockOption;
    uint8 bCameraFacing;
    TEnumAsByte<EMeshCameraFacingUpAxis> CameraFacingUpAxisOption;
    TEnumAsByte<EMeshCameraFacingOptions> CameraFacingOption;
    uint8 bApplyParticleRotationAsSpin;
    uint8 bFaceCameraDirectionRatherThanPosition;
    uint8 bCollisionsConsiderPartilceSize;

};

class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
    int32 MaxTessellationBetweenParticles;
    int32 SheetsPerTrail;
    int32 MaxTrailCount;
    int32 MaxParticleInTrailCount;
    uint8 bDeadTrailsOnDeactivate;
    uint8 bDeadTrailsOnSourceLoss;
    uint8 bClipSourceSegement;
    uint8 bEnablePreviousTangentRecalculation;
    uint8 bTangentRecalculationEveryFrame;
    uint8 bSpawnInitialParticle;
    TEnumAsByte<ETrailsRenderAxisOption> RenderAxis;
    float TangentSpawningScalar;
    uint8 bRenderGeometry;
    uint8 bRenderSpawnPoints;
    uint8 bRenderTangents;
    uint8 bRenderTessellation;
    float TilingDistance;
    float DistanceTessellationStepSize;
    uint8 bEnableTangentDiffInterpScale;
    float TangentTessellationScalar;

};

class UParticleModuleVectorFieldBase : public UParticleModule
{
};

class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
    uint8 bOverrideGlobalVectorFieldTightness;
    float GlobalVectorFieldScale;
    float GlobalVectorFieldTightness;

};

class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
    class UVectorField* VectorField;
    FVector RelativeTranslation;
    FRotator RelativeRotation;
    FVector RelativeScale3D;
    float Intensity;
    float Tightness;
    uint8 bIgnoreComponentTransform;
    uint8 bTileX;
    uint8 bTileY;
    uint8 bTileZ;
    uint8 bUseFixDT;

};

class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
    FVector MinInitialRotation;
    FVector MaxInitialRotation;

};

class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
    FVector RotationRate;

};

class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
    class UDistributionFloat* VectorFieldScale;
    FRawDistributionFloat VectorFieldScaleRaw;

};

class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
    class UDistributionFloat* VectorFieldScaleOverLife;
    FRawDistributionFloat VectorFieldScaleOverLifeRaw;

};

class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
    FRawDistributionVector StartVelocity;
    FRawDistributionFloat StartVelocityRadial;

};

class UParticleModuleVelocityBase : public UParticleModule
{
    uint8 bInWorldSpace;
    uint8 bApplyOwnerScale;

};

class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
    FRawDistributionFloat Angle;
    FRawDistributionFloat Velocity;
    FVector Direction;

};

class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
    FRawDistributionVector Scale;

};

class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
    FRawDistributionVector VelOverLife;
    uint8 Absolute;

};

class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
    FParticleRandomSeedInfo RandomSeedInfo;

};

class UParticleSpriteEmitter : public UParticleEmitter
{
};

class UParticleSystem : public UFXSystemAsset
{
    float UpdateTime_FPS;
    float UpdateTime_Delta;
    float WarmupTime;
    float WarmupTickRate;
    TArray<class UParticleEmitter*> Emitters;
    class UParticleSystemComponent* PreviewComponent;
    class UInterpCurveEdSetup* CurveEdSetup;
    float LODDistanceCheckTime;
    float MacroUVRadius;
    TArray<float> LODDistances;
    TArray<FParticleSystemLOD> LODSettings;
    FBox FixedRelativeBoundingBox;
    float SecondsBeforeInactive;
    float Delay;
    float DelayLow;
    uint8 bOrientZAxisTowardCamera;
    uint8 bUseFixedRelativeBoundingBox;
    uint8 bShouldResetPeakCounts;
    uint8 bHasPhysics;
    uint8 bUseRealtimeThumbnail;
    uint8 ThumbnailImageOutOfDate;
    uint8 bUseDelayRange;
    uint8 bAllowManagedTicking;
    uint8 bAutoDeactivate;
    uint8 bRegenerateLODDuplicate;
    TEnumAsByte<EParticleSystemUpdateMode> SystemUpdateMode;
    TEnumAsByte<ParticleSystemLODMethod> LODMethod;
    EParticleSystemInsignificanceReaction InsignificantReaction;
    TEnumAsByte<EParticleSystemOcclusionBoundsMethod> OcclusionBoundsMethod;
    EParticleSignificanceLevel MaxSignificanceLevel;
    uint32 MinTimeBetweenTicks;
    float InsignificanceDelay;
    FVector MacroUVPosition;
    FBox CustomOcclusionBounds;
    TArray<FLODSoloTrack> SoloTracking;
    TArray<FNamedEmitterMaterial> NamedMaterialSlots;

    bool ContainsEmitterType(UClass* TypeData);
};

class UParticleSystemComponent : public UFXSystemComponent
{
    class UParticleSystem* Template;
    TArray<class UMaterialInterface*> EmitterMaterials;
    TArray<class USkeletalMeshComponent*> SkelMeshComponents;
    uint8 bResetOnDetach;
    uint8 bUpdateOnDedicatedServer;
    uint8 bAllowRecycling;
    uint8 bAutoManageAttachment;
    uint8 bAutoAttachWeldSimulatedBodies;
    uint8 bWarmingUp;
    uint8 bOverrideLODMethod;
    uint8 bSkipUpdateDynamicDataDuringTick;
    TEnumAsByte<ParticleSystemLODMethod> LODMethod;
    EParticleSignificanceLevel RequiredSignificance;
    TArray<FParticleSysParam> InstanceParameters;
    FParticleSystemComponentOnParticleSpawn OnParticleSpawn;
    void ParticleSpawnSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity);
    FParticleSystemComponentOnParticleBurst OnParticleBurst;
    void ParticleBurstSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    FParticleSystemComponentOnParticleDeath OnParticleDeath;
    void ParticleDeathSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction);
    FParticleSystemComponentOnParticleCollide OnParticleCollide;
    void ParticleCollisionSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, class UPhysicalMaterial* PhysMat);
    bool bOldPositionValid;
    FVector OldPosition;
    FVector PartSysVelocity;
    float WarmupTime;
    float WarmupTickRate;
    float SecondsBeforeInactive;
    float MaxTimeBeforeForceUpdateTransform;
    TArray<class UParticleSystemReplay*> ReplayClips;
    float CustomTimeDilation;
    TWeakObjectPtr<class USceneComponent> AutoAttachParent;
    FName AutoAttachSocketName;
    EAttachmentRule AutoAttachLocationRule;
    EAttachmentRule AutoAttachRotationRule;
    EAttachmentRule AutoAttachScaleRule;
    FParticleSystemComponentOnSystemFinished OnSystemFinished;
    void OnSystemFinished(class UParticleSystemComponent* PSystem);

    void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
    void SetTemplate(class UParticleSystem* NewTemplate);
    void SetMaterialParameter(FName ParameterName, class UMaterialInterface* Param);
    void SetBeamTargetTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 TargetIndex);
    void SetBeamTargetStrength(int32 EmitterIndex, float NewTargetStrength, int32 TargetIndex);
    void SetBeamTargetPoint(int32 EmitterIndex, FVector NewTargetPoint, int32 TargetIndex);
    void SetBeamSourceTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 SourceIndex);
    void SetBeamSourceStrength(int32 EmitterIndex, float NewSourceStrength, int32 SourceIndex);
    void SetBeamSourcePoint(int32 EmitterIndex, FVector NewSourcePoint, int32 SourceIndex);
    void SetBeamEndPoint(int32 EmitterIndex, FVector NewEndPoint);
    void SetAutoAttachParams(class USceneComponent* Parent, FName SocketName, TEnumAsByte<EAttachLocation::Type> LocationType);
    int32 GetNumActiveParticles();
    class UMaterialInterface* GetNamedMaterial(FName InName);
    bool GetBeamTargetTangent(int32 EmitterIndex, int32 TargetIndex, FVector& OutTangentPoint);
    bool GetBeamTargetStrength(int32 EmitterIndex, int32 TargetIndex, float& OutTargetStrength);
    bool GetBeamTargetPoint(int32 EmitterIndex, int32 TargetIndex, FVector& OutTargetPoint);
    bool GetBeamSourceTangent(int32 EmitterIndex, int32 SourceIndex, FVector& OutTangentPoint);
    bool GetBeamSourceStrength(int32 EmitterIndex, int32 SourceIndex, float& OutSourceStrength);
    bool GetBeamSourcePoint(int32 EmitterIndex, int32 SourceIndex, FVector& OutSourcePoint);
    bool GetBeamEndPoint(int32 EmitterIndex, FVector& OutEndPoint);
    void GenerateParticleEvent(const FName InEventName, const float InEmitterTime, const FVector InLocation, const FVector InDirection, const FVector InVelocity);
    void EndTrails();
    class UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(FName InName, class UMaterialInterface* SourceMaterial);
    void BeginTrails(FName InFirstSocketName, FName InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
};

class UParticleSystemReplay : public UObject
{
    int32 ClipIDNumber;

};

class UPawnMovementComponent : public UNavMovementComponent
{
    class APawn* PawnOwner;

    FVector K2_GetInputVector();
    bool IsMoveInputIgnored();
    FVector GetPendingInputVector();
    class APawn* GetPawnOwner();
    FVector GetLastInputVector();
    FVector ConsumeInputVector();
    void AddInputVector(FVector WorldVector, bool bForce);
};

class UPawnNoiseEmitterComponent : public UActorComponent
{
    uint8 bAIPerceptionSystemCompatibilityMode;
    FVector LastRemoteNoisePosition;
    float NoiseLifetime;
    float LastRemoteNoiseVolume;
    float LastRemoteNoiseTime;
    float LastLocalNoiseVolume;
    float LastLocalNoiseTime;

    void MakeNoise(class AActor* NoiseMaker, float Loudness, const FVector& NoiseLocation);
};

class UPendingNetGame : public UObject
{
    class UNetDriver* NetDriver;
    class UDemoNetDriver* DemoNetDriver;

};

class UPhysicalAnimationComponent : public UActorComponent
{
    float StrengthMultiplyer;
    class USkeletalMeshComponent* SkeletalMeshComponent;

    void SetStrengthMultiplyer(float InStrengthMultiplyer);
    void SetSkeletalMeshComponent(class USkeletalMeshComponent* InSkeletalMeshComponent);
    FTransform GetBodyTargetTransform(FName BodyName);
    void ApplyPhysicalAnimationSettingsBelow(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
    void ApplyPhysicalAnimationSettings(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData);
    void ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound);
};

class UPhysicalMaterialMask : public UObject
{
    int32 UVChannelIndex;
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;

};

class UPhysicsAsset : public UObject
{
    TArray<int32> BoundsBodies;
    TArray<class USkeletalBodySetup*> SkeletalBodySetups;
    TArray<class UPhysicsConstraintTemplate*> ConstraintSetup;
    FSolverIterations SolverIterations;
    EPhysicsAssetSolverType SolverType;
    uint8 bNotForDedicatedServer;
    class UThumbnailInfo* ThumbnailInfo;
    TArray<class UBodySetup*> BodySetup;

};

class UPhysicsCollisionHandler : public UObject
{
    float ImpactThreshold;
    float ImpactReFireDelay;
    class USoundBase* DefaultImpactSound;
    float LastImpactSoundTime;

};

class UPhysicsConstraintComponent : public USceneComponent
{
    class AActor* ConstraintActor1;
    FConstrainComponentPropName ComponentName1;
    class AActor* ConstraintActor2;
    FConstrainComponentPropName ComponentName2;
    class UPhysicsConstraintTemplate* ConstraintSetup;
    FPhysicsConstraintComponentOnConstraintBroken OnConstraintBroken;
    void ConstraintBrokenSignature(int32 ConstraintIndex);
    FConstraintInstance ConstraintInstance;

    void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    void SetOrientationDriveSLERP(bool bEnableSLERP);
    void SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    void SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    void SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    void SetLinearVelocityTarget(const FVector& InVelTarget);
    void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearPositionTarget(const FVector& InPosTarget);
    void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold);
    void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
    void SetDisableCollision(bool bDisableCollision);
    void SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame::Type> Frame, const FVector& RefPosition);
    void SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame::Type> Frame, const FVector& PriAxis, const FVector& SecAxis);
    void SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame::Type> Frame, const FTransform& RefFrame);
    void SetConstrainedComponents(class UPrimitiveComponent* Component1, FName BoneName1, class UPrimitiveComponent* Component2, FName BoneName2);
    void SetAngularVelocityTarget(const FVector& InVelTarget);
    void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
    void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);
    void SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);
    void SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);
    void SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold);
    void SetAngularOrientationTarget(const FRotator& InPosTarget);
    void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    void SetAngularDriveMode(TEnumAsByte<EAngularDriveMode::Type> DriveMode);
    void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
    bool IsBroken();
    float GetCurrentTwist();
    float GetCurrentSwing2();
    float GetCurrentSwing1();
    void GetConstraintForce(FVector& OutLinearForce, FVector& OutAngularForce);
    void BreakConstraint();
};

class UPhysicsConstraintTemplate : public UObject
{
    FConstraintInstance DefaultInstance;
    TArray<FPhysicsConstraintProfileHandle> ProfileHandles;
    FConstraintProfileProperties DefaultProfile;

};

class UPhysicsFieldComponent : public USceneComponent
{
};

class UPhysicsHandleComponent : public UActorComponent
{
    class UPrimitiveComponent* GrabbedComponent;
    uint8 bSoftAngularConstraint;
    uint8 bSoftLinearConstraint;
    uint8 bInterpolateTarget;
    float LinearDamping;
    float LinearStiffness;
    float AngularDamping;
    float AngularStiffness;
    float InterpolationSpeed;

    void SetTargetRotation(FRotator NewRotation);
    void SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation);
    void SetTargetLocation(FVector NewLocation);
    void SetLinearStiffness(float NewLinearStiffness);
    void SetLinearDamping(float NewLinearDamping);
    void SetInterpolationSpeed(float NewInterpolationSpeed);
    void SetAngularStiffness(float NewAngularStiffness);
    void SetAngularDamping(float NewAngularDamping);
    void ReleaseComponent();
    void GrabComponentAtLocationWithRotation(class UPrimitiveComponent* Component, FName InBoneName, FVector Location, FRotator Rotation);
    void GrabComponentAtLocation(class UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation);
    void GrabComponent(class UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation, bool bConstrainRotation);
    void GetTargetLocationAndRotation(FVector& TargetLocation, FRotator& TargetRotation);
    class UPrimitiveComponent* GetGrabbedComponent();
};

class UPhysicsSettings : public UPhysicsSettingsCore
{
    FRigidBodyErrorCorrection PhysicErrorCorrection;
    TEnumAsByte<ESettingsLockedAxis::Type> LockedAxis;
    TEnumAsByte<ESettingsDOF::Type> DefaultDegreesOfFreedom;
    bool bSuppressFaceRemapTable;
    bool bSupportUVFromHitResults;
    bool bDisableActiveActors;
    bool bDisableKinematicStaticPairs;
    bool bDisableKinematicKinematicPairs;
    bool bDisableCCD;
    bool bEnableEnhancedDeterminism;
    float AnimPhysicsMinDeltaTime;
    bool bSimulateAnimPhysicsAfterReset;
    float MaxPhysicsDeltaTime;
    bool bSubstepping;
    bool bSubsteppingAsync;
    float MaxSubstepDeltaTime;
    int32 MaxSubsteps;
    float SyncSceneSmoothingFactor;
    float InitialAverageFrameRate;
    int32 PhysXTreeRebuildRate;
    TArray<FPhysicalSurfaceName> PhysicalSurfaces;
    FBroadphaseSettings DefaultBroadphaseSettings;
    float MinDeltaVelocityForHitEvents;
    FChaosPhysicsSettings ChaosSettings;

};

class UPhysicsSpringComponent : public USceneComponent
{
    float SpringStiffness;
    float SpringDamping;
    float SpringLengthAtRest;
    float SpringRadius;
    TEnumAsByte<ECollisionChannel> SpringChannel;
    bool bIgnoreSelf;
    float SpringCompression;

    FVector GetSpringRestingPoint();
    FVector GetSpringDirection();
    FVector GetSpringCurrentEndPoint();
    float GetNormalizedCompressionScalar();
};

class UPhysicsThrusterComponent : public USceneComponent
{
    float ThrustStrength;

};

class UPlanarReflectionComponent : public USceneCaptureComponent
{
    class UBoxComponent* PreviewBox;
    float NormalDistortionStrength;
    float PrefilterRoughness;
    float PrefilterRoughnessDistance;
    int32 ScreenPercentage;
    float ExtraFOV;
    float DistanceFromPlaneFadeStart;
    float DistanceFromPlaneFadeEnd;
    float DistanceFromPlaneFadeoutStart;
    float DistanceFromPlaneFadeoutEnd;
    float AngleFromPlaneFadeStart;
    float AngleFromPlaneFadeEnd;
    bool bShowPreviewPlane;
    bool bRenderSceneTwoSided;

};

class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
    float InfluenceRadiusScale;
    class UDrawSphereComponent* PreviewInfluenceRadius;
    class UBoxComponent* PreviewCaptureBox;

};

class UPlatformEventsComponent : public UActorComponent
{
    FPlatformEventsComponentPlatformChangedToLaptopModeDelegate PlatformChangedToLaptopModeDelegate;
    void PlatformEventDelegate();
    FPlatformEventsComponentPlatformChangedToTabletModeDelegate PlatformChangedToTabletModeDelegate;
    void PlatformEventDelegate();

    bool SupportsConvertibleLaptops();
    void PlatformEventDelegate__DelegateSignature();
    bool IsInTabletMode();
    bool IsInLaptopMode();
};

class UPlatformGameInstance : public UGameInstance
{
    FPlatformGameInstanceApplicationWillDeactivateDelegate ApplicationWillDeactivateDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationHasReactivatedDelegate ApplicationHasReactivatedDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationWillEnterBackgroundDelegate ApplicationWillEnterBackgroundDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationHasEnteredForegroundDelegate ApplicationHasEnteredForegroundDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationWillTerminateDelegate ApplicationWillTerminateDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationShouldUnloadResourcesDelegate ApplicationShouldUnloadResourcesDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationReceivedStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;
    void PlatformStartupArgumentsDelegate(const TArray<FString>& StartupArguments);
    FPlatformGameInstanceApplicationRegisteredForRemoteNotificationsDelegate ApplicationRegisteredForRemoteNotificationsDelegate;
    void PlatformRegisteredForRemoteNotificationsDelegate(const TArray<uint8>& inArray);
    FPlatformGameInstanceApplicationRegisteredForUserNotificationsDelegate ApplicationRegisteredForUserNotificationsDelegate;
    void PlatformRegisteredForUserNotificationsDelegate(int32 inInt);
    FPlatformGameInstanceApplicationFailedToRegisterForRemoteNotificationsDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate;
    void PlatformFailedToRegisterForRemoteNotificationsDelegate(FString inString);
    FPlatformGameInstanceApplicationReceivedRemoteNotificationDelegate ApplicationReceivedRemoteNotificationDelegate;
    void PlatformReceivedRemoteNotificationDelegate(FString inString, TEnumAsByte<EApplicationState::Type> inAppState);
    FPlatformGameInstanceApplicationReceivedLocalNotificationDelegate ApplicationReceivedLocalNotificationDelegate;
    void PlatformReceivedLocalNotificationDelegate(FString inString, int32 inInt, TEnumAsByte<EApplicationState::Type> inAppState);
    FPlatformGameInstanceApplicationReceivedScreenOrientationChangedNotificationDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate;
    void PlatformScreenOrientationChangedDelegate(TEnumAsByte<EScreenOrientation::Type> inScreenOrientation);

};

class UPlatformInterfaceBase : public UObject
{
    TArray<FDelegateArray> AllDelegates;

};

class UPlatformInterfaceWebResponse : public UObject
{
    FString OriginalURL;
    int32 ResponseCode;
    int32 Tag;
    FString StringResponse;
    TArray<uint8> BinaryResponse;

    int32 GetNumHeaders();
    FString GetHeaderValue(FString HeaderName);
    void GetHeader(int32 HeaderIndex, FString& Header, FString& Value);
};

class UPlayer : public UObject
{
    class APlayerController* PlayerController;
    int32 CurrentNetSpeed;
    int32 ConfiguredInternetSpeed;
    int32 ConfiguredLanSpeed;

};

class UPlayerInput : public UObject
{
    TArray<FKeyBind> DebugExecBindings;
    TArray<FName> InvertedAxis;

    void SetMouseSensitivity(const float Sensitivity);
    void SetBind(FName BindName, FString Command);
    void InvertAxisKey(const FKey AxisKey);
    void InvertAxis(const FName AxisName);
    void ClearSmoothing();
};

class UPluginCommandlet : public UCommandlet
{
};

class UPointLightComponent : public ULocalLightComponent
{
    uint8 bUseInverseSquaredFalloff;
    float LightFalloffExponent;
    float SourceRadius;
    float SoftSourceRadius;
    float SourceLength;

    void SetSourceRadius(float bNewValue);
    void SetSourceLength(float NewValue);
    void SetSoftSourceRadius(float bNewValue);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
};

class UPolys : public UObject
{
};

class UPoseAsset : public UAnimationAsset
{
    FPoseDataContainer PoseContainer;
    bool bAdditivePose;
    int32 BasePoseIndex;
    FName RetargetSource;
    TArray<FTransform> RetargetSourceAssetReferencePose;

};

class UPoseWatch : public UObject
{
    class UEdGraphNode* Node;
    FColor PoseWatchColour;

};

class UPoseableMeshComponent : public USkinnedMeshComponent
{

    void SetBoneTransformByName(FName BoneName, const FTransform& InTransform, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    void SetBoneScaleByName(FName BoneName, FVector InScale3D, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    void SetBoneRotationByName(FName BoneName, FRotator InRotation, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    void SetBoneLocationByName(FName BoneName, FVector InLocation, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    void ResetBoneTransformByName(FName BoneName);
    FTransform GetBoneTransformByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    FVector GetBoneScaleByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    FRotator GetBoneRotationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    FVector GetBoneLocationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    void CopyPoseFromSkeletalComponent(class USkeletalMeshComponent* InComponentToCopy);
};

class UPostProcessComponent : public USceneComponent
{
    FPostProcessSettings Settings;
    float Priority;
    float BlendRadius;
    float BlendWeight;
    uint8 bEnabled;
    uint8 bUnbound;

    void AddOrUpdateBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight);
};

class UPreviewMeshCollection : public UDataAsset
{
    class USkeleton* Skeleton;
    TArray<FPreviewMeshCollectionEntry> SkeletalMeshes;

};

class UPrimaryAssetLabel : public UPrimaryDataAsset
{
    FPrimaryAssetRules Rules;
    uint8 bLabelAssetsInMyDirectory;
    uint8 bIsRuntimeLabel;
    TArray<TSoftObjectPtr<UObject>> ExplicitAssets;
    TArray<TSoftClassPtr<UObject>> ExplicitBlueprints;
    FCollectionReference AssetCollection;

};

class UPrimaryDataAsset : public UDataAsset
{
};

class UPrimitiveComponent : public USceneComponent
{
    float MinDrawDistance;
    float LDMaxDrawDistance;
    float CachedMaxDrawDistance;
    TEnumAsByte<ESceneDepthPriorityGroup> DepthPriorityGroup;
    TEnumAsByte<ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup;
    TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality;
    ELightmapType LightmapType;
    uint8 bUseMaxLODAsImposter;
    uint8 bBatchImpostersAsInstances;
    uint8 bNeverDistanceCull;
    uint8 bAlwaysCreatePhysicsState;
    uint8 bGenerateOverlapEvents;
    uint8 bMultiBodyOverlap;
    uint8 bTraceComplexOnMove;
    uint8 bReturnMaterialOnMove;
    uint8 bUseViewOwnerDepthPriorityGroup;
    uint8 bAllowCullDistanceVolume;
    uint8 bHasMotionBlurVelocityMeshes;
    uint8 bVisibleInReflectionCaptures;
    uint8 bVisibleInRealTimeSkyCaptures;
    uint8 bVisibleInRayTracing;
    uint8 bRenderInMainPass;
    uint8 bRenderInDepthPass;
    uint8 bReceivesDecals;
    uint8 bOwnerNoSee;
    uint8 bOnlyOwnerSee;
    uint8 bTreatAsBackgroundForOcclusion;
    uint8 bUseAsOccluder;
    uint8 bSelectable;
    uint8 bForceMipStreaming;
    uint8 bHasPerInstanceHitProxies;
    uint8 CastShadow;
    uint8 bAffectDynamicIndirectLighting;
    uint8 bAffectDistanceFieldLighting;
    uint8 bCastDynamicShadow;
    uint8 bCastStaticShadow;
    uint8 bCastVolumetricTranslucentShadow;
    uint8 bCastContactShadow;
    uint8 bSelfShadowOnly;
    uint8 bCastFarShadow;
    uint8 bCastInsetShadow;
    uint8 bCastCinematicShadow;
    uint8 bCastHiddenShadow;
    uint8 bCastShadowAsTwoSided;
    uint8 bLightAsIfStatic;
    uint8 bLightAttachmentsAsGroup;
    uint8 bExcludeFromLightAttachmentGroup;
    uint8 bReceiveMobileCSMShadows;
    uint8 bSingleSampleShadowFromStationaryLights;
    uint8 bIgnoreRadialImpulse;
    uint8 bIgnoreRadialForce;
    uint8 bApplyImpulseOnDamage;
    uint8 bReplicatePhysicsToAutonomousProxy;
    uint8 bFillCollisionUnderneathForNavmesh;
    uint8 AlwaysLoadOnClient;
    uint8 AlwaysLoadOnServer;
    uint8 bUseEditorCompositing;
    uint8 bRenderCustomDepth;
    uint8 bVisibleInSceneCaptureOnly;
    uint8 bHiddenInSceneCapture;
    TEnumAsByte<EHasCustomNavigableGeometry::Type> bHasCustomNavigableGeometry;
    TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;
    FLightingChannels LightingChannels;
    ERendererStencilMask CustomDepthStencilWriteMask;
    int32 CustomDepthStencilValue;
    FCustomPrimitiveData CustomPrimitiveData;
    FCustomPrimitiveData CustomPrimitiveDataInternal;
    int32 TranslucencySortPriority;
    float TranslucencySortDistanceOffset;
    int32 VisibilityId;
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures;
    int8 VirtualTextureLodBias;
    int8 VirtualTextureCullMips;
    int8 VirtualTextureMinCoverage;
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    float LpvBiasMultiplier;
    float BoundsScale;
    TArray<class AActor*> MoveIgnoreActors;
    TArray<class UPrimitiveComponent*> MoveIgnoreComponents;
    FBodyInstance BodyInstance;
    FPrimitiveComponentOnComponentHit OnComponentHit;
    void ComponentHitSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    FPrimitiveComponentOnComponentBeginOverlap OnComponentBeginOverlap;
    void ComponentBeginOverlapSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    FPrimitiveComponentOnComponentEndOverlap OnComponentEndOverlap;
    void ComponentEndOverlapSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    FPrimitiveComponentOnComponentWake OnComponentWake;
    void ComponentWakeSignature(class UPrimitiveComponent* WakingComponent, FName BoneName);
    FPrimitiveComponentOnComponentSleep OnComponentSleep;
    void ComponentSleepSignature(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    FPrimitiveComponentOnBeginCursorOver OnBeginCursorOver;
    void ComponentBeginCursorOverSignature(class UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnEndCursorOver OnEndCursorOver;
    void ComponentEndCursorOverSignature(class UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnClicked OnClicked;
    void ComponentOnClickedSignature(class UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    FPrimitiveComponentOnReleased OnReleased;
    void ComponentOnReleasedSignature(class UPrimitiveComponent* TouchedComponent, FKey ButtonReleased);
    FPrimitiveComponentOnInputTouchBegin OnInputTouchBegin;
    void ComponentOnInputTouchBeginSignature(TEnumAsByte<ETouchIndex::Type> FingerIndex, class UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnInputTouchEnd OnInputTouchEnd;
    void ComponentOnInputTouchEndSignature(TEnumAsByte<ETouchIndex::Type> FingerIndex, class UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnInputTouchEnter OnInputTouchEnter;
    void ComponentBeginTouchOverSignature(TEnumAsByte<ETouchIndex::Type> FingerIndex, class UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnInputTouchLeave OnInputTouchLeave;
    void ComponentEndTouchOverSignature(TEnumAsByte<ETouchIndex::Type> FingerIndex, class UPrimitiveComponent* TouchedComponent);
    class UPrimitiveComponent* LODParentPrimitive;

    bool WasRecentlyRendered(float Tolerance);
    void WakeRigidBody(FName BoneName);
    void WakeAllRigidBodies();
    void SetWalkableSlopeOverride(const FWalkableSlopeOverride& NewOverride);
    void SetVisibleInSceneCaptureOnly(bool bValue);
    void SetUseCCD(bool InUseCCD, FName BoneName);
    void SetTranslucentSortPriority(int32 NewTranslucentSortPriority);
    void SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset);
    void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
    void SetSimulatePhysics(bool bSimulate);
    void SetRenderInMainPass(bool bValue);
    void SetRenderCustomDepth(bool bValue);
    void SetReceivesDecals(bool bNewReceivesDecals);
    void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
    void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocity(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetOwnerNoSee(bool bNewOwnerNoSee);
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
    void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
    void SetMaterialByName(FName MaterialSlotName, class UMaterialInterface* Material);
    void SetMaterial(int32 ElementIndex, class UMaterialInterface* Material);
    void SetMassScale(FName BoneName, float InMassScale);
    void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass);
    void SetLinearDamping(float InDamping);
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);
    void SetHiddenInSceneCapture(bool bValue);
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
    void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);
    void SetEnableGravity(bool bGravityEnabled);
    void SetDefaultCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);
    void SetDefaultCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);
    void SetDefaultCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);
    void SetDefaultCustomPrimitiveDataFloat(int32 DataIndex, float Value);
    void SetCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);
    void SetCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);
    void SetCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);
    void SetCustomPrimitiveDataFloat(int32 DataIndex, float Value);
    void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);
    void SetCustomDepthStencilValue(int32 Value);
    void SetCullDistance(float NewCullDistance);
    void SetConstraintMode(TEnumAsByte<EDOFMode::Type> ConstraintMode);
    void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
    void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps);
    void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
    void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled::Type> NewType);
    void SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName);
    void SetCastShadow(bool NewCastShadow);
    void SetCastInsetShadow(bool bInCastInsetShadow);
    void SetCastHiddenShadow(bool NewCastHiddenShadow);
    void SetBoundsScale(float NewBoundsScale);
    void SetAngularDamping(float InDamping);
    void SetAllUseCCD(bool InUseCCD);
    void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocityInRadians(const FVector& NewAngVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocityInDegrees(const FVector& NewAngVel, bool bAddToCurrent);
    void SetAllMassScale(float InMassScale);
    FVector ScaleByMomentOfInertia(FVector InputVector, FName BoneName);
    void PutRigidBodyToSleep(FName BoneName);
    bool K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_IsQueryCollisionEnabled();
    bool K2_IsPhysicsCollisionEnabled();
    bool K2_IsCollisionEnabled();
    bool K2_BoxOverlapComponent(FVector InBoxCentre, const FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool IsOverlappingComponent(const class UPrimitiveComponent* OtherComp);
    bool IsOverlappingActor(const class AActor* Other);
    bool IsGravityEnabled();
    bool IsAnyRigidBodyAwake();
    void IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore);
    void IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);
    FWalkableSlopeOverride GetWalkableSlopeOverride();
    FVector GetPhysicsLinearVelocityAtPoint(FVector Point, FName BoneName);
    FVector GetPhysicsLinearVelocity(FName BoneName);
    FVector GetPhysicsAngularVelocityInRadians(FName BoneName);
    FVector GetPhysicsAngularVelocityInDegrees(FName BoneName);
    FVector GetPhysicsAngularVelocity(FName BoneName);
    void GetOverlappingComponents(TArray<class UPrimitiveComponent*>& OutOverlappingComponents);
    void GetOverlappingActors(TArray<class AActor*>& OverlappingActors, TSubclassOf<class AActor> ClassFilter);
    int32 GetNumMaterials();
    class UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex);
    class UMaterialInterface* GetMaterial(int32 ElementIndex);
    float GetMassScale(FName BoneName);
    float GetMass();
    float GetLinearDamping();
    FVector GetInertiaTensor(FName BoneName);
    bool GetGenerateOverlapEvents();
    TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel);
    FName GetCollisionProfileName();
    TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
    TEnumAsByte<ECollisionEnabled::Type> GetCollisionEnabled();
    float GetClosestPointOnCollision(const FVector& Point, FVector& OutPointOnBody, FName BoneName);
    FVector GetCenterOfMass(FName BoneName);
    float GetAngularDamping();
    class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32 ElementIndex, class UMaterialInterface* SourceMaterial, FName OptionalName);
    class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32 ElementIndex, class UMaterialInterface* Parent);
    class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32 ElementIndex);
    TArray<class UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
    TArray<class AActor*> CopyArrayOfMoveIgnoreActors();
    void ClearMoveIgnoreComponents();
    void ClearMoveIgnoreActors();
    bool CanCharacterStepUp(class APawn* Pawn);
    void AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange);
    void AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange);
    void AddTorque(FVector Torque, FName BoneName, bool bAccelChange);
    void AddRadialImpulse(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
    void AddRadialForce(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
    void AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);
    void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange);
    void AddForceAtLocationLocal(FVector force, FVector Location, FName BoneName);
    void AddForceAtLocation(FVector force, FVector Location, FName BoneName);
    void AddForce(FVector force, FName BoneName, bool bAccelChange);
    void AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange);
    void AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange);
    void AddAngularImpulse(FVector Impulse, FName BoneName, bool bVelChange);
};

class UProjectileMovementComponent : public UMovementComponent
{
    float InitialSpeed;
    float MaxSpeed;
    uint8 bRotationFollowsVelocity;
    uint8 bRotationRemainsVertical;
    uint8 bShouldBounce;
    uint8 bInitialVelocityInLocalSpace;
    uint8 bForceSubStepping;
    uint8 bSimulationEnabled;
    uint8 bSweepCollision;
    uint8 bIsHomingProjectile;
    uint8 bBounceAngleAffectsFriction;
    uint8 bIsSliding;
    uint8 bInterpMovement;
    uint8 bInterpRotation;
    float PreviousHitTime;
    FVector PreviousHitNormal;
    float ProjectileGravityScale;
    float Buoyancy;
    float Bounciness;
    float Friction;
    float BounceVelocityStopSimulatingThreshold;
    float MinFrictionFraction;
    FProjectileMovementComponentOnProjectileBounce OnProjectileBounce;
    void OnProjectileBounceDelegate(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    FProjectileMovementComponentOnProjectileStop OnProjectileStop;
    void OnProjectileStopDelegate(const FHitResult& ImpactResult);
    float HomingAccelerationMagnitude;
    TWeakObjectPtr<class USceneComponent> HomingTargetComponent;
    float MaxSimulationTimeStep;
    int32 MaxSimulationIterations;
    int32 BounceAdditionalIterations;
    float InterpLocationTime;
    float InterpRotationTime;
    float InterpLocationMaxLagDistance;
    float InterpLocationSnapToTargetDistance;

    void StopSimulating(const FHitResult& HitResult);
    void SetVelocityInLocalSpace(FVector NewVelocity);
    void SetInterpolatedComponent(class USceneComponent* Component);
    void ResetInterpolation();
    void OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void MoveInterpolationTarget(const FVector& NewLocation, const FRotator& NewRotation);
    FVector LimitVelocity(FVector NewVelocity);
    bool IsVelocityUnderSimulationThreshold();
    bool IsInterpolationComplete();
};

class UProxyLODMeshSimplificationSettings : public UDeveloperSettings
{
    FName ProxyLODMeshReductionModuleName;

};

class URadialForceComponent : public USceneComponent
{
    float Radius;
    TEnumAsByte<ERadialImpulseFalloff> Falloff;
    float ImpulseStrength;
    uint8 bImpulseVelChange;
    uint8 bIgnoreOwningActor;
    float ForceStrength;
    float DestructibleDamage;
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;

    void RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
    void FireImpulse();
    void AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
};

class URectLightComponent : public ULocalLightComponent
{
    float SourceWidth;
    float SourceHeight;
    float BarnDoorAngle;
    float BarnDoorLength;
    class UTexture* SourceTexture;

    void SetSourceWidth(float bNewValue);
    void SetSourceTexture(class UTexture* bNewValue);
    void SetSourceHeight(float NewValue);
    void SetBarnDoorLength(float NewValue);
    void SetBarnDoorAngle(float NewValue);
};

class UReflectionCaptureComponent : public USceneComponent
{
    class UBillboardComponent* CaptureOffsetComponent;
    EReflectionSourceType ReflectionSourceType;
    EMobileReflectionCompression MobileReflectionCompression;
    class UTextureCube* Cubemap;
    float SourceCubemapAngle;
    float Brightness;
    bool bModifyMaxValueRGBM;
    float MaxValueRGBM;
    FVector CaptureOffset;
    FGuid MapBuildDataId;
    class UTextureCube* CachedEncodedHDRCubemap;

};

class URendererOverrideSettings : public UDeveloperSettings
{
    uint8 bSupportAllShaderPermutations;
    uint8 bForceRecomputeTangents;

};

class URendererSettings : public UDeveloperSettings
{
    uint8 bMobileDisableVertexFog;
    int32 MaxMobileCascades;
    TEnumAsByte<EMobileMSAASampleCount::Type> MobileMSAASampleCount;
    uint8 bMobileAllowDitheredLODTransition;
    uint8 bMobileAllowSoftwareOcclusionCulling;
    uint8 bMobileVirtualTextures;
    uint8 bDiscardUnusedQualityLevels;
    uint8 bOcclusionCulling;
    float MinScreenRadiusForLights;
    float MinScreenRadiusForEarlyZPass;
    float MinScreenRadiusForCSMdepth;
    uint8 bPrecomputedVisibilityWarning;
    uint8 bTextureStreaming;
    uint8 bUseDXT5NormalMaps;
    uint8 bVirtualTextures;
    uint8 bVirtualTextureEnableAutoImport;
    uint8 bVirtualTexturedLightmaps;
    uint32 VirtualTextureTileSize;
    uint32 VirtualTextureTileBorderSize;
    uint32 VirtualTextureFeedbackFactor;
    uint8 bVirtualTextureEnableCompressZlib;
    uint8 bVirtualTextureEnableCompressCrunch;
    uint8 bClearCoatEnableSecondNormal;
    int32 ReflectionCaptureResolution;
    uint8 bReflectionCaptureCompression;
    uint8 ReflectionEnvironmentLightmapMixBasedOnRoughness;
    uint8 bForwardShading;
    uint8 bVertexFoggingForOpaque;
    uint8 bAllowStaticLighting;
    uint8 bUseNormalMapsForStaticLighting;
    uint8 bGenerateMeshDistanceFields;
    uint8 bEightBitMeshDistanceFields;
    uint8 bGenerateLandscapeGIData;
    uint8 bCompressMeshDistanceFields;
    float TessellationAdaptivePixelsPerTriangle;
    uint8 bSeparateTranslucency;
    TEnumAsByte<ETranslucentSortPolicy::Type> TranslucentSortPolicy;
    FVector TranslucentSortAxis;
    TEnumAsByte<EFixedFoveationLevels::Type> HMDFixedFoveationLevel;
    TEnumAsByte<ECustomDepthStencil::Type> CustomDepthStencil;
    uint8 bCustomDepthTaaJitter;
    TEnumAsByte<EAlphaChannelMode::Type> bEnableAlphaChannelInPostProcessing;
    uint8 bDefaultFeatureBloom;
    uint8 bDefaultFeatureAmbientOcclusion;
    uint8 bDefaultFeatureAmbientOcclusionStaticFraction;
    uint8 bDefaultFeatureAutoExposure;
    TEnumAsByte<EAutoExposureMethodUI::Type> DefaultFeatureAutoExposure;
    float DefaultFeatureAutoExposureBias;
    uint8 bExtendDefaultLuminanceRangeInAutoExposureSettings;
    uint8 bUsePreExposure;
    uint8 bEnablePreExposureOnlyInTheEditor;
    uint8 bDefaultFeatureMotionBlur;
    uint8 bDefaultFeatureLensFlare;
    uint8 bTemporalUpsampling;
    uint8 bSSGI;
    TEnumAsByte<EAntiAliasingMethod> DefaultFeatureAntiAliasing;
    ELightUnits DefaultLightUnits;
    TEnumAsByte<EDefaultBackBufferPixelFormat::Type> DefaultBackBufferPixelFormat;
    uint8 bRenderUnbuiltPreviewShadowsInGame;
    uint8 bStencilForLODDither;
    TEnumAsByte<EEarlyZPass::Type> EarlyZPass;
    uint8 bEarlyZPassOnlyMaterialMasking;
    uint8 bDBuffer;
    TEnumAsByte<EClearSceneOptions::Type> ClearSceneMethod;
    uint8 bBasePassOutputsVelocity;
    uint8 bVertexDeformationOutputsVelocity;
    uint8 bSelectiveBasePassOutputs;
    uint8 bDefaultParticleCutouts;
    int32 GPUSimulationTextureSizeX;
    int32 GPUSimulationTextureSizeY;
    uint8 bGlobalClipPlane;
    TEnumAsByte<EGBufferFormat::Type> GBufferFormat;
    uint8 bUseGPUMorphTargets;
    uint8 bNvidiaAftermathEnabled;
    uint8 bMultiView;
    uint8 bMobilePostProcessing;
    uint8 bMobileMultiView;
    uint8 bMobileUseHWsRGBEncoding;
    uint8 bRoundRobinOcclusion;
    uint8 bODSCapture;
    uint8 bMeshStreaming;
    float WireframeCullThreshold;
    uint8 bEnableRayTracing;
    uint8 bEnableRayTracingTextureLOD;
    uint8 bSupportStationarySkylight;
    uint8 bSupportLowQualityLightmaps;
    uint8 bSupportPointLightWholeSceneShadows;
    uint8 bSupportAtmosphericFog;
    uint8 bSupportSkyAtmosphere;
    uint8 bSupportSkyAtmosphereAffectsHeightFog;
    uint8 bSupportSkinCacheShaders;
    ESkinCacheDefaultBehavior DefaultSkinCacheBehavior;
    float SkinCacheSceneMemoryLimitInMB;
    uint8 bMobileEnableStaticAndCSMShadowReceivers;
    uint8 bMobileEnableMovableLightCSMShaderCulling;
    uint8 bMobileAllowDistanceFieldShadows;
    uint8 bMobileAllowMovableDirectionalLights;
    uint32 MobileNumDynamicPointLights;
    uint8 bMobileDynamicPointLightsUseStaticBranch;
    uint8 bMobileAllowMovableSpotlights;
    uint8 bMobileAllowMovableSpotlightShadows;
    uint8 bSupport16BitBoneIndex;
    uint8 bGPUSkinLimit2BoneInfluences;
    uint8 bSupportDepthOnlyIndexBuffers;
    uint8 bSupportReversedIndexBuffers;
    uint8 bLPV;
    uint8 bMobileAmbientOcclusion;
    uint8 bUseUnlimitedBoneInfluences;
    int32 UnlimitedBonInfluencesThreshold;
    FPerPlatformInt MaxSkinBones;
    TEnumAsByte<EMobilePlanarReflectionMode::Type> MobilePlanarReflectionMode;
    uint8 bMobileSupportsGen4TAA;
    FPerPlatformBool bStreamSkeletalMeshLODs;
    FPerPlatformBool bDiscardSkeletalMeshOptionalLODs;
    FSoftObjectPath VisualizeCalibrationColorMaterialPath;
    FSoftObjectPath VisualizeCalibrationCustomMaterialPath;
    FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath;

};

class UReplayNetConnection : public UNetConnection
{
};

class UReplaySubsystem : public UGameInstanceSubsystem
{
    bool bLoadDefaultMapOnStop;

};

class UReplicationConnectionDriver : public UObject
{
};

class UReplicationDriver : public UObject
{
};

class UReporterBase : public UObject
{
};

class UReporterGraph : public UReporterBase
{
};

class UReverbEffect : public UObject
{
    bool bBypassEarlyReflections;
    float ReflectionsDelay;
    float GainHF;
    float ReflectionsGain;
    bool bBypassLateReflections;
    float LateDelay;
    float DecayTime;
    float Density;
    float Diffusion;
    float AirAbsorptionGainHF;
    float DecayHFRatio;
    float LateGain;
    float Gain;
    float RoomRolloffFactor;

};

class URig : public UObject
{
    TArray<FTransformBase> TransformBases;
    TArray<FNode> Nodes;

};

class URotatingMovementComponent : public UMovementComponent
{
    FRotator RotationRate;
    FVector PivotTranslation;
    uint8 bRotationInLocalSpace;

};

class URuntimeOptionsBase : public UObject
{
};

class URuntimeVirtualTexture : public UObject
{
    int32 TileCount;
    int32 TileSize;
    int32 TileBorderSize;
    ERuntimeVirtualTextureMaterialType MaterialType;
    bool bCompressTextures;
    bool bClearTextures;
    bool bSinglePhysicalSpace;
    bool bPrivateSpace;
    bool bAdaptive;
    bool bContinuousUpdate;
    int32 RemoveLowMips;
    TEnumAsByte<TextureGroup> LODGroup;
    int32 Size;
    class URuntimeVirtualTextureStreamingProxy* StreamingTexture;

    int32 GetTileSize();
    int32 GetTileCount();
    int32 GetTileBorderSize();
    int32 GetSize();
    int32 GetPageTableSize();
};

class URuntimeVirtualTextureComponent : public USceneComponent
{
    TSoftObjectPtr<AActor> BoundsAlignActor;
    bool bSetBoundsButton;
    bool bSnapBoundsToLandscape;
    class URuntimeVirtualTexture* VirtualTexture;
    bool bEnableScalability;
    uint32 ScalabilityGroup;
    bool bHidePrimitives;
    class UVirtualTextureBuilder* StreamingTexture;
    int32 StreamLowMips;
    bool bBuildStreamingMipsButton;
    bool bEnableCompressCrunch;
    bool bUseStreamingLowMipsInEditor;
    bool bBuildDebugStreamingMips;

    void Invalidate(const FBoxSphereBounds& WorldBounds);
};

class URuntimeVirtualTextureStreamingProxy : public UTexture2D
{
};

class USCS_Node : public UObject
{
    UClass* ComponentClass;
    class UActorComponent* ComponentTemplate;
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData;
    FName AttachToName;
    FName ParentComponentOrVariableName;
    FName ParentComponentOwnerClassName;
    bool bIsParentComponentNative;
    TArray<class USCS_Node*> ChildNodes;
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    FGuid VariableGuid;
    FName InternalVariableName;

};

class USaveGame : public UObject
{
};

class UScene : public UObject
{
};

class USceneCaptureComponent : public USceneComponent
{
    ESceneCapturePrimitiveRenderMode PrimitiveRenderMode;
    TEnumAsByte<ESceneCaptureSource> CaptureSource;
    uint8 bCaptureEveryFrame;
    uint8 bCaptureOnMovement;
    bool bAlwaysPersistRenderingState;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    TArray<class AActor*> HiddenActors;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents;
    TArray<class AActor*> ShowOnlyActors;
    float LODDistanceFactor;
    float MaxViewDistanceOverride;
    int32 CaptureSortPriority;
    bool bUseRayTracingIfEnabled;
    TArray<FEngineShowFlagsSetting> ShowFlagSettings;
    FString ProfilingEventName;

    void ShowOnlyComponent(class UPrimitiveComponent* InComponent);
    void ShowOnlyActorComponents(class AActor* InActor, const bool bIncludeFromChildActors);
    void SetCaptureSortPriority(int32 NewCaptureSortPriority);
    void RemoveShowOnlyComponent(class UPrimitiveComponent* InComponent);
    void RemoveShowOnlyActorComponents(class AActor* InActor, const bool bIncludeFromChildActors);
    void HideComponent(class UPrimitiveComponent* InComponent);
    void HideActorComponents(class AActor* InActor, const bool bIncludeFromChildActors);
    void ClearShowOnlyComponents();
    void ClearHiddenComponents();
};

class USceneCaptureComponent2D : public USceneCaptureComponent
{
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionType;
    float FOVAngle;
    float OrthoWidth;
    class UTextureRenderTarget2D* TextureTarget;
    TEnumAsByte<ESceneCaptureCompositeMode> CompositeMode;
    FPostProcessSettings PostProcessSettings;
    float PostProcessBlendWeight;
    uint8 bOverride_CustomNearClippingPlane;
    float CustomNearClippingPlane;
    bool bUseCustomProjectionMatrix;
    FMatrix CustomProjectionMatrix;
    bool bEnableClipPlane;
    FVector ClipPlaneBase;
    FVector ClipPlaneNormal;
    uint8 bCameraCutThisFrame;
    uint8 bConsiderUnrenderedOpaquePixelAsFullyTranslucent;
    bool bDisableFlipCopyGLES;

    void RemoveBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject);
    void CaptureScene();
    void AddOrUpdateBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight);
};

class USceneCaptureComponentCube : public USceneCaptureComponent
{
    class UTextureRenderTargetCube* TextureTarget;
    bool bCaptureRotation;
    class UTextureRenderTargetCube* TextureTargetLeft;
    class UTextureRenderTargetCube* TextureTargetRight;
    class UTextureRenderTarget2D* TextureTargetODS;
    float IPD;

    void CaptureScene();
};

class USceneComponent : public UActorComponent
{
    TWeakObjectPtr<class APhysicsVolume> PhysicsVolume;
    class USceneComponent* AttachParent;
    FName AttachSocketName;
    TArray<class USceneComponent*> AttachChildren;
    TArray<class USceneComponent*> ClientAttachedChildren;
    FVector RelativeLocation;
    FRotator RelativeRotation;
    FVector RelativeScale3D;
    FVector ComponentVelocity;
    uint8 bComponentToWorldUpdated;
    uint8 bAbsoluteLocation;
    uint8 bAbsoluteRotation;
    uint8 bAbsoluteScale;
    uint8 bVisible;
    uint8 bShouldBeAttached;
    uint8 bShouldSnapLocationWhenAttached;
    uint8 bShouldSnapRotationWhenAttached;
    uint8 bShouldUpdatePhysicsVolume;
    uint8 bHiddenInGame;
    uint8 bBoundsChangeTriggersStreamingDataRebuild;
    uint8 bUseAttachParentBound;
    TEnumAsByte<EComponentMobility::Type> Mobility;
    TEnumAsByte<EDetailMode> DetailMode;
    FSceneComponentPhysicsVolumeChangedDelegate PhysicsVolumeChangedDelegate;
    void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);

    void ToggleVisibility(bool bPropagateToChildren);
    bool SnapTo(class USceneComponent* InParent, FName InSocketName);
    void SetWorldScale3D(FVector NewScale);
    void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
    void SetRelativeScale3D(FVector NewScale3D);
    void SetMobility(TEnumAsByte<EComponentMobility::Type> NewMobility);
    void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
    void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
    void ResetRelativeTransform();
    void OnRep_Visibility(bool OldValue);
    void OnRep_Transform();
    void OnRep_AttachSocketName();
    void OnRep_AttachParent();
    void OnRep_AttachChildren();
    void K2_SetWorldTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    FTransform K2_GetComponentToWorld();
    FVector K2_GetComponentScale();
    FRotator K2_GetComponentRotation();
    FVector K2_GetComponentLocation();
    void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);
    bool K2_AttachToComponent(class USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    bool K2_AttachTo(class USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachType, bool bWeldSimulatedBodies);
    void K2_AddWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddRelativeRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddRelativeLocation(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool IsVisible();
    bool IsSimulatingPhysics(FName BoneName);
    bool IsAnySimulatingPhysics();
    FVector GetUpVector();
    FTransform GetSocketTransform(FName InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
    FRotator GetSocketRotation(FName InSocketName);
    FQuat GetSocketQuaternion(FName InSocketName);
    FVector GetSocketLocation(FName InSocketName);
    bool GetShouldUpdatePhysicsVolume();
    FVector GetRightVector();
    FTransform GetRelativeTransform();
    class APhysicsVolume* GetPhysicsVolume();
    void GetParentComponents(TArray<class USceneComponent*>& Parents);
    int32 GetNumChildrenComponents();
    FVector GetForwardVector();
    FVector GetComponentVelocity();
    void GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>& Children);
    class USceneComponent* GetChildComponent(int32 ChildIndex);
    FName GetAttachSocketName();
    class USceneComponent* GetAttachParent();
    TArray<FName> GetAllSocketNames();
    bool DoesSocketExist(FName InSocketName);
    void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
};

class UScriptViewportClient : public UObject
{
};

class USelection : public UObject
{
};

class UShadowMapTexture2D : public UTexture2D
{
    TEnumAsByte<EShadowMapFlags> ShadowmapFlags;

};

class UShapeComponent : public UPrimitiveComponent
{
    class UBodySetup* ShapeBodySetup;
    TSubclassOf<class UNavAreaBase> AreaClass;
    FColor ShapeColor;
    uint8 bDrawOnlyIfSelected;
    uint8 bShouldCollideWhenPlacing;
    uint8 bDynamicObstacle;

};

class USimpleConstructionScript : public UObject
{
    TArray<class USCS_Node*> RootNodes;
    TArray<class USCS_Node*> AllNodes;
    class USCS_Node* DefaultSceneRootNode;

};

class USimulatedClientNetConnection : public UNetConnection
{
};

class USkeletalBodySetup : public UBodySetup
{
    bool bSkipScaleFromAnimation;
    TArray<FPhysicalAnimationProfile> PhysicalAnimationData;

};

class USkeletalMesh : public UStreamableRenderAsset
{
    class USkeleton* Skeleton;
    FBoxSphereBounds ImportedBounds;
    FBoxSphereBounds ExtendedBounds;
    FVector PositiveBoundsExtension;
    FVector NegativeBoundsExtension;
    TArray<FSkeletalMaterial> Materials;
    TArray<FBoneMirrorInfo> SkelMirrorTable;
    TArray<FSkeletalMeshLODInfo> LODInfo;
    FPerPlatformInt MinLOD;
    FPerPlatformBool DisableBelowMinLodStripping;
    TEnumAsByte<EAxis::Type> SkelMirrorAxis;
    TEnumAsByte<EAxis::Type> SkelMirrorFlipAxis;
    uint8 bUseFullPrecisionUVs;
    uint8 bUseHighPrecisionTangentBasis;
    uint8 bHasBeenSimplified;
    uint8 bHasVertexColors;
    uint8 bEnablePerPolyCollision;
    class UBodySetup* BodySetup;
    class UPhysicsAsset* PhysicsAsset;
    class UPhysicsAsset* ShadowPhysicsAsset;
    TArray<class UNodeMappingContainer*> NodeMappingData;
    uint8 bSupportRayTracing;
    TArray<class UMorphTarget*> MorphTargets;
    TSubclassOf<class UAnimInstance> PostProcessAnimBlueprint;
    TArray<class UClothingAssetBase*> MeshClothingAssets;
    FSkeletalMeshSamplingInfo SamplingInfo;
    TArray<class UAssetUserData*> AssetUserData;
    TArray<class USkeletalMeshSocket*> Sockets;
    TArray<FSkinWeightProfileInfo> SkinWeightProfiles;

    void SetMorphTargets(const TArray<class UMorphTarget*>& InMorphTargets);
    void SetMeshClothingAssets(const TArray<class UClothingAssetBase*>& InMeshClothingAssets);
    void SetMaterials(const TArray<FSkeletalMaterial>& InMaterials);
    void SetLODSettings(class USkeletalMeshLODSettings* InLODSettings);
    void SetDefaultAnimatingRig(TSoftObjectPtr<UObject> InAnimatingRig);
    int32 NumSockets();
    TArray<FString> K2_GetAllMorphTargetNames();
    bool IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections);
    class USkeletalMeshSocket* GetSocketByIndex(int32 Index);
    class USkeleton* GetSkeleton();
    class UPhysicsAsset* GetShadowPhysicsAsset();
    class UPhysicsAsset* GetPhysicsAsset();
    TArray<class UNodeMappingContainer*> GetNodeMappingData();
    class UNodeMappingContainer* GetNodeMappingContainer(class UBlueprint* SourceAsset);
    TArray<class UMorphTarget*> GetMorphTargets();
    TArray<class UClothingAssetBase*> GetMeshClothingAssets();
    TArray<FSkeletalMaterial> GetMaterials();
    class USkeletalMeshLODSettings* GetLODSettings();
    FBoxSphereBounds GetImportedBounds();
    TSoftObjectPtr<UObject> GetDefaultAnimatingRig();
    FBoxSphereBounds GetBounds();
    class USkeletalMeshSocket* FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& outBoneIndex, int32& OutIndex);
    class USkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, int32& OutIndex);
    class USkeletalMeshSocket* FindSocket(FName InSocketName);
};

class USkeletalMeshComponent : public USkinnedMeshComponent
{
    UClass* AnimBlueprintGeneratedClass;
    TSubclassOf<class UAnimInstance> AnimClass;
    class UAnimInstance* AnimScriptInstance;
    class UAnimInstance* PostProcessAnimInstance;
    FSingleAnimationPlayData AnimationData;
    FVector RootBoneTranslation;
    FVector LineCheckBoundsScale;
    TArray<class UAnimInstance*> LinkedInstances;
    TArray<FTransform> CachedBoneSpaceTransforms;
    TArray<FTransform> CachedComponentSpaceTransforms;
    float GlobalAnimRateScale;
    TEnumAsByte<EKinematicBonesUpdateToPhysics::Type> KinematicBonesUpdateType;
    TEnumAsByte<EPhysicsTransformUpdateMode::Type> PhysicsTransformUpdateMode;
    TEnumAsByte<EAnimationMode::Type> AnimationMode;
    uint8 bDisablePostProcessBlueprint;
    uint8 bUpdateOverlapsOnAnimationFinalize;
    uint8 bHasValidBodies;
    uint8 bBlendPhysics;
    uint8 bEnablePhysicsOnDedicatedServer;
    uint8 bUpdateJointsFromAnimation;
    uint8 bDisableClothSimulation;
    uint8 bDisableRigidBodyAnimNode;
    uint8 bAllowAnimCurveEvaluation;
    uint8 bDisableAnimCurves;
    uint8 bCollideWithEnvironment;
    uint8 bCollideWithAttachedChildren;
    uint8 bLocalSpaceSimulation;
    uint8 bResetAfterTeleport;
    uint8 bDeferKinematicBoneUpdate;
    uint8 bNoSkeletonUpdate;
    uint8 bPauseAnims;
    uint8 bUseRefPoseOnInitAnim;
    uint8 bEnablePerPolyCollision;
    uint8 bForceRefpose;
    uint8 bOnlyAllowAutonomousTickPose;
    uint8 bIsAutonomousTickPose;
    uint8 bOldForceRefPose;
    uint8 bShowPrePhysBones;
    uint8 bRequiredBonesUpToDate;
    uint8 bAnimTreeInitialised;
    uint8 bIncludeComponentLocationIntoBounds;
    uint8 bEnableLineCheckWithBounds;
    uint8 bPropagateCurvesToSlaves;
    uint8 bSkipKinematicUpdateWhenInterpolating;
    uint8 bSkipBoundsUpdateWhenInterpolating;
    uint8 bNeedsQueuedAnimEventsDispatched;
    uint16 CachedAnimCurveUidVersion;
    float ClothBlendWeight;
    bool bWaitForParallelClothTask;
    TArray<FName> DisallowedAnimCurves;
    class UBodySetup* BodySetup;
    FSkeletalMeshComponentOnConstraintBroken OnConstraintBroken;
    void ConstraintBrokenSignature(int32 ConstraintIndex);
    TSubclassOf<class UClothingSimulationFactory> ClothingSimulationFactory;
    float TeleportDistanceThreshold;
    float TeleportRotationThreshold;
    uint32 LastPoseTickFrame;
    class UClothingSimulationInteractor* ClothingInteractor;
    FSkeletalMeshComponentOnAnimInitialized OnAnimInitialized;
    void OnAnimInitialized();

    void UnlinkAnimClassLayers(TSubclassOf<class UAnimInstance> InClass);
    void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
    void ToggleDisablePostProcessBlueprint();
    void TermBodiesBelow(FName ParentBoneName);
    void SuspendClothingSimulation();
    void Stop();
    void SnapshotPose(FPoseSnapshot& Snapshot);
    void SetUpdateClothInEditor(const bool NewUpdateState);
    void SetUpdateAnimationInEditor(const bool NewUpdateState);
    void SetTeleportRotationThreshold(float Threshold);
    void SetTeleportDistanceThreshold(float Threshold);
    void SetPosition(float InPos, bool bFireNotifies);
    void SetPlayRate(float Rate);
    void SetPhysicsBlendWeight(float PhysicsBlendWeight);
    void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf);
    void SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight);
    void SetEnablePhysicsBlending(bool bNewBlendPhysics);
    void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf);
    void SetEnableBodyGravity(bool bEnableGravity, FName BoneName);
    void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
    void SetDisableAnimCurves(bool bInDisableAnimCurves);
    void SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound);
    void SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound);
    void SetClothMaxDistanceScale(float Scale);
    void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName);
    void SetAnimClass(UClass* NewClass);
    void SetAnimationMode(TEnumAsByte<EAnimationMode::Type> InAnimationMode);
    void SetAnimation(class UAnimationAsset* NewAnimToPlay);
    void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
    void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);
    void SetAllowedAnimCurvesEvaluation(const TArray<FName>& List, bool bAllow);
    void SetAllowAnimCurveEvaluation(bool bInAllow);
    void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
    void SetAllBodiesSimulatePhysics(bool bNewSimulate);
    void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
    void SetAllBodiesBelowSimulatePhysics(const FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
    void SetAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
    void ResumeClothingSimulation();
    void ResetClothTeleportMode();
    void ResetAnimInstanceDynamics(ETeleportType InTeleportType);
    void ResetAllowedAnimCurveEvaluation();
    void ResetAllBodiesSimulatePhysics();
    void PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping);
    void Play(bool bLooping);
    void OverrideAnimationData(class UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<class UAnimInstance> InClass);
    void LinkAnimClassLayers(TSubclassOf<class UAnimInstance> InClass);
    bool K2_GetClosestPointOnPhysicsAsset(const FVector& WorldPosition, FVector& ClosestWorldPosition, FVector& Normal, FName& BoneName, float& Distance);
    bool IsPlaying();
    bool IsClothingSimulationSuspended();
    bool IsBodyGravityEnabled(FName BoneName);
    bool HasValidAnimationInstance();
    float GetTeleportRotationThreshold();
    float GetTeleportDistanceThreshold();
    bool GetStringAttribute_Ref(const FName& BoneName, const FName& AttributeName, FString& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetStringAttribute(const FName& BoneName, const FName& AttributeName, FString DefaultValue, FString& OutValue, ECustomBoneAttributeLookup LookupType);
    FVector GetSkeletalCenterOfMass();
    class UAnimInstance* GetPostProcessInstance();
    float GetPosition();
    float GetPlayRate();
    float GetMorphTarget(FName MorphTargetName);
    class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);
    class UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<class UAnimInstance> InClass);
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<class UAnimInstance*>& OutLinkedInstances);
    class UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);
    bool GetIntegerAttribute_Ref(const FName& BoneName, const FName& AttributeName, int32& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetIntegerAttribute(const FName& BoneName, const FName& AttributeName, int32 DefaultValue, int32& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetFloatAttribute_Ref(const FName& BoneName, const FName& AttributeName, float& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetFloatAttribute(const FName& BoneName, const FName& AttributeName, float DefaultValue, float& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetDisablePostProcessBlueprint();
    bool GetDisableAnimCurves();
    void GetCurrentJointAngles(FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle);
    float GetClothMaxDistanceScale();
    class UClothingSimulationInteractor* GetClothingSimulationInteractor();
    float GetBoneMass(FName BoneName, bool bScaleMass);
    class UAnimInstance* GetAnimInstance();
    UClass* GetAnimClass();
    TEnumAsByte<EAnimationMode::Type> GetAnimationMode();
    bool GetAllowRigidBodyAnimNode();
    bool GetAllowedAnimCurveEvaluate();
    void ForceClothNextUpdateTeleportAndReset();
    void ForceClothNextUpdateTeleport();
    FName FindConstraintBoneName(int32 ConstraintIndex);
    void ClearMorphTargets();
    void BreakConstraint(FVector Impulse, FVector HitLocation, FName InBoneName);
    void BindClothToMasterPoseComponent();
    void AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow);
    void AddImpulseToAllBodiesBelow(FVector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf);
    void AddForceToAllBodiesBelow(FVector force, FName BoneName, bool bAccelChange, bool bIncludeSelf);
    void AccumulateAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
};

class USkeletalMeshEditorData : public UObject
{
};

class USkeletalMeshLODSettings : public UDataAsset
{
    FPerPlatformInt MinLOD;
    FPerPlatformBool DisableBelowMinLodStripping;
    bool bOverrideLODStreamingSettings;
    FPerPlatformBool bSupportLODStreaming;
    FPerPlatformInt MaxNumStreamedLODs;
    FPerPlatformInt MaxNumOptionalLODs;
    TArray<FSkeletalMeshLODGroupSettings> LODGroups;

};

class USkeletalMeshSimplificationSettings : public UDeveloperSettings
{
    FName SkeletalMeshReductionModuleName;

};

class USkeletalMeshSocket : public UObject
{
    FName SocketName;
    FName BoneName;
    FVector RelativeLocation;
    FRotator RelativeRotation;
    FVector RelativeScale;
    bool bForceAlwaysAnimated;

    void InitializeSocketFromLocation(const class USkeletalMeshComponent* SkelComp, FVector WorldLocation, FVector WorldNormal);
    FVector GetSocketLocation(const class USkeletalMeshComponent* SkelComp);
};

class USkeleton : public UObject
{
    TArray<FBoneNode> BoneTree;
    TArray<FTransform> RefLocalPoses;
    FGuid VirtualBoneGuid;
    TArray<FVirtualBone> VirtualBones;
    TArray<class USkeletalMeshSocket*> Sockets;
    FSmartNameContainer SmartNames;
    TArray<class UBlendProfile*> BlendProfiles;
    TArray<FAnimSlotGroup> SlotGroups;
    TArray<class UAssetUserData*> AssetUserData;

};

class USkinnedMeshComponent : public UMeshComponent
{
    class USkeletalMesh* SkeletalMesh;
    TWeakObjectPtr<class USkinnedMeshComponent> MasterPoseComponent;
    TArray<ESkinCacheUsage> SkinCacheUsage;
    TArray<FVertexOffsetUsage> VertexOffsetUsage;
    class UPhysicsAsset* PhysicsAssetOverride;
    int32 ForcedLodModel;
    int32 MinLodModel;
    float StreamingDistanceMultiplier;
    TArray<FSkelMeshComponentLODInfo> LODInfo;
    EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption;
    uint8 bOverrideMinLod;
    uint8 bUseBoundsFromMasterPoseComponent;
    uint8 bForceWireframe;
    uint8 bDisplayBones;
    uint8 bDisableMorphTarget;
    uint8 bHideSkin;
    uint8 bPerBoneMotionBlur;
    uint8 bComponentUseFixedSkelBounds;
    uint8 bConsiderAllBodiesForBounds;
    uint8 bSyncAttachParentLOD;
    uint8 bCanHighlightSelectedSections;
    uint8 bRecentlyRendered;
    uint8 bCastCapsuleDirectShadow;
    uint8 bCastCapsuleIndirectShadow;
    uint8 bCPUSkinning;
    uint8 bEnableUpdateRateOptimizations;
    uint8 bDisplayDebugUpdateRateOptimizations;
    uint8 bRenderStatic;
    uint8 bIgnoreMasterPoseComponentLOD;
    uint8 bCachedLocalBoundsUpToDate;
    uint8 bForceMeshObjectUpdate;
    float CapsuleIndirectShadowMinVisibility;
    FBoxSphereBounds CachedWorldSpaceBounds;
    FMatrix CachedWorldToLocalTransform;

    void UnloadSkinWeightProfile(FName InProfileName);
    void UnHideBoneByName(FName BoneName);
    void TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);
    void TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);
    void ShowMaterialSection(int32 MaterialID, int32 SectionIndex, bool bShow, int32 LODIndex);
    void ShowAllMaterialSections(int32 LODIndex);
    void SetVertexOffsetUsage(int32 LODIndex, int32 Usage);
    void SetVertexColorOverride_LinearColor(int32 LODIndex, const TArray<FLinearColor>& VertexColors);
    bool SetSkinWeightProfile(FName InProfileName);
    void SetSkinWeightOverride(int32 LODIndex, const TArray<FSkelMeshSkinWeightInfo>& SkinWeights);
    void SetSkeletalMesh(class USkeletalMesh* NewMesh, bool bReinitPose);
    void SetRenderStatic(bool bNewValue);
    void SetPreSkinningOffsets(int32 LODIndex, TArray<FVector> Offsets);
    void SetPostSkinningOffsets(int32 LODIndex, TArray<FVector> Offsets);
    void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
    void SetMinLOD(int32 InNewMinLOD);
    void SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
    void SetForcedLOD(int32 InNewForcedLOD);
    void SetCastCapsuleIndirectShadow(bool bNewValue);
    void SetCastCapsuleDirectShadow(bool bNewValue);
    void SetCapsuleIndirectShadowMinVisibility(float NewValue);
    bool IsUsingSkinWeightProfile();
    bool IsMaterialSectionShown(int32 MaterialID, int32 LODIndex);
    bool IsBoneHiddenByName(FName BoneName);
    void HideBoneByName(FName BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);
    int32 GetVertexOffsetUsage(int32 LODIndex);
    bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle);
    FName GetSocketBoneName(FName InSocketName);
    FVector GetRefPosePosition(int32 BoneIndex);
    FName GetParentBone(FName BoneName);
    int32 GetNumLODs();
    int32 GetNumBones();
    int32 GetForcedLOD();
    FTransform GetDeltaTransformFromRefPose(FName BoneName, FName BaseName);
    FName GetCurrentSkinWeightProfileName();
    FName GetBoneName(int32 BoneIndex);
    int32 GetBoneIndex(FName BoneName);
    FName FindClosestBone_K2(FVector TestLocation, FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset);
    void ClearVertexColorOverride(int32 LODIndex);
    void ClearSkinWeightProfile();
    void ClearSkinWeightOverride(int32 LODIndex);
    bool BoneIsChildOf(FName BoneName, FName ParentBoneName);
};

class USkyAtmosphereComponent : public USceneComponent
{
    ESkyAtmosphereTransformMode TransformMode;
    float BottomRadius;
    FColor GroundAlbedo;
    float AtmosphereHeight;
    float MultiScatteringFactor;
    float TraceSampleCountScale;
    float RayleighScatteringScale;
    FLinearColor RayleighScattering;
    float RayleighExponentialDistribution;
    float MieScatteringScale;
    FLinearColor MieScattering;
    float MieAbsorptionScale;
    FLinearColor MieAbsorption;
    float MieAnisotropy;
    float MieExponentialDistribution;
    float OtherAbsorptionScale;
    FLinearColor OtherAbsorption;
    FTentDistribution OtherTentDistribution;
    FLinearColor SkyLuminanceFactor;
    float AerialPespectiveViewDistanceScale;
    float HeightFogContribution;
    float TransmittanceMinLightElevationAngle;
    float AerialPerspectiveStartDepth;
    FGuid bStaticLightingBuiltGUID;

    void SetSkyLuminanceFactor(FLinearColor NewValue);
    void SetRayleighScatteringScale(float NewValue);
    void SetRayleighScattering(FLinearColor NewValue);
    void SetRayleighExponentialDistribution(float NewValue);
    void SetOtherAbsorptionScale(float NewValue);
    void SetOtherAbsorption(FLinearColor NewValue);
    void SetMultiScatteringFactor(float NewValue);
    void SetMieScatteringScale(float NewValue);
    void SetMieScattering(FLinearColor NewValue);
    void SetMieExponentialDistribution(float NewValue);
    void SetMieAnisotropy(float NewValue);
    void SetMieAbsorptionScale(float NewValue);
    void SetMieAbsorption(FLinearColor NewValue);
    void SetHeightFogContribution(float NewValue);
    void SetAtmosphereHeight(float NewValue);
    void SetAerialPespectiveViewDistanceScale(float NewValue);
    void OverrideAtmosphereLightDirection(int32 AtmosphereLightIndex, const FVector& LightDirection);
    FLinearColor GetAtmosphereTransmitanceOnGroundAtPlanetTop(class UDirectionalLightComponent* DirectionalLight);
};

class USkyLightComponent : public ULightComponentBase
{
    bool bRealTimeCapture;
    TEnumAsByte<ESkyLightSourceType> SourceType;
    class UTextureCube* Cubemap;
    float SourceCubemapAngle;
    int32 CubemapResolution;
    float SkyDistanceThreshold;
    bool bCaptureEmissiveOnly;
    bool bLowerHemisphereIsBlack;
    FLinearColor LowerHemisphereColor;
    float OcclusionMaxDistance;
    float Contrast;
    float OcclusionExponent;
    float MinOcclusion;
    FColor OcclusionTint;
    uint8 bCloudAmbientOcclusion;
    float CloudAmbientOcclusionStrength;
    float CloudAmbientOcclusionExtent;
    float CloudAmbientOcclusionMapResolutionScale;
    float CloudAmbientOcclusionApertureScale;
    TEnumAsByte<EOcclusionCombineMode> OcclusionCombineMode;
    class UTextureCube* BlendDestinationCubemap;

    void SetVolumetricScatteringIntensity(float NewIntensity);
    void SetOcclusionTint(const FColor& InTint);
    void SetOcclusionExponent(float InOcclusionExponent);
    void SetOcclusionContrast(float InOcclusionContrast);
    void SetMinOcclusion(float InMinOcclusion);
    void SetLowerHemisphereColor(const FLinearColor& InLowerHemisphereColor);
    void SetLightColor(FLinearColor NewLightColor);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetCubemapBlend(class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float InBlendFraction);
    void SetCubemap(class UTextureCube* NewCubemap);
    void RecaptureSky();
};

class USlateBrushAsset : public UObject
{
    FSlateBrush Brush;

};

class USmokeTestCommandlet : public UCommandlet
{
};

class USoundAttenuation : public UObject
{
    FSoundAttenuationSettings Attenuation;

};

class USoundBase : public UObject
{
    class USoundClass* SoundClassObject;
    uint8 bDebug;
    uint8 bOverrideConcurrency;
    uint8 bEnableBusSends;
    uint8 bEnableBaseSubmix;
    uint8 bEnableSubmixSends;
    uint8 bHasDelayNode;
    uint8 bHasConcatenatorNode;
    uint8 bBypassVolumeScaleForPriority;
    EVirtualizationMode VirtualizationMode;
    TSet<USoundConcurrency*> ConcurrencySet;
    FSoundConcurrencySettings ConcurrencyOverrides;
    float Duration;
    float MaxDistance;
    float TotalSamples;
    float Priority;
    class USoundAttenuation* AttenuationSettings;
    class USoundSubmixBase* SoundSubmixObject;
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;
    class USoundEffectSourcePresetChain* SourceEffectChain;
    TArray<FSoundSourceBusSendInfo> BusSends;
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;
    TArray<class UAssetUserData*> AssetUserData;

};

class USoundClass : public UObject
{
    FSoundClassProperties Properties;
    TArray<class USoundClass*> ChildClasses;
    TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers;
    class USoundClass* ParentClass;

};

class USoundConcurrency : public UObject
{
    FSoundConcurrencySettings Concurrency;

};

class USoundCue : public USoundBase
{
    uint8 bPrimeOnLoad;
    class USoundNode* FirstNode;
    float VolumeMultiplier;
    float PitchMultiplier;
    FSoundAttenuationSettings AttenuationOverrides;
    float SubtitlePriority;
    uint8 bOverrideAttenuation;
    uint8 bExcludeFromRandomNodeBranchCulling;
    int32 CookedQualityIndex;
    uint8 bHasPlayWhenSilent;

};

class USoundEffectPreset : public UObject
{
};

class USoundEffectSourcePreset : public USoundEffectPreset
{
};

class USoundEffectSourcePresetChain : public UObject
{
    TArray<FSourceEffectChainEntry> Chain;
    uint8 bPlayEffectChainTails;

};

class USoundEffectSubmixPreset : public USoundEffectPreset
{
};

class USoundGroups : public UObject
{
    TArray<FSoundGroup> SoundGroupProfiles;

};

class USoundMix : public UObject
{
    uint8 bApplyEQ;
    float EQPriority;
    FAudioEQEffect EQSettings;
    TArray<FSoundClassAdjuster> SoundClassEffects;
    float InitialDelay;
    float FadeInTime;
    float Duration;
    float FadeOutTime;

};

class USoundNode : public UObject
{
    TArray<class USoundNode*> ChildNodes;

};

class USoundNodeAssetReferencer : public USoundNode
{
};

class USoundNodeAttenuation : public USoundNode
{
    class USoundAttenuation* AttenuationSettings;
    FSoundAttenuationSettings AttenuationOverrides;
    uint8 bOverrideAttenuation;

};

class USoundNodeBranch : public USoundNode
{
    FName BoolParameterName;

};

class USoundNodeConcatenator : public USoundNode
{
    TArray<float> InputVolume;

};

class USoundNodeDelay : public USoundNode
{
    float DelayMin;
    float DelayMax;

};

class USoundNodeDialoguePlayer : public USoundNode
{
    FDialogueWaveParameter DialogueWaveParameter;
    uint8 bLooping;

};

class USoundNodeDistanceCrossFade : public USoundNode
{
    TArray<FDistanceDatum> CrossFadeInput;

};

class USoundNodeDoppler : public USoundNode
{
    float DopplerIntensity;
    bool bUseSmoothing;
    float SmoothingInterpSpeed;

};

class USoundNodeEnveloper : public USoundNode
{
    float LoopStart;
    float LoopEnd;
    float DurationAfterLoop;
    int32 LoopCount;
    uint8 bLoopIndefinitely;
    uint8 bLoop;
    class UDistributionFloatConstantCurve* VolumeInterpCurve;
    class UDistributionFloatConstantCurve* PitchInterpCurve;
    FRuntimeFloatCurve VolumeCurve;
    FRuntimeFloatCurve PitchCurve;
    float PitchMin;
    float PitchMax;
    float VolumeMin;
    float VolumeMax;

};

class USoundNodeGroupControl : public USoundNode
{
    TArray<int32> GroupSizes;

};

class USoundNodeLooping : public USoundNode
{
    int32 LoopCount;
    uint8 bLoopIndefinitely;

};

class USoundNodeMature : public USoundNode
{
};

class USoundNodeMixer : public USoundNode
{
    TArray<float> InputVolume;

};

class USoundNodeModulator : public USoundNode
{
    float PitchMin;
    float PitchMax;
    float VolumeMin;
    float VolumeMax;

};

class USoundNodeModulatorContinuous : public USoundNode
{
    FModulatorContinuousParams PitchModulationParams;
    FModulatorContinuousParams VolumeModulationParams;

};

class USoundNodeOscillator : public USoundNode
{
    uint8 bModulateVolume;
    uint8 bModulatePitch;
    float AmplitudeMin;
    float AmplitudeMax;
    float FrequencyMin;
    float FrequencyMax;
    float OffsetMin;
    float OffsetMax;
    float CenterMin;
    float CenterMax;

};

class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
    FName ParamName;

};

class USoundNodeQualityLevel : public USoundNode
{
    int32 CookedQualityLevelIndex;

};

class USoundNodeRandom : public USoundNode
{
    TArray<float> Weights;
    TArray<bool> HasBeenUsed;
    int32 NumRandomUsed;
    int32 PreselectAtLevelLoad;
    uint8 bShouldExcludeFromBranchCulling;
    uint8 bSoundCueExcludedFromBranchCulling;
    uint8 bRandomizeWithoutReplacement;

};

class USoundNodeSoundClass : public USoundNode
{
    class USoundClass* SoundClassOverride;

};

class USoundNodeSwitch : public USoundNode
{
    FName IntParameterName;

};

class USoundNodeWaveParam : public USoundNode
{
    FName WaveParameterName;

};

class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
    TSoftObjectPtr<USoundWave> SoundWaveAssetPtr;
    class USoundWave* SoundWave;
    uint8 bLooping;

};

class USoundSourceBus : public USoundWave
{
    ESourceBusChannels SourceBusChannels;
    float SourceBusDuration;
    class UAudioBus* AudioBus;
    uint8 bAutoDeactivateWhenSilent;

};

class USoundSubmix : public USoundSubmixWithParentBase
{
    uint8 bMuteWhenBackgrounded;
    TArray<class USoundEffectSubmixPreset*> SubmixEffectChain;
    class USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings;
    int32 EnvelopeFollowerAttackTime;
    int32 EnvelopeFollowerReleaseTime;
    EGainParamMode GainMode;
    float OutputVolume;
    float WetLevel;
    float DryLevel;
    FSoundModulationDestinationSettings OutputVolumeModulation;
    FSoundModulationDestinationSettings WetLevelModulation;
    FSoundModulationDestinationSettings DryLevelModulation;
    FSoundSubmixOnSubmixRecordedFileDone OnSubmixRecordedFileDone;
    void OnSubmixRecordedFileDone(const class USoundWave* ResultingSoundWave);

    void StopSpectralAnalysis(const class UObject* WorldContextObject);
    void StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundWave* ExistingSoundWaveToOverwrite);
    void StopEnvelopeFollowing(const class UObject* WorldContextObject);
    void StartSpectralAnalysis(const class UObject* WorldContextObject, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
    void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration);
    void StartEnvelopeFollowing(const class UObject* WorldContextObject);
    void SetSubmixOutputVolume(const class UObject* WorldContextObject, float InOutputVolume);
    void RemoveSpectralAnalysisDelegate(const class UObject* WorldContextObject, const FRemoveSpectralAnalysisDelegateOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP);
    void AddSpectralAnalysisDelegate(const class UObject* WorldContextObject, const TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, const FAddSpectralAnalysisDelegateOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime);
    void AddEnvelopeFollowerDelegate(const class UObject* WorldContextObject, const FAddEnvelopeFollowerDelegateOnSubmixEnvelopeBP& OnSubmixEnvelopeBP);
};

class USoundSubmixBase : public UObject
{
    TArray<class USoundSubmixBase*> ChildSubmixes;

};

class USoundSubmixWithParentBase : public USoundSubmixBase
{
    class USoundSubmixBase* ParentSubmix;

};

class USoundWave : public USoundBase
{
    int32 CompressionQuality;
    int32 StreamingPriority;
    ESoundwaveSampleRateSettings SampleRateQuality;
    TEnumAsByte<ESoundGroup> SoundGroup;
    uint8 bLooping;
    uint8 bStreaming;
    uint8 bSeekableStreaming;
    ESoundWaveLoadingBehavior LoadingBehavior;
    uint8 bMature;
    uint8 bManualWordWrap;
    uint8 bSingleLine;
    uint8 bIsAmbisonics;
    FSoundModulationDefaultRoutingSettings ModulationSettings;
    TArray<float> FrequenciesToAnalyze;
    TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData;
    TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData;
    int32 InitialChunkSize;
    FString SpokenText;
    float SubtitlePriority;
    float Volume;
    float Pitch;
    int32 NumChannels;
    int32 SampleRate;
    TArray<FSubtitleCue> Subtitles;
    class UCurveTable* Curves;
    class UCurveTable* InternalCurves;

};

class USoundWaveProcedural : public USoundWave
{
};

class USoundfieldEndpointSubmix : public USoundSubmixBase
{
    FName SoundfieldEndpointType;
    TSubclassOf<class UAudioEndpointSettingsBase> EndpointSettingsClass;
    class USoundfieldEndpointSettingsBase* EndpointSettings;
    TSubclassOf<class USoundfieldEncodingSettingsBase> EncodingSettingsClass;
    class USoundfieldEncodingSettingsBase* EncodingSettings;
    TArray<class USoundfieldEffectBase*> SoundfieldEffectChain;

};

class USoundfieldSubmix : public USoundSubmixWithParentBase
{
    FName SoundfieldEncodingFormat;
    class USoundfieldEncodingSettingsBase* EncodingSettings;
    TArray<class USoundfieldEffectBase*> SoundfieldEffectChain;
    TSubclassOf<class USoundfieldEncodingSettingsBase> EncodingSettingsClass;

};

class USpectatorPawnMovement : public UFloatingPawnMovement
{
    uint8 bIgnoreTimeDilation;

};

class USphereComponent : public UShapeComponent
{
    float SphereRadius;

    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    float GetUnscaledSphereRadius();
    float GetShapeScale();
    float GetScaledSphereRadius();
};

class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
    float InfluenceRadius;
    float CaptureDistanceScale;
    class UDrawSphereComponent* PreviewInfluenceRadius;

};

class USplineComponent : public UPrimitiveComponent
{
    FSplineCurves SplineCurves;
    FInterpCurveVector SplineInfo;
    FInterpCurveQuat SplineRotInfo;
    FInterpCurveVector SplineScaleInfo;
    FInterpCurveFloat SplineReparamTable;
    bool bAllowSplineEditingPerInstance;
    int32 ReparamStepsPerSegment;
    float Duration;
    bool bStationaryEndpoints;
    bool bSplineHasBeenEdited;
    bool bModifiedByConstructionScript;
    bool bInputSplinePointsToConstructionScript;
    bool bDrawDebug;
    bool bClosedLoop;
    bool bLoopPositionOverride;
    float LoopPosition;
    FVector DefaultUpVector;

    void UpdateSpline();
    void SetWorldLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation);
    void SetUpVectorAtSplinePoint(int32 PointIndex, const FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    void SetUnselectedSplineSegmentColor(const FLinearColor& SegmentColor);
    void SetTangentsAtSplinePoint(int32 PointIndex, const FVector& InArriveTangent, const FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    void SetTangentColor(const FLinearColor& TangentColor);
    void SetTangentAtSplinePoint(int32 PointIndex, const FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    void SetSplineWorldPoints(const TArray<FVector>& Points);
    void SetSplinePointType(int32 PointIndex, TEnumAsByte<ESplinePointType::Type> Type, bool bUpdateSpline);
    void SetSplinePoints(const TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    void SetSplineLocalPoints(const TArray<FVector>& Points);
    void SetSelectedSplineSegmentColor(const FLinearColor& SegmentColor);
    void SetScaleAtSplinePoint(int32 PointIndex, const FVector& InScaleVector, bool bUpdateSpline);
    void SetRotationAtSplinePoint(int32 PointIndex, const FRotator& InRotation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    void SetLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    void SetDrawDebug(bool bShow);
    void SetDefaultUpVector(const FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
    void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
    void RemoveSplinePoint(int32 Index, bool bUpdateSpline);
    bool IsClosedLoop();
    FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
    FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
    FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
    FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
    FVector GetWorldLocationAtSplinePoint(int32 PointIndex);
    FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
    FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
    FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
    FVector GetVectorPropertyAtSplinePoint(int32 Index, FName PropertyName);
    FVector GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName);
    FVector GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity);
    FVector GetUpVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetUpVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FTransform GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
    FTransform GetTransformAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale);
    FTransform GetTransformAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale);
    FTransform GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale);
    FVector GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity);
    FVector GetTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetTangentAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    TEnumAsByte<ESplinePointType::Type> GetSplinePointType(int32 PointIndex);
    float GetSplineLength();
    FVector GetScaleAtTime(float Time, bool bUseConstantVelocity);
    FVector GetScaleAtSplinePoint(int32 PointIndex);
    FVector GetScaleAtSplineInputKey(float InKey);
    FVector GetScaleAtDistanceAlongSpline(float Distance);
    FRotator GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity);
    FRotator GetRotationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FRotator GetRotationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    float GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity);
    float GetRollAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    float GetRollAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    float GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity);
    FVector GetRightVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetRightVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    int32 GetNumberOfSplineSegments();
    int32 GetNumberOfSplinePoints();
    FVector GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity);
    FVector GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetLocationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    void GetLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& Location, FVector& Tangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    void GetLocalLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& LocalLocation, FVector& LocalTangent);
    FVector GetLeaveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    float GetInputKeyAtDistanceAlongSpline(float Distance);
    float GetFloatPropertyAtSplinePoint(int32 Index, FName PropertyName);
    float GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName);
    float GetDistanceAlongSplineAtSplinePoint(int32 PointIndex);
    float GetDistanceAlongSplineAtSplineInputKey(float InKey);
    FVector GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity);
    FVector GetDirectionAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetDirectionAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector GetArriveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector FindUpVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FTransform FindTransformClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale);
    FVector FindTangentClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector FindScaleClosestToWorldLocation(const FVector& WorldLocation);
    FRotator FindRotationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    float FindRollClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector FindRightVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    FVector FindLocationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    float FindInputKeyClosestToWorldLocation(const FVector& WorldLocation);
    FVector FindDirectionClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    void ClearSplinePoints(bool bUpdateSpline);
    void AddSplineWorldPoint(const FVector& Position);
    void AddSplinePointAtIndex(const FVector& Position, int32 Index, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    void AddSplinePoint(const FVector& Position, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    void AddSplineLocalPoint(const FVector& Position);
    void AddPoints(const TArray<FSplinePoint>& Points, bool bUpdateSpline);
    void AddPoint(const FSplinePoint& Point, bool bUpdateSpline);
};

class USplineMeshComponent : public UStaticMeshComponent
{
    FSplineMeshParams SplineParams;
    FVector SplineUpDir;
    float SplineBoundaryMin;
    FGuid CachedMeshBodySetupGuid;
    class UBodySetup* BodySetup;
    float SplineBoundaryMax;
    uint8 bAllowSplineEditingPerInstance;
    uint8 bSmoothInterpRollScale;
    uint8 bMeshDirty;
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    float VirtualTextureMainPassMaxDrawDistance;

    void UpdateMesh();
    void SetStartTangent(FVector StartTangent, bool bUpdateMesh);
    void SetStartScale(FVector2D StartScale, bool bUpdateMesh);
    void SetStartRoll(float StartRoll, bool bUpdateMesh);
    void SetStartPosition(FVector StartPos, bool bUpdateMesh);
    void SetStartOffset(FVector2D StartOffset, bool bUpdateMesh);
    void SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh);
    void SetSplineUpDir(const FVector& InSplineUpDir, bool bUpdateMesh);
    void SetForwardAxis(TEnumAsByte<ESplineMeshAxis::Type> InForwardAxis, bool bUpdateMesh);
    void SetEndTangent(FVector EndTangent, bool bUpdateMesh);
    void SetEndScale(FVector2D EndScale, bool bUpdateMesh);
    void SetEndRoll(float EndRoll, bool bUpdateMesh);
    void SetEndPosition(FVector EndPos, bool bUpdateMesh);
    void SetEndOffset(FVector2D EndOffset, bool bUpdateMesh);
    void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
    void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
    FVector GetStartTangent();
    FVector2D GetStartScale();
    float GetStartRoll();
    FVector GetStartPosition();
    FVector2D GetStartOffset();
    FVector GetSplineUpDir();
    TEnumAsByte<ESplineMeshAxis::Type> GetForwardAxis();
    FVector GetEndTangent();
    FVector2D GetEndScale();
    float GetEndRoll();
    FVector GetEndPosition();
    FVector2D GetEndOffset();
    float GetBoundaryMin();
    float GetBoundaryMax();
};

class USplineMetadata : public UObject
{
};

class USpotLightComponent : public UPointLightComponent
{
    float InnerConeAngle;
    float OuterConeAngle;

    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
};

class USpringArmComponent : public USceneComponent
{
    float TargetArmLength;
    FVector SocketOffset;
    FVector TargetOffset;
    float ProbeSize;
    TEnumAsByte<ECollisionChannel> ProbeChannel;
    uint8 bDoCollisionTest;
    uint8 bUsePawnControlRotation;
    uint8 bInheritPitch;
    uint8 bInheritYaw;
    uint8 bInheritRoll;
    uint8 bEnableCameraLag;
    uint8 bEnableCameraRotationLag;
    uint8 bUseCameraLagSubstepping;
    uint8 bDrawDebugLagMarkers;
    float CameraLagSpeed;
    float CameraRotationLagSpeed;
    float CameraLagMaxTimeStep;
    float CameraLagMaxDistance;

    bool IsCollisionFixApplied();
    FVector GetUnfixedCameraPosition();
    FRotator GetTargetRotation();
};

class UStaticMesh : public UStreamableRenderAsset
{
    FPerPlatformInt MinLOD;
    float LpvBiasMultiplier;
    TArray<FStaticMaterial> StaticMaterials;
    float LightmapUVDensity;
    int32 LightMapResolution;
    int32 LightMapCoordinateIndex;
    float DistanceFieldSelfShadowBias;
    class UBodySetup* BodySetup;
    int32 LODForCollision;
    uint8 bGenerateMeshDistanceField;
    uint8 bStripComplexCollisionForConsole;
    uint8 bHasNavigationData;
    uint8 bSupportUniformlyDistributedSampling;
    uint8 bSupportPhysicalMaterialMasks;
    uint8 bSupportRayTracing;
    uint8 bIsBuiltAtRuntime;
    uint8 bAllowCPUAccess;
    uint8 bSupportGpuUniformlyDistributedSampling;
    TArray<class UStaticMeshSocket*> Sockets;
    FVector PositiveBoundsExtension;
    FVector NegativeBoundsExtension;
    FBoxSphereBounds ExtendedBounds;
    int32 ElementToIgnoreForTexFactor;
    TArray<class UAssetUserData*> AssetUserData;
    class UObject* EditableMesh;
    class UNavCollisionBase* NavCollision;

    void SetStaticMaterials(const TArray<FStaticMaterial>& InStaticMaterials);
    void RemoveSocket(class UStaticMeshSocket* Socket);
    TArray<FStaticMaterial> GetStaticMaterials();
    int32 GetNumSections(int32 InLOD);
    int32 GetNumLODs();
    void GetMinimumLODForPlatforms(TMap<FName, int32>& PlatformMinimumLODs);
    int32 GetMinimumLODForPlatform(const FName& PlatformName);
    int32 GetMaterialIndex(FName MaterialSlotName);
    class UMaterialInterface* GetMaterial(int32 MaterialIndex);
    FBoxSphereBounds GetBounds();
    FBox GetBoundingBox();
    class UStaticMeshSocket* FindSocket(FName InSocketName);
    class UStaticMeshDescription* CreateStaticMeshDescription(class UObject* Outer);
    void BuildFromStaticMeshDescriptions(const TArray<class UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision);
    void AddSocket(class UStaticMeshSocket* Socket);
    FName AddMaterial(class UMaterialInterface* Material);
};

class UStaticMeshComponent : public UMeshComponent
{
    int32 ForcedLodModel;
    int32 PreviousLODLevel;
    int32 MinLOD;
    int32 SubDivisionStepSize;
    class UStaticMesh* StaticMesh;
    FColor WireframeColorOverride;
    uint8 bEvaluateWorldPositionOffset;
    uint8 bOverrideWireframeColor;
    uint8 bOverrideMinLod;
    uint8 bOverrideNavigationExport;
    uint8 bForceNavigationObstacle;
    uint8 bDisallowMeshPaintPerInstance;
    uint8 bIgnoreInstanceForTextureStreaming;
    uint8 bOverrideLightMapRes;
    uint8 bCastDistanceFieldIndirectShadow;
    uint8 bOverrideDistanceFieldSelfShadowBias;
    uint8 bUseSubDivisions;
    uint8 bUseDefaultCollision;
    uint8 bReverseCulling;
    int32 OverriddenLightMapRes;
    float DistanceFieldIndirectShadowMinVisibility;
    float DistanceFieldSelfShadowBias;
    float StreamingDistanceMultiplier;
    TArray<FStaticMeshComponentLODInfo> LODData;
    TArray<FStreamingTextureBuildInfo> StreamingTextureData;
    FLightmassPrimitiveSettings LightmassSettings;

    bool SetStaticMesh(class UStaticMesh* NewMesh);
    void SetReverseCulling(bool ReverseCulling);
    void SetForcedLodModel(int32 NewForcedLodModel);
    void SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue);
    void SetDistanceFieldSelfShadowBias(float NewValue);
    void OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
    void GetLocalBounds(FVector& Min, FVector& Max);
};

class UStaticMeshSocket : public UObject
{
    FName SocketName;
    FVector RelativeLocation;
    FRotator RelativeRotation;
    FVector RelativeScale;
    FString Tag;

};

class UStereoLayerComponent : public USceneComponent
{
    uint8 bLiveTexture;
    uint8 bSupportsDepth;
    uint8 bNoAlphaChannel;
    class UTexture* Texture;
    class UTexture* LeftTexture;
    uint8 bQuadPreserveTextureRatio;
    FVector2D QuadSize;
    FBox2D UVRect;
    float CylinderRadius;
    float CylinderOverlayArc;
    int32 CylinderHeight;
    FEquirectProps EquirectProps;
    TEnumAsByte<EStereoLayerType> StereoLayerType;
    TEnumAsByte<EStereoLayerShape> StereoLayerShape;
    class UStereoLayerShape* Shape;
    int32 Priority;

    void SetUVRect(FBox2D InUVRect);
    void SetTexture(class UTexture* InTexture);
    void SetQuadSize(FVector2D InQuadSize);
    void SetPriority(int32 InPriority);
    void SetLeftTexture(class UTexture* InTexture);
    void SetEquirectProps(FEquirectProps InScaleBiases);
    void MarkTextureForUpdate();
    FBox2D GetUVRect();
    class UTexture* GetTexture();
    FVector2D GetQuadSize();
    int32 GetPriority();
    class UTexture* GetLeftTexture();
};

class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ShowSplashScreen();
    void SetSplashScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    void HideSplashScreen();
    void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
};

class UStereoLayerShape : public UObject
{
};

class UStereoLayerShapeCubemap : public UStereoLayerShape
{
};

class UStereoLayerShapeCylinder : public UStereoLayerShape
{
    float Radius;
    float OverlayArc;
    int32 Height;

    void SetRadius(float InRadius);
    void SetOverlayArc(float InOverlayArc);
    void SetHeight(int32 InHeight);
};

class UStereoLayerShapeEquirect : public UStereoLayerShape
{
    FBox2D LeftUVRect;
    FBox2D RightUVRect;
    FVector2D LeftScale;
    FVector2D RightScale;
    FVector2D LeftBias;
    FVector2D RightBias;

    void SetEquirectProps(FEquirectProps InScaleBiases);
};

class UStereoLayerShapeQuad : public UStereoLayerShape
{
};

class UStreamableRenderAsset : public UObject
{
    double ForceMipLevelsToBeResidentTimestamp;
    int32 NumCinematicMipLevels;
    int32 StreamingIndex;
    int32 CachedCombinedLODBias;
    uint8 NeverStream;
    uint8 bGlobalForceMipLevelsToBeResident;
    uint8 bHasStreamingUpdatePending;
    uint8 bForceMiplevelsToBeResident;
    uint8 bIgnoreStreamingMipBias;
    uint8 bUseCinematicMipLevels;

};

class UStreamingSettings : public UDeveloperSettings
{
    uint8 AsyncLoadingThreadEnabled;
    uint8 WarnIfTimeLimitExceeded;
    float TimeLimitExceededMultiplier;
    float TimeLimitExceededMinTime;
    int32 MinBulkDataSizeForAsyncLoading;
    uint8 UseBackgroundLevelStreaming;
    uint8 AsyncLoadingUseFullTimeLimit;
    float AsyncLoadingTimeLimit;
    float PriorityAsyncLoadingExtraTime;
    float LevelStreamingActorsUpdateTimeLimit;
    float PriorityLevelStreamingActorsUpdateExtraTime;
    int32 LevelStreamingComponentsRegistrationGranularity;
    float LevelStreamingUnregisterComponentsTimeLimit;
    int32 LevelStreamingComponentsUnregistrationGranularity;
    uint8 FlushStreamingOnExit;
    uint8 EventDrivenLoaderEnabled;

};

class UStringTable : public UObject
{
};

class USubUVAnimation : public UObject
{
    class UTexture2D* SubUVTexture;
    int32 SubImages_Horizontal;
    int32 SubImages_Vertical;
    TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;
    TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;
    float AlphaThreshold;

};

class USubsurfaceProfile : public UObject
{
    FSubsurfaceProfileStruct Settings;

};

class USubsystem : public UObject
{
};

class USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class UWorldSubsystem* GetWorldSubsystem(class UObject* contextObject, TSubclassOf<class UWorldSubsystem> Class);
    class ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(class APlayerController* PlayerController, TSubclassOf<class ULocalPlayerSubsystem> Class);
    class ULocalPlayerSubsystem* GetLocalPlayerSubsystem(class UObject* contextObject, TSubclassOf<class ULocalPlayerSubsystem> Class);
    class UGameInstanceSubsystem* GetGameInstanceSubsystem(class UObject* contextObject, TSubclassOf<class UGameInstanceSubsystem> Class);
    class UEngineSubsystem* GetEngineSubsystem(TSubclassOf<class UEngineSubsystem> Class);
};

class USystemTimeTimecodeProvider : public UTimecodeProvider
{
    FFrameRate FrameRate;
    bool bGenerateFullFrame;
    bool bUseHighPerformanceClock;

};

class UTextPropertyTestObject : public UObject
{
    FText DefaultedText;
    FText UndefaultedText;
    FText TransientText;

};

class UTextRenderComponent : public UPrimitiveComponent
{
    FText Text;
    class UMaterialInterface* TextMaterial;
    class UFont* Font;
    TEnumAsByte<EHorizTextAligment> HorizontalAlignment;
    TEnumAsByte<EVerticalTextAligment> VerticalAlignment;
    FColor TextRenderColor;
    float XScale;
    float YScale;
    float WorldSize;
    float InvDefaultSize;
    float HorizSpacingAdjust;
    float VertSpacingAdjust;
    uint8 bAlwaysRenderAsText;

    void SetYScale(float Value);
    void SetXScale(float Value);
    void SetWorldSize(float Value);
    void SetVertSpacingAdjust(float Value);
    void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);
    void SetTextRenderColor(FColor Value);
    void SetTextMaterial(class UMaterialInterface* Material);
    void SetText(FString Value);
    void SetHorizSpacingAdjust(float Value);
    void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
    void SetFont(class UFont* Value);
    void K2_SetText(const FText& Value);
    FVector GetTextWorldSize();
    FVector GetTextLocalSize();
};

class UTexture : public UStreamableRenderAsset
{
    FGuid LightingGuid;
    int32 LODBias;
    TEnumAsByte<TextureCompressionSettings> CompressionSettings;
    TEnumAsByte<TextureFilter> Filter;
    ETextureMipLoadOptions MipLoadOptions;
    TEnumAsByte<TextureGroup> LODGroup;
    FPerPlatformFloat Downscale;
    ETextureDownscaleOptions DownscaleOptions;
    uint8 sRGB;
    uint8 bNoTiling;
    uint8 VirtualTextureStreaming;
    uint8 CompressionYCoCg;
    uint8 bNotOfflineProcessed;
    uint8 bAsyncResourceReleaseHasBeenStarted;
    TArray<class UAssetUserData*> AssetUserData;

};

class UTexture2D : public UTexture
{
    int32 LevelIndex;
    int32 FirstResourceMemMip;
    uint8 bTemporarilyDisableStreaming;
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
    FIntPoint ImportedSize;

    int32 Blueprint_GetSizeY();
    int32 Blueprint_GetSizeX();
};

class UTexture2DArray : public UTexture
{
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
    TEnumAsByte<TextureAddress> AddressZ;

};

class UTexture2DDynamic : public UTexture
{
    TEnumAsByte<EPixelFormat> Format;

};

class UTextureCube : public UTexture
{
};

class UTextureLODSettings : public UObject
{
    TArray<FTextureLODGroup> TextureLODGroups;

};

class UTextureLightProfile : public UTexture2D
{
    float Brightness;
    float TextureMultiplier;

};

class UTextureMipDataProviderFactory : public UAssetUserData
{
};

class UTextureRenderTarget : public UTexture
{
    float TargetGamma;

};

class UTextureRenderTarget2D : public UTextureRenderTarget
{
    int32 SizeX;
    int32 SizeY;
    FLinearColor ClearColor;
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
    uint8 bForceLinearGamma;
    uint8 bHDR;
    uint8 bGPUSharedFlag;
    TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat;
    uint8 bAutoGenerateMips;
    TEnumAsByte<TextureFilter> MipsSamplerFilter;
    TEnumAsByte<TextureAddress> MipsAddressU;
    TEnumAsByte<TextureAddress> MipsAddressV;
    TEnumAsByte<EPixelFormat> OverrideFormat;

};

class UTextureRenderTarget2DArray : public UTextureRenderTarget
{
    int32 SizeX;
    int32 SizeY;
    int32 Slices;
    FLinearColor ClearColor;
    TEnumAsByte<EPixelFormat> OverrideFormat;
    uint8 bHDR;
    uint8 bForceLinearGamma;

};

class UTextureRenderTargetCube : public UTextureRenderTarget
{
    int32 SizeX;
    FLinearColor ClearColor;
    TEnumAsByte<EPixelFormat> OverrideFormat;
    uint8 bHDR;
    uint8 bForceLinearGamma;

};

class UTextureRenderTargetVolume : public UTextureRenderTarget
{
    int32 SizeX;
    int32 SizeY;
    int32 SizeZ;
    FLinearColor ClearColor;
    TEnumAsByte<EPixelFormat> OverrideFormat;
    uint8 bHDR;
    uint8 bForceLinearGamma;

};

class UThumbnailInfo : public UObject
{
};

class UTickableWorldSubsystem : public UWorldSubsystem
{
};

class UTimecodeProvider : public UObject
{
    float FrameDelay;

    FTimecode GetTimecode();
    ETimecodeProviderSynchronizationState GetSynchronizationState();
    FQualifiedFrameTime GetQualifiedFrameTime();
    FFrameRate GetFrameRate();
    FTimecode GetDelayedTimecode();
    FQualifiedFrameTime GetDelayedQualifiedFrameTime();
    bool FetchTimecode(FQualifiedFrameTime& OutFrameTime);
    void FetchAndUpdate();
};

class UTimelineComponent : public UActorComponent
{
    FTimeline TheTimeline;
    uint8 bIgnoreTimeDilation;

    void Stop();
    void SetVectorCurve(class UCurveVector* NewVectorCurve, FName VectorTrackName);
    void SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);
    void SetTimelineLength(float NewLength);
    void SetPlayRate(float NewRate);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
    void SetNewTime(float newTime);
    void SetLooping(bool bNewLooping);
    void SetLinearColorCurve(class UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName);
    void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
    void SetFloatCurve(class UCurveFloat* NewFloatCurve, FName FloatTrackName);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_Timeline();
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    float GetTimelineLength();
    float GetPlayRate();
    float GetPlaybackPosition();
    bool GetIgnoreTimeDilation();
};

class UTimelineTemplate : public UObject
{
    float TimelineLength;
    TEnumAsByte<ETimelineLengthMode> LengthMode;
    uint8 bAutoPlay;
    uint8 bLoop;
    uint8 bReplicated;
    uint8 bIgnoreTimeDilation;
    TArray<FTTEventTrack> EventTracks;
    TArray<FTTFloatTrack> FloatTracks;
    TArray<FTTVectorTrack> VectorTracks;
    TArray<FTTLinearColorTrack> LinearColorTracks;
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    FGuid TimelineGuid;
    TEnumAsByte<ETickingGroup> TimelineTickGroup;
    FName VariableName;
    FName DirectionPropertyName;
    FName UpdateFunctionName;
    FName FinishedFunctionName;

};

class UTireType : public UDataAsset
{
    float FrictionScale;

};

class UTouchInterface : public UObject
{
    TArray<FTouchInputControl> Controls;
    float ActiveOpacity;
    float InactiveOpacity;
    float TimeUntilDeactive;
    float TimeUntilReset;
    float ActivationDelay;
    bool bPreventRecenter;
    float StartupDelay;

};

class UTwitterIntegrationBase : public UPlatformInterfaceBase
{

    bool TwitterRequest(FString URL, const TArray<FString>& ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int32 AccountIndex);
    bool ShowTweetUI(FString InitialMessage, FString URL, FString Picture);
    void Init();
    int32 GetNumAccounts();
    FString GetAccountName(int32 AccountIndex);
    bool CanShowTweetUI();
    bool AuthorizeAccounts();
};

class UUserDefinedEnum : public UEnum
{
    TMap<class FName, class FText> DisplayNameMap;

};

class UUserDefinedStruct : public UScriptStruct
{
    TEnumAsByte<EUserDefinedStructureStatus> Status;
    FGuid Guid;

};

class UUserInterfaceSettings : public UDeveloperSettings
{
    ERenderFocusRule RenderFocusRule;
    TMap<TEnumAsByte<EMouseCursor::Type>, FHardwareCursorReference> HardwareCursors;
    TMap<TEnumAsByte<EMouseCursor::Type>, FSoftClassPath> SoftwareCursors;
    FSoftClassPath DefaultCursor;
    FSoftClassPath TextEditBeamCursor;
    FSoftClassPath CrosshairsCursor;
    FSoftClassPath HandCursor;
    FSoftClassPath GrabHandCursor;
    FSoftClassPath GrabHandClosedCursor;
    FSoftClassPath SlashedCircleCursor;
    float ApplicationScale;
    EUIScalingRule UIScaleRule;
    FSoftClassPath CustomScalingRuleClass;
    FRuntimeFloatCurve UIScaleCurve;
    bool bAllowHighDPIInGameMode;
    FIntPoint DesignScreenSize;
    bool bLoadWidgetsOnDedicatedServer;
    TArray<class UObject*> CursorClasses;
    UClass* CustomScalingRuleClassInstance;
    class UDPICustomScalingRule* CustomScalingRule;

};

class UVOIPStatics : public UBlueprintFunctionLibrary
{

    void SetMicThreshold(float InThreshold);
};

class UVOIPTalker : public UActorComponent
{
    FVoiceSettings Settings;

    void RegisterWithPlayerState(class APlayerState* OwningState);
    float GetVoiceLevel();
    class UVOIPTalker* CreateTalkerForPlayer(class APlayerState* OwningState);
    void BPOnTalkingEnd();
    void BPOnTalkingBegin(class UAudioComponent* AudioComponent);
};

class UVectorField : public UObject
{
    FBox Bounds;
    float Intensity;

};

class UVectorFieldAnimated : public UVectorField
{
    class UTexture2D* Texture;
    TEnumAsByte<EVectorFieldConstructionOp> ConstructionOp;
    int32 VolumeSizeX;
    int32 VolumeSizeY;
    int32 VolumeSizeZ;
    int32 SubImagesX;
    int32 SubImagesY;
    int32 FrameCount;
    float FramesPerSecond;
    uint8 bLoop;
    class UVectorFieldStatic* NoiseField;
    float NoiseScale;
    float NoiseMax;

};

class UVectorFieldComponent : public UPrimitiveComponent
{
    class UVectorField* VectorField;
    float Intensity;
    float Tightness;
    uint8 bPreviewVectorField;

    void SetIntensity(float NewIntensity);
};

class UVectorFieldStatic : public UVectorField
{
    int32 SizeX;
    int32 SizeY;
    int32 SizeZ;
    bool bAllowCPUAccess;

};

class UViewModeUtils : public UObject
{
};

class UViewportStatsSubsystem : public UWorldSubsystem
{

    void RemoveDisplayDelegate(const int32 IndexToRemove);
    void AddTimedDisplay(FText Text, FLinearColor Color, float Duration);
    int32 AddDisplayDelegate(const FAddDisplayDelegateDelegate& Delegate);
};

class UVirtualTexture : public UObject
{
};

class UVirtualTexture2D : public UTexture2D
{
    FVirtualTextureBuildSettings Settings;
    bool bContinuousUpdate;
    bool bSinglePhysicalSpace;

};

class UVirtualTextureBuilder : public UObject
{
    class UVirtualTexture2D* Texture;
    uint64 BuildHash;

};

class UVirtualTexturePoolConfig : public UObject
{
    int32 DefaultSizeInMegabyte;
    TArray<FVirtualTextureSpacePoolConfig> Pools;

};

class UVisualLoggerAutomationTests : public UObject
{
};

class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{

    void RedirectVislog(class UObject* SourceOwner, class UObject* DestinationOwner);
    void LogText(class UObject* WorldContextObject, FString Text, FName LogCategory, bool bAddToMessageLog);
    void LogSegment(class UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, FString Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog);
    void LogLocation(class UObject* WorldContextObject, FVector Location, FString Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog);
    void LogBox(class UObject* WorldContextObject, FBox BoxShape, FString Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog);
    void EnableRecording(bool bEnabled);
};

class UVoiceChannel : public UChannel
{
};

class UVolumeTexture : public UTexture
{
};

class UVolumetricCloudComponent : public USceneComponent
{
    float LayerBottomAltitude;
    float LayerHeight;
    float TracingStartMaxDistance;
    float TracingMaxDistance;
    float PlanetRadius;
    FColor GroundAlbedo;
    class UMaterialInterface* Material;
    uint8 bUsePerSampleAtmosphericLightTransmittance;
    float SkyLightCloudBottomOcclusion;
    float ViewSampleCountScale;
    float ReflectionSampleCountScale;
    float ShadowViewSampleCountScale;
    float ShadowReflectionSampleCountScale;
    float ShadowTracingDistance;
    float StopTracingTransmittanceThreshold;

    void SetViewSampleCountScale(float NewValue);
    void SetTracingStartMaxDistance(float NewValue);
    void SetTracingMaxDistance(float NewValue);
    void SetStopTracingTransmittanceThreshold(float NewValue);
    void SetSkyLightCloudBottomOcclusion(float NewValue);
    void SetShadowViewSampleCountScale(float NewValue);
    void SetShadowTracingDistance(float NewValue);
    void SetShadowReflectionSampleCountScale(float NewValue);
    void SetReflectionSampleCountScale(float NewValue);
    void SetPlanetRadius(float NewValue);
    void SetMaterial(class UMaterialInterface* NewValue);
    void SetLayerHeight(float NewValue);
    void SetLayerBottomAltitude(float NewValue);
    void SetGroundAlbedo(FColor NewValue);
    void SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue);
};

class UWindDirectionalSourceComponent : public USceneComponent
{
    float Strength;
    float Speed;
    float MinGustAmount;
    float MaxGustAmount;
    float Radius;
    uint8 bPointWind;

    void SetWindType(EWindSourceType InNewType);
    void SetStrength(float InNewStrength);
    void SetSpeed(float InNewSpeed);
    void SetRadius(float InNewRadius);
    void SetMinimumGustAmount(float InNewMinGust);
    void SetMaximumGustAmount(float InNewMaxGust);
};

class UWorld : public UObject
{
    class ULevel* PersistentLevel;
    class UNetDriver* NetDriver;
    class ULineBatchComponent* LineBatcher;
    class ULineBatchComponent* PersistentLineBatcher;
    class ULineBatchComponent* ForegroundLineBatcher;
    class AGameNetworkManager* NetworkManager;
    class UPhysicsCollisionHandler* PhysicsCollisionHandler;
    TArray<class UObject*> ExtraReferencedObjects;
    TArray<class UObject*> PerModuleDataObjects;
    TArray<class ULevelStreaming*> StreamingLevels;
    FStreamingLevelsToConsider StreamingLevelsToConsider;
    FString StreamingLevelsPrefix;
    class ULevel* CurrentLevelPendingVisibility;
    class ULevel* CurrentLevelPendingInvisibility;
    class UDemoNetDriver* DemoNetDriver;
    class AParticleEventManager* MyParticleEventManager;
    class APhysicsVolume* DefaultPhysicsVolume;
    uint8 bAreConstraintsDirty;
    class UNavigationSystemBase* NavigationSystem;
    class AGameModeBase* AuthorityGameMode;
    class AGameStateBase* GameState;
    class UAISystemBase* AISystem;
    class UAvoidanceManager* AvoidanceManager;
    TArray<class ULevel*> Levels;
    TArray<FLevelCollection> LevelCollections;
    class UGameInstance* OwningGameInstance;
    TArray<class UMaterialParameterCollectionInstance*> ParameterCollectionInstances;
    class UCanvas* CanvasForRenderingToTarget;
    class UCanvas* CanvasForDrawMaterialToRenderTarget;
    class UPhysicsFieldComponent* PhysicsField;
    TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync;
    TArray<class UActorComponent*> ComponentsThatNeedEndOfFrameUpdate;
    TArray<class UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;
    class UWorldComposition* WorldComposition;
    FWorldPSCPool PSCPool;

    class AWorldSettings* K2_GetWorldSettings();
    void HandleTimelineScrubbed();
};

class UWorldComposition : public UObject
{
    TArray<class ULevelStreaming*> TilesStreaming;
    double TilesStreamingTimeThreshold;
    bool bLoadAllTilesDuringCinematic;
    bool bRebaseOriginIn3DSpace;
    float RebaseOriginDistance;

};

class UWorldSubsystem : public USubsystem
{
};

#endif
