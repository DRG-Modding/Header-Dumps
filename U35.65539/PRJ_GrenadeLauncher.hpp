#ifndef UE4SS_SDK_PRJ_GrenadeLauncher_HPP
#define UE4SS_SDK_PRJ_GrenadeLauncher_HPP

class APRJ_GrenadeLauncher_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProjectileExplosion* ProjectileExplosionHyper;
    UPointLightComponent* PointLight;
    UProjectileExplosion* ProjectileExplosionMiniNuke;
    UParticleSystemComponent* P_GrenadeTrail;
    USphereComponent* Sphere;
    UDamageComponent* Damage;
    UProjectileExplosion* ProjectileExplosion;
    UStaticMeshComponent* mesh_front;
    float ForcePush;
    bool Lit;
    float Speed;
    FRuntimeFloatCurve KnockbackCurve;
    bool IsHyper;
    FVector HitWorldLocation;
    FName HitBoneName;
    AActor* HitActor;
    UPrimitiveComponent* HitComponent;
    UPhysicalMaterial* HitPMat;
    FVector HitNormal;

    void LaunchPlayer(UPlayerCharacter* Player, bool CallFunc_IsAlive_ReturnValue, ECharacterState CallFunc_GetCurrentState_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_EvaluateRuntimeCurve_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void OnRep_Lit();
    void UserConstructionScript();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MakeBouncy();
    void Trigger(FHitResult HitResult);
    void DoOnSpawn();
    void ExecuteUbergraph_PRJ_GrenadeLauncher(int32 EntryPoint, const TArray<AActor*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasTag_ReturnValue, FHitResult CallFunc_MakeHitResult_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UDamageBonusBase* CallFunc_Array_Get_Item, UDamageConversionBonus* K2Node_DynamicCast_AsDamage_Conversion_Bonus, bool K2Node_DynamicCast_bSuccess_1, FHitResult K2Node_CustomEvent_HitResult, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FHitResult CallFunc_MakeHitResult_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue, bool Temp_bool_IsClosed_Variable, const TArray<uint8>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, AActor* CallFunc_Array_Get_Item_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_2, APawn* CallFunc_GetInstigator_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_MiniNuke_RadiationCloud_C* CallFunc_FinishSpawningActor_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_GetGameTimeSinceActivation_ReturnValue, uint8 CallFunc_GetLocalRole_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_FClamp_ReturnValue);
}

#endif
