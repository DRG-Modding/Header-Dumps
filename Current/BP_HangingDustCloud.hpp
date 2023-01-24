#ifndef UE4SS_SDK_BP_HangingDustCloud_HPP
#define UE4SS_SDK_BP_HangingDustCloud_HPP

class ABP_HangingDustCloud_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UParticleSystemComponent* P_CaveFX_Rain01;
    class USceneComponent* DefaultSceneRoot;
    bool PlayerInsideGas;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HangingDustCloud(int32 EntryPoint);
};

#endif
