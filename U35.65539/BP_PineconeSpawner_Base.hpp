#ifndef UE4SS_SDK_BP_PineconeSpawner_Base_HPP
#define UE4SS_SDK_BP_PineconeSpawner_Base_HPP

class ABP_PineconeSpawner_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    USimpleHealthComponent* SimpleHealth;
    UStaticMeshComponent* U33_BiomPlant_Pinecone;
    USceneComponent* PineCones;
    UStaticMeshComponent* SM_HollowBoughBranch_05;
    UTerrainPlacementComponent* terrainPlacement;
    UBillboardComponent* SpawnPoint;
    USceneComponent* DefaultSceneRoot;
    TSubclassOf<AActor> ClassToSpawn;
    float FallChance;
    TArray<UStaticMeshComponent*> DeadCones;
    TArray<UStaticMeshComponent*> AliveCones;

    void OnRep_DeadCones(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void SpawnPinecone(UStaticMeshComponent* PineCone);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PineconeSpawner_Base(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UStaticMeshComponent* K2Node_CustomEvent_PineCone, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float K2Node_ComponentBoundEvent_Damage, UDamageClass* K2Node_ComponentBoundEvent_damageClass, AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, float CallFunc_RandomFloat_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FClamp_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, UStaticMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item_2);
}

#endif
