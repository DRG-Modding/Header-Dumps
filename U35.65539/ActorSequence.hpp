#ifndef UE4SS_SDK_ActorSequence_HPP
#define UE4SS_SDK_ActorSequence_HPP

#include "ActorSequence_enums.hpp"

class UActorSequence : UMovieSceneSequence
{
    UMovieScene* MovieScene;
    FActorSequenceObjectReferenceMap ObjectReferences;
}

class UActorSequenceComponent : UActorComponent
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    UActorSequence* Sequence;
    UActorSequencePlayer* SequencePlayer;
}

class UActorSequencePlayer : UMovieSceneSequencePlayer
{
}

struct FActorSequenceObjectReferenceMap
{
    TArray<FGuid> BindingIds;
    TArray<FActorSequenceObjectReferences> References;
}

struct FActorSequenceObjectReferences
{
    TArray<FActorSequenceObjectReference> Array;
}

struct FActorSequenceObjectReference
{
    EActorSequenceObjectReferenceType Type;
    FGuid ActorId;
    FString PathToComponent;
}

#endif
