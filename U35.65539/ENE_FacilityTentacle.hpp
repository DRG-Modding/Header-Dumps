#ifndef UE4SS_SDK_ENE_FacilityTentacle_HPP
#define UE4SS_SDK_ENE_FacilityTentacle_HPP

class AENE_FacilityTentacle_C : UFacilityTentacle
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere2;
    USphereComponent* Sphere1;
    USphereComponent* Sphere;
    UWeakpointGlowComponent* WeaponFireGlow;
    UNiagaraComponent* NS_Inner_Energy;
    USkeletalMeshComponent* Head_Mesh;
    USceneComponent* Rotator2;
    UCapsuleComponent* LaserPointer;
    USpotLightComponent* SpotLight;
    USphereComponent* DamageSphere;
    UStaticMeshComponent* SM_LightCone001;
    UBP_TentacleBurrowAttack_C* BurrowAttack;
    UBP_Tentacle_RangedAttack_C* RangedAttack;
    UBP_TentacleMeleeAttack_C* MeleeAttack;
    UAudioComponent* FacilityTentacleSpawn_Cue;
    UPointLightComponent* PointLight;
    UBillboardComponent* MeleeAttackPosition;
    UBillboardComponent* RangedAttackPosition;
    UOutlineComponent* outline;
    USceneComponent* Head;
    USkeletalMeshComponent* TentacleMesh;
    USplineComponent* Spline;
    UMotionAudioController* MotionAudioController;
    UAudioComponent* TentaclePreImpact;
    UDamageComponent* HeadDamage;
    UExplosionComponent* Explosion;
    USceneComponent* DefaultSceneRoot;
    ABP_MainFacility_DataVault_C* MainFacility_BP;
    UMaterialInstanceDynamic* DynamicMaterial_Tell;
    FTransform AttackGoalTransform;
    AActor* CurrentTarget;
    float IdleHeadMovementDuration;
    float MeleeAttackDuration;
    bool HitGround;
    float HeadStuckInGroundDuration;

    USceneComponent* GetHeadRotator();
    USceneComponent* GetHeadRoot();
    USkeletalMeshComponent* GetMesh();
    void GetTentacle(UENE_FacilityTentacle_C*& tentacle);
    FVector GetTargetCenterMass(FVector CallFunc_GetSocketLocation_ReturnValue);
    void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector& NewTargetLocation, bool& HitTerrain, FVector TargetDirectionPenetration, FVector OriginalTargetLocation, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Add_VectorVector_ReturnValue_2);
    void CheckLoS(AActor* LoSCheckTargetActor, bool& ClearLoSToTarget, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void UserConstructionScript();
    void OnNotifyEnd_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnNotifyBegin_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnInterrupted_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnBlendOut_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnCompleted_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnNotifyEnd_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void OnNotifyBegin_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void OnInterrupted_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void OnBlendOut_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void OnCompleted_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void DoMeleeAttack(AActor* AttackTarget);
    void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void KillTentacle();
    void ReceiveBeginPlay();
    void PlayPreAttackSound();
    void PlayAttackCue();
    void BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature(EOutline InOutline);
    void All_PlayHitGround();
    void PlayHitGround();
    void PlayFinalAttackWarning();
    void OnRangedAttack();
    void HandleDeath();
    void ExecuteUbergraph_ENE_FacilityTentacle(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, AActor* K2Node_CustomEvent_AttackTarget, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsAlive_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_HitTerrainAndStop_NewTargetLocation, bool CallFunc_HitTerrainAndStop_HitTerrain, bool CallFunc_IsAlive_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue_2, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, EOutline K2Node_ComponentBoundEvent_InOutline, AnimNotifyDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetUpVector_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, int32 CallFunc_GetNumPlayers_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, AController* CallFunc_GetController_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, UFSDAIController* K2Node_DynamicCast_AsFSDAIController, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_2, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UEnemyAnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_GetSocketLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, FVector CallFunc_GetUpVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue_2);
}

#endif
