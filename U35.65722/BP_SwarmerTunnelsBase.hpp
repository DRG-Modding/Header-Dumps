#ifndef UE4SS_SDK_BP_SwarmerTunnelsBase_HPP
#define UE4SS_SDK_BP_SwarmerTunnelsBase_HPP

class ABP_SwarmerTunnelsBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* SpiderSpawnpoinbt3;
    class UBillboardComponent* WarningPoint;
    class UStaticMeshComponent* SM_Prim_Cylinder_08sides;
    class ULevelGenerationCarverComponent* FillerMaterial;
    class UBillboardComponent* SpiderSpawnPoint2;
    class UStaticMeshComponent* StaticMesh5;
    class ULevelGenerationCarverComponent* BAckTunnel2;
    class USphereComponent* TriggerSphere;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* BackTunnel;
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
    void ExecuteUbergraph_BP_SwarmerTunnelsBase(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, float CallFunc_RandomFloatInRange_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const TArray<class AActor*>& Temp_object_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_VSize_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_SwarmerTunnelsBase_C* K2Node_DynamicCast_AsBP_Swarmer_Tunnels_Base, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetActorScale3D_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, FVector CallFunc_K2_GetComponentLocation_ReturnValue_6, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue_4, int32 CallFunc_RandomIntegerInRange_ReturnValue_5, FVector CallFunc_K2_GetComponentLocation_ReturnValue_7, bool CallFunc_PercentageCheck_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_8, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_5);
};

#endif
