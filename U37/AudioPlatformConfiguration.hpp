#ifndef UE4SS_SDK_AudioPlatformConfiguration_HPP
#define UE4SS_SDK_AudioPlatformConfiguration_HPP

#include "AudioPlatformConfiguration_enums.hpp"

struct FPlatformRuntimeAudioCompressionOverrides
{
    bool bOverrideCompressionTimes;
    float DurationThreshold;
    int32 MaxNumRandomBranches;
    int32 SoundCueQualityIndex;

};

#endif
