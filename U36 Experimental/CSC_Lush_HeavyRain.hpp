#ifndef UE4SS_SDK_CSC_Lush_HeavyRain_HPP
#define UE4SS_SDK_CSC_Lush_HeavyRain_HPP

class UCSC_Lush_HeavyRain_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D RainFrequencyMinMax;
    float RainProbability;
    FVector2D RainFirstInstanceDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_Lush_HeavyRain(int32 EntryPoint);
};

#endif
