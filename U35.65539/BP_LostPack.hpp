#ifndef UE4SS_SDK_BP_LostPack_HPP
#define UE4SS_SDK_BP_LostPack_HPP

class ABP_LostPack_C : ATreasureContainer
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_TreasureChest_HolloStreaks;
    UStaticMeshComponent* Carver9;
    UStaticMeshComponent* Carver8;
    UBillboardComponent* ExplosionLocation4;
    UStaticMeshComponent* Carver19;
    UStaticMeshComponent* Carver18;
    UStaticMeshComponent* Carver17;
    UStaticMeshComponent* Carver16;
    UStaticMeshComponent* Carver15;
    USceneComponent* NegativeCarvers;
    USceneComponent* UnusedCarvers;
    UBillboardComponent* ExplosionLocation3;
    UStaticMeshComponent* Carver14;
    UExplosionComponent* Explosion;
    UStaticMeshComponent* Carver13;
    UStaticMeshComponent* Carver7;
    UStaticMeshComponent* Carver6;
    UStaticMeshComponent* Carver3;
    UStaticMeshComponent* Carver2;
    USceneComponent* PositiveCarvers;
    UBoxComponent* Box1;
    UStaticMeshComponent* PackMesh;
    UPointLightComponent* PointLight;
    USphereComponent* Sphere2;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USphereComponent* Sphere1;
    UStaticMeshComponent* StaticMesh;
    UTerrainDetectComponent* TerrainDetect;
    USphereComponent* Sphere;
    UStaticMeshComponent* BackPlane;
    UStaticMeshComponent* FrontPlane;
    USceneComponent* Scene;
    UBoxComponent* SpawnVolume;
    UOutlineComponent* outline;
    UDropToTerrainComponent* DropToTerrain;
    UStaticMeshComponent* Carver;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* TerrainScannerMesh;
    FVector2D ChunkAmountRange;
    FVector2D ChunkValueRange;
    TArray<UResourceData*> ResourceTypes;
    int32 AmountToSpawn;
    FVector Spawn Location;
    int32 BackPackVersion;
    int32 DetailIndex;
    int32 MaxDetails;
    UDialogDataAsset* EnteredRoomShout;
    TArray<USceneComponent*> CarversArray;
    USoundBase* LostPackFoundMusic;
    USoundBase* CollectTreasureSound;
    FVector ExplosionCarveLocation;

    void OnRep_BackPackVersion();
    void ActivateBeacon(ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void OnLocalPlayerCollectedTreasure(UPlayerCharacter* Player);
    void SetupChunkSpawn();
    void SpawnChunks();
    void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void All_PlayMusic();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CarveDetails();
    void PlaceTreasure();
    void CarveMoreSpace();
    void OnDisableChestLocally();
    void TestReward();
    void ExecuteUbergraph_BP_LostPack(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, int32 Temp_int_Variable, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, UPlayerCharacter* K2Node_Event_player, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector CallFunc_GetScaledBoxExtent_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_4, UResourceData* CallFunc_Array_Get_Item, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_GetPreventFurtherLatejoiners_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UResourceChunk* CallFunc_SpawnResource_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1, UTerrainMaterial* CallFunc_GetRockMaterial_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, USceneComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_2, int32 Temp_int_Array_Index_Variable, FResourceSpawner CallFunc_Array_Get_Item_2, int32 CallFunc_Array_AddUnique_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, USceneComponent* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_2, UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool Temp_bool_IsClosed_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue_2);
}

#endif
