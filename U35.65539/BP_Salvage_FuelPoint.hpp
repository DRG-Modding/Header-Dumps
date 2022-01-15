#ifndef UE4SS_SDK_BP_Salvage_FuelPoint_HPP
#define UE4SS_SDK_BP_Salvage_FuelPoint_HPP

class ABP_Salvage_FuelPoint_C : ABP_Salvage_Point_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    ABP_Salvage_FuelPod_C* Pod;

    void EnableRepair();
    void OnDefenseStart();
    void OnDefenseComplete();
    void OnDefenseFail();
    void Call In Pod();
    void ExecuteUbergraph_BP_Salvage_FuelPoint(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UBP_Salvage_FuelPod_C* CallFunc_DropToTarget_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_SalvageFuelCells_Beacon_C* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
