#ifndef UE4SS_SDK_BP_CaretakerTurretAction_HPP
#define UE4SS_SDK_BP_CaretakerTurretAction_HPP

class UBP_CaretakerTurretAction_C : public UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FTransform> TurretTransforms;
    TArray<class TSubclassOf<ABP_FacilityTurretDrone_C>> ChosenTurrets;
    TArray<class AActor*> Turrets;
    FTimerHandle TurretWave_Handle;
    int32 BaseMaxTurrets;
    int32 ExtraMaxTurretsPerPlayer;
    int32 MaxTurrets;
    int32 TurretCount;
    int32 NumTurretsPerWave;
    int32 NumTurretsRemainToTriggerNewWave;
    int32 NumTurretsInFirstWave;
    bool CanSpawn;
    bool CanReplenish;
    int32 NumTurretsToSpawn;

    bool CanUse();
    void OnStarted();
    void Turret wave();
    void OnStopped();
    void SetupDrone(class ABP_FacilityTurretDrone_C* Drone, FTransform Transform);
    void TurretSpawned(class AFacilityTurret* spawnedTurret);
    void TurretDied(class UHealthComponentBase* HealthComponent);
    void OnTriggered();
    void SpawnTurrets(int32 amountOfTurrets);
    void ActivateLights();
    void DeactivateLights();
    void ExecuteUbergraph_BP_CaretakerTurretAction(int32 EntryPoint);
};

#endif
