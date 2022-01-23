#ifndef UE4SS_SDK_ENE_ElectricPlantVThree_HPP
#define UE4SS_SDK_ENE_ElectricPlantVThree_HPP

class AENE_ElectricPlantVThree_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* RevengeDamage;
    class UCapsuleComponent* DamageCapsule;
    class UAudioComponent* ElectricPlantIdle;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UPointLightComponent* PointLight;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* TargetPoint;
    class UTerrainPlacementComponent* terrainPlacement;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    float Radius;
    TArray<class USceneComponent*> TargetList;
    class UParticleSystem* deathEffect;
    TArray<class AElectroBeam*> Beams;
    class USoundBase* deathSound;
    TArray<class UStaticMesh*> Meshes;
    bool HasAtLeastOneConnection;
    bool PlayEffectsOnDeath;

    void InstaDie(bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IHealth> CallFunc_GetMaxHealth_self_CastInput, float CallFunc_GetMaxHealth_ReturnValue);
    void RemoveNeighbourBeams(class AActor* Neighbour, int32 Temp_int_Array_Index_Variable, class AENE_ElectricPlantVThree_C* K2Node_DynamicCast_AsENE_Electric_Plant_VThree, bool K2Node_DynamicCast_bSuccess, class AElectroBeam* CallFunc_Array_Get_Item, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void RemoveBeams(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AElectroBeam* CallFunc_Array_Get_Item, const TArray<class AActor*>& K2Node_MakeArray_Array, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void SetBeamCollisionRight(FVector StartPoint, FVector EndPoint, class UCapsuleComponent* collider, class UCapsuleComponent*& ColliderOut, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FRotator CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_VSize_ReturnValue, FHitResult CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue);
    void CreateBeam(class USceneComponent* Source, class USceneComponent* Target, class AElectroBeam*& Beam, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Electrobeam_C* CallFunc_FinishSpawningActor_ReturnValue);
    void LineTraceConnection(class USceneComponent* Source, class USceneComponent* Target, class AActor* Neighbour, bool& Result, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, const TArray<class AActor*>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue);
    void SetupConnection(class USceneComponent* BeamSource, class USceneComponent* BeamTarget, class AActor* Neighbour, bool CallFunc_LineTraceConnection_Result, bool CallFunc_LineTraceConnection_Result_1, class AElectroBeam* CallFunc_CreateBeam_Beam, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
    void UserConstructionScript(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue);
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__DamageCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DamageCapsule_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void ExecuteUbergraph_ENE_ElectricPlantVThree(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, const TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class AENE_ElectricPlantVThree_C* K2Node_DynamicCast_AsENE_Electric_Plant_VThree, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float K2Node_ComponentBoundEvent_Damage, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, class APawn* CallFunc_GetInstigator_ReturnValue, class AProjectile* K2Node_DynamicCast_AsProjectile, bool K2Node_DynamicCast_bSuccess_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_3, class APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FExecuteUbergraph_ENE_ElectricPlantVThreeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_ComponentBoundEvent_Amount, float K2Node_ComponentBoundEvent_BaseAmount, class UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, const FName K2Node_ComponentBoundEvent_boneName);
};

#endif
