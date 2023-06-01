#ifndef UE4SS_SDK_MovieScene_HPP
#define UE4SS_SDK_MovieScene_HPP

#include "MovieScene_enums.hpp"

struct FEasingComponentData
{
    class UMovieSceneSection* Section;

};

struct FGeneratedMovieSceneKeyStruct
{
};

struct FMovieSceneBinding
{
    FGuid ObjectGuid;
    FString BindingName;
    TArray<class UMovieSceneTrack*> Tracks;

};

struct FMovieSceneBindingOverrideData
{
    FMovieSceneObjectBindingID ObjectBindingID;
    TWeakObjectPtr<class UObject> Object;
    bool bOverridesDefault;

};

struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    bool DefaultValue;
    bool bHasDefaultValue;
    TArray<bool> Values;

};

struct FMovieSceneByteChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    uint8 DefaultValue;
    bool bHasDefaultValue;
    TArray<uint8> Values;
    class UEnum* Enum;

};

struct FMovieSceneChannel
{
};

struct FMovieSceneCompiledSequenceFlagStruct
{
    uint8 bParentSequenceRequiresLowerFence;
    uint8 bParentSequenceRequiresUpperFence;

};

struct FMovieSceneDeterminismData
{
    TArray<FFrameTime> Fences;
    bool bParentSequenceRequiresLowerFence;
    bool bParentSequenceRequiresUpperFence;

};

struct FMovieSceneEasingSettings
{
    int32 AutoEaseInDuration;
    int32 AutoEaseOutDuration;
    TScriptInterface<class IMovieSceneEasingFunction> EaseIn;
    bool bManualEaseIn;
    int32 ManualEaseInDuration;
    TScriptInterface<class IMovieSceneEasingFunction> EaseOut;
    bool bManualEaseOut;
    int32 ManualEaseOutDuration;

};

struct FMovieSceneEditorData
{
    TMap<class FString, class FMovieSceneExpansionState> ExpansionStates;
    TArray<FString> PinnedNodes;
    double ViewStart;
    double ViewEnd;
    double WorkStart;
    double WorkEnd;
    TSet<FFrameNumber> MarkedFrames;
    FFloatRange WorkingRange;
    FFloatRange ViewRange;

};

struct FMovieSceneEmptyStruct
{
};

struct FMovieSceneEntityComponentField
{
    FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;
    FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;
    TArray<FMovieSceneEvaluationFieldEntity> Entities;
    TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;
    TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;

};

struct FMovieSceneEntitySystemGraph
{
    FMovieSceneEntitySystemGraphNodes Nodes;

};

struct FMovieSceneEntitySystemGraphNode
{
    class UMovieSceneEntitySystem* System;

};

struct FMovieSceneEntitySystemGraphNodes
{
};

struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
    EMovieSceneCompletionMode CompletionMode;
    TWeakObjectPtr<class UMovieSceneSection> SourceSectionPtr;

};

struct FMovieSceneEvalTemplateBase
{
};

struct FMovieSceneEvalTemplatePtr
{
};

struct FMovieSceneEvaluationField
{
    TArray<FMovieSceneFrameRange> Ranges;
    TArray<FMovieSceneEvaluationGroup> Groups;
    TArray<FMovieSceneEvaluationMetaData> MetaData;

};

struct FMovieSceneEvaluationFieldEntity
{
    FMovieSceneEvaluationFieldEntityKey Key;
    int32 SharedMetaDataIndex;

};

struct FMovieSceneEvaluationFieldEntityKey
{
    TWeakObjectPtr<class UObject> EntityOwner;
    uint32 EntityID;

};

struct FMovieSceneEvaluationFieldEntityMetaData
{
    FString OverrideBoundPropertyPath;
    FFrameNumber ForcedTime;
    ESectionEvaluationFlags Flags;
    uint8 bEvaluateInSequencePreRoll;
    uint8 bEvaluateInSequencePostRoll;

};

struct FMovieSceneEvaluationFieldEntityTree
{
};

struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSegmentIdentifier SegmentID;

};

struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
    FGuid ObjectBindingID;

};

struct FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSequenceID SequenceID;
    FMovieSceneTrackIdentifier TrackIdentifier;

};

struct FMovieSceneEvaluationGroup
{
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;
    TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;
    TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT;

};

struct FMovieSceneEvaluationGroupLUTIndex
{
    int32 NumInitPtrs;
    int32 NumEvalPtrs;

};

struct FMovieSceneEvaluationHookComponent
{
    TScriptInterface<class IMovieSceneEvaluationHook> Interface;

};

