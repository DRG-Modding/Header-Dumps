#ifndef UE4SS_SDK_ENE_StabberVine_Tentacle_HPP
#define UE4SS_SDK_ENE_StabberVine_Tentacle_HPP

class AENE_StabberVine_Tentacle_C : UStabberVine
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* LaserPointer;
    UParticleSystemComponent* P_KillerVine_Death;
    UOutlineComponent* outline;
    UStaticMeshComponent* SM_BladeMesh;
    USceneComponent* Rotator;
    USphereComponent* DamageSphere;
    USceneComponent* Head;
    USkeletalMeshComponent* SK_VineMesh;
    USplineComponent* Spline;
    UMotionAudioController* MotionAudioController;
    UStaticMeshComponent* Weakspot;
    UAudioComponent* KillerVine_Attack_Cue;
    UDamageComponent* HeadDamage;
    UExplosionComponent* Explosion;
    USceneComponent* DefaultSceneRoot;
    AENE_StabberVines_C* TentaclesBody_BP;
    UMaterialInstanceDynamic* DynamicMaterial;
    FLinearColor IdleColor;
    FName MaterialColourParamString;
    FTransform AttackGoalTransform;
    AActor* CurrentTarget;
    bool IsDoingMelee;
    float IdleHeadMovementDuration;
    float MeleeAttackDuration;
    bool HitGround;

    USceneComponent* GetHeadRotator();
    USceneComponent* GetHeadRoot();
    FVector GetTargetCenterMass(FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void GetDistanceToHead(FVector InLocation, float& Distance, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
    void OnRep_TentaclesBody_BP();
    void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector& NewTargetLocation, bool& HitTerrain, FVector TargetDirectionPenetration, FVector OriginalTargetLocation, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Add_VectorVector_ReturnValue_2);
    void CheckLoS(AActor* LoSCheckTargetActor, bool& ClearLoSToTarget, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void UserConstructionScript(FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Cross_VectorVector_ReturnValue, FRotator CallFunc_MakeRotationFromAxes_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult);
    void HydraMeleeTell(FLinearColor NewColor);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void DoMeleeAttack(AActor* AttackTarget);
    void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void KillTentacle();
    void ReceiveBeginPlay();
    void Recieve_OnRep_Owner();
    void PlayPreAttackSound();
    void PlayAttackCue();
    void BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature(EOutline InOutline);
    void All_PlayHitGround();
    void PlayHitGround();
    void ExecuteUbergraph_ENE_StabberVine_Tentacle(int32 EntryPoint, bool CallFunc_AreAllTentaclesDead_OutAllDead, AActor* CallFunc_GetOwner_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_K2_GetActorLocation_ReturnValue, FLinearColor K2Node_CustomEvent_NewColor, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, float CallFunc_Heal_ReturnValue, AActor* K2Node_CustomEvent_AttackTarget, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_HitTerrainAndStop_NewTargetLocation, bool CallFunc_HitTerrainAndStop_HitTerrain, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_GetForwardVector_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_2, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue_3, AActor* CallFunc_GetOwner_ReturnValue_4, FVector CallFunc_GetActorUpVector_ReturnValue, UENE_StabberVines_C* K2Node_DynamicCast_AsENE_Stabber_Vines, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, EOutline K2Node_ComponentBoundEvent_InOutline, bool CallFunc_HasAuthority_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_StabberVine_Claw_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_6, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1);
}

#endif
