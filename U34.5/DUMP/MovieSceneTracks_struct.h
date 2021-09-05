// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID AttachBindingID; // 0x20(0x18)
	FName AttachSocketName; // 0x38(0x08)
	FName AttachComponentName; // 0x40(0x08)
	enum class EAttachmentRule AttachmentLocationRule; // 0x48(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x49(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x4a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x4b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x4c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x4d(0x01)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xe0 (Inherited: 0x20)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID PathBindingID; // 0x20(0x18)
	FMovieSceneFloatChannel TimingCurve; // 0x38(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9(0x01)
	char bFollow : 1; // 0xdc(0x01)
	char bReverse : 1; // 0xdc(0x01)
	char bForceUpright : 1; // 0xdc(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x00(0x04)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x48 (Inherited: 0x08)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x08(0x0c)
	FRotator Rotation; // 0x14(0x0c)
	FVector Scale; // 0x20(0x0c)
	FFrameNumber Time; // 0x2c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x08(0x0c)
	FFrameNumber Time; // 0x14(0x04)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x08(0x0c)
	FFrameNumber Time; // 0x14(0x04)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x08(0x0c)
	FFrameNumber Time; // 0x14(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// Size: 0x670 (Inherited: 0x20)
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x20(0x650)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size: 0x650 (Inherited: 0x00)
struct FMovieScene3DTransformTemplateData {
	FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x00(0x1e0)
	FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0(0x1e0)
	FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0(0x1e0)
	FMovieSceneFloatChannel ManualWeight; // 0x5a0(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0x640(0x01)
	FMovieSceneTransformMask Mask; // 0x644(0x04)
	bool bUseQuaternionInterpolation; // 0x648(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xb0 (Inherited: 0x08)
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x08(0x10)
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x00(0x18)
	FName ComponentName; // 0x18(0x08)
	FName SocketName; // 0x20(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xf8 (Inherited: 0x20)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20(0x28)
	FMovieSceneActorReferenceData ActorReferenceData; // 0x48(0xb0)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float PlayScale; // 0x0c(0x04)
	float BlendInTime; // 0x10(0x04)
	float BlendOutTime; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x20 (Inherited: 0x20)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x20)
	FFrameNumber SectionStartTime; // 0x40(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x0c(0x01)
	FRotator UserDefinedPlaySpace; // 0x10(0x0c)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20(0x20)
	FFrameNumber SectionStartTime; // 0x40(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size: 0x80 (Inherited: 0x20)
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID CameraBindingID; // 0x20(0x18)
	FTransform CutTransform; // 0x40(0x30)
	bool bHasCutTransform; // 0x70(0x01)
	bool bIsFinalSection; // 0x71(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38 (Inherited: 0x08)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x08(0x10)
	FFrameNumber Time; // 0x18(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2d0 (Inherited: 0x48)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x48(0x280)
	enum class EMovieSceneBlendType BlendType; // 0x2c8(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x00(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x00(0x08)
	TFieldPath<FProperty> BoundObjectProperty; // 0x08(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x00(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x88 (Inherited: 0x08)
struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x08(0x10)
	TArray<FMovieSceneEvent> KeyValues; // 0x18(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x88 (Inherited: 0x08)
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x08(0x10)
	TArray<FEventPayload> KeyValues; // 0x18(0x10)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30 (Inherited: 0x00)
