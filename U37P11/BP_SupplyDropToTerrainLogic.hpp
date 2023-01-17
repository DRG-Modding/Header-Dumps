#ifndef UE4SS_SDK_BP_SupplyDropToTerrainLogic_HPP
#define UE4SS_SDK_BP_SupplyDropToTerrainLogic_HPP

class UBP_SupplyDropToTerrainLogic_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDropToTerrainComponent* DropToTerrain;
    float FellFromheight;
    float TimeOfImpact;
    float MinFallDistance;
    class UOutlineComponent* outline;

    void ReceiveBeginPlay();
    void FallStateChanged(bool IsFalling);
    void OnComponentActivated_Event_0(class UActorComponent* Component, bool bReset);
    void ExecuteUbergraph_BP_SupplyDropToTerrainLogic(int32 EntryPoint);
};

#endif
