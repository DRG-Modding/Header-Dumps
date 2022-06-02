#ifndef UE4SS_SDK_CSC_Sandblasted_SandStorm_HPP
#define UE4SS_SDK_CSC_Sandblasted_SandStorm_HPP

class UCSC_Sandblasted_SandStorm_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D SandStormFrequencyMinMax;
    float SandStormProbability;
    FVector2D SandStormFirstInstanceDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_Sandblasted_SandStorm(int32 EntryPoint);
};

#endif
