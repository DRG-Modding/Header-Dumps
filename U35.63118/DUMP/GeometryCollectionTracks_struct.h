// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x08(0x18)
	FFrameNumber StartFrameOffset; // 0x20(0x04)
	FFrameNumber EndFrameOffset; // 0x24(0x04)
	float PlayRate; // 0x28(0x04)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// Size: 0x58 (Inherited: 0x20)
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20(0x38)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// Size: 0x38 (Inherited: 0x30)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30(0x04)
	FFrameNumber SectionEndTime; // 0x34(0x04)
};

