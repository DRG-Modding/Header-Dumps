// Class MoviePlayer.MoviePlayerSettings
// Size: 0x40 (Inherited: 0x28)
struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28(0x01)
	bool bMoviesAreSkippable; // 0x29(0x01)
	TArray<FString> StartupMovies; // 0x30(0x10)
};

