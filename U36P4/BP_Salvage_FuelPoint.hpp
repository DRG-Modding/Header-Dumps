#ifndef UE4SS_SDK_BP_Salvage_FuelPoint_HPP
#define UE4SS_SDK_BP_Salvage_FuelPoint_HPP

class ABP_Salvage_FuelPoint_C : public ABP_Salvage_Point_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class ABP_Salvage_FuelPod_C* Pod;

    void EnableRepair();
    void OnDefenseStart();
    void OnDefenseComplete();
    void OnDefenseFail();
    void Call In Pod();
    void ExecuteUbergraph_BP_Salvage_FuelPoint(int32 EntryPoint);
};

#endif
