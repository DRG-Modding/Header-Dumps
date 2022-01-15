#ifndef UE4SS_SDK_ENE_Shark_HPP
#define UE4SS_SDK_ENE_Shark_HPP

class AENE_Shark_C : USharkEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* ProjectileCollision;
    UAudioComponent* VulnerableSound;
    UParticleSystemComponent* VulnerableParticles;
    UAudioComponent* AttackSound;
    UAudioComponent* DiveSound;
    UAudioComponent* CirclingSound;
    UOutlineComponent* outline;
    FENE_Shark_COnDamagedTarget OnDamagedTarget;
    void OnDamagedTarget();
    bool DiedbyCritical;
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    UParticleSystemComponent* Dirt particles;

    void FadeOutIfPlaying(UAudioComponent* Sound, bool CallFunc_IsPlaying_ReturnValue);
    void SoundHandling(bool IdleSound, bool CirclingSound, bool AttackSound, bool DiveSound, bool Vulnerable, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue_2);
    void OnRep_DiedbyCritical(UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void TryDamage(AActor* self2, UHealthComponentBase* NewLocalVar_0, UPlayerHealthComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    void OnLandedEvent();
    void OnEnterState(ESharkEnemyState State);
    void OnExitState(ESharkEnemyState State);
    void ExecuteUbergraph_ENE_Shark(int32 EntryPoint, UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_damageCause, AController* K2Node_ComponentBoundEvent_instigator, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<UDamageTag*>& K2Node_ComponentBoundEvent_tags, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent_1, ESharkEnemyState K2Node_Event_state_1, ESharkEnemyState K2Node_Event_state, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
    void OnDamagedTarget__DelegateSignature();
}

#endif
