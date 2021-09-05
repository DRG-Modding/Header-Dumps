// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject {
	AActor* TransformOriginActor; // 0x30(0x08)
	FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequence
// Size: 0x498 (Inherited: 0x348)
struct ULevelSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x348(0x08)
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x350(0x50)
	FLevelSequenceBindingReferences BindingReferences; // 0x3a0(0xa0)
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x440(0x50)
	UObject* DirectorClass; // 0x490(0x08)

	void RemoveMetaDataByClass(UObject* InClass);
	UObject* FindOrAddMetaDataByClass(UObject* InClass);
	UObject* FindMetaDataByClass(UObject* InClass);
	UObject* CopyMetaData(UObject* InMetaData);
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28(0x01)
	FSoftClassPath BurnInClass; // 0x30(0x18)
	ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)

	void SetBurnIn(FSoftClassPath InBurnInClass);
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x2b0 (Inherited: 0x220)
struct ALevelSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230(0x14)
	ULevelSequencePlayer* SequencePlayer; // 0x248(0x08)
	FSoftObjectPath LevelSequence; // 0x250(0x18)
	TArray<AActor*> AdditionalEventReceivers; // 0x268(0x10)
	FLevelSequenceCameraSettings CameraSettings; // 0x278(0x02)
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x280(0x08)
	UMovieSceneBindingOverrides* BindingOverrides; // 0x288(0x08)
	char bAutoPlay : 1; // 0x290(0x01)
	char bOverrideInstanceData : 1; // 0x290(0x01)
	char bReplicatePlayback : 1; // 0x290(0x01)
	UObject* DefaultInstanceData; // 0x298(0x08)
	ULevelSequenceBurnIn* BurnInInstance; // 0x2a0(0x08)
	bool bShowBurnin; // 0x2a8(0x01)

	void ShowBurnin();
	void SetSequence(ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetEventReceivers(TArray<AActor*> AdditionalReceivers);
	void SetBindingByTag(FName BindingTag, TArray<AActor*> Actors, bool bAllowBindingsFromAsset);
	void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*> Actors, bool bAllowBindingsFromAsset);
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
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2f0 (Inherited: 0x230)
struct ULevelSequenceBurnIn : UUserWidget {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x230(0xb8)
	ALevelSequenceActor* LevelSequenceActor; // 0x2e8(0x08)

	void SetSettings(UObject* InSettings);
	ULevelSequenceBurnInInitSettings* GetSettingsClass();
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x30 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject {
	ULevelSequencePlayer* Player; // 0x28(0x08)

	void OnCreated();
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x9a0 (Inherited: 0x888)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x888(0x10)

	UCameraComponent* GetActiveCameraComponent();
	ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor* OutActor);
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x248 (Inherited: 0x220)
struct ALevelSequenceMediaController : AActor {
	ALevelSequenceActor* Sequence; // 0x228(0x08)
	UMediaComponent* MediaComponent; // 0x230(0x08)
	float ServerStartTimeSeconds; // 0x238(0x04)

	void SynchronizeToServer(float DesyncThresholdSeconds);
	void Play();
	void OnRep_ServerStartTimeSeconds();
	ALevelSequenceActor* GetSequence();
	UMediaComponent* GetMediaComponent();
};

