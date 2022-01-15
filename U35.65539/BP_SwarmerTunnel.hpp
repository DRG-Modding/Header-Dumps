#ifndef UE4SS_SDK_BP_SwarmerTunnel_HPP
#define UE4SS_SDK_BP_SwarmerTunnel_HPP

class ABP_SwarmerTunnel_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* SpiderSpawnPoint3;
    ULevelGenerationCarverComponent* e1;
    ULevelGenerationCarverComponent* e3;
    ULevelGenerationCarverComponent* e2;
    ULevelGenerationCarverComponent* e9;
    ULevelGenerationCarverComponent* e8;
    ULevelGenerationCarverComponent* e6;
    ULevelGenerationCarverComponent* e7;
    ULevelGenerationCarverComponent* e4;
    ULevelGenerationCarverComponent* e5;
    ULevelGenerationCarverComponent* t1;
    ULevelGenerationCarverComponent* t3;
    ULevelGenerationCarverComponent* t2;
    ULevelGenerationCarverComponent* t9;
    ULevelGenerationCarverComponent* t8;
    ULevelGenerationCarverComponent* t6;
    ULevelGenerationCarverComponent* t7;
    ULevelGenerationCarverComponent* t4;
    ULevelGenerationCarverComponent* t5;
    USceneComponent* Tunnels;
    UBillboardComponent* WarningPoint;
    UStaticMeshComponent* SM_Prim_Cylinder_08sides;
    ULevelGenerationCarverComponent* FillerMaterial;
    UStaticMeshComponent* StaticMesh19;
    UStaticMeshComponent* StaticMesh18;
    UStaticMeshComponent* StaticMesh17;
    UStaticMeshComponent* StaticMesh16;
    UStaticMeshComponent* StaticMesh15;
    UStaticMeshComponent* StaticMesh14;
    UStaticMeshComponent* StaticMesh13;
    UStaticMeshComponent* StaticMesh12;
    UStaticMeshComponent* StaticMesh11;
    UBillboardComponent* SpiderSpawnPoint2;
    UStaticMeshComponent* StaticMesh10;
    UStaticMeshComponent* StaticMesh9;
    UStaticMeshComponent* StaticMesh8;
    UStaticMeshComponent* StaticMesh7;
    UStaticMeshComponent* StaticMesh6;
    UStaticMeshComponent* StaticMesh5;
    ULevelGenerationCarverComponent* BAckTunnel2;
    UStaticMeshComponent* StaticMesh4;
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    USphereComponent* TriggerSphere;
    UStaticMeshComponent* StaticMesh;
    ULevelGenerationCarverComponent* BackTunnel;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UTerrainPlacementComponent* terrainPlacement;
    UBillboardComponent* Spider Spawn Point1;
    USceneComponent* DefaultSceneRoot;
    UEnemyDescriptor* EnemyToSpawn;
    bool CanSpawn;
    float ChainReactionDistance;
    float ChainReactionProbability;
    float ChainReactionDelayMin;
    float ChainReactionDelayMax;
    TArray<USceneComponent*> TunnelCarvers;
    int32 NutTunnelsDesired;
    float SpawnProbability;
    float MinSpawnDistanceFromDropPod;
    TArray<USceneComponent*> ExitCarvers;

    void ReceiveBeginPlay();
    void TriggerNeighbours();
    void ChainReaction();
    void BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayCreepySound();
    void ExecuteUbergraph_BP_SwarmerTunnel(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, float CallFunc_RandomFloatInRange_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, USceneComponent* CallFunc_Array_Get_Item, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, TArray<USceneComponent*>& K2Node_MakeArray_Array_1, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, const TArray<AActor*>& Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue_3, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, ABP_SwarmerTunnel_C* K2Node_DynamicCast_AsBP_Swarmer_Tunnel, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetActorScale3D_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, bool CallFunc_MakeLiteralBool_ReturnValue, TArray<USceneComponent*>& K2Node_MakeArray_Array_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3);
}

#endif