struct FMovieSceneEvaluationHookEvent
{
    FMovieSceneEvaluationHookComponent Hook;

};

struct FMovieSceneEvaluationHookEventContainer
{
    TArray<FMovieSceneEvaluationHookEvent> Events;

};

struct FMovieSceneEvaluationInstanceKey
{
};

struct FMovieSceneEvaluationKey
{
    FMovieSceneSequenceID SequenceID;
    FMovieSceneTrackIdentifier TrackIdentifier;
    uint32 SectionIndex;

};

struct FMovieSceneEvaluationMetaData
{
    TArray<FMovieSceneSequenceID> ActiveSequences;
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;

};

struct FMovieSceneEvaluationOperand
{
    FGuid ObjectBindingID;
    FMovieSceneSequenceID SequenceID;

};

struct FMovieSceneEvaluationTemplate
{
    TMap<class FMovieSceneTrackIdentifier, class FMovieSceneEvaluationTrack> Tracks;
    FGuid SequenceSignature;
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;
    FMovieSceneTemplateGenerationLedger TemplateLedger;

};

struct FMovieSceneEvaluationTemplateSerialNumber
{
    uint32 Value;

};

struct FMovieSceneEvaluationTrack
{
    FGuid ObjectBindingID;
    uint16 EvaluationPriority;
    EEvaluationMethod EvaluationMethod;
    TWeakObjectPtr<class UMovieSceneTrack> SourceTrack;
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;
    FMovieSceneTrackImplementationPtr TrackTemplate;
    FName EvaluationGroup;
    uint8 bEvaluateInPreroll;
    uint8 bEvaluateInPostroll;
    uint8 bTearDownPriority;

};

struct FMovieSceneExpansionState
{
    bool bExpanded;

};

struct FMovieSceneFieldEntry_ChildTemplate
{
    uint16 ChildIndex;
    ESectionEvaluationFlags Flags;
    FFrameNumber ForcedTime;

};

struct FMovieSceneFieldEntry_EvaluationTrack
{
    FMovieSceneEvaluationFieldTrackPtr TrackPtr;
    uint16 NumChildren;

};

struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    TArray<FFrameNumber> Times;
    TArray<FMovieSceneFloatValue> Values;
    float DefaultValue;
    bool bHasDefaultValue;
    FMovieSceneKeyHandleMap KeyHandles;
    FFrameRate TickResolution;

};

struct FMovieSceneFloatValue
{
    float Value;
    FMovieSceneTangentData Tangent;
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    uint8 PaddingByte;

};

struct FMovieSceneFrameRange
{
};

struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    int32 DefaultValue;
    bool bHasDefaultValue;
    TArray<int32> Values;

};

struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{
};

struct FMovieSceneKeyStruct
{
};

struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
    FFrameNumber Time;

};

struct FMovieSceneMarkedFrame
{
    FFrameNumber FrameNumber;
    FString Label;
    bool bIsDeterminismFence;

};

struct FMovieSceneNestedSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;
    FMovieSceneTimeWarping Warping;

};

struct FMovieSceneObjectBindingID
{
    FGuid Guid;
    int32 SequenceID;
    int32 ResolveParentIndex;

};

struct FMovieSceneObjectBindingIDs
{
    TArray<FMovieSceneObjectBindingID> IDs;

};

struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
    UClass* PropertyClass;
    TArray<FFrameNumber> Times;
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;
    FMovieSceneObjectPathChannelKeyValue DefaultValue;

};

struct FMovieSceneObjectPathChannelKeyValue
{
    TSoftObjectPtr<UObject> SoftPtr;
    class UObject* HardPtr;

};

struct FMovieSceneOrderedEvaluationKey
{
    FMovieSceneEvaluationKey Key;
    uint16 SetupIndex;
    uint16 TearDownIndex;

};

struct FMovieScenePossessable
{
    TArray<FName> Tags;
    FGuid Guid;
    FString Name;
    UClass* PossessedObjectClass;
    FGuid ParentGuid;

};

struct FMovieScenePropertyBinding
{
    FName PropertyName;
    FName PropertyPath;
    bool bCanUseClassLookup;

};

struct FMovieScenePropertySectionData
{
    FName PropertyName;
    FString PropertyPath;

};

struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;

};

