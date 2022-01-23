#ifndef UE4SS_SDK_BP_FacilityTurretDrone_HPP
#define UE4SS_SDK_BP_FacilityTurretDrone_HPP

class ABP_FacilityTurretDrone_C : public AEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UNiagaraComponent* JetParticles3;
    class UNiagaraComponent* JetParticles2;
    class UNiagaraComponent* JetParticles1;
    class UNiagaraComponent* JetParticles;
    class UArrowComponent* ArrowLeft;
    class UArrowComponent* ArrowRight;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;
    FTransform SpawnTransform;
    TSubclassOf<class APawn> TurretClass;
    FBP_FacilityTurretDrone_COnTurretSpawned OnTurretSpawned;
    void OnTurretSpawned(class AFacilityTurret* spawnedTurret);
    bool UnSpawn;
    bool Deploy;
    class AAIController* TempTurretController;

    void SpawnPhysMeshes(TArray<class UStaticMeshComponent*>& Meshes, float Scale, int32 Temp_int_Array_Index_Variable, FVector CallFunc_MakeVector_ReturnValue, TArray<class UArrowComponent*>& K2Node_MakeArray_Array, class UArrowComponent* CallFunc_Array_Get_Item, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, FTransform CallFunc_GetSocketTransform_ReturnValue_2, FTransform CallFunc_GetSocketTransform_ReturnValue_3, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, FVector CallFunc_BreakTransform_Location_3, FRotator CallFunc_BreakTransform_Rotation_3, FVector CallFunc_BreakTransform_Scale_3, FTransform CallFunc_MakeTransform_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue_3, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, FTransform CallFunc_GetSocketTransform_ReturnValue_4, FTransform CallFunc_GetSocketTransform_ReturnValue_5, FVector CallFunc_BreakTransform_Location_4, FRotator CallFunc_BreakTransform_Rotation_4, FVector CallFunc_BreakTransform_Scale_4, FVector CallFunc_BreakTransform_Location_5, FRotator CallFunc_BreakTransform_Rotation_5, FVector CallFunc_BreakTransform_Scale_5, FTransform CallFunc_MakeTransform_ReturnValue_4, FTransform CallFunc_MakeTransform_ReturnValue_5, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_4, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_5, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_1, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnRep_Deploy();
    void OnRep_UnSpawn();
    void SetSpawnTransform(FTransform NewParam);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void OnDeploy();
    void SpawnDust(FVector DustLocation);
    void ExecuteUbergraph_BP_FacilityTurretDrone(int32 EntryPoint, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const TArray<class AActor*>& Temp_object_Variable, FName K2Node_Event_triggerName, bool CallFunc_EqualEqual_NameName_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_SpawnPhysMeshes_meshes, class UABP_Facility_TurretDrone_C* K2Node_DynamicCast_AsABP_Facility_Turret_Drone, bool K2Node_DynamicCast_bSuccess, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APawn* CallFunc_FinishSpawningActor_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class AFacilityTurret* K2Node_DynamicCast_AsFacility_Turret, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_MakeVector_ReturnValue_1, FVector K2Node_CustomEvent_DustLocation, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void OnTurretSpawned__DelegateSignature(class AFacilityTurret* spawnedTurret);
};

#endif
