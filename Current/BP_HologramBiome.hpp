#ifndef UE4SS_SDK_BP_HologramBiome_HPP
#define UE4SS_SDK_BP_HologramBiome_HPP

class UBP_HologramBiome_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 Index;
    float azimuth;
    float elevation;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HologramBiome(int32 EntryPoint);
};

#endif
