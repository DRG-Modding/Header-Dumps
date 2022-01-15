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

struct UActorSequenceObjectReferenceMap
{
    TArray<FGuid> BindingIds;
    TArray<FActorSequenceObjectReferences> References;
}

struct UActorSequenceObjectReferences
{
    TArray<FActorSequenceObjectReference> Array;
}

struct UActorSequenceObjectReference
{
    EActorSequenceObjectReferenceType Type;
    FGuid ActorId;
    FString PathToComponent;
}

#endif
