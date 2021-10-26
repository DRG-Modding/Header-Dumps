// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// Size: 0x58 (Inherited: 0x48)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x48(0x08)
	FFrameNumber SectionStartFrame; // 0x50(0x04)
	bool bLoop; // 0x54(0x01)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20(0x30)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneMediaSectionParams {
	UMediaSoundComponent* MediaSoundComponent; // 0x00(0x08)
	UMediaSource* MediaSource; // 0x08(0x08)
	UMediaTexture* MediaTexture; // 0x10(0x08)
	UMediaPlayer* MediaPlayer; // 0x18(0x08)
	FFrameNumber SectionStartFrame; // 0x20(0x04)
	FFrameNumber SectionEndFrame; // 0x24(0x04)
	bool bLooping; // 0x28(0x01)
	FFrameNumber StartFrameOffset; // 0x2c(0x04)
};

