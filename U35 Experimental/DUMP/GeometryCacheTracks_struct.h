// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// Size: 0x40 (Inherited: 0x00)
struct FMovieSceneGeometryCacheParams {
	UGeometryCache* GeometryCacheAsset; // 0x00(0x08)
	FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	FFrameNumber StartFrameOffset; // 0x0c(0x04)
	FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	float StartOffset; // 0x1c(0x04)
	float EndOffset; // 0x20(0x04)
	FSoftObjectPath GeometryCache; // 0x28(0x18)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// Size: 0x68 (Inherited: 0x20)
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20(0x48)
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// Size: 0x48 (Inherited: 0x40)
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40(0x04)
	FFrameNumber SectionEndTime; // 0x44(0x04)
};

