#ifndef UE4SS_SDK_MovieSceneTracks_HPP
#define UE4SS_SDK_MovieSceneTracks_HPP

#include "MovieSceneTracks_enums.hpp"

struct FBoolParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneBoolChannel ParameterCurve;

};

struct FColorParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel RedCurve;
    FMovieSceneFloatChannel GreenCurve;
    FMovieSceneFloatChannel BlueCurve;
    FMovieSceneFloatChannel AlphaCurve;

};

struct FEventPayload
{
    FName EventName;
    FMovieSceneEventParameters Parameters;

};

struct FLevelVisibilityComponentData
{
    class UMovieSceneLevelVisibilitySection* Section;

};

struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;
    FFrameNumber Time;

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

struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
    FRotator Rotation;
    FFrameNumber Time;

};

struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
    FVector Scale;
    FFrameNumber Time;

};

struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;
    FRotator Rotation;
    FVector Scale;
    FFrameNumber Time;

};

struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    FMovieSceneActorReferenceKey DefaultValue;
    TArray<FMovieSceneActorReferenceKey> KeyValues;

};

struct FMovieSceneActorReferenceKey
{
    FMovieSceneObjectBindingID Object;
    FName ComponentName;
    FName SocketName;

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

struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneBoolChannel BoolCurve;

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

struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraAnimSectionData SourceData;
    FFrameNumber SectionStartTime;

};

struct FMovieSceneCameraShakeSectionData
{
    TSubclassOf<class UCameraShakeBase> ShakeClass;
    float PlayScale;
    ECameraShakePlaySpace PlaySpace;
    FRotator UserDefinedPlaySpace;

};

struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;
    FFrameNumber SectionStartTime;

};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;

};

struct FMovieSceneCameraShakeSourceTrigger
{
    TSubclassOf<class UCameraShakeBase> ShakeClass;
    float PlayScale;
    ECameraShakePlaySpace PlaySpace;
    FRotator UserDefinedPlaySpace;

};

struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues;

};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FFrameNumber> TriggerTimes;
    TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues;

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

struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    int32 MaterialIndex;

};

struct FMovieSceneEvent
{
    FMovieSceneEventPtrs Ptrs;

};

struct FMovieSceneEventChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;
    TArray<FMovieSceneEvent> KeyValues;

};

struct FMovieSceneEventParameters
{
};

struct FMovieSceneEventPayloadVariable
{
    FString Value;

};

struct FMovieSceneEventPtrs
{
    class UFunction* Function;
    TFieldPath<FProperty> BoundObjectProperty;

};

struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    TArray<FEventPayload> KeyValues;

};

struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneEventSectionData EventData;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;

};

struct FMovieSceneEventTriggerData
{
    FMovieSceneEventPtrs Ptrs;
    FGuid ObjectBindingID;

};

struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel FadeCurve;
    FLinearColor FadeColor;
    uint8 bFadeAudio;

};

struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
    class UMaterialParameterCollection* MPC;

};

struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneObjectPathChannel ObjectChannel;

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

struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
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

struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
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

struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;

};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;

};

struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel SlomoCurve;

};

struct FMovieSceneStringChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    TArray<FString> Values;
    FString DefaultValue;
    bool bHasDefaultValue;

};

struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneStringChannel StringCurve;

};

struct FMovieSceneTransformMask
{
    uint32 Mask;

};

struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector2D Vector;

};

struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector4 Vector;

};

struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector Vector;

};

struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
    FFrameNumber Time;

};

struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
};

struct FScalarParameterNameAndCurve
{
    FName ParameterName;
    FMovieSceneFloatChannel ParameterCurve;

};

struct FTransformParameterNameAndCurves
{
    FName ParameterName;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel Rotation;
    FMovieSceneFloatChannel Scale;

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

class IMovieSceneTransformOrigin : public IInterface
{

