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

struct UMovieSceneGeometryCollectionParams
{
    FSoftObjectPath GeometryCollectionCache;
    FFrameNumber StartFrameOffset;
    FFrameNumber EndFrameOffset;
    float PlayRate;
}

struct UMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCollectionSectionTemplateParameters Params;
}

struct UMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{
    FFrameNumber SectionStartTime;
    FFrameNumber SectionEndTime;
}

#endif
