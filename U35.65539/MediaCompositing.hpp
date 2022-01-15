#ifndef UE4SS_SDK_MediaCompositing_HPP
#define UE4SS_SDK_MediaCompositing_HPP

class UMovieSceneMediaPlayerPropertySection : UMovieSceneSection
{
    UMediaSource* MediaSource;
    bool bLoop;
}

class UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack
{
}

class UMovieSceneMediaSection : UMovieSceneSection
{
    UMediaSource* MediaSource;
    bool bLooping;
    FFrameNumber StartFrameOffset;
    UMediaTexture* MediaTexture;
    UMediaSoundComponent* MediaSoundComponent;
    bool bUseExternalMediaPlayer;
    UMediaPlayer* ExternalMediaPlayer;
}

class UMovieSceneMediaTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> MediaSections;
}

struct UMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
    UMediaSource* MediaSource;
    FFrameNumber SectionStartFrame;
    bool bLoop;
}

struct UMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneMediaSectionParams Params;
}

struct UMovieSceneMediaSectionParams
{
    UMediaSoundComponent* MediaSoundComponent;
    UMediaSource* MediaSource;
    UMediaTexture* MediaTexture;
    UMediaPlayer* MediaPlayer;
    FFrameNumber SectionStartFrame;
    FFrameNumber SectionEndFrame;
    bool bLooping;
    FFrameNumber StartFrameOffset;
}

#endif