struct FEventPayload {
	FName EventName; // 0x00(0x08)
	FMovieSceneEventParameters Parameters; // 0x08(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEventParameters {
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// Size: 0x38 (Inherited: 0x20)
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20(0x10)
	char bFireEventsWhenForwards : 1; // 0x30(0x01)
	char bFireEventsWhenBackwards : 1; // 0x30(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// Size: 0x60 (Inherited: 0x38)
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventPtrs EventToTrigger; // 0x38(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// Size: 0x58 (Inherited: 0x38)
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	TArray<FFrameNumber> EventTimes; // 0x38(0x10)
	TArray<FMovieSceneEventPtrs> Events; // 0x48(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xc0 (Inherited: 0x38)
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventSectionData EventData; // 0x38(0x88)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xd8 (Inherited: 0x20)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20(0xa0)
	FLinearColor FadeColor; // 0xc0(0x10)
	char bFadeAudio : 1; // 0xd0(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size: 0x38 (Inherited: 0x20)
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	enum class ELevelVisibility Visibility; // 0x20(0x01)
	TArray<FName> LevelNames; // 0x28(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x80 (Inherited: 0x20)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20(0x10)
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30(0x10)
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40(0x10)
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50(0x10)
	TArray<FColorParameterNameAndCurves> Colors; // 0x60(0x10)
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70(0x10)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5a8 (Inherited: 0x00)
struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x00(0x08)
	FMovieSceneFloatChannel Translation[0x3]; // 0x08(0x1e0)
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8(0x1e0)
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8(0x1e0)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x288 (Inherited: 0x00)
struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x00(0x08)
	FMovieSceneFloatChannel RedCurve; // 0x08(0xa0)
	FMovieSceneFloatChannel GreenCurve; // 0xa8(0xa0)
	FMovieSceneFloatChannel BlueCurve; // 0x148(0xa0)
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8(0xa0)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x1e8 (Inherited: 0x00)
struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x00(0x08)
	FMovieSceneFloatChannel XCurve; // 0x08(0xa0)
	FMovieSceneFloatChannel YCurve; // 0xa8(0xa0)
	FMovieSceneFloatChannel ZCurve; // 0x148(0xa0)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x148 (Inherited: 0x00)
struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x00(0x08)
	FMovieSceneFloatChannel XCurve; // 0x08(0xa0)
	FMovieSceneFloatChannel YCurve; // 0xa8(0xa0)
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0x98 (Inherited: 0x00)
struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x00(0x08)
	FMovieSceneBoolChannel ParameterCurve; // 0x08(0x90)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xa8 (Inherited: 0x00)
struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x00(0x08)
	FMovieSceneFloatChannel ParameterCurve; // 0x08(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x88 (Inherited: 0x80)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x108 (Inherited: 0x48)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x48(0xc0)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x88 (Inherited: 0x80)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x80 (Inherited: 0x80)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x98 (Inherited: 0x98)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0xb8 (Inherited: 0x20)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20(0x98)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0xe8 (Inherited: 0x20)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20(0x04)
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28(0xc0)
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// Size: 0x698 (Inherited: 0x48)
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48(0x650)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// Size: 0x698 (Inherited: 0x48)
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48(0x650)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x2d0 (Inherited: 0x48)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48(0x280)
	int32_t NumChannelsUsed; // 0x2c8(0x04)
	enum class EMovieSceneBlendType BlendType; // 0x2cc(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xe8 (Inherited: 0x48)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x48(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xa0 (Inherited: 0x08)
struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x08(0x10)
	TArray<FString> Values; // 0x18(0x10)
	FString DefaultValue; // 0x28(0x10)
	bool bHasDefaultValue; // 0x38(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xe0 (Inherited: 0x48)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x48(0x90)
	enum class EMovieSceneBlendType BlendType; // 0xd8(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xe0 (Inherited: 0x48)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x48(0x98)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xe0 (Inherited: 0x48)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x48(0x98)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size: 0xf0 (Inherited: 0x48)
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel FloatFunction; // 0x48(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0xe8(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xd8 (Inherited: 0x48)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x48(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0xd8 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x00(0x08)
	FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	FFrameNumber StartFrameOffset; // 0x0c(0x04)
	FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	FName slotName; // 0x1c(0x08)
	FMovieSceneFloatChannel Weight; // 0x28(0xa0)
	bool bSkipAnimNotifiers; // 0xc8(0x01)
	bool bForceCustomMode; // 0xc9(0x01)
	float StartOffset; // 0xcc(0x04)
	float EndOffset; // 0xd0(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0x100 (Inherited: 0x20)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20(0xe0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xe0 (Inherited: 0xd8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8(0x04)
	FFrameNumber SectionEndTime; // 0xdc(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xc0 (Inherited: 0x20)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size: 0xb0 (Inherited: 0x20)
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneBoolChannel Curve; // 0x20(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x08(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28(0x0c)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x30 (Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xd8 (Inherited: 0xd8)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
};

