#ifndef UE4SS_SDK_BP_HangingMistCloud_Azure_HPP
#define UE4SS_SDK_BP_HangingMistCloud_Azure_HPP

class ABP_HangingMistCloud_Azure_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    UParticleSystemComponent* P_CaveFX_Rain01;
    USceneComponent* DefaultSceneRoot;
    bool PlayerInsideGas;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HangingMistCloud_Azure(int32 EntryPoint);
}

#endif
