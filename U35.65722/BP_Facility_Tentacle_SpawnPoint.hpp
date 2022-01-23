#ifndef UE4SS_SDK_BP_Facility_Tentacle_SpawnPoint_HPP
#define UE4SS_SDK_BP_Facility_Tentacle_SpawnPoint_HPP

class ABP_Facility_Tentacle_SpawnPoint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Facility_Tentacle_SpawnPoint(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
};

#endif
