// Class MovieScene.MovieSceneSignedObject
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; // 0x28(0x10)
	char UnknownData_38[0x18]; // 0x38(0x18)
};

// Class MovieScene.MovieSceneTrack
// Size: 0x58 (Inherited: 0x50)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x50(0x04)
	char UnknownData_54[0x1]; // 0x54(0x01)
	bool bIsEvalDisabled; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSection
// Size: 0xe0 (Inherited: 0x50)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x50(0x02)
	char UnknownData_52[0x6]; // 0x52(0x06)
	struct FMovieSceneEasingSettings Easing; // 0x58(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x90(0x10)
	struct FFrameNumber PreRollFrames; // 0xa0(0x04)
	struct FFrameNumber PostRollFrames; // 0xa4(0x04)
	int32_t RowIndex; // 0xa8(0x04)
	int32_t OverlapPriority; // 0xac(0x04)
	char bIsActive : 1; // 0xb0(0x01)
	char bIsLocked : 1; // 0xb0(0x01)
	char UnknownData_B0_2 : 6; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	float StartTime; // 0xb4(0x04)
	float EndTime; // 0xb8(0x04)
	float PrerollTime; // 0xbc(0x04)
	float PostrollTime; // 0xc0(0x04)
	char bIsInfinite : 1; // 0xc4(0x01)
	char UnknownData_C4_1 : 7; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	bool bSupportsInfiniteRange; // 0xc8(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xc9(0x02)
	char UnknownData_CB[0x15]; // 0xcb(0x15)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType
};

// Class MovieScene.MovieSceneSequence
// Size: 0x348 (Inherited: 0x50)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x50(0x2f0)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x340(0x01)
	bool bParentContextsAreSignificant; // 0x341(0x01)
	bool bPlayableDirectly; // 0x342(0x01)
	char UnknownData_343[0x5]; // 0x343(0x05)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x888 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject {
	char UnknownData_28[0x3e0]; // 0x28(0x3e0)
	struct FMulticastInlineDelegate OnPlay; // 0x408(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x418(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x428(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x438(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x448(0x10)
	char Status; // 0x458(0x01)
	char UnknownData_459[0x3]; // 0x459(0x03)
	char bReversePlayback : 1; // 0x45c(0x01)
	char UnknownData_45C_1 : 7; // 0x45c(0x01)
	char UnknownData_45D[0x3]; // 0x45d(0x03)
	struct UMovieSceneSequence* Sequence; // 0x460(0x08)
	struct FFrameNumber StartTime; // 0x468(0x04)
	int32_t DurationFrames; // 0x46c(0x04)
	int32_t CurrentNumLoops; // 0x470(0x04)
	char UnknownData_474[0x14]; // 0x474(0x14)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488(0x14)
	char UnknownData_49C[0x4]; // 0x49c(0x04)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a0(0x320)
	char UnknownData_7C0[0x68]; // 0x7c0(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x828(0x10)
	struct TScriptInterface<None> PlaybackClient; // 0x838(0x10)
	char UnknownData_848[0x40]; // 0x848(0x40)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	void SetFrameRange(int32_t StartFrame, int32_t Duration); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	void JumpToPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	float GetPlaybackStart(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
	float GetPlaybackPosition(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
	float GetPlaybackEnd(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	float GetLength(); // Function MovieScene.MovieSceneSequencePlayer.GetLength
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x158 (Inherited: 0xe0)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0xe0(0x24)
	float StartOffset; // 0x104(0x04)
	float TimeScale; // 0x108(0x04)
	float PrerollTime; // 0x10c(0x04)
	struct UMovieSceneSequence* SubSequence; // 0x110(0x08)
	LazyObjectProperty ActorToRecord; // 0x118(0x1c)
	char UnknownData_134[0x4]; // 0x134(0x04)
	struct FString TargetSequenceName; // 0x138(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x148(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick
	void OnStopPlaying(struct FQualifiedFrameTime InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	void OnStartPlaying(struct FQualifiedFrameTime InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieScene
// Size: 0x148 (Inherited: 0x50)
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x50(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x60(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x70(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x80(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xd0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xe0(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0xe8(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0xf8(0x10)
	struct FFrameRate TickResolution; // 0x108(0x08)
	struct FFrameRate DisplayRate; // 0x110(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x118(0x01)
	enum class EUpdateClockSource ClockSource; // 0x119(0x01)
	char UnknownData_11A[0x6]; // 0x11a(0x06)
	struct FSoftObjectPath CustomClockSourcePath; // 0x120(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x138(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
	char UnknownData_38[0x58]; // 0x38(0x58)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	enum class EMovieSceneBuiltInEasing Type; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate
};

// Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject {
	struct FName FolderName; // 0x28(0x08)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	char UnknownData_60[0x10]; // 0x60(0x10)
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0x70 (Inherited: 0x58)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x60(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xe0 (Inherited: 0xe0)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x350 (Inherited: 0x348)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0x78 (Inherited: 0x68)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x68(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x158 (Inherited: 0x158)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

