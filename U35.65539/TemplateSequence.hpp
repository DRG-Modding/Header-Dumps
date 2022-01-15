#ifndef UE4SS_SDK_TemplateSequence_HPP
#define UE4SS_SDK_TemplateSequence_HPP

class UTemplateSequence : UMovieSceneSequence
{
    UMovieScene* MovieScene;
    TSoftClassPtr<AActor> BoundActorClass;
    TSoftObjectPtr<AActor> BoundPreviewActor;
    TMap<FGuid, FName> BoundActorComponents;
}

class UCameraAnimationSequence : UTemplateSequence
{
}

class ATemplateSequenceActor : AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    UTemplateSequencePlayer* SequencePlayer;
    FSoftObjectPath TemplateSequence;
    FTemplateSequenceBindingOverrideData BindingOverride;

    void SetSequence(UTemplateSequence* InSequence);
    void SetBinding(AActor* Actor);
    UTemplateSequence* LoadSequence();
    UTemplateSequencePlayer* GetSequencePlayer();
    UTemplateSequence* GetSequence();
}

class UTemplateSequencePlayer : UMovieSceneSequencePlayer
{

    UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);
}

class UTemplateSequenceSection : UMovieSceneSubSection
{
}

class UTemplateSequenceTrack : UMovieSceneSubTrack
{
}

struct FTemplateSequenceBindingOverrideData
{
    TWeakObjectPtr<UObject> Object;
    bool bOverridesDefault;
}

struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData
{
    FMovieSceneEvaluationOperand Operand;
}

struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate
{
    FFrameNumber SectionStartTime;
    FGuid OuterBindingId;
    FMovieSceneEvaluationOperand InnerOperand;
}

#endif