    FTransform BP_GetTransformOrigin();
};

class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
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

class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
};

class UMovieScene3DConstraintSection : public UMovieSceneSection
{
    FGuid ConstraintId;
    FMovieSceneObjectBindingID ConstraintBindingID;

    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    FMovieSceneObjectBindingID GetConstraintBindingID();
};

class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> ConstraintSections;

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

class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
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
    bool bLooping;
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

class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
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
    bool bLockPreviousCamera;
    FGuid CameraGuid;
    FMovieSceneObjectBindingID CameraBindingID;
    FTransform InitialCameraCutTransform;
    bool bHasInitialCameraCutTransform;

    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    FMovieSceneObjectBindingID GetCameraBindingID();
};

class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
    bool bCanBlend;
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
};

class UMovieSceneCameraShakeEvaluator : public UObject
{
};

class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;
    TSubclassOf<class UCameraShakeBase> ShakeClass;
    float PlayScale;
    ECameraShakePlaySpace PlaySpace;
    FRotator UserDefinedPlaySpace;

};

class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;

};

class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;

};

class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSourceTriggerChannel Channel;

};

class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;

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

class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
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

class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
    int32 MaterialIndex;

};

class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
};

class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneEnumSection : public UMovieSceneSection
{
    FMovieSceneByteChannel EnumCurve;

};

class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;

};

class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEvent Event;

};

class UMovieSceneEventSection : public UMovieSceneSection
{
    FNameCurve Events;
    FMovieSceneEventSectionData EventData;

};

class UMovieSceneEventSectionBase : public UMovieSceneSection
{
};

class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    EFireEventsAtPosition EventPosition;
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEventChannel EventChannel;

};

class UMovieSceneFadeSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;
    FLinearColor FadeColor;
    uint8 bFadeAudio;

};

class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
};

class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneFloatSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;

};

class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{
};

class UMovieSceneIntegerSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel IntegerCurve;

};

class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
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

class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
    class UMaterialParameterCollection* MPC;

};

class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel ObjectChannel;

};

class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
    UClass* PropertyClass;

};

class UMovieSceneParameterSection : public UMovieSceneSection
{
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;

    bool RemoveVectorParameter(FName InParameterName);
    bool RemoveVector2DParameter(FName InParameterName);
    bool RemoveTransformParameter(FName InParameterName);
    bool RemoveScalarParameter(FName InParameterName);
    bool RemoveColorParameter(FName InParameterName);
    bool RemoveBoolParameter(FName InParameterName);
    void GetParameterNames(TSet<FName>& ParameterNames);
    void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);
    void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);
    void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, const FTransform& InValue);
    void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);
    void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);
    void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);
};

class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneParticleSection : public UMovieSceneSection
{
    FMovieSceneParticleChannel ParticleKeys;

};

class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> ParticleSections;

};

class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
};

class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
};

class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
};

class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
};

class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel MaterialChannel;

};

class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
    int32 MaterialIndex;

};

class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
};

class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
    class UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;

};

class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
    class UMovieSceneSection* SectionToKey;
    FMovieScenePropertyBinding PropertyBinding;
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
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
    FVector StartLocationOffset;
    FRotator StartRotationOffset;
    bool bMatchWithPrevious;
    FName MatchedBoneName;
    FVector MatchedLocationOffset;
    FRotator MatchedRotationOffset;
    bool bMatchTranslation;
    bool bMatchIncludeZHeight;
    bool bMatchRotationYaw;
    bool bMatchRotationPitch;
    bool bMatchRotationRoll;

};

class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;
    bool bUseLegacySectionIndexBlend;
    FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;
    bool bBlendFirstChildOfRoot;

};

class UMovieSceneSlomoSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;

};

class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
};

class UMovieSceneStringSection : public UMovieSceneSection
{
    FMovieSceneStringChannel StringCurve;

};

class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
};

class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
};

class UMovieSceneVectorPropertySystem : public UMovieScenePropertySystem
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

class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
};

#endif
