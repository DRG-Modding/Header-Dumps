#ifndef UE4SS_SDK_PRJ_ChargedBlasterShot_HPP
#define UE4SS_SDK_PRJ_ChargedBlasterShot_HPP

class APRJ_ChargedBlasterShot_C : public AChargedProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* TCFDamage;
    class UAudioComponent* Audio;
    class USphereComponent* AoEDamageSphere;
    class UParticleSystemComponent* P_Charged_Shot_Warmup;
    class UParticleSystemComponent* P_Charged_Shot;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* AnimNode;
    class UDamageComponent* Damage;
    class USimpleHealthComponent* SimpleHealth;
    class UProjectileExplosion* ProjectileExplosion;
    float Grow_Time_Line_Scale_70B952944B635ADB4B7086A2A6BEB7D9;
    TEnumAsByte<ETimelineDirection::Type> Grow_Time_Line__Direction_70B952944B635ADB4B7086A2A6BEB7D9;
    class UTimelineComponent* Grow Time Line;
    float DamageRadiusAtOverCharge;
    float Acceleration;
    class UParticleSystemComponent* AoEParticle;
    bool FlyingNightmareEnabled;

    void OnRep_AoEEnabled(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
    void UserConstructionScript();
    void Grow Time Line__FinishedFunc();
    void Grow Time Line__UpdateFunc();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnAoEDamageEnabled();
    void UpdateFNRadius(float New Radius);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_ChargedBlasterShot(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PersistentExplosionEffect_EPC_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, float K2Node_CustomEvent_New_Radius, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class APawn* CallFunc_GetInstigator_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_PersistentExplosionEffect_EPC_C* CallFunc_FinishSpawningActor_ReturnValue_1, float Temp_float_Variable_1, float K2Node_Select_Default);
};

#endif
