#ifndef UE4SS_SDK_ENE_FacilityTentacle_HPP
#define UE4SS_SDK_ENE_FacilityTentacle_HPP

class AENE_FacilityTentacle_C : public AFacilityTentacle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class USphereComponent* Sphere;
    class UWeakpointGlowComponent* WeaponFireGlow;
    class UNiagaraComponent* NS_Inner_Energy;
    class USkeletalMeshComponent* Head_Mesh;
    class USceneComponent* Rotator2;
    class UCapsuleComponent* LaserPointer;
    class USpotLightComponent* SpotLight;
    class USphereComponent* DamageSphere;
    class UStaticMeshComponent* SM_LightCone001;
    class UBP_TentacleBurrowAttack_C* BurrowAttack;
    class UBP_Tentacle_RangedAttack_C* RangedAttack;
    class UBP_TentacleMeleeAttack_C* MeleeAttack;
    class UAudioComponent* FacilityTentacleSpawn_Cue;
    class UPointLightComponent* PointLight;
    class UBillboardComponent* MeleeAttackPosition;
    class UBillboardComponent* RangedAttackPosition;
    class UOutlineComponent* outline;
    class USceneComponent* Head;
    class USkeletalMeshComponent* TentacleMesh;
    class USplineComponent* Spline;
    class UMotionAudioController* MotionAudioController;
    class UAudioComponent* TentaclePreImpact;
    class UDamageComponent* HeadDamage;
    class UExplosionComponent* Explosion;
    class USceneComponent* DefaultSceneRoot;
    class ABP_MainFacility_DataVault_C* MainFacility_BP;
    class UMaterialInstanceDynamic* DynamicMaterial_Tell;
    FTransform AttackGoalTransform;
    class AActor* CurrentTarget;
    float IdleHeadMovementDuration;
    float MeleeAttackDuration;
    bool HitGround;
    float HeadStuckInGroundDuration;

    class USceneComponent* GetHeadRotator();
    class USceneComponent* GetHeadRoot();
    class USkeletalMeshComponent* GetMesh();
    void GetTentacle(class AENE_FacilityTentacle_C*& tentacle);
    FVector GetTargetCenterMass(FVector CallFunc_GetSocketLocation_ReturnValue);
    void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector& NewTargetLocation, bool& HitTerrain, FVector TargetDirectionPenetration, FVector OriginalTargetLocation, const TArray<class AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Add_VectorVector_ReturnValue_2);
    void CheckLoS(class AActor* LoSCheckTargetActor, bool& ClearLoSToTarget, const TArray<class AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
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
    void DoMeleeAttack(class AActor* AttackTarget);
    void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
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
    void ExecuteUbergraph_ENE_FacilityTentacle(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_9, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_8, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, class AActor* K2Node_CustomEvent_AttackTarget, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsAlive_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_HitTerrainAndStop_NewTargetLocation, bool CallFunc_HitTerrainAndStop_HitTerrain, bool CallFunc_IsAlive_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, EOutline K2Node_ComponentBoundEvent_InOutline, FExecuteUbergraph_ENE_FacilityTentacleK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetUpVector_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, int32 CallFunc_GetNumPlayers_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class AFSDAIController* K2Node_DynamicCast_AsFSDAIController, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_2, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UEnemyAnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_GetSocketLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, FVector CallFunc_GetUpVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue_2);
};

#endif
