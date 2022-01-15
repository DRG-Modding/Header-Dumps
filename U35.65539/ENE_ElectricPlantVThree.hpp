#ifndef UE4SS_SDK_ENE_ElectricPlantVThree_HPP
#define UE4SS_SDK_ENE_ElectricPlantVThree_HPP

class AENE_ElectricPlantVThree_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* RevengeDamage;
    UCapsuleComponent* DamageCapsule;
    UAudioComponent* ElectricPlantIdle;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UPointLightComponent* PointLight;
    UTerrainDetectComponent* TerrainDetect;
    USceneComponent* TargetPoint;
    UTerrainPlacementComponent* terrainPlacement;
    UParticleSystemComponent* ParticleSystem;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    float Radius;
    TArray<USceneComponent*> TargetList;
    UParticleSystem* deathEffect;
    TArray<AElectroBeam*> Beams;
    USoundBase* deathSound;
    TArray<UStaticMesh*> Meshes;
    bool HasAtLeastOneConnection;
    bool PlayEffectsOnDeath;

    void InstaDie(bool CallFunc_HasAuthority_ReturnValue, InterfaceProperty CallFunc_GetMaxHealth_self_CastInput, float CallFunc_GetMaxHealth_ReturnValue);
    void RemoveNeighbourBeams(AActor* Neighbour, int32 Temp_int_Array_Index_Variable, AENE_ElectricPlantVThree_C* K2Node_DynamicCast_AsENE_Electric_Plant_VThree, bool K2Node_DynamicCast_bSuccess, AElectroBeam* CallFunc_Array_Get_Item, USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void RemoveBeams(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, AElectroBeam* CallFunc_Array_Get_Item, const TArray<AActor*>& K2Node_MakeArray_Array, const TArray<uint8>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void SetBeamCollisionRight(FVector StartPoint, FVector EndPoint, UCapsuleComponent* collider, UCapsuleComponent*& ColliderOut, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FRotator CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_VSize_ReturnValue, FHitResult CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue);
    void CreateBeam(USceneComponent* Source, USceneComponent* Target, AElectroBeam*& Beam, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_Electrobeam_C* CallFunc_FinishSpawningActor_ReturnValue);
    void LineTraceConnection(USceneComponent* Source, USceneComponent* Target, AActor* Neighbour, bool& Result, const TArray<uint8>& K2Node_MakeArray_Array, const TArray<AActor*>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue);
    void SetupConnection(USceneComponent* BeamSource, USceneComponent* BeamTarget, AActor* Neighbour, bool CallFunc_LineTraceConnection_Result, bool CallFunc_LineTraceConnection_Result_1, AElectroBeam* CallFunc_CreateBeam_Beam, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
    void UserConstructionScript(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue);
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__DamageCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DamageCapsule_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void ExecuteUbergraph_ENE_ElectricPlantVThree(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, const TArray<AActor*>& K2Node_MakeArray_Array_1, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, AActor* CallFunc_Array_Get_Item, FVector CallFunc_K2_GetComponentLocation_ReturnValue, AENE_ElectricPlantVThree_C* K2Node_DynamicCast_AsENE_Electric_Plant_VThree, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, APawn* CallFunc_GetInstigator_ReturnValue, UProjectile* K2Node_DynamicCast_AsProjectile, bool K2Node_DynamicCast_bSuccess_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_3, APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_Amount, float K2Node_ComponentBoundEvent_BaseAmount, UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, const FName K2Node_ComponentBoundEvent_boneName);
}

#endif
