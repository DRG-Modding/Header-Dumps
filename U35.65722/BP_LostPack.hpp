#ifndef UE4SS_SDK_BP_LostPack_HPP
#define UE4SS_SDK_BP_LostPack_HPP

class ABP_LostPack_C : public ATreasureContainer
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_TreasureChest_HolloStreaks;
    class UStaticMeshComponent* Carver9;
    class UStaticMeshComponent* Carver8;
    class UBillboardComponent* ExplosionLocation4;
    class UStaticMeshComponent* Carver19;
    class UStaticMeshComponent* Carver18;
    class UStaticMeshComponent* Carver17;
    class UStaticMeshComponent* Carver16;
    class UStaticMeshComponent* Carver15;
    class USceneComponent* NegativeCarvers;
    class USceneComponent* UnusedCarvers;
    class UBillboardComponent* ExplosionLocation3;
    class UStaticMeshComponent* Carver14;
    class UExplosionComponent* Explosion;
    class UStaticMeshComponent* Carver13;
    class UStaticMeshComponent* Carver7;
    class UStaticMeshComponent* Carver6;
    class UStaticMeshComponent* Carver3;
    class UStaticMeshComponent* Carver2;
    class USceneComponent* PositiveCarvers;
    class UBoxComponent* Box1;
    class UStaticMeshComponent* PackMesh;
    class UPointLightComponent* PointLight;
    class USphereComponent* Sphere2;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Sphere1;
    class UStaticMeshComponent* StaticMesh;
    class UTerrainDetectComponent* TerrainDetect;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* BackPlane;
    class UStaticMeshComponent* FrontPlane;
    class USceneComponent* Scene;
    class UBoxComponent* SpawnVolume;
    class UOutlineComponent* outline;
    class UDropToTerrainComponent* DropToTerrain;
    class UStaticMeshComponent* Carver;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* TerrainScannerMesh;
    FVector2D ChunkAmountRange;
    FVector2D ChunkValueRange;
    TArray<class UResourceData*> ResourceTypes;
    int32 AmountToSpawn;
    FVector Spawn Location;
    int32 BackPackVersion;
    int32 DetailIndex;
    int32 MaxDetails;
    class UDialogDataAsset* EnteredRoomShout;
    TArray<class USceneComponent*> CarversArray;
    class USoundBase* LostPackFoundMusic;
    class USoundBase* CollectTreasureSound;
    FVector ExplosionCarveLocation;

    void OnRep_BackPackVersion();
    void ActivateBeacon(class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void OnLocalPlayerCollectedTreasure(class APlayerCharacter* Player);
    void SetupChunkSpawn();
    void SpawnChunks();
    void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void All_PlayMusic();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CarveDetails();
    void PlaceTreasure();
    void CarveMoreSpace();
    void OnDisableChestLocally();
    void TestReward();
    void ExecuteUbergraph_BP_LostPack(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, int32 Temp_int_Variable, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, class APlayerCharacter* K2Node_Event_player, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector CallFunc_GetScaledBoxExtent_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_4, class UResourceData* CallFunc_Array_Get_Item, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_GetPreventFurtherLatejoiners_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AResourceChunk* CallFunc_SpawnResource_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1, class UTerrainMaterial* CallFunc_GetRockMaterial_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_2, int32 Temp_int_Array_Index_Variable, FResourceSpawner CallFunc_Array_Get_Item_2, int32 CallFunc_Array_AddUnique_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, class USceneComponent* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_2, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool Temp_bool_IsClosed_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue_2);
};

#endif
