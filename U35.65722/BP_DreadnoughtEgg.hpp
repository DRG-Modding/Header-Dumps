#ifndef UE4SS_SDK_BP_DreadnoughtEgg_HPP
#define UE4SS_SDK_BP_DreadnoughtEgg_HPP

class ABP_DreadnoughtEgg_C : public ABP_SpiderEgg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UBillboardComponent* BranchCarver2;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UBillboardComponent* BranchCArver3;
    class UStaticMeshComponent* OrganicMaterialExtra3;
    class UStaticMeshComponent* OrganicMaterialExtra2;
    class UStaticMeshComponent* OrganicMaterialExtra1;
    class UBillboardComponent* BranchCarver1;
    class UStaticMeshComponent* OrganicMaterialCarver;
    class UAudioComponent* Audio;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Carver;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* EggWhole;
    float LightIntensity_NewTrack_0_9A4595314256D1AF580CF3A2C59CC406;
    TEnumAsByte<ETimelineDirection::Type> LightIntensity__Direction_9A4595314256D1AF580CF3A2C59CC406;
    class UTimelineComponent* LightIntensity;
    TArray<class AFSDPawn*> spawnedEnemies;

    void Carve(class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_3, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_3, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_4, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_4);
    void LightIntensity__FinishedFunc();
    void LightIntensity__UpdateFunc();
    void OnEggBroken();
    void ReceiveBeginPlay();
    void OnMatchStarted();
    void SpawnCustom();
    void spawned(class APawn* enemy);
    void SpawnedTwins(class APawn* enemy);
    void Cheat_Break();
    void ExecuteUbergraph_BP_DreadnoughtEgg(int32 EntryPoint, int32 Temp_int_Variable, class USoundCue* Temp_object_Variable, class USoundCue* Temp_object_Variable_1, class USoundCue* Temp_object_Variable_2, FExecuteUbergraph_BP_DreadnoughtEggK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, FExecuteUbergraph_BP_DreadnoughtEggK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class USoundCue* K2Node_Select_Default, FMusicHandle CallFunc_Play_ReturnValue, class APawn* K2Node_CustomEvent_enemy_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_SnapToGrid_ReturnValue, const TArray<class AFSDPawn*>& K2Node_MakeArray_Array, class UEliminationObjective* CallFunc_GetEliminationObjective_AsElimination_Objective, class APawn* K2Node_CustomEvent_enemy, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn_1, bool K2Node_DynamicCast_bSuccess_1, class UEliminationObjective* CallFunc_GetEliminationObjective_AsElimination_Objective_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UEliminationObjective* CallFunc_GetEliminationObjective_AsElimination_Objective_2, TArray<class UEnemyDescriptor*>& CallFunc_GetNextTargetInQueue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UEnemyDescriptor* CallFunc_Array_Get_Item, class UEnemyDescriptor* CallFunc_Array_Get_Item_1, class UEnemyDescriptor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, FExecuteUbergraph_BP_DreadnoughtEggK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2);
};

#endif
