#ifndef UE4SS_SDK_MovieSceneTracks_HPP
#define UE4SS_SDK_MovieSceneTracks_HPP

#include "MovieSceneTracks_enums.hpp"

class UMovieScenePropertyTrack : UMovieSceneNameableTrack
{
    UMovieSceneSection* SectionToKey;
    FName PropertyName;
    FString PropertyPath;
    TArray<UMovieSceneSection*> Sections;
}

class UMovieSceneTransformOrigin : UInterface
{

    FTransform BP_GetTransformOrigin();
}

class UMovieScene3DConstraintSection : UMovieSceneSection
{
    FGuid ConstraintId;
    FMovieSceneObjectBindingID ConstraintBindingID;

    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    FMovieSceneObjectBindingID GetConstraintBindingID();
}

class UMovieScene3DAttachSection : UMovieScene3DConstraintSection
{
    FName AttachSocketName;
    FName AttachComponentName;
    EAttachmentRule AttachmentLocationRule;
    EAttachmentRule AttachmentRotationRule;
    EAttachmentRule AttachmentScaleRule;
    EDetachmentRule DetachmentLocationRule;
    EDetachmentRule DetachmentRotationRule;
    EDetachmentRule DetachmentScaleRule;
}

class UMovieScene3DConstraintTrack : UMovieSceneTrack
{
    TArray<UMovieSceneSection*> ConstraintSections;
}

class UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack
{
}

class UMovieScene3DPathSection : UMovieScene3DConstraintSection
{
    FMovieSceneFloatChannel TimingCurve;
    MovieScene3DPathSection_Axis FrontAxisEnum;
    MovieScene3DPathSection_Axis UpAxisEnum;
    uint8 bFollow;
    uint8 bReverse;
    uint8 bForceUpright;
}

class UMovieScene3DPathTrack : UMovieScene3DConstraintTrack
{
}

class UMovieScene3DTransformSection : UMovieSceneSection
{
    FMovieSceneTransformMask TransformMask;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;
    FMovieSceneFloatChannel ManualWeight;
    bool bUseQuaternionInterpolation;
}

class UMovieScene3DTransformTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneActorReferenceSection : UMovieSceneSection
{
    FMovieSceneActorReferenceData ActorReferenceData;
    FIntegralCurve ActorGuidIndexCurve;
    TArray<FString> ActorGuidStrings;
}

class UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneAudioSection : UMovieSceneSection
{
    USoundBase* Sound;
    FFrameNumber StartFrameOffset;
    float StartOffset;
    float AudioStartTime;
    float AudioDilationFactor;
    float AudioVolume;
    FMovieSceneFloatChannel SoundVolume;
    FMovieSceneFloatChannel PitchMultiplier;
    FMovieSceneActorReferenceData AttachActorData;
    bool bSuppressSubtitles;
    bool bOverrideAttenuation;
    USoundAttenuation* AttenuationSettings;
    FMovieSceneAudioSectionOnQueueSubtitles OnQueueSubtitles;
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    FMovieSceneAudioSectionOnAudioFinished OnAudioFinished;
    void OnAudioFinished();
    FMovieSceneAudioSectionOnAudioPlaybackPercent OnAudioPlaybackPercent;
    void OnAudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent);

    void SetStartOffset(FFrameNumber InStartOffset);
    void SetSound(USoundBase* InSound);
    FFrameNumber GetStartOffset();
    USoundBase* GetSound();
}

class UMovieSceneAudioTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> AudioSections;
}

class UMovieSceneBoolSection : UMovieSceneSection
{
    bool DefaultValue;
    FMovieSceneBoolChannel BoolCurve;
}

class UMovieSceneBoolTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneByteSection : UMovieSceneSection
{
    FMovieSceneByteChannel ByteCurve;
}

class UMovieSceneByteTrack : UMovieScenePropertyTrack
{
    UEnum* Enum;
}

