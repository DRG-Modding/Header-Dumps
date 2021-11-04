// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0x88 (Inherited: 0x58)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	UMovieSceneSection* SectionToKey; // 0x58(0x08)
	FName PropertyName; // 0x60(0x08)
	FString PropertyPath; // 0x68(0x10)
	TArray<UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTransformOrigin : UInterface {

	FTransform BP_GetTransformOrigin();
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x108 (Inherited: 0xe0)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	FGuid ConstraintId; // 0xe0(0x10)
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf0(0x18)

	void SetConstraintBindingID(FMovieSceneObjectBindingID InConstraintBindingID);
	FMovieSceneObjectBindingID GetConstraintBindingID();
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x120 (Inherited: 0x108)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	FName AttachSocketName; // 0x108(0x08)
	FName AttachComponentName; // 0x110(0x08)
	enum class EAttachmentRule AttachmentLocationRule; // 0x118(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x119(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x11a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x11b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x11c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x11d(0x01)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1b0 (Inherited: 0x108)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	FMovieSceneFloatChannel TimingCurve; // 0x108(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1a8(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1a9(0x01)
	char bFollow : 1; // 0x1ac(0x01)
	char bReverse : 1; // 0x1ac(0x01)
	char bForceUpright : 1; // 0x1ac(0x01)
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x730 (Inherited: 0xe0)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	FMovieSceneTransformMask TransformMask; // 0xe0(0x04)
	FMovieSceneFloatChannel Translation[0x3]; // 0xe8(0x1e0)
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2c8(0x1e0)
	FMovieSceneFloatChannel Scale[0x3]; // 0x4a8(0x1e0)
	FMovieSceneFloatChannel ManualWeight; // 0x688(0xa0)
	bool bUseQuaternionInterpolation; // 0x72c(0x01)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x220 (Inherited: 0xe0)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe0(0xb0)
	FIntegralCurve ActorGuidIndexCurve; // 0x190(0x80)
	TArray<FString> ActorGuidStrings; // 0x210(0x10)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x330 (Inherited: 0xe0)
struct UMovieSceneAudioSection : UMovieSceneSection {
	USoundBase* Sound; // 0xe0(0x08)
	FFrameNumber StartFrameOffset; // 0xe8(0x04)
	float StartOffset; // 0xec(0x04)
	float AudioStartTime; // 0xf0(0x04)
	float AudioDilationFactor; // 0xf4(0x04)
	float AudioVolume; // 0xf8(0x04)
	FMovieSceneFloatChannel SoundVolume; // 0x100(0xa0)
	FMovieSceneFloatChannel PitchMultiplier; // 0x1a0(0xa0)
	FMovieSceneActorReferenceData AttachActorData; // 0x240(0xb0)
	bool bSuppressSubtitles; // 0x2f0(0x01)
	bool bOverrideAttenuation; // 0x2f1(0x01)
	USoundAttenuation* AttenuationSettings; // 0x2f8(0x08)
	FDelegate OnQueueSubtitles; // 0x300(0x10)
	FMulticastInlineDelegate OnAudioFinished; // 0x310(0x10)
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x320(0x10)

	void SetStartOffset(FFrameNumber InStartOffset);
	void SetSound(USoundBase* InSound);
	FFrameNumber GetStartOffset();
	USoundBase* GetSound();
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x178 (Inherited: 0xe0)
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe0(0x01)
	FMovieSceneBoolChannel BoolCurve; // 0xe8(0x90)
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x178 (Inherited: 0xe0)
struct UMovieSceneByteSection : UMovieSceneSection {
	FMovieSceneByteChannel ByteCurve; // 0xe0(0x98)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0x88(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x120 (Inherited: 0xe0)
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	FMovieSceneCameraAnimSectionData AnimData; // 0xe0(0x20)
	UCameraAnim* CameraAnim; // 0x100(0x08)
	float PlayRate; // 0x108(0x04)
	float PlayScale; // 0x10c(0x04)
	float BlendInTime; // 0x110(0x04)
	float BlendOutTime; // 0x114(0x04)
	bool bLooping; // 0x118(0x01)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x108 (Inherited: 0xe0)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	FGuid CameraGuid; // 0xe0(0x10)
	FMovieSceneObjectBindingID CameraBindingID; // 0xf0(0x18)

	void SetCameraBindingID(FMovieSceneObjectBindingID InCameraBindingID);
	FMovieSceneObjectBindingID GetCameraBindingID();
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x58(0x01)
	TArray<UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x120 (Inherited: 0xe0)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe0(0x20)
	UCameraShake* ShakeClass; // 0x100(0x08)
	float PlayScale; // 0x108(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x10c(0x01)
	FRotator UserDefinedPlaySpace; // 0x110(0x0c)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x180 (Inherited: 0x158)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	FString ShotDisplayName; // 0x158(0x10)
	FText DisplayName; // 0x168(0x18)

	void SetShotDisplayName(FString InShotDisplayName);
	FString GetShotDisplayName();
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x360 (Inherited: 0xe0)
struct UMovieSceneColorSection : UMovieSceneSection {
	FMovieSceneFloatChannel RedCurve; // 0xe0(0xa0)
	FMovieSceneFloatChannel GreenCurve; // 0x180(0xa0)
	FMovieSceneFloatChannel BlueCurve; // 0x220(0xa0)
	FMovieSceneFloatChannel AlphaCurve; // 0x2c0(0xa0)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0x88(0x01)
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x178 (Inherited: 0xe0)
struct UMovieSceneEnumSection : UMovieSceneSection {
	FMovieSceneByteChannel EnumCurve; // 0xe0(0x98)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0x88(0x08)
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x108 (Inherited: 0xe0)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	FMovieSceneEvent Event; // 0xe0(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1e0 (Inherited: 0xe0)
struct UMovieSceneEventSection : UMovieSceneSection {
	FNameCurve Events; // 0xe0(0x78)
	FMovieSceneEventSectionData EventData; // 0x158(0x88)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x80 (Inherited: 0x58)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x58(0x01)
	char bFireEventsWhenBackwards : 1; // 0x58(0x01)
	enum class EFireEventsAtPosition EventPosition; // 0x5c(0x01)
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x60(0x10)
	TArray<UMovieSceneSection*> Sections; // 0x70(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x168 (Inherited: 0xe0)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	FMovieSceneEventChannel EventChannel; // 0xe0(0x88)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x180 (Inherited: 0xe0)
struct UMovieSceneFloatSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe0(0xa0)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x198 (Inherited: 0x180)
struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	FLinearColor FadeColor; // 0x180(0x10)
	char bFadeAudio : 1; // 0x190(0x01)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x170 (Inherited: 0xe0)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe0(0x90)
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0xf8 (Inherited: 0xe0)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xe0(0x01)
	TArray<FName> LevelNames; // 0xe8(0x10)

	void SetVisibility(enum class ELevelVisibility InVisibility);
	void SetLevelNames(TArray<FName> InLevelNames);
	enum class ELevelVisibility GetVisibility();
	TArray<FName> GetLevelNames();
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x70 (Inherited: 0x68)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	UMaterialParameterCollection* MPC; // 0x68(0x08)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x70 (Inherited: 0x68)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x68(0x04)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1a0 (Inherited: 0xe0)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe0(0xc0)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	UObject* PropertyClass; // 0x88(0x08)
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x140 (Inherited: 0xe0)
struct UMovieSceneParameterSection : UMovieSceneSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe0(0x10)
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf0(0x10)
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x100(0x10)
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x110(0x10)
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x120(0x10)
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x130(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x178 (Inherited: 0xe0)
struct UMovieSceneParticleSection : UMovieSceneSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe0(0x98)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x58(0x10)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1a0 (Inherited: 0xe0)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe0(0xc0)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0x88(0x04)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x1e0 (Inherited: 0xe0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	FMovieSceneSkeletalAnimationParams Params; // 0xe0(0xd8)
	UAnimSequence* AnimSequence; // 0x1b8(0x08)
	UAnimSequenceBase* Animation; // 0x1c0(0x08)
	float StartOffset; // 0x1c8(0x04)
	float EndOffset; // 0x1cc(0x04)
	float PlayRate; // 0x1d0(0x04)
	char bReverse : 1; // 0x1d4(0x01)
	FName slotName; // 0x1d8(0x08)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x58(0x10)
	bool bUseLegacySectionIndexBlend; // 0x68(0x01)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x180 (Inherited: 0x180)
struct UMovieSceneSlomoSection : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneSpawnSection
// Size: 0x178 (Inherited: 0x178)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0x78 (Inherited: 0x58)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58(0x10)
	FGuid ObjectGuid; // 0x68(0x10)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x180 (Inherited: 0xe0)
struct UMovieSceneStringSection : UMovieSceneSection {
	FMovieSceneStringChannel StringCurve; // 0xe0(0xa0)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x368 (Inherited: 0xe0)
struct UMovieSceneVectorSection : UMovieSceneSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe0(0x280)
	int32_t ChannelsUsed; // 0x360(0x04)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0x88(0x04)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

