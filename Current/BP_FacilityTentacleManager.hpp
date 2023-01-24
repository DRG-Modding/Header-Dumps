#ifndef UE4SS_SDK_BP_FacilityTentacleManager_HPP
#define UE4SS_SDK_BP_FacilityTentacleManager_HPP

class ABP_FacilityTentacleManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    class AENE_FacilityTentacle_C* spawned;
    float TentacleRespawnTime;
    FTimerHandle TentacleRespawnTimer;
    bool HasTentacle;
    FTimerHandle TentaclePauseTimer;

    void OnRep_HasTentacle();
    void CanSpawnTentacle(bool& IsBossfightActive);
    void HasActiveTentacle(bool& HasSpawned);
    void SpawnTentacle();
    void KillTentacle();
    void OnTentacleDeath(class UHealthComponentBase* HealthComponent);
    void RespawnTentacle();
    void OpenHatch();
    void CloseHatch();
    void PauseAction(float Duration);
    void UnpauseTentacles();
    void ExecuteUbergraph_BP_FacilityTentacleManager(int32 EntryPoint);
};

#endif
