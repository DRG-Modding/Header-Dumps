#ifndef UE4SS_SDK_MovieSceneTracks_HPP
#define UE4SS_SDK_MovieSceneTracks_HPP

#include "MovieSceneTracks_enums.hpp"

class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
    class UMovieSceneSection* SectionToKey;
    FName PropertyName;
    FString PropertyPath;
    TArray<class UMovieSceneSection*> Sections;
};

class IMovieSceneTransformOrigin : public IInterface
{

    FTransform BP_GetTransformOrigin();
};

class UMovieScene3DConstraintSection : public UMovieSceneSection
{
    FGuid ConstraintId;
    FMovieSceneObjectBindingID ConstraintBindingID;

    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    FMovieSceneObjectBindingID GetConstraintBindingID();
};

class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
    FName AttachSocketName;
    FName AttachComponentName;
    EAttachmentRule AttachmentLocationRule;
    EAttachmentRule AttachmentRotationRule;
    EAttachmentRule AttachmentScaleRule;
    EDetachmentRule DetachmentLocationRule;
    EDetachmentRule DetachmentRotationRule;
    EDetachmentRule DetachmentScaleRule;
};

class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> ConstraintSections;
};

class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
};

class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
    FMovieSceneFloatChannel TimingCurve;
    MovieScene3DPathSection_Axis FrontAxisEnum;
    MovieScene3DPathSection_Axis UpAxisEnum;
    uint8 bFollow;
    uint8 bReverse;
    uint8 bForceUpright;
};

class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
};

struct FMovieSceneTransformMask
{
    uint32 Mask;
};

class UMovieScene3DTransformSection : public UMovieSceneSection
{
    FMovieSceneTransformMask TransformMask;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;
    FMovieSceneFloatChannel ManualWeight;
    bool bUseQuaternionInterpolation;
};

class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
};

struct FMovieSceneActorReferenceKey
{
    FMovieSceneObjectBindingID Object;
    FName ComponentName;
    FName SocketName;
};

struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneActorReferenceKey> KeyValues;
};

class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
    FMovieSceneActorReferenceData ActorReferenceData;
    FIntegralCurve ActorGuidIndexCurve;
    TArray<FString> ActorGuidStrings;
};

class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneAudioSection : public UMovieSceneSection
{
    class USoundBase* Sound;
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
    class USoundAttenuation* AttenuationSettings;
    FMovieSceneAudioSectionOnQueueSubtitles OnQueueSubtitles;
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    FMovieSceneAudioSectionOnAudioFinished OnAudioFinished;
    void OnAudioFinished();
    FMovieSceneAudioSectionOnAudioPlaybackPercent OnAudioPlaybackPercent;
    void OnAudioPlaybackPercent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);

    void SetStartOffset(FFrameNumber InStartOffset);
    void SetSound(class USoundBase* InSound);
    FFrameNumber GetStartOffset();
    class USoundBase* GetSound();
};

class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AudioSections;
};

class UMovieSceneBoolSection : public UMovieSceneSection
{
    bool DefaultValue;
    FMovieSceneBoolChannel BoolCurve;
};

class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneByteSection : public UMovieSceneSection
{
    FMovieSceneByteChannel ByteCurve;
};

class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;
};

struct FMovieSceneCameraAnimSectionData
{
    class UCameraAnim* CameraAnim;
    float PlayRate;
    float PlayScale;
    float BlendInTime;
    float BlendOutTime;
    bool bLooping;
};

class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
    FMovieSceneCameraAnimSectionData AnimData;
    class UCameraAnim* CameraAnim;
    float PlayRate;
    float PlayScale;
    float BlendInTime;
    float BlendOutTime;
    bool bLooping;
};

class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraAnimSections;
};

class UMovieSceneCameraCutSection : public UMovieSceneSection
{
    FGuid CameraGuid;
    FMovieSceneObjectBindingID CameraBindingID;

    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    FMovieSceneObjectBindingID GetCameraBindingID();
};

class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
    bool bCanBlend;
    TArray<class UMovieSceneSection*> Sections;
};

struct FMovieSceneCameraShakeSectionData
{
    TSubclassOf<class UCameraShake> ShakeClass;
    float PlayScale;
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
    FRotator UserDefinedPlaySpace;
};

