// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8_t {
	X,
	Y,
	Z,
	NEG_X,
	NEG_Y,
	NEG_Z,
	MovieScene3DPathSection_MAX,
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation,
	AtEndOfEvaluation,
	AfterSpawn,
	EFireEventsAtPosition_MAX,
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t {
	Visible,
	Hidden,
	ELevelVisibility_MAX,
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t {
	Activate,
	Deactivate,
	Trigger,
	EParticleKey_MAX,
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID AttachBindingID; // 0x20(0x18)
	struct FName AttachSocketName; // 0x38(0x08)
	struct FName AttachComponentName; // 0x40(0x08)
	enum class EAttachmentRule AttachmentLocationRule; // 0x48(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x49(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x4a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x4b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x4c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xe0 (Inherited: 0x20)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID PathBindingID; // 0x20(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x38(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9(0x01)
	char UnknownData_DA[0x2]; // 0xda(0x02)
	char bFollow : 1; // 0xdc(0x01)
	char bReverse : 1; // 0xdc(0x01)
	char bForceUpright : 1; // 0xdc(0x01)
	char UnknownData_DC_3 : 5; // 0xdc(0x01)
	char UnknownData_DD[0x3]; // 0xdd(0x03)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x00(0x04)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x48 (Inherited: 0x08)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	struct FFrameNumber Time; // 0x2c(0x04)
	char UnknownData_30[0x18]; // 0x30(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct FVector Scale; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char UnknownData_18[0x18]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct FRotator Rotation; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char UnknownData_18[0x18]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char UnknownData_18[0x18]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// Size: 0x670 (Inherited: 0x20)
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x20(0x650)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size: 0x650 (Inherited: 0x00)
struct FMovieScene3DTransformTemplateData {
	struct FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x00(0x1e0)
	struct FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0(0x1e0)
	struct FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0(0x1e0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x5a0(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0x640(0x01)
	char UnknownData_641[0x3]; // 0x641(0x03)
	struct FMovieSceneTransformMask Mask; // 0x644(0x04)
	bool bUseQuaternionInterpolation; // 0x648(0x01)
	char UnknownData_649[0x7]; // 0x649(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xb0 (Inherited: 0x08)
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x08(0x10)
	char UnknownData_18[0x28]; // 0x18(0x28)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x40(0x10)
	char UnknownData_50[0x60]; // 0x50(0x60)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneActorReferenceKey {
	struct FMovieSceneObjectBindingID Object; // 0x00(0x18)
	struct FName ComponentName; // 0x18(0x08)
	struct FName SocketName; // 0x20(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xf8 (Inherited: 0x20)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x28)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x48(0xb0)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAudioSection* AudioSection; // 0x20(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraAnimSectionData {
	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float PlayScale; // 0x0c(0x04)
	float BlendInTime; // 0x10(0x04)
	float BlendOutTime; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x20 (Inherited: 0x20)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraShakeSectionData {
	struct UCameraShake* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	char PlaySpace; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size: 0x80 (Inherited: 0x20)
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x20(0x18)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FTransform CutTransform; // 0x40(0x30)
	bool bHasCutTransform; // 0x70(0x01)
	bool bIsFinalSection; // 0x71(0x01)
	char UnknownData_72[0xe]; // 0x72(0x0e)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38 (Inherited: 0x08)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct FLinearColor Color; // 0x08(0x10)
	struct FFrameNumber Time; // 0x18(0x04)
	char UnknownData_1C[0x1c]; // 0x1c(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2d0 (Inherited: 0x48)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x48(0x280)
	enum class EMovieSceneBlendType BlendType; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEvent {
	struct FMovieSceneEventPtrs Ptrs; // 0x00(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEventPtrs {
	struct UFunction* Function; // 0x00(0x08)
	FieldPathProperty BoundObjectProperty; // 0x08(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEventPayloadVariable {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x88 (Inherited: 0x08)
struct FMovieSceneEventChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x08(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18(0x10)
	char UnknownData_28[0x60]; // 0x28(0x60)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x88 (Inherited: 0x08)
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x18(0x10)
	char UnknownData_28[0x60]; // 0x28(0x60)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30 (Inherited: 0x00)
struct FEventPayload {
	struct FName EventName; // 0x00(0x08)
	struct FMovieSceneEventParameters Parameters; // 0x08(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEventParameters {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// Size: 0x38 (Inherited: 0x20)
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x20(0x10)
	char bFireEventsWhenForwards : 1; // 0x30(0x01)
	char bFireEventsWhenBackwards : 1; // 0x30(0x01)
	char UnknownData_30_2 : 6; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// Size: 0x60 (Inherited: 0x38)
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	struct FMovieSceneEventPtrs EventToTrigger; // 0x38(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// Size: 0x58 (Inherited: 0x38)
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	struct TArray<struct FFrameNumber> EventTimes; // 0x38(0x10)
	struct TArray<struct FMovieSceneEventPtrs> Events; // 0x48(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xc0 (Inherited: 0x38)
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	struct FMovieSceneEventSectionData EventData; // 0x38(0x88)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xd8 (Inherited: 0x20)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel FadeCurve; // 0x20(0xa0)
	struct FLinearColor FadeColor; // 0xc0(0x10)
	char bFadeAudio : 1; // 0xd0(0x01)
	char UnknownData_D0_1 : 7; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size: 0x38 (Inherited: 0x20)
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	enum class ELevelVisibility Visibility; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct FName> LevelNames; // 0x28(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x80 (Inherited: 0x20)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x30(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x40(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x50(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x60(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x70(0x10)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5a8 (Inherited: 0x00)
struct FTransformParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x08(0x1e0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8(0x1e0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x3c8(0x1e0)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x288 (Inherited: 0x00)
struct FColorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel RedCurve; // 0x08(0xa0)
	struct FMovieSceneFloatChannel GreenCurve; // 0xa8(0xa0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x148(0xa0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x1e8(0xa0)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x1e8 (Inherited: 0x00)
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel XCurve; // 0x08(0xa0)
	struct FMovieSceneFloatChannel YCurve; // 0xa8(0xa0)
	struct FMovieSceneFloatChannel ZCurve; // 0x148(0xa0)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x148 (Inherited: 0x00)
struct FVector2DParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel XCurve; // 0x08(0xa0)
	struct FMovieSceneFloatChannel YCurve; // 0xa8(0xa0)
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0x98 (Inherited: 0x00)
struct FBoolParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x08(0x90)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xa8 (Inherited: 0x00)
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x08(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x88 (Inherited: 0x80)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	struct UMaterialParameterCollection* MPC; // 0x80(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x108 (Inherited: 0x48)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x48(0xc0)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x88 (Inherited: 0x80)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
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
	struct FMovieSceneParticleChannel ParticleKeys; // 0x20(0x98)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0xe8 (Inherited: 0x20)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x28(0xc0)
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// Size: 0x698 (Inherited: 0x48)
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x48(0x650)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// Size: 0x698 (Inherited: 0x48)
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x48(0x650)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x2d0 (Inherited: 0x48)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48(0x280)
	int32_t NumChannelsUsed; // 0x2c8(0x04)
	enum class EMovieSceneBlendType BlendType; // 0x2cc(0x01)
	char UnknownData_2CD[0x3]; // 0x2cd(0x03)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xe8 (Inherited: 0x48)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneStringChannel StringCurve; // 0x48(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xa0 (Inherited: 0x08)
struct FMovieSceneStringChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	struct TArray<struct FString> Values; // 0x18(0x10)
	struct FString DefaultValue; // 0x28(0x10)
	bool bHasDefaultValue; // 0x38(0x01)
	char UnknownData_39[0x67]; // 0x39(0x67)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xe0 (Inherited: 0x48)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x48(0x90)
	enum class EMovieSceneBlendType BlendType; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xe0 (Inherited: 0x48)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneByteChannel EnumCurve; // 0x48(0x98)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xe0 (Inherited: 0x48)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneByteChannel ByteCurve; // 0x48(0x98)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size: 0xf0 (Inherited: 0x48)
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel FloatFunction; // 0x48(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0xe8(0x01)
	char UnknownData_E9[0x7]; // 0xe9(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xd8 (Inherited: 0x48)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneBoolChannel BoolCurve; // 0x48(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0xd8 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimationParams {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char UnknownData_18_1 : 7; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FName slotName; // 0x1c(0x08)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FMovieSceneFloatChannel Weight; // 0x28(0xa0)
	bool bSkipAnimNotifiers; // 0xc8(0x01)
	bool bForceCustomMode; // 0xc9(0x01)
	char UnknownData_CA[0x2]; // 0xca(0x02)
	float StartOffset; // 0xcc(0x04)
	float EndOffset; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0x100 (Inherited: 0x20)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20(0xe0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xe0 (Inherited: 0xd8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	struct FFrameNumber SectionStartTime; // 0xd8(0x04)
	struct FFrameNumber SectionEndTime; // 0xdc(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xc0 (Inherited: 0x20)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel SlomoCurve; // 0x20(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size: 0xb0 (Inherited: 0x20)
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneBoolChannel Curve; // 0x20(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x08(0x04)
	char UnknownData_C[0x1c]; // 0x0c(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FVector4 Vector; // 0x30(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector Vector; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x30 (Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector2D Vector; // 0x28(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xd8 (Inherited: 0xd8)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
};