struct FMovieSceneRootEvaluationTemplateInstance
{
    TWeakObjectPtr<class UMovieSceneSequence> WeakRootSequence;
    class UMovieSceneCompiledDataManager* CompiledDataManager;
    class UMovieSceneEntitySystemLinker* EntitySystemLinker;
    TMap<class FMovieSceneSequenceID, class UObject*> DirectorInstances;

};

struct FMovieSceneSectionEvalOptions
{
    bool bCanEditCompletionMode;
    EMovieSceneCompletionMode CompletionMode;

};

struct FMovieSceneSectionGroup
{
    TArray<TWeakObjectPtr<UMovieSceneSection>> Sections;

};

struct FMovieSceneSectionParameters
{
    FFrameNumber StartFrameOffset;
    bool bCanLoop;
    FFrameNumber EndFrameOffset;
    FFrameNumber FirstLoopStartFrameOffset;
    float TimeScale;
    int32 HierarchicalBias;
    float StartOffset;
    float PrerollTime;
    float PostrollTime;

};

struct FMovieSceneSegment
{
};

struct FMovieSceneSegmentIdentifier
{
    int32 IdentifierIndex;

};

struct FMovieSceneSequenceActorPointers
{
    class AActor* SequenceActor;
    TScriptInterface<class IMovieSceneSequenceActor> SequenceActorInterface;

};

struct FMovieSceneSequenceCompilerMaskStruct
{
    uint8 bHierarchy;
    uint8 bEvaluationTemplate;
    uint8 bEvaluationTemplateField;
    uint8 bEntityComponentField;

};

struct FMovieSceneSequenceHierarchy
{
    FMovieSceneSequenceHierarchyNode RootNode;
    FMovieSceneSubSequenceTree Tree;
    TMap<class FMovieSceneSequenceID, class FMovieSceneSubSequenceData> SubSequences;
    TMap<class FMovieSceneSequenceID, class FMovieSceneSequenceHierarchyNode> Hierarchy;

};

struct FMovieSceneSequenceHierarchyNode
{
    FMovieSceneSequenceID ParentID;
    TArray<FMovieSceneSequenceID> Children;

};

struct FMovieSceneSequenceID
{
    uint32 Value;

};

struct FMovieSceneSequenceInstanceData
{
};

struct FMovieSceneSequenceInstanceDataPtr
{
};

struct FMovieSceneSequenceLoopCount
{
    int32 Value;

};

struct FMovieSceneSequencePlaybackParams
{
    FFrameTime Frame;
    float Time;
    FString MarkedFrame;
    EMovieScenePositionType PositionType;
    EUpdatePositionMethod UpdateMethod;

};

struct FMovieSceneSequencePlaybackSettings
{
    uint8 bAutoPlay;
    FMovieSceneSequenceLoopCount LoopCount;
    float PlayRate;
    float StartTime;
    uint8 bRandomStartTime;
    uint8 bRestoreState;
    uint8 bDisableMovementInput;
    uint8 bDisableLookAtInput;
    uint8 bHidePlayer;
    uint8 bHideHud;
    uint8 bDisableCameraCuts;
    uint8 bPauseAtEnd;

};

struct FMovieSceneSequenceReplProperties
{
    FFrameTime LastKnownPosition;
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;
    int32 LastKnownNumLoops;

};

struct FMovieSceneSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;

};

struct FMovieSceneSpawnable
{
    FTransform SpawnTransform;
    TArray<FName> Tags;
    bool bContinuouslyRespawn;
    bool bNetAddressableName;
    bool bEvaluateTracksWhenNotSpawned;
    FGuid Guid;
    FString Name;
    class UObject* ObjectTemplate;
    TArray<FGuid> ChildPossessables;
    ESpawnOwnership Ownership;
    FName LevelName;

};

struct FMovieSceneSubSectionData
{
    TWeakObjectPtr<class UMovieSceneSubSection> Section;
    FGuid ObjectBindingID;
    ESectionEvaluationFlags Flags;

};

struct FMovieSceneSubSequenceData
{
    FSoftObjectPath Sequence;
    FMovieSceneSequenceTransform OuterToInnerTransform;
    FMovieSceneSequenceTransform RootToSequenceTransform;
    FFrameRate TickResolution;
    FMovieSceneSequenceID DeterministicSequenceID;
    FMovieSceneFrameRange ParentPlayRange;
    FFrameNumber ParentStartFrameOffset;
    FFrameNumber ParentEndFrameOffset;
    FFrameNumber ParentFirstLoopStartFrameOffset;
    bool bCanLoop;
    FMovieSceneFrameRange PlayRange;
    FMovieSceneFrameRange FullPlayRange;
    FMovieSceneFrameRange UnwarpedPlayRange;
    FMovieSceneFrameRange PreRollRange;
    FMovieSceneFrameRange PostRollRange;
    int16 HierarchicalBias;
    bool bHasHierarchicalEasing;
    FMovieSceneSequenceInstanceDataPtr InstanceData;
    FGuid SubSectionSignature;

};

