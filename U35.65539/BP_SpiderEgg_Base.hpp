#ifndef UE4SS_SDK_BP_SpiderEgg_Base_HPP
#define UE4SS_SDK_BP_SpiderEgg_Base_HPP

class ABP_SpiderEgg_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    USceneComponent* Egg Whole;
    USceneComponent* Egg Broken;
    UTerrainPlacementComponent* terrainPlacement;
    UBillboardComponent* Spider Spawn Point;
    UTerrainDetectComponent* TerrainDetect;
    USceneComponent* DefaultSceneRoot;
    UEnemyDescriptor* EnemyToSpawn;
    UParticleSystem* EggBreakParticles;
    UMaterialInterface* EggGooDecal;
    bool OpenEgg;
    bool OpenOnPlayerProximity;
    float ProximityOpenRange;
    float ProximityOpenDelayMax;
    float ProximityOpenDelayMin;
    float ProximityOpenProbability;
    float ChainReactionDistance;
    float ChainReactionProbability;
    float ChainReactionDelayMin;
    float ChainReactionDelayMax;
    bool ListenForDeath;

    void GetEnemyToSpawn(UEnemyDescriptor*& enemy);
    void GetEliminationObjective(UEliminationObjective*& AsElimination Objective, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, const TArray<UObjective*>& CallFunc_GetObjectives_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UObjective* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UEliminationObjective* K2Node_DynamicCast_AsElimination_Objective, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
    void OnEggBroken();
    void OnTerrainPointRemoved();
    void OnPlayerProximityChanged(UPlayerCharacter* Player, bool enteredTrigger);
    void CrackEgg();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ChainReaction();
    void SpawnCustom();
    void ExecuteUbergraph_BP_SpiderEgg_Base(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, const TArray<AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, float CallFunc_RandomFloatInRange_ReturnValue, USceneComponent* CallFunc_Array_Get_Item, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_IsAlive_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, const TArray<uint8>& K2Node_MakeArray_Array, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, bool CallFunc_PercentageCheck_ReturnValue, AActor* CallFunc_Array_Get_Item_1, ABP_SpiderEgg_Base_C* K2Node_DynamicCast_AsBP_Spider_Egg_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsPathfinderReady_ReturnValue, UEnemyDescriptor* CallFunc_GetEnemyToSpawn_Enemy, FVector CallFunc_GetActorUpVector_ReturnValue, UDecalComponent* CallFunc_SpawnDecal_ReturnValue);
}

#endif
