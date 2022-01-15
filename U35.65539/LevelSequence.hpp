#ifndef UE4SS_SDK_LevelSequence_HPP
#define UE4SS_SDK_LevelSequence_HPP

class UDefaultLevelSequenceInstanceData : UObject
{
    AActor* TransformOriginActor;
    FTransform TransformOrigin;
}

class ULevelSequenceMetaData : UInterface
{
}

class ULevelSequence : UMovieSceneSequence
{
    UMovieScene* MovieScene;
    FLevelSequenceObjectReferenceMap ObjectReferences;
    FLevelSequenceBindingReferences BindingReferences;
    TMap<FString, FLevelSequenceObject> PossessedObjects;
    UClass* DirectorClass;

    void RemoveMetaDataByClass(TSubclassOf<UObject> InClass);
    UObject* FindOrAddMetaDataByClass(TSubclassOf<UObject> InClass);
    UObject* FindMetaDataByClass(TSubclassOf<UObject> InClass);
    UObject* CopyMetaData(UObject* InMetaData);
}

class ULevelSequenceBurnInInitSettings : UObject
{
}

class ULevelSequenceBurnInOptions : UObject
{
    bool bUseBurnIn;
    FSoftClassPath BurnInClass;
    ULevelSequenceBurnInInitSettings* Settings;

    void SetBurnIn(FSoftClassPath InBurnInClass);
}

class ALevelSequenceActor : AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    ULevelSequencePlayer* SequencePlayer;
    FSoftObjectPath LevelSequence;
    TArray<AActor*> AdditionalEventReceivers;
    FLevelSequenceCameraSettings CameraSettings;
    ULevelSequenceBurnInOptions* BurnInOptions;
    UMovieSceneBindingOverrides* BindingOverrides;
    uint8 bAutoPlay;
    uint8 bOverrideInstanceData;
    uint8 bReplicatePlayback;
    UObject* DefaultInstanceData;
    ULevelSequenceBurnIn* BurnInInstance;
    bool bShowBurnin;

    void ShowBurnin();
    void SetSequence(ULevelSequence* InSequence);
    void SetReplicatePlayback(bool ReplicatePlayback);
    void SetEventReceivers(TArray<AActor*> AdditionalReceivers);
    void SetBindingByTag(FName BindingTag, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    void SetBinding(FMovieSceneObjectBindingID Binding, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    void ResetBindings();
    void ResetBinding(FMovieSceneObjectBindingID Binding);
    void RemoveBindingByTag(FName Tag, AActor* Actor);
    void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);
    void OnLevelSequenceLoaded__DelegateSignature();
    ULevelSequence* LoadSequence();
    void HideBurnin();
    ULevelSequencePlayer* GetSequencePlayer();
    ULevelSequence* GetSequence();
    TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);
    FMovieSceneObjectBindingID FindNamedBinding(FName Tag);
    void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);
    void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);
}

class ULevelSequenceBurnIn : UUserWidget
{
    FLevelSequencePlayerSnapshot FrameInformation;
    ALevelSequenceActor* LevelSequenceActor;

    void SetSettings(UObject* InSettings);
    TSubclassOf<ULevelSequenceBurnInInitSettings> GetSettingsClass();
}

class ULevelSequenceDirector : UObject
{
    ULevelSequencePlayer* Player;

    void OnCreated();
}

class ULegacyLevelSequenceDirectorBlueprint : UBlueprint
{
}

class ULevelSequencePlayer : UMovieSceneSequencePlayer
{
    FLevelSequencePlayerOnCameraCut OnCameraCut;
    void OnLevelSequencePlayerCameraCutEvent(UCameraComponent* CameraComponent);

    UCameraComponent* GetActiveCameraComponent();
    ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);
}

class ALevelSequenceMediaController : AActor
{
    ALevelSequenceActor* Sequence;
    UMediaComponent* MediaComponent;
    float ServerStartTimeSeconds;

    void SynchronizeToServer(float DesyncThresholdSeconds);
    void Play();
    void OnRep_ServerStartTimeSeconds();
    ALevelSequenceActor* GetSequence();
    UMediaComponent* GetMediaComponent();
}

struct ULevelSequenceCameraSettings
{
    bool bOverrideAspectRatioAxisConstraint;
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
}

struct UBoundActorProxy
{
}

struct ULevelSequenceBindingReferences
{
    TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences;
    TSet<FGuid> AnimSequenceInstances;
}

struct ULevelSequenceBindingReferenceArray
{
    TArray<FLevelSequenceBindingReference> References;
}

struct ULevelSequenceBindingReference
{
    FString PackageName;
    FSoftObjectPath ExternalObjectPath;
    FString ObjectPath;
}

struct ULevelSequenceObjectReferenceMap
{
}

struct ULevelSequenceLegacyObjectReference
{
}

struct ULevelSequenceObject
{
    TLazyObjectPtr<UObject> ObjectOrOwner;
    FString ComponentName;
    TWeakObjectPtr<UObject> CachedComponent;
}

struct ULevelSequencePlayerSnapshot
{
    FString MasterName;
    FQualifiedFrameTime MasterTime;
    FQualifiedFrameTime SourceTime;
    FString CurrentShotName;
    FQualifiedFrameTime CurrentShotLocalTime;
    FQualifiedFrameTime CurrentShotSourceTime;
    FString SourceTimecode;
    TSoftObjectPtr<UCameraComponent> CameraComponent;
    FLevelSequenceSnapshotSettings Settings;
    ULevelSequence* ActiveShot;
    FMovieSceneSequenceID ShotID;
}

struct ULevelSequenceSnapshotSettings
{
    uint8 ZeroPadAmount;
    FFrameRate FrameRate;
}

#endif
