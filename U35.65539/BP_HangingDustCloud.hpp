#ifndef UE4SS_SDK_BP_HangingDustCloud_HPP
#define UE4SS_SDK_BP_HangingDustCloud_HPP

class ABP_HangingDustCloud_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    UParticleSystemComponent* P_CaveFX_Rain01;
    USceneComponent* DefaultSceneRoot;
    bool PlayerInsideGas;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HangingDustCloud(int32 EntryPoint);
}

#endif
