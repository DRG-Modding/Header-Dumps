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
    void ExecuteUbergraph_PRJ_BreederEgg(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AJellyBreeder* K2Node_DynamicCast_AsJelly_Breeder, bool K2Node_DynamicCast_bSuccess, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_PRJ_BreederEggK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_2);
};

#endif