class UMovieSceneCameraAnimSection : UMovieSceneSection
{
    FMovieSceneCameraAnimSectionData AnimData;
    UCameraAnim* CameraAnim;
    float PlayRate;
    float PlayScale;
    float BlendInTime;
    float BlendOutTime;
    bool bLooping;
}

class UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> CameraAnimSections;
}

class UMovieSceneCameraCutSection : UMovieSceneSection
{
    FGuid CameraGuid;
    FMovieSceneObjectBindingID CameraBindingID;

    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    FMovieSceneObjectBindingID GetCameraBindingID();
}

class UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
{
    bool bCanBlend;
    TArray<UMovieSceneSection*> Sections;
}

class UMovieSceneCameraShakeSection : UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;
    TSubclassOf<UCameraShake> ShakeClass;
    float PlayScale;
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
    FRotator UserDefinedPlaySpace;
}

class UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> CameraShakeSections;
}

class UMovieSceneCinematicShotSection : UMovieSceneSubSection
{
    FString ShotDisplayName;
    FText DisplayName;

    void SetShotDisplayName(FString InShotDisplayName);
    FString GetShotDisplayName();
}

class UMovieSceneCinematicShotTrack : UMovieSceneSubTrack
{
}

class UMovieSceneColorSection : UMovieSceneSection
{
    FMovieSceneFloatChannel RedCurve;
    FMovieSceneFloatChannel GreenCurve;
    FMovieSceneFloatChannel BlueCurve;
    FMovieSceneFloatChannel AlphaCurve;
}

class UMovieSceneColorTrack : UMovieScenePropertyTrack
{
    bool bIsSlateColor;
}

class UMovieSceneEnumSection : UMovieSceneSection
{
    FMovieSceneByteChannel EnumCurve;
}

class UMovieSceneEnumTrack : UMovieScenePropertyTrack
{
    UEnum* Enum;
}

class UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneEventSectionBase : UMovieSceneSection
{
}

class UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase
{
    FMovieSceneEvent Event;
}

class UMovieSceneEventSection : UMovieSceneSection
{
    FNameCurve Events;
    FMovieSceneEventSectionData EventData;
}

class UMovieSceneEventTrack : UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    EFireEventsAtPosition EventPosition;
    TArray<FMovieSceneObjectBindingID> EventReceivers;
    TArray<UMovieSceneSection*> Sections;
}

class UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase
{
    FMovieSceneEventChannel EventChannel;
}

class UMovieSceneFloatSection : UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;
}

class UMovieSceneFadeSection : UMovieSceneFloatSection
{
    FLinearColor FadeColor;
    uint8 bFadeAudio;
}

class UMovieSceneFloatTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneFadeTrack : UMovieSceneFloatTrack
{
}

class UMovieSceneIntegerSection : UMovieSceneSection
{
    FMovieSceneIntegerChannel IntegerCurve;
}

class UMovieSceneIntegerTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneLevelVisibilitySection : UMovieSceneSection
{
    ELevelVisibility Visibility;
    TArray<FName> LevelNames;

    void SetVisibility(ELevelVisibility InVisibility);
    void SetLevelNames(const TArray<FName>& InLevelNames);
    ELevelVisibility GetVisibility();
    TArray<FName> GetLevelNames();
}

class UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> Sections;
}

class UMovieSceneMaterialTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> Sections;
}

class UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack
{
    UMaterialParameterCollection* MPC;
}

class UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack
{
    int32 MaterialIndex;
}

class UMovieSceneObjectPropertySection : UMovieSceneSection
{
    FMovieSceneObjectPathChannel ObjectChannel;
}

class UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack
{
    UClass* PropertyClass;
}

class UMovieSceneParameterSection : UMovieSceneSection
{
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;
}

class UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> Sections;
}

class UMovieSceneParticleSection : UMovieSceneSection
{
    FMovieSceneParticleChannel ParticleKeys;
}

class UMovieSceneParticleTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> ParticleSections;
}

class UMovieScenePrimitiveMaterialSection : UMovieSceneSection
{
    FMovieSceneObjectPathChannel MaterialChannel;
}

class UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack
{
    int32 MaterialIndex;
}

class UMovieSceneSkeletalAnimationSection : UMovieSceneSection
{
    FMovieSceneSkeletalAnimationParams Params;
    UAnimSequence* AnimSequence;
    UAnimSequenceBase* Animation;
    float StartOffset;
    float EndOffset;
    float PlayRate;
    uint8 bReverse;
    FName slotName;
}

class UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> AnimationSections;
    bool bUseLegacySectionIndexBlend;
}

class UMovieSceneSlomoSection : UMovieSceneFloatSection
{
}

class UMovieSceneSlomoTrack : UMovieSceneFloatTrack
{
}

class UMovieSceneSpawnSection : UMovieSceneBoolSection
{
}

class UMovieSceneSpawnTrack : UMovieSceneTrack
{
    TArray<UMovieSceneSection*> Sections;
    FGuid ObjectGuid;
}

class UMovieSceneStringSection : UMovieSceneSection
{
    FMovieSceneStringChannel StringCurve;
}

class UMovieSceneStringTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneTransformTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneVectorSection : UMovieSceneSection
{
    FMovieSceneFloatChannel Curves;
    int32 ChannelsUsed;
}

class UMovieSceneVectorTrack : UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;
}

class UMovieSceneVisibilityTrack : UMovieSceneBoolTrack
{
}

struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID AttachBindingID;
    FName AttachSocketName;
    FName AttachComponentName;
    EAttachmentRule AttachmentLocationRule;
    EAttachmentRule AttachmentRotationRule;
    EAttachmentRule AttachmentScaleRule;
    EDetachmentRule DetachmentLocationRule;
    EDetachmentRule DetachmentRotationRule;
    EDetachmentRule DetachmentScaleRule;
}

struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID PathBindingID;
    FMovieSceneFloatChannel TimingCurve;
    MovieScene3DPathSection_Axis FrontAxisEnum;
    MovieScene3DPathSection_Axis UpAxisEnum;
    uint8 bFollow;
    uint8 bReverse;
    uint8 bForceUpright;
}

struct FMovieSceneTransformMask
{
    uint32 Mask;
}

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{
    FVector Location;
    FRotator Rotation;
    FVector Scale;
    FFrameNumber Time;
}

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{
    FVector Scale;
    FFrameNumber Time;
}

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{
    FRotator Rotation;
    FFrameNumber Time;
}

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{
    FVector Location;
    FFrameNumber Time;
}

struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;
}

struct FMovieScene3DTransformTemplateData
{
    FMovieSceneFloatChannel TranslationCurve;
    FMovieSceneFloatChannel RotationCurve;
    FMovieSceneFloatChannel ScaleCurve;
    FMovieSceneFloatChannel ManualWeight;
    EMovieSceneBlendType BlendType;
    FMovieSceneTransformMask Mask;
    bool bUseQuaternionInterpolation;
}

struct FMovieSceneActorReferenceData : FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneActorReferenceKey> KeyValues;
}

struct FMovieSceneActorReferenceKey
{
    FMovieSceneObjectBindingID Object;
    FName ComponentName;
    FName SocketName;
}

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;
    FMovieSceneActorReferenceData ActorReferenceData;
}

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{
    UMovieSceneAudioSection* AudioSection;
}

struct FMovieSceneCameraAnimSectionData
{
    UCameraAnim* CameraAnim;
    float PlayRate;
    float PlayScale;
    float BlendInTime;
    float BlendOutTime;
    bool bLooping;
}

struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate
{
}

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;
    FFrameNumber SectionStartTime;
}

struct FMovieSceneCameraShakeSectionData
{
    TSubclassOf<UCameraShake> ShakeClass;
    float PlayScale;
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
    FRotator UserDefinedPlaySpace;
}

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
    FMovieSceneCameraAnimSectionData SourceData;
    FFrameNumber SectionStartTime;
}

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID CameraBindingID;
    FTransform CutTransform;
    bool bHasCutTransform;
    bool bIsFinalSection;
}

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{
    FLinearColor Color;
    FFrameNumber Time;
}

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Curves;
    EMovieSceneBlendType BlendType;
}

