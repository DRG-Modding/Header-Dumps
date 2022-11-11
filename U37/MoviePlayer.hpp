#ifndef UE4SS_SDK_MoviePlayer_HPP
#define UE4SS_SDK_MoviePlayer_HPP

#include "MoviePlayer_enums.hpp"

class UMoviePlayerSettings : public UObject
{
    bool bWaitForMoviesToComplete;
    bool bMoviesAreSkippable;
    TArray<FString> StartupMovies;

};

#endif
