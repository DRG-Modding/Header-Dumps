#ifndef UE4SS_SDK_CSC_Crystal_HeavyRain_HPP
#define UE4SS_SDK_CSC_Crystal_HeavyRain_HPP

class UCSC_Crystal_HeavyRain_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D RainFrequencyMinMax;
    float RainProbability;
    FVector2D RainFirstInstanceDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_Crystal_HeavyRain(int32 EntryPoint);
};

#endif
