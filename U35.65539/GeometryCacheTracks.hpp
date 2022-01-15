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

struct UMovieSceneGeometryCacheParams
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

struct UMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCacheSectionTemplateParameters Params;
}

struct UMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;
}

#endif