struct FMovieSceneSubSequenceTree
{
};

struct FMovieSceneSubSequenceTreeEntry
{
};

struct FMovieSceneTangentData
{
    float ArriveTangent;
    float LeaveTangent;
    float ArriveTangentWeight;
    float LeaveTangentWeight;
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;

};

struct FMovieSceneTemplateGenerationLedger
{
    FMovieSceneTrackIdentifier LastTrackIdentifier;
    TMap<class FGuid, class FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;
    TMap<class FGuid, class FMovieSceneFrameRange> SubSectionRanges;

};

struct FMovieSceneTimeTransform
{
    float TimeScale;
    FFrameTime Offset;

};

struct FMovieSceneTimeWarping
{
    FFrameNumber Start;
    FFrameNumber End;

};

struct FMovieSceneTimecodeSource
{
    FTimecode Timecode;
    FFrameNumber DeltaFrame;

};

struct FMovieSceneTrackDisplayOptions
{
    uint8 bShowVerticalFrames;

};

struct FMovieSceneTrackEvalOptions
{
    uint8 bCanEvaluateNearestSection;
    uint8 bEvalNearestSection;
    uint8 bEvaluateInPreroll;
    uint8 bEvaluateInPostroll;
    uint8 bEvaluateNearestSection;

};

struct FMovieSceneTrackEvaluationField
{
    TArray<FMovieSceneTrackEvaluationFieldEntry> Entries;

};

struct FMovieSceneTrackEvaluationFieldEntry
{
    class UMovieSceneSection* Section;
    FFrameNumberRange range;
    FFrameNumber ForcedTime;
    ESectionEvaluationFlags Flags;
    int16 LegacySortOrder;

};

struct FMovieSceneTrackIdentifier
{
    uint32 Value;

};

struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
};

struct FMovieSceneTrackImplementationPtr
{
};

struct FMovieSceneTrackInstanceComponent
{
    class UMovieSceneSection* Owner;
    TSubclassOf<class UMovieSceneTrackInstance> TrackInstanceClass;

};

struct FMovieSceneTrackInstanceEntry
{
    class UObject* BoundObject;
    class UMovieSceneTrackInstance* TrackInstance;

};

struct FMovieSceneTrackInstanceInput
{
    class UMovieSceneSection* Section;

};

struct FMovieSceneTrackLabels
{
    TArray<FString> Strings;

};

struct FMovieSceneWarpCounter
{
    TArray<uint32> WarpCounts;

};

struct FOptionalMovieSceneBlendType
{
    EMovieSceneBlendType BlendType;
    bool bIsValid;

};

struct FSectionEvaluationData
{
    int32 ImplIndex;
    FFrameNumber ForcedTime;
    ESectionEvaluationFlags Flags;

};

struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
};

struct FTrackInstanceInputComponent
{
    class UMovieSceneSection* Section;
    int32 OutputIndex;

};

class IMovieSceneBindingOwnerInterface : public IInterface
{
};

class IMovieSceneCustomClockSource : public IInterface
{

    void OnTick(float DeltaSeconds, float InPlayRate);
    void OnStopPlaying(const FQualifiedFrameTime& InStopTime);
    void OnStartPlaying(const FQualifiedFrameTime& InStartTime);
    FFrameTime OnRequestCurrentTime(const FQualifiedFrameTime& InCurrentTime, float InPlayRate);
};

class IMovieSceneDeterminismSource : public IInterface
{
};

class IMovieSceneEasingFunction : public IInterface
{

    float OnEvaluate(float Interp);
};

class IMovieSceneEntityProvider : public IInterface
{
};

class IMovieSceneEvaluationHook : public IInterface
{
};

class IMovieSceneFloatDecomposer : public IInterface
{
};

class IMovieSceneKeyProxy : public IInterface
{
};

class IMovieScenePlaybackClient : public IInterface
{
};

class IMovieScenePreAnimatedStateSystemInterface : public IInterface
{
};

class IMovieSceneSceneComponentImpersonator : public IInterface
{
};

class IMovieSceneSequenceActor : public IInterface
{
};

class IMovieSceneTrackTemplateProducer : public IInterface
{
};

