#ifndef UE4SS_SDK_BP_CleanupPod_Beacon_HPP
#define UE4SS_SDK_BP_CleanupPod_Beacon_HPP

class ABP_CleanupPod_Beacon_C : public ABP_SupplyPod_Beacon_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CleanupPod_Beacon(int32 EntryPoint);
};

#endif
