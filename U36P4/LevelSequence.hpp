#ifndef UE4SS_SDK_LevelSequence_HPP
#define UE4SS_SDK_LevelSequence_HPP

class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
    FGuid SkelTrackGuid;
    FSoftObjectPath PathToLevelSequence;

};

class UDefaultLevelSequenceInstanceData : public UObject
{
    class AActor* TransformOriginActor;
    FTransform TransformOrigin;

};

class ILevelSequenceMetaData : public IInterface
{
};

struct FLevelSequenceObjectReferenceMap
{
};

struct FLevelSequenceBindingReference
{
    FString PackageName;
    FSoftObjectPath ExternalObjectPath;
    FString ObjectPath;

};

struct FLevelSequenceBindingReferenceArray
{
    TArray<FLevelSequenceBindingReference> References;

};

struct FLevelSequenceBindingReferences
{
    TMap<class FGuid, class FLevelSequenceBindingReferenceArray> BindingIdToReferences;
    TSet<FGuid> AnimSequenceInstances;

};

struct FLevelSequenceObject
{
    TLazyObjectPtr<class UObject> ObjectOrOwner;
    FString ComponentName;
    TWeakObjectPtr<class UObject> CachedComponent;

};

class ULevelSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;
    FLevelSequenceObjectReferenceMap ObjectReferences;
    FLevelSequenceBindingReferences BindingReferences;
    TMap<class FString, class FLevelSequenceObject> PossessedObjects;
    UClass* DirectorClass;
    TArray<class UAssetUserData*> AssetUserData;

    void RemoveMetaDataByClass(UClass* InClass);
    class UObject* FindOrAddMetaDataByClass(UClass* InClass);
    class UObject* FindMetaDataByClass(UClass* InClass);
    class UObject* CopyMetaData(class UObject* InMetaData);
};

class ULevelSequenceBurnInInitSettings : public UObject
{
};

class ULevelSequenceBurnInOptions : public UObject
{
    bool bUseBurnIn;
    FSoftClassPath BurnInClass;
    class ULevelSequenceBurnInInitSettings* Settings;

    void SetBurnIn(FSoftClassPath InBurnInClass);
};

struct FLevelSequenceCameraSettings
{
    bool bOverrideAspectRatioAxisConstraint;
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;

};

class ALevelSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    class ULevelSequencePlayer* SequencePlayer;
    FSoftObjectPath LevelSequence;
    FLevelSequenceCameraSettings CameraSettings;
    class ULevelSequenceBurnInOptions* BurnInOptions;
    class UMovieSceneBindingOverrides* BindingOverrides;
    uint8 bAutoPlay;
    uint8 bOverrideInstanceData;
    uint8 bReplicatePlayback;
    class UObject* DefaultInstanceData;
    class ULevelSequenceBurnIn* BurnInInstance;
    bool bShowBurnin;

    void ShowBurnin();
    void SetSequence(class ULevelSequence* InSequence);
    void SetReplicatePlayback(bool ReplicatePlayback);
    void SetBindingByTag(FName BindingTag, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
    void SetBinding(FMovieSceneObjectBindingID Binding, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
    void ResetBindings();
    void ResetBinding(FMovieSceneObjectBindingID Binding);
    void RemoveBindingByTag(FName Tag, class AActor* Actor);
    void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);
    void OnLevelSequenceLoaded__DelegateSignature();
    class ULevelSequence* LoadSequence();
    void HideBurnin();
    class ULevelSequencePlayer* GetSequencePlayer();
    class ULevelSequence* GetSequence();
    TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);
    FMovieSceneObjectBindingID FindNamedBinding(FName Tag);
    void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
    void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

struct FLevelSequenceAnimSequenceLinkItem
{
    FGuid SkelTrackGuid;
    FSoftObjectPath PathToAnimSequence;
    bool bExportTransforms;
    bool bExportCurves;
    bool bRecordInWorldSpace;

};

class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
    TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;

};

struct FLevelSequenceSnapshotSettings
{
    uint8 ZeroPadAmount;
    FFrameRate FrameRate;

};

struct FLevelSequencePlayerSnapshot
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
    class ULevelSequence* ActiveShot;
    FMovieSceneSequenceID ShotID;

};

class ULevelSequenceBurnIn : public UUserWidget
{
    FLevelSequencePlayerSnapshot FrameInformation;
    class ALevelSequenceActor* LevelSequenceActor;

    void SetSettings(class UObject* InSettings);
    TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
};

class ULevelSequenceDirector : public UObject
{
    class ULevelSequencePlayer* Player;
    int32 SubSequenceID;
    int32 MovieScenePlayerIndex;

    void OnCreated();
    class UMovieSceneSequence* GetSequence();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);
    TArray<class AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);
    class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);
};

class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
};

class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
    FLevelSequencePlayerOnCameraCut OnCameraCut;
    void OnLevelSequencePlayerCameraCutEvent(class UCameraComponent* CameraComponent);

    class UCameraComponent* GetActiveCameraComponent();
    class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor);
};

class ULevelSequenceProjectSettings : public UDeveloperSettings
{
    bool bDefaultLockEngineToDisplayRate;
    FString DefaultDisplayRate;
    FString DefaultTickResolution;
    EUpdateClockSource DefaultClockSource;

};

class ALevelSequenceMediaController : public AActor
{
    class ALevelSequenceActor* Sequence;
    class UMediaComponent* MediaComponent;
    float ServerStartTimeSeconds;

    void SynchronizeToServer(float DesyncThresholdSeconds);
    void Play();
    void OnRep_ServerStartTimeSeconds();
    class ALevelSequenceActor* GetSequence();
    class UMediaComponent* GetMediaComponent();
};

struct FBoundActorProxy
{
};

struct FLevelSequenceLegacyObjectReference
{
};

#endif
