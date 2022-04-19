#ifndef UE4SS_SDK_BP_FacilityTurretDrone_HPP
#define UE4SS_SDK_BP_FacilityTurretDrone_HPP

class ABP_FacilityTurretDrone_C : public AEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UNiagaraComponent* JetParticles3;
    class UNiagaraComponent* JetParticles2;
    class UNiagaraComponent* JetParticles1;
    class UNiagaraComponent* JetParticles;
    class UArrowComponent* ArrowLeft;
    class UArrowComponent* ArrowRight;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;
    FTransform SpawnTransform;
    TSubclassOf<class APawn> TurretClass;
    FBP_FacilityTurretDrone_COnTurretSpawned OnTurretSpawned;
    void OnTurretSpawned(class AFacilityTurret* spawnedTurret);
    bool UnSpawn;
    bool Deploy;
    class AAIController* TempTurretController;

    void SpawnPhysMeshes(TArray<class UStaticMeshComponent*>& Meshes);
    void OnRep_Deploy();
    void OnRep_UnSpawn();
    void SetSpawnTransform(FTransform NewParam);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void OnDeploy();
    void SpawnDust(FVector DustLocation);
    void ExecuteUbergraph_BP_FacilityTurretDrone(int32 EntryPoint);
    void OnTurretSpawned__DelegateSignature(class AFacilityTurret* spawnedTurret);
};

#endif
