#ifndef UE4SS_SDK_ENE_SpiderSpawner_HPP
#define UE4SS_SDK_ENE_SpiderSpawner_HPP

class AENE_SpiderSpawner_C : public AENE_EnemySpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere_Eye4;
    class USphereComponent* Sphere_Eye3;
    class USphereComponent* Sphere_Eye1;
    class UTerrainPlacementComponent* terrainPlacement;
    class USphereComponent* Sphere_Eye2;
    class UCapsuleComponent* PlayerCollision;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    class UBP_SpawnerEyeComponent_C* Eye4;
    class UBP_SpawnerEyeComponent_C* Eye3;
    class UBP_SpawnerEyeComponent_C* Eye2;
    class UBP_SpawnerEyeComponent_C* Eye1;
    class USkeletalMeshComponent* Spawner_Eye1_Rig;
    class USkeletalMeshComponent* Spawner_Eye4_Rig;
    class USkeletalMeshComponent* Spawner_Eye3_Rig;
    class USkeletalMeshComponent* Spawner_Eye2_Rig;
    class UPawnSensingComponent* PawnSensing;
    class USkeletalMeshComponent* SK_Spawner;
    float NextSound;
    class UParticleSystem* DamageParticles;
    class USoundCue* Damage Sound;
    class USoundCue* Death Sound;
    class USoundCue* LastSound;
    FLinearColor StartColor;
    FLinearColor DeadEyeColor;
    class UMaterialInstanceDynamic* EyeMaterial;
    TArray<class UBP_SpawnerEyeComponent_C*> Eyes;
    class UEnemyDescriptor* DeathSpawn;
    int32 DeathSpawnCount;

    class USkeletalMeshComponent* GetMesh();
    void SpawnDeathEffects();
    void UserConstructionScript();
    void Spawn Sound(class USoundCue* Sound, float Volume);
    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void OnBodypartHit(float Amount, float BaseAmount, const FDamageData& DamageData);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void PlayHitReact();
    void BndEvt__ENE_SpiderSpawner_Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void CustomEvent_0(class APawn* enemy);
    void CustomEvent_1(class APawn* enemy);
    void ExecuteUbergraph_ENE_SpiderSpawner(int32 EntryPoint);
};

#endif
