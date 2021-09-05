// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe0(0x08)
	bool bLoop; // 0xe8(0x01)
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
};

// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x110 (Inherited: 0xe0)
struct UMovieSceneMediaSection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe0(0x08)
	bool bLooping; // 0xe8(0x01)
	FFrameNumber StartFrameOffset; // 0xec(0x04)
	UMediaTexture* MediaTexture; // 0xf0(0x08)
	UMediaSoundComponent* MediaSoundComponent; // 0xf8(0x08)
	bool bUseExternalMediaPlayer; // 0x100(0x01)
	UMediaPlayer* ExternalMediaPlayer; // 0x108(0x08)
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x58(0x10)
};

