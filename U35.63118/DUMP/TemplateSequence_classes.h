// Class TemplateSequence.TemplateSequence
// Size: 0x3f0 (Inherited: 0x348)
struct UTemplateSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x348(0x08)
	TSoftClassPtr<UObject> BoundActorClass; // 0x350(0x28)
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x378(0x28)
	TMap<FGuid, FName> BoundActorComponents; // 0x3a0(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x3f0 (Inherited: 0x3f0)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x270 (Inherited: 0x220)
struct ATemplateSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228(0x14)
	UTemplateSequencePlayer* SequencePlayer; // 0x240(0x08)
	FSoftObjectPath TemplateSequence; // 0x248(0x18)
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x260(0x0c)

	void SetSequence(UTemplateSequence* InSequence);
	void SetBinding(AActor* Actor);
	UTemplateSequence* LoadSequence();
	UTemplateSequencePlayer* GetSequencePlayer();
	UTemplateSequence* GetSequence();
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x890 (Inherited: 0x888)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {

	UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor* OutActor);
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x158 (Inherited: 0x158)
struct UTemplateSequenceSection : UMovieSceneSubSection {
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0x68 (Inherited: 0x68)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

