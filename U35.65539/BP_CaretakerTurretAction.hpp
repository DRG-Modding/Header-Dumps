#ifndef UE4SS_SDK_BP_CaretakerTurretAction_HPP
#define UE4SS_SDK_BP_CaretakerTurretAction_HPP

class UBP_CaretakerTurretAction_C : UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FTransform> TurretTransforms;
    TArray<TSubclassOf<ABP_FacilityTurretDrone_C>> ChosenTurrets;
    TArray<AActor*> Turrets;
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
    void SetupDrone(UBP_FacilityTurretDrone_C* Drone, FTransform Transform);
    void TurretSpawned(UFacilityTurret* spawnedTurret);
    void TurretDied(UHealthComponentBase* HealthComponent);
    void OnTriggered();
    void SpawnTurrets(int32 amountOfTurrets);
    void ActivateLights();
    void DeactivateLights();
    void ExecuteUbergraph_BP_CaretakerTurretAction(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_IsClosed_Variable, TSubclassOf<UBP_FacilityTurretDrone_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_Array_Get_Item_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_GetClosestLaunchLocation_Result, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_FacilityTurretDrone_C* CallFunc_FinishSpawningActor_ReturnValue, UBP_FacilityTurretDrone_C* K2Node_CustomEvent_drone, FTransform K2Node_CustomEvent_transform, AController* CallFunc_GetController_ReturnValue, UAIC_FacilityTurretDrone_C* K2Node_DynamicCast_AsAIC_Facility_Turret_Drone, bool K2Node_DynamicCast_bSuccess_1, UFacilityTurret* K2Node_CustomEvent_spawnedTurret, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, OnTurretSpawned__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_CustomEvent_amountOfTurrets, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FTimerHandle CallFunc_K2_InvalidateTimerHandle_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_2, UCaretaker* CallFunc_GetCaretaker_ReturnValue, UCaretaker* CallFunc_GetCaretaker_ReturnValue_1, bool CallFunc_HasAutority_ReturnValue, bool CallFunc_SpawnEndBattleTurrets_success, TArray<FTransform>& CallFunc_SpawnEndBattleTurrets_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_2, UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue_1, float CallFunc_GetEnemyCountModifier_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UCaretaker* CallFunc_GetCaretaker_ReturnValue_2, UENE_FacilityCaretaker_C* K2Node_DynamicCast_AsENE_Facility_Caretaker, bool K2Node_DynamicCast_bSuccess_2, UCaretaker* CallFunc_GetCaretaker_ReturnValue_3, UENE_FacilityCaretaker_C* K2Node_DynamicCast_AsENE_Facility_Caretaker_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
