#ifndef UE4SS_SDK_GeometryCacheTracks_HPP
#define UE4SS_SDK_GeometryCacheTracks_HPP

class UMovieSceneGeometryCacheSection : UMovieSceneSection
{
    FMovieSceneGeometryCacheParams Params;
}

class UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> AnimationSections;
}

struct FMovieSceneGeometryCacheParams
{
    UGeometryCache* GeometryCacheAsset;
    FFrameNumber FirstLoopStartFrameOffset;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;
    uint8 bReverse;
    float StartOffset;
    float EndOffset;
    FSoftObjectPath GeometryCache;
}

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCacheSectionTemplateParameters Params;
}

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;
}

#endif
