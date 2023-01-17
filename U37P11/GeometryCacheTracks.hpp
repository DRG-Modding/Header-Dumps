#ifndef UE4SS_SDK_GeometryCacheTracks_HPP
#define UE4SS_SDK_GeometryCacheTracks_HPP

struct FMovieSceneGeometryCacheParams
{
    class UGeometryCache* GeometryCacheAsset;
    FFrameNumber FirstLoopStartFrameOffset;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;
    uint8 bReverse;
    float StartOffset;
    float EndOffset;
    FSoftObjectPath GeometryCache;

};

class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
    FMovieSceneGeometryCacheParams Params;

};

class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;

};

struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;

};

struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCacheSectionTemplateParameters Params;

};

#endif