struct FMovieSceneEvent
{
    FMovieSceneEventPtrs Ptrs;
}

struct FMovieSceneEventPtrs
{
    UFunction* Function;
    TFieldPath<FNone> BoundObjectProperty;
}

struct FMovieSceneEventPayloadVariable
{
    FString Value;
}

struct FMovieSceneEventChannel : FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneEvent> KeyValues;
}

struct FMovieSceneEventSectionData : FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    TArray<FEventPayload> KeyValues;
}

struct FEventPayload
{
    FName EventName;
    FMovieSceneEventParameters Parameters;
}

struct FMovieSceneEventParameters
{
}

struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate
{
    TArray<FMovieSceneObjectBindingID> EventReceivers;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
}

struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase
{
    FMovieSceneEventPtrs EventToTrigger;
}

struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase
{
    TArray<FFrameNumber> EventTimes;
    TArray<FMovieSceneEventPtrs> Events;
}

struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase
{
    FMovieSceneEventSectionData EventData;
}

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel FadeCurve;
    FLinearColor FadeColor;
    uint8 bFadeAudio;
}

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate
{
    ELevelVisibility Visibility;
    TArray<FName> LevelNames;
}

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{
    TArray<FScalarParameterNameAndCurve> Scalars;
    TArray<FBoolParameterNameAndCurve> Bools;
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;
    TArray<FVectorParameterNameAndCurves> Vectors;
    TArray<FColorParameterNameAndCurves> Colors;
    TArray<FTransformParameterNameAndCurves> Transforms;
}

struct FTransformParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;
}

struct FColorParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel RedCurve;
    FMovieSceneFloatChannel GreenCurve;
    FMovieSceneFloatChannel BlueCurve;
    FMovieSceneFloatChannel AlphaCurve;
}

struct FVectorParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel XCurve;
    FMovieSceneFloatChannel YCurve;
    FMovieSceneFloatChannel ZCurve;
}

struct FVector2DParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel XCurve;
    FMovieSceneFloatChannel YCurve;
}

struct FBoolParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneBoolChannel ParameterCurve;
}

struct FScalarParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneFloatChannel ParameterCurve;
}

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
{
    UMaterialParameterCollection* MPC;
}

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneObjectPathChannel ObjectChannel;
}

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
    int32 MaterialIndex;
}

struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{
}

struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{
}

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneParticleChannel ParticleKeys;
}

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
{
    int32 MaterialIndex;
    FMovieSceneObjectPathChannel MaterialChannel;
}

struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;
}

struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;
}

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel ComponentCurves;
    int32 NumChannelsUsed;
    EMovieSceneBlendType BlendType;
}

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneStringChannel StringCurve;
}

struct FMovieSceneStringChannel : FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    TArray<FString> Values;
    FString DefaultValue;
    bool bHasDefaultValue;
}

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneIntegerChannel IntegerCurve;
    EMovieSceneBlendType BlendType;
}

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneByteChannel EnumCurve;
}

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneByteChannel ByteCurve;
}

struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel FloatFunction;
    EMovieSceneBlendType BlendType;
}

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    FMovieSceneBoolChannel BoolCurve;
}

struct FMovieSceneSkeletalAnimationParams
{
    UAnimSequenceBase* Animation;
    FFrameNumber FirstLoopStartFrameOffset;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;
    uint8 bReverse;
    FName slotName;
    FMovieSceneFloatChannel Weight;
    bool bSkipAnimNotifiers;
    bool bForceCustomMode;
    float StartOffset;
    float EndOffset;
}

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;
}

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;
}

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel SlomoCurve;
}

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneBoolChannel Curve;
}

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
{
    FFrameNumber Time;
}

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
{
    FVector4 Vector;
}

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
{
    FVector Vector;
}

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
{
    FVector2D Vector;
}

struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{
}

#endif
