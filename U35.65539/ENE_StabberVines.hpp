#ifndef UE4SS_SDK_ENE_StabberVines_HPP
#define UE4SS_SDK_ENE_StabberVines_HPP

class AENE_StabberVines_C : UEnemyPawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOutlineComponent* outline;
    UBillboardComponent* AttackPosition;
    UStaticMeshComponent* U33_BiomPlant_ThornBlob_003;
    UTerrainDetectComponent* TerrainDetect;
    UBillboardComponent* HeadSpawnPosition1;
    UPathfinderCollisionComponent* PathfinderCollision;
    UTerrainPlacementComponent* terrainPlacement;
    UBillboardComponent* HeadSpawnPosition3;
    UBillboardComponent* HeadSpawnPosition2;
    UStaticMeshComponent* Body;
    USceneComponent* DefaultSceneRoot;
    float HeadMovementDuration;
    TArray<AENE_StabberVine_Tentacle_C*> TentaclesCPP;
    bool IsBusy;
    TArray<FTransform> HydraHeadsSpawnRelativeTransforms;
    FName MaterialColourParamString;
    FLinearColor IdleColor;
    UMaterialInstanceDynamic* DynamicMaterial;
    float NormalHeadMovementDurration;
    float AttackTimer;
    float AttackDistance;
    FTimerHandle AttackTimerHandle;

    void TryStartMeleeAttack(TArray<UPlayerCharacter*> NearbyPlayers, float NearestDist, UENE_StabberVine_Tentacle_C* NearestTentacle, float Dist, UENE_StabberVine_Tentacle_C* tentacle, UPlayerCharacter* Player, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetDistanceToHead_Distance, bool CallFunc_Not_PreBool_ReturnValue_2, UENE_StabberVine_Tentacle_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UPlayerCharacter* CallFunc_GetNearestPlayerFrom_ReturnValue);
    void AreAllTentaclesDead(bool& OutAllDead, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UENE_StabberVine_Tentacle_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
    void GenerateRandomSpikePositions(int32 SpikeIndex, FVector& SpikeLocation, FRotator& SpikeRotation);
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void RemoveHead(UENE_StabberVine_Tentacle_C* HeadRef);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void SetupTargetDetection();
    void SetupTentacles();
    void Kill Root();
    void BndEvt__Outline_K2Node_ComponentBoundEvent_1_OutlineChanged__DelegateSignature(EOutline InOutline);
    void ExecuteUbergraph_ENE_StabberVines(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, UENE_StabberVine_Tentacle_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UENE_StabberVine_Tentacle_C* K2Node_CustomEvent_HeadRef, int32 Temp_int_Array_Index_Variable_3, UENE_StabberVine_Tentacle_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, FTransform CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, TArray<FTransform>& K2Node_MakeArray_Array, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UENE_StabberVine_Tentacle_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, EOutline K2Node_ComponentBoundEvent_InOutline, bool CallFunc_HasAuthority_ReturnValue_3, UENE_StabberVine_Tentacle_C* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
