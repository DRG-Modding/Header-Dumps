#ifndef UE4SS_SDK_BP_RainFallLocal_HPP
#define UE4SS_SDK_BP_RainFallLocal_HPP

class ABP_RainFallLocal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UAudioComponent* audio;
    class UParticleSystemComponent* P_CaveFX_Rain01;
    class USceneComponent* DefaultSceneRoot;
    bool PlayerInsideGas;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RainFallLocal(int32 EntryPoint);
};

#endif
