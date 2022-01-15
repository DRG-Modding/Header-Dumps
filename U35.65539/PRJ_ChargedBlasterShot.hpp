#ifndef UE4SS_SDK_PRJ_ChargedBlasterShot_HPP
#define UE4SS_SDK_PRJ_ChargedBlasterShot_HPP

class APRJ_ChargedBlasterShot_C : UChargedProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* TCFDamage;
    UAudioComponent* Audio;
    USphereComponent* AoEDamageSphere;
    UParticleSystemComponent* P_Charged_Shot_Warmup;
    UParticleSystemComponent* P_Charged_Shot;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* AnimNode;
    UDamageComponent* Damage;
    USimpleHealthComponent* SimpleHealth;
    UProjectileExplosion* ProjectileExplosion;
    float Grow_Time_Line_Scale_70B952944B635ADB4B7086A2A6BEB7D9;
    TEnumAsByte<ETimelineDirection::Type> Grow_Time_Line__Direction_70B952944B635ADB4B7086A2A6BEB7D9;
    UTimelineComponent* Grow Time Line;
    float DamageRadiusAtOverCharge;
    float Acceleration;
    UParticleSystemComponent* AoEParticle;
    bool FlyingNightmareEnabled;

    void OnRep_AoEEnabled(UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
    void UserConstructionScript();
    void Grow Time Line__FinishedFunc();
    void Grow Time Line__UpdateFunc();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnAoEDamageEnabled();
    void UpdateFNRadius(float New Radius);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_ChargedBlasterShot(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, APawn* CallFunc_GetInstigator_ReturnValue_2, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_PersistentExplosionEffect_EPC_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, float K2Node_CustomEvent_New_Radius, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue_2, APawn* CallFunc_GetInstigator_ReturnValue_3, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, UBP_PersistentExplosionEffect_EPC_C* CallFunc_FinishSpawningActor_ReturnValue_1, float Temp_float_Variable_1, float K2Node_Select_Default);
}

#endif
