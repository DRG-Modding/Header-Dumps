#ifndef UE4SS_SDK_MediaUtils_HPP
#define UE4SS_SDK_MediaUtils_HPP

#include "MediaUtils_enums.hpp"

struct UMediaPlayerOptions
{
    FMediaPlayerTrackOptions Tracks;
    FTimespan SeekTime;
    EMediaPlayerOptionBooleanOverride PlayOnOpen;
    EMediaPlayerOptionBooleanOverride Loop;
}

struct UMediaPlayerTrackOptions
{
    int32 Audio;
    int32 Caption;
    int32 MetaData;
    int32 Script;
    int32 Subtitle;
    int32 Text;
    int32 Video;
}

#endif
