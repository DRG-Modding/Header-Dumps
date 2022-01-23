#ifndef UE4SS_SDK_ENE_Shark_HPP
#define UE4SS_SDK_ENE_Shark_HPP

class AENE_Shark_C : public ASharkEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* ProjectileCollision;
    class UAudioComponent* VulnerableSound;
    class UParticleSystemComponent* VulnerableParticles;
    class UAudioComponent* AttackSound;
    class UAudioComponent* DiveSound;
    class UAudioComponent* CirclingSound;
    class UOutlineComponent* outline;
    FENE_Shark_COnDamagedTarget OnDamagedTarget;
    void OnDamagedTarget();
    bool DiedbyCritical;
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;
    class UParticleSystemComponent* Dirt particles;

    void FadeOutIfPlaying(class UAudioComponent* Sound, bool CallFunc_IsPlaying_ReturnValue);
    void SoundHandling(bool IdleSound, bool CirclingSound, bool AttackSound, bool DiveSound, bool Vulnerable, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue_2);
    void OnRep_DiedbyCritical(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void TryDamage(class AActor* self2, class UHealthComponentBase* NewLocalVar_0, class UPlayerHealthComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, class UDamageClass* DamageClass, class AActor* damageCause, class AController* Instigator, class UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<class UDamageTag*>& Tags);
    void OnLandedEvent();
    void OnEnterState(ESharkEnemyState State);
    void OnExitState(ESharkEnemyState State);
    void ExecuteUbergraph_ENE_Shark(int32 EntryPoint, class UHealthComponent* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_damageAmount, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_damageCause, class AController* K2Node_ComponentBoundEvent_instigator, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, bool K2Node_ComponentBoundEvent_isRadial, const TArray<class UDamageTag*>& K2Node_ComponentBoundEvent_tags, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent_1, ESharkEnemyState K2Node_Event_state_1, ESharkEnemyState K2Node_Event_state, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
    void OnDamagedTarget__DelegateSignature();
};

#endif
