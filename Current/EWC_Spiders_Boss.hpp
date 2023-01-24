#ifndef UE4SS_SDK_EWC_Spiders_Boss_HPP
#define UE4SS_SDK_EWC_Spiders_Boss_HPP

class UEWC_Spiders_Boss_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    TSet<APawn*> spawnedEnemies;

    void StartWave();
    void spawned(class APawn* enemy);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_EWC_Spiders_Boss(int32 EntryPoint);
};

#endif