class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;
    TSubclassOf<class UCameraShake> ShakeClass;
    float PlayScale;
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
    FRotator UserDefinedPlaySpace;
};

class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;
};

class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
    FString ShotDisplayName;
    FText DisplayName;

    void SetShotDisplayName(FString InShotDisplayName);
    FString GetShotDisplayName();
};

class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
};

class UMovieSceneColorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel RedCurve;
    FMovieSceneFloatChannel GreenCurve;
    FMovieSceneFloatChannel BlueCurve;
    FMovieSceneFloatChannel AlphaCurve;
};

class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
    bool bIsSlateColor;
};

class UMovieSceneEnumSection : public UMovieSceneSection
{
    FMovieSceneByteChannel EnumCurve;
};

class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;
};

class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneEventSectionBase : public UMovieSceneSection
{
};

struct FMovieSceneEventPtrs
{
    class UFunction* Function;
    TFieldPath<FProperty> BoundObjectProperty;
};

struct FMovieSceneEvent
{
    FMovieSceneEventPtrs Ptrs;
};

class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEvent Event;
};

struct FMovieSceneEventParameters
{
};

struct FEventPayload
{
    FName EventName;
    FMovieSceneEventParameters Parameters;
};

struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    TArray<FEventPayload> KeyValues;
};

class UMovieSceneEventSection : public UMovieSceneSection
{
    FNameCurve Events;
    FMovieSceneEventSectionData EventData;
};

class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    EFireEventsAtPosition EventPosition;
    TArray<FMovieSceneObjectBindingID> EventReceivers;
    TArray<class UMovieSceneSection*> Sections;
};

struct FMovieSceneEventChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneEvent> KeyValues;
};

class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEventChannel EventChannel;
};

class UMovieSceneFloatSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;
};

class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
    FLinearColor FadeColor;
    uint8 bFadeAudio;
};

class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
};

class UMovieSceneIntegerSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel IntegerCurve;
};

class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
    ELevelVisibility Visibility;
    TArray<FName> LevelNames;

    void SetVisibility(ELevelVisibility InVisibility);
    void SetLevelNames(const TArray<FName>& InLevelNames);
    ELevelVisibility GetVisibility();
    TArray<FName> GetLevelNames();
};

class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;
};

class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;
};

class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
    class UMaterialParameterCollection* MPC;
};

class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
    int32 MaterialIndex;
};

class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel ObjectChannel;
};

class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
    UClass* PropertyClass;
};

struct FBoolParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneBoolChannel ParameterCurve;
};

struct FScalarParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneFloatChannel ParameterCurve;
};

struct FVector2DParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel XCurve;
    FMovieSceneFloatChannel YCurve;
};

struct FVectorParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel XCurve;
    FMovieSceneFloatChannel YCurve;
    FMovieSceneFloatChannel ZCurve;
};

struct FColorParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel RedCurve;
    FMovieSceneFloatChannel GreenCurve;
    FMovieSceneFloatChannel BlueCurve;
    FMovieSceneFloatChannel AlphaCurve;
};

struct FTransformParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;
};

class UMovieSceneParameterSection : public UMovieSceneSection
{
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;
};

class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;
};

struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
};

class UMovieSceneParticleSection : public UMovieSceneSection
{
    FMovieSceneParticleChannel ParticleKeys;
};

class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> ParticleSections;
};

class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel MaterialChannel;
};

class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
    int32 MaterialIndex;
};

struct FMovieSceneSkeletalAnimationParams
{
    class UAnimSequenceBase* Animation;
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
};

class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
    FMovieSceneSkeletalAnimationParams Params;
    class UAnimSequence* AnimSequence;
    class UAnimSequenceBase* Animation;
    float StartOffset;
    float EndOffset;
    float PlayRate;
    uint8 bReverse;
    FName slotName;
};

class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;
    bool bUseLegacySectionIndexBlend;
};

class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
};

class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
};

class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
};

class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;
    FGuid ObjectGuid;
};

struct FMovieSceneStringChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    TArray<FString> Values;
    FString DefaultValue;
    bool bHasDefaultValue;
};

