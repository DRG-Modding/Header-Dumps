// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x120 (Inherited: 0xe0)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	FMovieSceneGeometryCacheParams Params; // 0xe0(0x40)
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x58(0x10)
};

