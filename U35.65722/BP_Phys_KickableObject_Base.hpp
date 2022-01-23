#ifndef UE4SS_SDK_BP_Phys_KickableObject_Base_HPP
#define UE4SS_SDK_BP_Phys_KickableObject_Base_HPP

class ABP_Phys_KickableObject_Base_C : public AFSDPhysicsActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene;
    class UStaticMeshComponent* StaticMesh;
    class USimpleHealthComponent* SimpleHealth;
    class UCapsuleComponent* UseCapsule_ForKicking;
    class UInstantUsable* InstantUsable;
    bool CanTriggerSound;
    class APlayerCharacter* KickedBy;
    float KickStrength;
    float DamageImpulseStrength;
    class UAnimMontage* KickMontage;
    class USoundBase* KickSound;
    class USoundBase* ImpactSound;
    class UParticleSystem* deathParticles;
    class USoundCue* deathSound;
    float ImpactSoundCoolDown;

    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void destroy();
    void DestroyOvertime();
    void Play_Kick(class APlayerCharacter* Kicker);
    void Spawn Bronzehead Effects();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_7_HitSig__DelegateSignature(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_8_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void SpawnKickSound();
    void ExecuteUbergraph_BP_Phys_KickableObject_Base(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_GetComponentVelocity_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, float CallFunc_VSize_ReturnValue, class UDE_StrongerBarrelKicking_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorFloat_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetStatValue_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_Kicker, class UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, float K2Node_ComponentBoundEvent_Damage, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_GetSocketLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

#endif
