#ifndef UE4SS_SDK_CSC_IceCaves_SnowStorm_HPP
#define UE4SS_SDK_CSC_IceCaves_SnowStorm_HPP

class UCSC_IceCaves_SnowStorm_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D SnowStormFrequencyMinMax;
    float SnowStormProbability;
    FVector2D SnowStormFirstInstanceDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_IceCaves_SnowStorm(int32 EntryPoint);
};

#endif