class UMovieSceneStringSection : public UMovieSceneSection
{
    FMovieSceneStringChannel StringCurve;
};

class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneVectorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel Curves;
    int32 ChannelsUsed;
};

class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;
};

class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
};

struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
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
};

struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID PathBindingID;
    FMovieSceneFloatChannel TimingCurve;
    MovieScene3DPathSection_Axis FrontAxisEnum;
    MovieScene3DPathSection_Axis UpAxisEnum;
    uint8 bFollow;
    uint8 bReverse;
    uint8 bForceUpright;
};

struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;
    FRotator Rotation;
    FVector Scale;
    FFrameNumber Time;
};

struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
    FVector Scale;
    FFrameNumber Time;
};

struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
    FRotator Rotation;
    FFrameNumber Time;
};

struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;
    FFrameNumber Time;
};

struct FMovieScene3DTransformTemplateData
{
    FMovieSceneFloatChannel TranslationCurve;
    FMovieSceneFloatChannel RotationCurve;
    FMovieSceneFloatChannel ScaleCurve;
    FMovieSceneFloatChannel ManualWeight;
    EMovieSceneBlendType BlendType;
    FMovieSceneTransformMask Mask;
    bool bUseQuaternionInterpolation;
};

struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;
};

struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;
    FMovieSceneActorReferenceData ActorReferenceData;
};

struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAudioSection* AudioSection;
};

struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{
};

struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;
    FFrameNumber SectionStartTime;
};

struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
    FMovieSceneCameraAnimSectionData SourceData;
    FFrameNumber SectionStartTime;
};

struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID CameraBindingID;
    FTransform CutTransform;
    bool bHasCutTransform;
    bool bIsFinalSection;
};

struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
    FLinearColor Color;
    FFrameNumber Time;
};

struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Curves;
    EMovieSceneBlendType BlendType;
};

struct FMovieSceneEventPayloadVariable
{
    FString Value;
};

struct FMovieSceneEventTemplateBase : public FMovieSceneEvalTemplate
{
    TArray<FMovieSceneObjectBindingID> EventReceivers;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
};

struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase
{
    FMovieSceneEventPtrs EventToTrigger;
};

struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase
{
    TArray<FFrameNumber> EventTimes;
    TArray<FMovieSceneEventPtrs> Events;
};

struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase
{
    FMovieSceneEventSectionData EventData;
};

struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel FadeCurve;
    FLinearColor FadeColor;
    uint8 bFadeAudio;
};

struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
    ELevelVisibility Visibility;
    TArray<FName> LevelNames;
};

struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FScalarParameterNameAndCurve> Scalars;
    TArray<FBoolParameterNameAndCurve> Bools;
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;
    TArray<FVectorParameterNameAndCurves> Vectors;
    TArray<FColorParameterNameAndCurves> Colors;
    TArray<FTransformParameterNameAndCurves> Transforms;
};

struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
    class UMaterialParameterCollection* MPC;
};

struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneObjectPathChannel ObjectChannel;
};

struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    int32 MaterialIndex;
};

struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
};

struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneParticleChannel ParticleKeys;
};

struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
    int32 MaterialIndex;
    FMovieSceneObjectPathChannel MaterialChannel;
};

struct FMovieSceneEulerTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;
};

struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;
};

struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel ComponentCurves;
    int32 NumChannelsUsed;
    EMovieSceneBlendType BlendType;
};

struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneStringChannel StringCurve;
};

struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneIntegerChannel IntegerCurve;
    EMovieSceneBlendType BlendType;
};

struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneByteChannel EnumCurve;
};

struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneByteChannel ByteCurve;
};

struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel FloatFunction;
    EMovieSceneBlendType BlendType;
};

struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneBoolChannel BoolCurve;
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;
};

struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;
};

struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel SlomoCurve;
};

struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneBoolChannel Curve;
};

struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
    FFrameNumber Time;
};

struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector4 Vector;
};

struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector Vector;
};

struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector2D Vector;
};

struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
};

#endif
