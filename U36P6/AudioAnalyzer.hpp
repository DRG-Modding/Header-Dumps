#ifndef UE4SS_SDK_AudioAnalyzer_HPP
#define UE4SS_SDK_AudioAnalyzer_HPP

class UAudioAnalyzerAsset : public UObject
{
};

class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{
};

class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
    class USoundWave* Sound;
    float DurationInSeconds;

};

#endif
