#ifndef UE4SS_SDK_PRJ_BreederEgg_HPP
#define UE4SS_SDK_PRJ_BreederEgg_HPP

class APRJ_BreederEgg_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UEnemyHealthComponent* EnemyHealth;
    UGrowthComponent* Growth;
    UPhysicalAnimationComponent* PhysicalAnimation;
    USkeletalMeshComponent* Mesh;
    UOutlineComponent* outline;
    UEnemyComponent* enemy;
    UParticleSystem* BreakingParticles;
    int32 SpawnAmount;
    float WarningTime;
    float SpawnTime;
    USoundCue* BreakingSound;
    FRuntimeFloatCurve WarningCurve;
    FRuntimeFloatCurve GrowthCurve;

    void ReceiveBeginPlay();
    void ESpawnJellies();
    void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void DestroyEgg();
    void ExecuteUbergraph_PRJ_BreederEgg(int32 EntryPoint, APawn* CallFunc_GetInstigator_ReturnValue, UJellyBreeder* K2Node_DynamicCast_AsJelly_Breeder, bool K2Node_DynamicCast_bSuccess, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_2);
}

#endif
