#ifndef UE4SS_SDK_BP_HangingMistCloud_Azure_HPP
#define UE4SS_SDK_BP_HangingMistCloud_Azure_HPP

class ABP_HangingMistCloud_Azure_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UParticleSystemComponent* P_CaveFX_Rain01;
    class USceneComponent* DefaultSceneRoot;
    bool PlayerInsideGas;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HangingMistCloud_Azure(int32 EntryPoint);
};

#endif
