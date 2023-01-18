#ifndef UE4SS_SDK_AudioAnalyzer_HPP
#define UE4SS_SDK_AudioAnalyzer_HPP

class UAudioAnalyzerAsset : public UObject
{
};

class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
    class USoundWave* Sound;
    float DurationInSeconds;

};

class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{
};

#endif
