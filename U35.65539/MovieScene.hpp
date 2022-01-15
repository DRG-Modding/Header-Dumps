#ifndef UE4SS_SDK_MovieScene_HPP
#define UE4SS_SDK_MovieScene_HPP

#include "MovieScene_enums.hpp"

class UMovieSceneSignedObject : UObject
{
    FGuid Signature;
}

class UMovieSceneTrack : UMovieSceneSignedObject
{
    FMovieSceneTrackEvalOptions EvalOptions;
    bool bIsEvalDisabled;
}

class UMovieSceneNameableTrack : UMovieSceneTrack
{
}

class UMovieSceneSection : UMovieSceneSignedObject
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
}

class UMovieSceneSequence : UMovieSceneSignedObject
{
    FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate;
    EMovieSceneCompletionMode DefaultCompletionMode;
    bool bParentContextsAreSignificant;
    bool bPlayableDirectly;

    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);
}

class UMovieSceneSequencePlayer : UObject
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
    UMovieSceneSequence* Sequence;
    FFrameNumber StartTime;
    int32 DurationFrames;
    int32 CurrentNumLoops;
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    FMovieSceneSequenceReplProperties NetSyncProps;
    TScriptInterface<IMovieScenePlaybackClient> PlaybackClient;

    void StopAtCurrentTime();
    void Stop();
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float PlayRate);
    void SetPlaybackRange(const float NewStartTime, const float NewEndTime);
    void SetPlaybackPosition(float NewPlaybackPosition);
    void SetFrameRate(FFrameRate FrameRate);
    void SetFrameRange(int32 StartFrame, int32 Duration);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void ScrubToSeconds(float TimeInSeconds);
    bool ScrubToMarkedFrame(FString InLabel);
    void ScrubToFrame(FFrameTime NewPosition);
    void Scrub();
    void RPC_OnStopEvent(FFrameTime StoppedTime);
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);
    void PlayToSeconds(float TimeInSeconds);
    bool PlayToMarkedFrame(FString InLabel);
    void PlayToFrame(FFrameTime NewPosition);
    void PlayReverse();
    void PlayLooping(int32 NumLoops);
    void Play();
    void Pause();
    void JumpToSeconds(float TimeInSeconds);
    void JumpToPosition(float NewPlaybackPosition);
    bool JumpToMarkedFrame(FString InLabel);
    void JumpToFrame(FFrameTime NewPosition);
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    FQualifiedFrameTime GetStartTime();
    float GetPlayRate();
    float GetPlaybackStart();
    float GetPlaybackPosition();
    float GetPlaybackEnd();
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(UObject* InObject);
    float GetLength();
    FFrameRate GetFrameRate();
    int32 GetFrameDuration();
    FQualifiedFrameTime GetEndTime();
    FQualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    FQualifiedFrameTime GetCurrentTime();
    TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}

class UMovieSceneSubSection : UMovieSceneSection
{
    FMovieSceneSectionParameters Parameters;
    float StartOffset;
    float TimeScale;
    float PrerollTime;
    UMovieSceneSequence* SubSequence;
    TLazyObjectPtr<AActor> ActorToRecord;
    FString TargetSequenceName;
    FDirectoryPath TargetPathToRecordTo;

    void SetSequence(UMovieSceneSequence* Sequence);
    UMovieSceneSequence* GetSequence();
}

class UMovieSceneSubTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> Sections;
}

class UMovieSceneCustomClockSource : UInterface
{

    void OnTick(float DeltaSeconds, float InPlayRate);
    void OnStopPlaying(const FQualifiedFrameTime& InStopTime);
    void OnStartPlaying(const FQualifiedFrameTime& InStartTime);
    FFrameTime OnRequestCurrentTime(const FQualifiedFrameTime& InCurrentTime, float InPlayRate);
}

class UMovieScenePlaybackClient : UInterface
{
}

class UMovieScene : UMovieSceneSignedObject
{
    TArray<FMovieSceneSpawnable> Spawnables;
    TArray<FMovieScenePossessable> Possessables;
    TArray<FMovieSceneBinding> ObjectBindings;
    TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups;
    TArray<UMovieSceneTrack*> MasterTracks;
    UMovieSceneTrack* CameraCutTrack;
    FMovieSceneFrameRange SelectionRange;
    FMovieSceneFrameRange PlaybackRange;
    FFrameRate TickResolution;
    FFrameRate DisplayRate;
    EMovieSceneEvaluationType EvaluationType;
    EUpdateClockSource ClockSource;
    FSoftObjectPath CustomClockSourcePath;
    TArray<FMovieSceneMarkedFrame> MarkedFrames;
}

