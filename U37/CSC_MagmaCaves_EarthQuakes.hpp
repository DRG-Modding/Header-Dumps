#ifndef UE4SS_SDK_CSC_MagmaCaves_EarthQuakes_HPP
#define UE4SS_SDK_CSC_MagmaCaves_EarthQuakes_HPP

class UCSC_MagmaCaves_EarthQuakes_C : public UCaveScriptComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector2D QuakeFrequencyMinMax;
    float HasQuakesProbability;
    FVector2D QuakeFirstDelayMinMax;

    void ReceiveBeginPlay();
    void MatchStart();
    void ExecuteUbergraph_CSC_MagmaCaves_EarthQuakes(int32 EntryPoint);
};

#endif
