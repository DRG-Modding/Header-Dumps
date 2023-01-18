#ifndef UE4SS_SDK_ActorSequence_HPP
#define UE4SS_SDK_ActorSequence_HPP

#include "ActorSequence_enums.hpp"

struct FActorSequenceObjectReference
{
    EActorSequenceObjectReferenceType Type;
    FGuid ActorId;
    FString PathToComponent;

};

struct FActorSequenceObjectReferenceMap
{
    TArray<FGuid> BindingIds;
    TArray<FActorSequenceObjectReferences> References;

};

struct FActorSequenceObjectReferences
{
    TArray<FActorSequenceObjectReference> Array;

};

class UActorSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;
    FActorSequenceObjectReferenceMap ObjectReferences;

};

class UActorSequenceComponent : public UActorComponent
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    class UActorSequence* Sequence;
    class UActorSequencePlayer* SequencePlayer;

};

class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
};

#endif