class UMovieSceneBindingOverrides : UObject
{
    TArray<FMovieSceneBindingOverrideData> BindingData;
}

class UMovieSceneBindingOwnerInterface : UInterface
{
}

class UMovieSceneBuiltInEasingFunction : UObject
{
    EMovieSceneBuiltInEasing Type;
}

class UMovieSceneEasingExternalCurve : UObject
{
    UCurveFloat* Curve;
}

class UMovieSceneEasingFunction : UInterface
{

    float OnEvaluate(float Interp);
}

class UMovieSceneFolder : UObject
{
    FName FolderName;
    TArray<UMovieSceneFolder*> ChildFolders;
    TArray<UMovieSceneTrack*> ChildMasterTracks;
    TArray<FString> ChildObjectBindingStrings;
}

class UMovieSceneKeyProxy : UInterface
{
}

class UTestMovieSceneTrack : UMovieSceneTrack
{
    bool bHighPassFilter;
    TArray<UMovieSceneSection*> SectionArray;
}

class UTestMovieSceneSection : UMovieSceneSection
{
}

class UTestMovieSceneSequence : UMovieSceneSequence
{
    UMovieScene* MovieScene;
}

class UTestMovieSceneSubTrack : UMovieSceneSubTrack
{
    TArray<UMovieSceneSection*> SectionArray;
}

class UTestMovieSceneSubSection : UMovieSceneSubSection
{
}

struct FMovieSceneEvalTemplateBase
{
}

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{
    EMovieSceneCompletionMode CompletionMode;
    TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;
}

struct FMovieSceneChannel
{
}

struct FMovieSceneBoolChannel : FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    bool DefaultValue;
    bool bHasDefaultValue;
    TArray<bool> Values;
}

struct FMovieSceneFloatChannel : FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    TArray<FFrameNumber> Times;
    TArray<FMovieSceneFloatValue> Values;
    float DefaultValue;
    bool bHasDefaultValue;
    FMovieSceneKeyHandleMap KeyHandles;
    FFrameRate TickResolution;
}

struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{
}

struct FMovieSceneFloatValue
{
    float Value;
    FMovieSceneTangentData Tangent;
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    uint8 PaddingByte;
}

struct FMovieSceneTangentData
{
    float ArriveTangent;
    float LeaveTangent;
    float ArriveTangentWeight;
    float LeaveTangentWeight;
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
}

struct FMovieSceneIntegerChannel : FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    int32 DefaultValue;
    bool bHasDefaultValue;
    TArray<int32> Values;
}

struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{
}

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;
}

struct FMovieScenePropertySectionData
{
    FName PropertyName;
    FString PropertyPath;
    FName FunctionName;
    FName NotifyFunctionName;
}

struct FMovieSceneSequenceInstanceData
{
}

struct FMovieSceneEvaluationOperand
{
    FGuid ObjectBindingID;
    FMovieSceneSequenceID SequenceID;
}

struct FMovieSceneSequenceID
{
    uint32 Value;
}

struct FMovieSceneSectionGroup
{
    TArray<TWeakObjectPtr<UMovieSceneSection>> Sections;
}

struct FMovieSceneObjectBindingIDs
{
    TArray<FMovieSceneObjectBindingID> IDs;
}

struct FMovieSceneObjectBindingID
{
    int32 SequenceID;
    EMovieSceneObjectBindingSpace Space;
    FGuid Guid;
}

struct FMovieSceneTrackLabels
{
    TArray<FString> Strings;
}

struct FMovieSceneEditorData
{
    TMap<FString, FMovieSceneExpansionState> ExpansionStates;
    TArray<FString> PinnedNodes;
    double ViewStart;
    double ViewEnd;
    double WorkStart;
    double WorkEnd;
    TSet<FFrameNumber> MarkedFrames;
    FFloatRange WorkingRange;
    FFloatRange ViewRange;
}