class INodeAndChannelMappings : public IInterface
{
};

class UMovieScene : public UMovieSceneSignedObject
{
    TArray<FMovieSceneSpawnable> Spawnables;
    TArray<FMovieScenePossessable> Possessables;
    TArray<FMovieSceneBinding> ObjectBindings;
    TMap<class FName, class FMovieSceneObjectBindingIDs> BindingGroups;
    TArray<class UMovieSceneTrack*> MasterTracks;
    class UMovieSceneTrack* CameraCutTrack;
    FMovieSceneFrameRange SelectionRange;
    FMovieSceneFrameRange PlaybackRange;
    FFrameRate TickResolution;
    FFrameRate DisplayRate;
    EMovieSceneEvaluationType EvaluationType;
    EUpdateClockSource ClockSource;
    FSoftObjectPath CustomClockSourcePath;
    TArray<FMovieSceneMarkedFrame> MarkedFrames;

};

class UMovieSceneBindingOverrides : public UObject
{
    TArray<FMovieSceneBindingOverrideData> BindingData;

};

class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneBoolSection : public UMovieSceneSection
{
    bool DefaultValue;
    FMovieSceneBoolChannel BoolCurve;

};

class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneBuiltInEasingFunction : public UObject
{
    EMovieSceneBuiltInEasing Type;

};

class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneCompiledData : public UObject
{
    FMovieSceneEvaluationTemplate EvaluationTemplate;
    FMovieSceneSequenceHierarchy Hierarchy;
    FMovieSceneEntityComponentField EntityComponentField;
    FMovieSceneEvaluationField TrackTemplateField;
    TArray<FFrameTime> DeterminismFences;
    FGuid CompiledSignature;
    FGuid CompilerVersion;
    FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;
    FMovieSceneSequenceCompilerMaskStruct AllocatedMask;
    EMovieSceneSequenceFlags AccumulatedFlags;

};

class UMovieSceneCompiledDataManager : public UObject
{
    TMap<int32, FMovieSceneSequenceHierarchy> Hierarchies;
    TMap<int32, FMovieSceneEvaluationTemplate> TrackTemplates;
    TMap<int32, FMovieSceneEvaluationField> TrackTemplateFields;
    TMap<int32, FMovieSceneEntityComponentField> EntityComponentFields;

};

class UMovieSceneEasingExternalCurve : public UObject
{
    class UCurveFloat* Curve;

};

class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneEntitySystem : public UObject
{
    class UMovieSceneEntitySystemLinker* Linker;

};

class UMovieSceneEntitySystemLinker : public UObject
{
    FMovieSceneEntitySystemGraph SystemGraph;

};

class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
    TMap<class FMovieSceneEvaluationInstanceKey, class FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;

};

class UMovieSceneFolder : public UObject
{
    FName FolderName;
    TArray<class UMovieSceneFolder*> ChildFolders;
    TArray<class UMovieSceneTrack*> ChildMasterTracks;
    TArray<FString> ChildObjectBindingStrings;

};

class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneHookSection : public UMovieSceneSection
{
    uint8 bRequiresRangedHook;
    uint8 bRequiresTriggerHooks;

};

class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneNameableTrack : public UMovieSceneTrack
{
};

class UMovieSceneNodeGroup : public UObject
{
};

class UMovieSceneNodeGroupCollection : public UObject
{
};

class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneSection : public UMovieSceneSignedObject
{
    FMovieSceneSectionEvalOptions EvalOptions;
    FMovieSceneEasingSettings Easing;
    FMovieSceneFrameRange SectionRange;
    FFrameNumber PreRollFrames;
    FFrameNumber PostRollFrames;
    int32 RowIndex;
    int32 OverlapPriority;
    uint8 bIsActive;
    uint8 bIsLocked;
    float StartTime;
    float EndTime;
    float PrerollTime;
    float PostrollTime;
    uint8 bIsInfinite;
    bool bSupportsInfiniteRange;
    FOptionalMovieSceneBlendType BlendType;

    void SetRowIndex(int32 NewRowIndex);
    void SetPreRollFrames(int32 InPreRollFrames);
    void SetPostRollFrames(int32 InPostRollFrames);
    void SetOverlapPriority(int32 NewPriority);
    void SetIsLocked(bool bInIsLocked);
    void SetIsActive(bool bInIsActive);
    void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
    void SetBlendType(EMovieSceneBlendType InBlendType);
    bool IsLocked();
    bool IsActive();
    int32 GetRowIndex();
    int32 GetPreRollFrames();
    int32 GetPostRollFrames();
    int32 GetOverlapPriority();
    EMovieSceneCompletionMode GetCompletionMode();
    FOptionalMovieSceneBlendType GetBlendType();
};

