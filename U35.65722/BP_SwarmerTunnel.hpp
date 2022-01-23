#ifndef UE4SS_SDK_BP_SwarmerTunnel_HPP
#define UE4SS_SDK_BP_SwarmerTunnel_HPP

class ABP_SwarmerTunnel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* SpiderSpawnPoint3;
    class ULevelGenerationCarverComponent* e1;
    class ULevelGenerationCarverComponent* e3;
    class ULevelGenerationCarverComponent* e2;
    class ULevelGenerationCarverComponent* e9;
    class ULevelGenerationCarverComponent* e8;
    class ULevelGenerationCarverComponent* e6;
    class ULevelGenerationCarverComponent* e7;
    class ULevelGenerationCarverComponent* e4;
    class ULevelGenerationCarverComponent* e5;
    class ULevelGenerationCarverComponent* t1;
    class ULevelGenerationCarverComponent* t3;
    class ULevelGenerationCarverComponent* t2;
    class ULevelGenerationCarverComponent* t9;
    class ULevelGenerationCarverComponent* t8;
    class ULevelGenerationCarverComponent* t6;
    class ULevelGenerationCarverComponent* t7;
    class ULevelGenerationCarverComponent* t4;
    class ULevelGenerationCarverComponent* t5;
    class USceneComponent* Tunnels;
    class UBillboardComponent* WarningPoint;
    class UStaticMeshComponent* SM_Prim_Cylinder_08sides;
    class ULevelGenerationCarverComponent* FillerMaterial;
    class UStaticMeshComponent* StaticMesh19;
    class UStaticMeshComponent* StaticMesh18;
    class UStaticMeshComponent* StaticMesh17;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh11;
    class UBillboardComponent* SpiderSpawnPoint2;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class ULevelGenerationCarverComponent* BAckTunnel2;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class USphereComponent* TriggerSphere;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* BackTunnel;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* Spider Spawn Point1;
    class USceneComponent* DefaultSceneRoot;
    class UEnemyDescriptor* EnemyToSpawn;
    bool CanSpawn;
    float ChainReactionDistance;
    float ChainReactionProbability;
    float ChainReactionDelayMin;
    float ChainReactionDelayMax;
    TArray<class USceneComponent*> TunnelCarvers;
    int32 NutTunnelsDesired;
    float SpawnProbability;
    float MinSpawnDistanceFromDropPod;
    TArray<class USceneComponent*> ExitCarvers;

    void ReceiveBeginPlay();
    void TriggerNeighbours();
    void ChainReaction();
    void BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayCreepySound();
    void ExecuteUbergraph_BP_SwarmerTunnel(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, float CallFunc_RandomFloatInRange_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class USceneComponent* CallFunc_Array_Get_Item, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, TArray<class USceneComponent*>& K2Node_MakeArray_Array_1, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, const TArray<class AActor*>& Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue_3, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class ABP_SwarmerTunnel_C* K2Node_DynamicCast_AsBP_Swarmer_Tunnel, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetActorScale3D_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, bool CallFunc_MakeLiteralBool_ReturnValue, TArray<class USceneComponent*>& K2Node_MakeArray_Array_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3);
};

#endif