struct FMovieSceneExpansionState
{
    bool bExpanded;
}

struct FMovieSceneMarkedFrame
{
    FFrameNumber FrameNumber;
    FString Label;
}

struct FMovieSceneTimecodeSource
{
    FTimecode Timecode;
    FFrameNumber DeltaFrame;
}

struct FMovieSceneBinding
{
    FGuid ObjectGuid;
    FString BindingName;
    TArray<UMovieSceneTrack*> Tracks;
}

struct FMovieSceneBindingOverrideData
{
    FMovieSceneObjectBindingID ObjectBindingID;
    TWeakObjectPtr<UObject> Object;
    bool bOverridesDefault;
}

struct FOptionalMovieSceneBlendType
{
    EMovieSceneBlendType BlendType;
    bool bIsValid;
}

struct FMovieSceneByteChannel : FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    uint8 DefaultValue;
    bool bHasDefaultValue;
    TArray<uint8> Values;
    UEnum* Enum;
}

struct FMovieSceneEvalTemplatePtr
{
}

struct FMovieSceneEmptyStruct
{
}

struct FMovieSceneEvaluationField
{
    TArray<FMovieSceneFrameRange> Ranges;
    TArray<FMovieSceneEvaluationGroup> Groups;
    TArray<FMovieSceneEvaluationMetaData> MetaData;
}

struct FMovieSceneEvaluationMetaData
{
    TArray<FMovieSceneSequenceID> ActiveSequences;
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;
    TMap<FMovieSceneSequenceID, uint32> SubTemplateSerialNumbers;
}

struct FMovieSceneOrderedEvaluationKey
{
    FMovieSceneEvaluationKey Key;
    uint16 SetupIndex;
    uint16 TearDownIndex;
}

struct FMovieSceneEvaluationKey
{
    FMovieSceneSequenceID SequenceID;
    FMovieSceneTrackIdentifier TrackIdentifier;
    uint32 SectionIndex;
}

struct FMovieSceneTrackIdentifier
{
    uint32 Value;
}

struct FMovieSceneEvaluationGroup
{
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;
    TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;
}

struct FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSequenceID SequenceID;
    FMovieSceneTrackIdentifier TrackIdentifier;
}

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSegmentIdentifier SegmentID;
}

struct FMovieSceneSegmentIdentifier
{
    int32 IdentifierIndex;
}

struct FMovieSceneEvaluationGroupLUTIndex
{
    int32 LUTOffset;
    int32 NumInitPtrs;
    int32 NumEvalPtrs;
}

struct FMovieSceneFrameRange
{
}

struct FMovieSceneEvaluationTemplate
{
    TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;
    FMovieSceneEvaluationField EvaluationField;
    FMovieSceneSequenceHierarchy Hierarchy;
    FGuid SequenceSignature;
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;
    FMovieSceneTemplateGenerationLedger TemplateLedger;
    FMovieSceneTrackFieldData TrackFieldData;
    FMovieSceneSubSectionFieldData SubSectionFieldData;
}

struct FMovieSceneSubSectionFieldData
{
}

struct FMovieSceneTrackFieldData
{
}

struct FMovieSceneTemplateGenerationLedger
{
    FMovieSceneTrackIdentifier LastTrackIdentifier;
    TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;
    TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges;
}

struct FMovieSceneEvaluationTemplateSerialNumber
{
    uint32 Value;
}

struct FMovieSceneSequenceHierarchy
{
    TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;
    TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;
}

struct FMovieSceneSequenceHierarchyNode
{
    FMovieSceneSequenceID ParentID;
    TArray<FMovieSceneSequenceID> Children;
}

struct FMovieSceneSubSequenceData
{
    FSoftObjectPath Sequence;
    FMovieSceneSequenceTransform RootToSequenceTransform;
    FFrameRate TickResolution;
    FMovieSceneSequenceID DeterministicSequenceID;
    FMovieSceneFrameRange PlayRange;
    FMovieSceneFrameRange FullPlayRange;
    FMovieSceneFrameRange UnwarpedPlayRange;
    FMovieSceneFrameRange PreRollRange;
    FMovieSceneFrameRange PostRollRange;
    int32 HierarchicalBias;
    FMovieSceneSequenceInstanceDataPtr InstanceData;
    FGuid SubSectionSignature;
    FMovieSceneSequenceTransform OuterToInnerTransform;
}

