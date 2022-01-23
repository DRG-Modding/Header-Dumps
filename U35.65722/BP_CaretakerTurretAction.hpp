#ifndef UE4SS_SDK_BP_CaretakerTurretAction_HPP
#define UE4SS_SDK_BP_CaretakerTurretAction_HPP

class UBP_CaretakerTurretAction_C : public UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FTransform> TurretTransforms;
    TArray<class TSubclassOf<ABP_FacilityTurretDrone_C>> ChosenTurrets;
    TArray<class AActor*> Turrets;
    FTimerHandle TurretWave_Handle;
    int32 BaseMaxTurrets;
    int32 ExtraMaxTurretsPerPlayer;
    int32 MaxTurrets;
    int32 TurretCount;
    int32 NumTurretsPerWave;
    int32 NumTurretsRemainToTriggerNewWave;
    int32 NumTurretsInFirstWave;
    bool CanSpawn;
    bool CanReplenish;

    bool CanUse(bool CallFunc_CanUse_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnStarted();
    void Turret wave();
    void OnStopped();
    void SetupDrone(class ABP_FacilityTurretDrone_C* Drone, FTransform Transform);
    void TurretSpawned(class AFacilityTurret* spawnedTurret);
    void TurretDied(class UHealthComponentBase* HealthComponent);
    void OnTriggered();
    void SpawnTurrets(int32 amountOfTurrets);
    void ActivateLights();
    void DeactivateLights();
    void ExecuteUbergraph_BP_CaretakerTurretAction(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_IsClosed_Variable, TSubclassOf<class ABP_FacilityTurretDrone_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue_1, FExecuteUbergraph_BP_CaretakerTurretActionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_Array_Get_Item_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_GetClosestLaunchLocation_Result, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FacilityTurretDrone_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_FacilityTurretDrone_C* K2Node_CustomEvent_drone, FTransform K2Node_CustomEvent_transform, class AController* CallFunc_GetController_ReturnValue, class AAIC_FacilityTurretDrone_C* K2Node_DynamicCast_AsAIC_Facility_Turret_Drone, bool K2Node_DynamicCast_bSuccess_1, class AFacilityTurret* K2Node_CustomEvent_spawnedTurret, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_BP_CaretakerTurretActionK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FExecuteUbergraph_BP_CaretakerTurretActionK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_CustomEvent_amountOfTurrets, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FTimerHandle CallFunc_K2_InvalidateTimerHandle_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_2, class ACaretaker* CallFunc_GetCaretaker_ReturnValue, class ACaretaker* CallFunc_GetCaretaker_ReturnValue_1, bool CallFunc_HasAutority_ReturnValue, bool CallFunc_SpawnEndBattleTurrets_success, TArray<FTransform>& CallFunc_SpawnEndBattleTurrets_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_2, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue_1, float CallFunc_GetEnemyCountModifier_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class ACaretaker* CallFunc_GetCaretaker_ReturnValue_2, class AENE_FacilityCaretaker_C* K2Node_DynamicCast_AsENE_Facility_Caretaker, bool K2Node_DynamicCast_bSuccess_2, class ACaretaker* CallFunc_GetCaretaker_ReturnValue_3, class AENE_FacilityCaretaker_C* K2Node_DynamicCast_AsENE_Facility_Caretaker_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
