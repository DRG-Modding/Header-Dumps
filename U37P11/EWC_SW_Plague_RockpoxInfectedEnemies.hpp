#ifndef UE4SS_SDK_EWC_SW_Plague_RockpoxInfectedEnemies_HPP
#define UE4SS_SDK_EWC_SW_Plague_RockpoxInfectedEnemies_HPP

class UEWC_SW_Plague_RockpoxInfectedEnemies_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    TArray<FVector> SpawnLocations;

    void StartWave();
    void StopConstantPreassure();
    void ExecuteUbergraph_EWC_SW_Plague_RockpoxInfectedEnemies(int32 EntryPoint);
};

#endif
