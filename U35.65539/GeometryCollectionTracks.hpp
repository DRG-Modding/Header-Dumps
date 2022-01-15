#ifndef UE4SS_SDK_GeometryCollectionTracks_HPP
#define UE4SS_SDK_GeometryCollectionTracks_HPP

class UMovieSceneGeometryCollectionSection : UMovieSceneSection
{
    FMovieSceneGeometryCollectionParams Params;
}

class UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack
{
    TArray<UMovieSceneSection*> AnimationSections;
}

struct FMovieSceneGeometryCollectionParams
{
    FSoftObjectPath GeometryCollectionCache;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;
}

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCollectionSectionTemplateParameters Params;
}

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;
}

#endif
