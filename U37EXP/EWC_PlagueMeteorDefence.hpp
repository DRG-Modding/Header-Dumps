#ifndef UE4SS_SDK_EWC_PlagueMeteorDefence_HPP
#define UE4SS_SDK_EWC_PlagueMeteorDefence_HPP

class UEWC_PlagueMeteorDefence_C : public UEWC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnLocation;
    class UEnemyGroupDescriptor* EnemyGroup;
    int32 Wave Count Waves;
    int32 Wave Count Constant Pressure;
    TArray<class ABP_RockCrackerPod_C*> Out Actors;
    int32 AlivePods;

    void PodsAlive(bool& IsActive);
    void StartWave();
    void PodDied(class UHealthComponentBase* HealthComponent);
    void PodRevived(class APlayerCharacter* User, EInputKeys Key);
    void OnWaveCompleted();
    void SpawnEnemiesAtMilestone();
    void ExecuteUbergraph_EWC_PlagueMeteorDefence(int32 EntryPoint);
};

#endif