struct FMovieSceneSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;
}

struct FMovieSceneNestedSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;
    FMovieSceneTimeWarping Warping;
}

struct FMovieSceneTimeWarping
{
    FFrameNumber Start;
    FFrameNumber End;
}

struct FMovieSceneTimeTransform
{
    float TimeScale;
    FFrameTime Offset;
}

struct FMovieSceneSequenceInstanceDataPtr
{
}

struct FMovieSceneEvaluationTrack
{
    FGuid ObjectBindingID;
    uint16 EvaluationPriority;
    EEvaluationMethod EvaluationMethod;
    FMovieSceneEvaluationTrackSegments Segments;
    UMovieSceneTrack* SourceTrack;
    FSectionEvaluationDataTree EvaluationTree;
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;
    FMovieSceneTrackImplementationPtr TrackTemplate;
    FName EvaluationGroup;
    uint8 bEvaluateInPreroll;
    uint8 bEvaluateInPostroll;
    uint8 bTearDownPriority;
}

struct FMovieSceneTrackImplementationPtr
{
}

struct FSectionEvaluationDataTree
{
}

struct FMovieSceneEvaluationTrackSegments
{
    TArray<int32> SegmentIdentifierToIndex;
    TArray<FMovieSceneSegment> SortedSegments;
}

struct FMovieSceneSegment
{
}

struct FMovieSceneSubSectionData
{
    TWeakObjectPtr<UMovieSceneSubSection> Section;
    FGuid ObjectBindingID;
    ESectionEvaluationFlags Flags;
}

struct FMovieSceneRootEvaluationTemplateInstance
{
    TMap<FMovieSceneSequenceID, UObject*> DirectorInstances;
}

struct FMovieSceneKeyStruct
{
}

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{
    FFrameNumber Time;
}

struct FGeneratedMovieSceneKeyStruct
{
}

struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{
    UClass* PropertyClass;
    TArray<FFrameNumber> Times;
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;
    FMovieSceneObjectPathChannelKeyValue DefaultValue;
}

struct FMovieSceneObjectPathChannelKeyValue
{
    TSoftObjectPtr<UObject> SoftPtr;
    UObject* HardPtr;
}

struct FMovieScenePossessable
{
    TArray<FName> Tags;
    FGuid Guid;
    FString Name;
    UClass* PossessedObjectClass;
    FGuid ParentGuid;
}

struct FMovieSceneEasingSettings
{
    int32 AutoEaseInDuration;
    int32 AutoEaseOutDuration;
    TScriptInterface<IMovieSceneEasingFunction> EaseIn;
    bool bManualEaseIn;
    int32 ManualEaseInDuration;
    TScriptInterface<IMovieSceneEasingFunction> EaseOut;
    bool bManualEaseOut;
    int32 ManualEaseOutDuration;
}

struct FMovieSceneSectionEvalOptions
{
    bool bCanEditCompletionMode;
    EMovieSceneCompletionMode CompletionMode;
}

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
}

struct FSectionEvaluationData
{
    int32 ImplIndex;
    FFrameNumber ForcedTime;
    ESectionEvaluationFlags Flags;
}

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
}

struct FMovieSceneSequenceLoopCount
{
    int32 Value;
}

struct FMovieSceneSequenceReplProperties
{
    FFrameTime LastKnownPosition;
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;
    int32 LastKnownNumLoops;
}

struct FMovieSceneWarpCounter
{
    TArray<uint32> WarpCounts;
}

struct FMovieSceneSpawnable
{
    FTransform SpawnTransform;
    TArray<FName> Tags;
    bool bContinuouslyRespawn;
    FGuid Guid;
    FString Name;
    UObject* ObjectTemplate;
    TArray<FGuid> ChildPossessables;
    ESpawnOwnership Ownership;
    FName LevelName;
}

struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{
}

struct FMovieSceneTrackDisplayOptions
{
    uint8 bShowVerticalFrames;
}

struct FMovieSceneTrackEvalOptions
{
    uint8 bCanEvaluateNearestSection;
    uint8 bEvalNearestSection;
    uint8 bEvaluateInPreroll;
    uint8 bEvaluateInPostroll;
    uint8 bEvaluateNearestSection;
}

#endif
