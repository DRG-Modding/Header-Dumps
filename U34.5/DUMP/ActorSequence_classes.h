// Class ActorSequence.ActorSequence
// Size: 0x370 (Inherited: 0x348)
struct UActorSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x348(0x08)
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x350(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UActorSequenceComponent : UActorComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0(0x14)
	UActorSequence* Sequence; // 0xc8(0x08)
	UActorSequencePlayer* SequencePlayer; // 0xd0(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x888 (Inherited: 0x888)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

