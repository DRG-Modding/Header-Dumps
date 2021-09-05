// Class MovieScene.MovieSceneSignedObject
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject {
	FGuid Signature; // 0x28(0x10)
};

// Class MovieScene.MovieSceneTrack
// Size: 0x58 (Inherited: 0x50)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50(0x04)
	bool bIsEvalDisabled; // 0x55(0x01)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSection
// Size: 0xe0 (Inherited: 0x50)
struct UMovieSceneSection : UMovieSceneSignedObject {
	FMovieSceneSectionEvalOptions EvalOptions; // 0x50(0x02)
	FMovieSceneEasingSettings Easing; // 0x58(0x38)
	FMovieSceneFrameRange SectionRange; // 0x90(0x10)
	FFrameNumber PreRollFrames; // 0xa0(0x04)
	FFrameNumber PostRollFrames; // 0xa4(0x04)
	int32_t RowIndex; // 0xa8(0x04)
	int32_t OverlapPriority; // 0xac(0x04)
	char bIsActive : 1; // 0xb0(0x01)
	char bIsLocked : 1; // 0xb0(0x01)
	float StartTime; // 0xb4(0x04)
	float EndTime; // 0xb8(0x04)
	float PrerollTime; // 0xbc(0x04)
	float PostrollTime; // 0xc0(0x04)
	char bIsInfinite : 1; // 0xc4(0x01)
	bool bSupportsInfiniteRange; // 0xc8(0x01)
	FOptionalMovieSceneBlendType BlendType; // 0xc9(0x02)

	void SetRowIndex(int32_t NewRowIndex);
	void SetPreRollFrames(int32_t InPreRollFrames);
	void SetPostRollFrames(int32_t InPostRollFrames);
	void SetOverlapPriority(int32_t NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode);
	void SetBlendType(enum class EMovieSceneBlendType InBlendType);
	bool IsLocked();
	bool IsActive();
	int32_t GetRowIndex();
	int32_t GetPreRollFrames();
	int32_t GetPostRollFrames();
	int32_t GetOverlapPriority();
	enum class EMovieSceneCompletionMode GetCompletionMode();
	FOptionalMovieSceneBlendType GetBlendType();
};

// Class MovieScene.MovieSceneSequence
// Size: 0x348 (Inherited: 0x50)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x50(0x2f0)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x340(0x01)
	bool bParentContextsAreSignificant; // 0x341(0x01)
	bool bPlayableDirectly; // 0x342(0x01)

	TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);
	FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x888 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject {
	FMulticastInlineDelegate OnPlay; // 0x408(0x10)
	FMulticastInlineDelegate OnPlayReverse; // 0x418(0x10)
	FMulticastInlineDelegate OnStop; // 0x428(0x10)
	FMulticastInlineDelegate OnPause; // 0x438(0x10)
	FMulticastInlineDelegate OnFinished; // 0x448(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x458(0x01)
	char bReversePlayback : 1; // 0x45c(0x01)
	UMovieSceneSequence* Sequence; // 0x460(0x08)
	FFrameNumber StartTime; // 0x468(0x04)
	int32_t DurationFrames; // 0x46c(0x04)
	int32_t CurrentNumLoops; // 0x470(0x04)
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488(0x14)
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a0(0x320)
	FMovieSceneSequenceReplProperties NetSyncProps; // 0x828(0x10)
	TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x838(0x10)

	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetFrameRate(FFrameRate FrameRate);
	void SetFrameRange(int32_t StartFrame, int32_t Duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(FString InLabel);
	void ScrubToFrame(FFrameTime NewPosition);
	void Scrub();
	void RPC_OnStopEvent(FFrameTime StoppedTime);
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, FFrameTime RelevantTime);
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(FString InLabel);
	void PlayToFrame(FFrameTime NewPosition);
	void PlayReverse();
	void PlayLooping(int32_t NumLoops);
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
	int32_t GetFrameDuration();
	FQualifiedFrameTime GetEndTime();
	FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	FQualifiedFrameTime GetCurrentTime();
	TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
	void ChangePlaybackDirection();
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x158 (Inherited: 0xe0)
struct UMovieSceneSubSection : UMovieSceneSection {
	FMovieSceneSectionParameters Parameters; // 0xe0(0x24)
	float StartOffset; // 0x104(0x04)
	float TimeScale; // 0x108(0x04)
	float PrerollTime; // 0x10c(0x04)
	UMovieSceneSequence* SubSequence; // 0x110(0x08)
	LazyObjectProperty ActorToRecord; // 0x118(0x1c)
	FString TargetSequenceName; // 0x138(0x10)
	FDirectoryPath TargetPathToRecordTo; // 0x148(0x10)

	void SetSequence(UMovieSceneSequence* Sequence);
	UMovieSceneSequence* GetSequence();
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate);
	void OnStopPlaying(FQualifiedFrameTime InStopTime);
	void OnStartPlaying(FQualifiedFrameTime InStartTime);
	FFrameTime OnRequestCurrentTime(FQualifiedFrameTime InCurrentTime, float InPlayRate);
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieScene
// Size: 0x148 (Inherited: 0x50)
struct UMovieScene : UMovieSceneSignedObject {
	TArray<FMovieSceneSpawnable> Spawnables; // 0x50(0x10)
	TArray<FMovieScenePossessable> Possessables; // 0x60(0x10)
	TArray<FMovieSceneBinding> ObjectBindings; // 0x70(0x10)
	TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups; // 0x80(0x50)
	TArray<UMovieSceneTrack*> MasterTracks; // 0xd0(0x10)
	UMovieSceneTrack* CameraCutTrack; // 0xe0(0x08)
	FMovieSceneFrameRange SelectionRange; // 0xe8(0x10)
	FMovieSceneFrameRange PlaybackRange; // 0xf8(0x10)
	FFrameRate TickResolution; // 0x108(0x08)
	FFrameRate DisplayRate; // 0x110(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x118(0x01)
	enum class EUpdateClockSource ClockSource; // 0x119(0x01)
	FSoftObjectPath CustomClockSourcePath; // 0x120(0x18)
	TArray<FMovieSceneMarkedFrame> MarkedFrames; // 0x138(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject {
	enum class EMovieSceneBuiltInEasing Type; // 0x30(0x01)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject {
	UCurveFloat* Curve; // 0x30(0x08)
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp);
};

// Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject {
	FName FolderName; // 0x28(0x08)
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	TArray<FString> ChildObjectBindingStrings; // 0x50(0x10)
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0x70 (Inherited: 0x58)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x58(0x01)
	TArray<UMovieSceneSection*> SectionArray; // 0x60(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xe0 (Inherited: 0xe0)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x350 (Inherited: 0x348)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x348(0x08)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0x78 (Inherited: 0x68)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x68(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x158 (Inherited: 0x158)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

