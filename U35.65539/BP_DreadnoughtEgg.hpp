#ifndef UE4SS_SDK_BP_DreadnoughtEgg_HPP
#define UE4SS_SDK_BP_DreadnoughtEgg_HPP

class ABP_DreadnoughtEgg_C : ABP_SpiderEgg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* TerrainScannerMesh;
    UBillboardComponent* BranchCarver2;
    UPathfinderCollisionComponent* PathfinderCollision;
    UBillboardComponent* BranchCArver3;
    UStaticMeshComponent* OrganicMaterialExtra3;
    UStaticMeshComponent* OrganicMaterialExtra2;
    UStaticMeshComponent* OrganicMaterialExtra1;
    UBillboardComponent* BranchCarver1;
    UStaticMeshComponent* OrganicMaterialCarver;
    UAudioComponent* Audio;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* Carver;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* EggWhole;
    float LightIntensity_NewTrack_0_9A4595314256D1AF580CF3A2C59CC406;
    TEnumAsByte<ETimelineDirection::Type> LightIntensity__Direction_9A4595314256D1AF580CF3A2C59CC406;
    UTimelineComponent* LightIntensity;
    TArray<AFSDPawn*> spawnedEnemies;

    void Carve(ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_3, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_3, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_4, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_4);
    void LightIntensity__FinishedFunc();
    void LightIntensity__UpdateFunc();
    void OnEggBroken();
    void ReceiveBeginPlay();
    void OnMatchStarted();
    void SpawnCustom();
    void spawned(APawn* enemy);
    void SpawnedTwins(APawn* enemy);
    void Cheat_Break();
    void ExecuteUbergraph_BP_DreadnoughtEgg(int32 EntryPoint, int32 Temp_int_Variable, USoundCue* Temp_object_Variable, USoundCue* Temp_object_Variable_1, USoundCue* Temp_object_Variable_2, EnemySpawnedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, EnemySpawnedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, USoundCue* K2Node_Select_Default, FMusicHandle CallFunc_Play_ReturnValue, APawn* K2Node_CustomEvent_enemy_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_SnapToGrid_ReturnValue, const TArray<UFSDPawn*>& K2Node_MakeArray_Array, UEliminationObjective* CallFunc_GetEliminationObjective_AsElimination_Objective, APawn* K2Node_CustomEvent_enemy, UFSDPawn* K2Node_DynamicCast_AsFSDPawn_1, bool K2Node_DynamicCast_bSuccess_1, UEliminationObjective* CallFunc_GetEliminationObjective_AsElimination_Objective_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UEliminationObjective* CallFunc_GetEliminationObjective_AsElimination_Objective_2, TArray<UEnemyDescriptor*>& CallFunc_GetNextTargetInQueue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UEnemyDescriptor* CallFunc_Array_Get_Item, UEnemyDescriptor* CallFunc_Array_Get_Item_1, UEnemyDescriptor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, MatchStartedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
}

#endif
