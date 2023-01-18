#ifndef UE4SS_SDK_PRJ_BreederEgg_HPP
#define UE4SS_SDK_PRJ_BreederEgg_HPP

class APRJ_BreederEgg_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyHealthComponent* EnemyHealth;
    class UGrowthComponent* Growth;
    class UPhysicalAnimationComponent* PhysicalAnimation;
    class USkeletalMeshComponent* Mesh;
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    class UParticleSystem* BreakingParticles;
    int32 SpawnAmount;
    float WarningTime;
    float SpawnTime;
    class USoundCue* BreakingSound;
    FRuntimeFloatCurve WarningCurve;
    FRuntimeFloatCurve GrowthCurve;

    void ReceiveBeginPlay();
    void ESpawnJellies();
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void DestroyEgg();
    void ExecuteUbergraph_PRJ_BreederEgg(int32 EntryPoint);
};

#endif