class UMovieSceneSequence : public UMovieSceneSignedObject
{
    class UMovieSceneCompiledData* CompiledData;
    EMovieSceneCompletionMode DefaultCompletionMode;
    bool bParentContextsAreSignificant;
    bool bPlayableDirectly;
    EMovieSceneSequenceFlags SequenceFlags;

    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);
};

class UMovieSceneSequencePlayer : public UObject
{
    FMovieSceneSequencePlayerOnPlay OnPlay;
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPlayReverse OnPlayReverse;
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnStop OnStop;
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPause OnPause;
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnFinished OnFinished;
    void OnMovieSceneSequencePlayerEvent();
    TEnumAsByte<EMovieScenePlayerStatus::Type> Status;
    uint8 bReversePlayback;
    class UMovieSceneSequence* Sequence;
    FFrameNumber StartTime;
    int32 DurationFrames;
    float DurationSubFrames;
    int32 CurrentNumLoops;
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    FMovieSceneSequenceReplProperties NetSyncProps;
    TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;
    class UMovieSceneSequenceTickManager* TickManager;

    void StopAtCurrentTime();
    void Stop();
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float PlayRate);
    void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);
    void SetFrameRate(FFrameRate FrameRate);
    void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void ScrubToSeconds(float TimeInSeconds);
    bool ScrubToMarkedFrame(FString InLabel);
    void ScrubToFrame(FFrameTime NewPosition);
    void Scrub();
    void RPC_OnStopEvent(FFrameTime StoppedTime);
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);
    void RestoreState();
    void PlayToSeconds(float TimeInSeconds);
    bool PlayToMarkedFrame(FString InLabel);
    void PlayToFrame(FFrameTime NewPosition);
    void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams);
    void PlayReverse();
    void PlayLooping(int32 NumLoops);
    void Play();
    void Pause();
    void JumpToSeconds(float TimeInSeconds);
    bool JumpToMarkedFrame(FString InLabel);
    void JumpToFrame(FFrameTime NewPosition);
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    FQualifiedFrameTime GetStartTime();
    class UMovieSceneSequence* GetSequence();
    float GetPlayRate();
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
    FFrameRate GetFrameRate();
    int32 GetFrameDuration();
    FQualifiedFrameTime GetEndTime();
    FQualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    FQualifiedFrameTime GetCurrentTime();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
};

class UMovieSceneSequenceTickManager : public UObject
{
    TArray<FMovieSceneSequenceActorPointers> SequenceActors;
    class UMovieSceneEntitySystemLinker* Linker;

};

class UMovieSceneSignedObject : public UObject
{
    FGuid Signature;

};

class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
};

class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;
    FGuid ObjectGuid;

};

class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneSubSection : public UMovieSceneSection
{
    FMovieSceneSectionParameters Parameters;
    float StartOffset;
    float TimeScale;
    float PrerollTime;
    uint8 NetworkMask;
    class UMovieSceneSequence* SubSequence;
    TLazyObjectPtr<class AActor> ActorToRecord;
    FString TargetSequenceName;
    FDirectoryPath TargetPathToRecordTo;

    void SetSequence(class UMovieSceneSequence* Sequence);
    class UMovieSceneSequence* GetSequence();
};

class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneTrack : public UMovieSceneSignedObject
{
    FMovieSceneTrackEvalOptions EvalOptions;
    bool bIsEvalDisabled;
    TArray<int32> RowsDisabled;
    FGuid EvaluationFieldGuid;
    FMovieSceneTrackEvaluationField EvaluationField;

};

class UMovieSceneTrackInstance : public UObject
{
    class UObject* AnimatedObject;
    bool bIsMasterTrackInstance;
    class UMovieSceneEntitySystemLinker* Linker;
    TArray<FMovieSceneTrackInstanceInput> Inputs;

};

class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
    class UMovieSceneTrackInstanceInstantiator* Instantiator;

};

class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
};

class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> SectionArray;

};

class UTestMovieSceneSection : public UMovieSceneSection
{
};

class UTestMovieSceneSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;

};

class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
};

class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
    TArray<class UMovieSceneSection*> SectionArray;

};

class UTestMovieSceneTrack : public UMovieSceneTrack
{
    bool bHighPassFilter;
    TArray<class UMovieSceneSection*> SectionArray;

};

#endif
