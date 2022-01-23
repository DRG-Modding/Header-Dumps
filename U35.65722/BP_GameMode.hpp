#ifndef UE4SS_SDK_BP_GameMode_HPP
#define UE4SS_SDK_BP_GameMode_HPP

class ABP_GameMode_C : public AFSDGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyWaveManager* EnemyWaveManager;
    class UEncounterManager* EncounterManager;
    class USceneComponent* DefaultSceneRoot;
    FTimerHandle TimerHandle;
    bool CanSpawnBosco;

    void PreloadMuleClass(const FPreloadMuleClassTemp_delegate_Variable Temp_delegate_Variable, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue);
    void TryPreloadCheatMenu(TSoftClassPtr<UWidget> CheatClass, const FTryPreloadCheatMenuTemp_delegate_Variable Temp_delegate_Variable, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, FString CallFunc_Conv_SoftClassReferenceToString_ReturnValue, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue);
    void GetEscapepodLocation(FTransform& Location, FTransform CallFunc_FindEscapePodLocationAtDistance_ReturnValue);
    void EnableMuleButton(const TArray<FText>& K2Node_MakeArray_Array, FText CallFunc_MakeLiteralText_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<class AMolly*>& CallFunc_GetAllActorsOfClass_OutActors, class AMolly* CallFunc_Array_Get_Item);
    void DestroyNetworkedActors(TArray<class TSubclassOf<AActor>> ActorClassesToDestroy, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class TSubclassOf<AActor>>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, TSubclassOf<class AActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void LoadToMission(class UMissionTemplate* mission, bool Temp_bool_Variable, FString Temp_string_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FString CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, FString CallFunc_Left_ReturnValue, FString K2Node_Select_Default);
    UClass* GetDefaultPawnClassForController(class AController* InControllerUClass* CallFunc_LoadClass_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsOnSpaceRig_OnSpaceRig, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPlayerCharacterID* K2Node_Select_Default, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_1);
    class AActor* ChoosePlayerStart(class AController* Playerclass AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetPlayerStart_ReturnValue);
    void RecieveEndLevel();
    void ReceiveBeginPlay();
    void WaitForGeneration();
    void Recieve_ContinueTimerEnded();
    void Call DropPod();
    void Trigger End Wave(bool cancelAllWaves);
    void SpawnBosco(FTransform Location);
    void RemoveBosco();
    void Handle Bosco Respawn();
    void OnPlayerLeave(class AFSDPlayerState* PlayerState);
    void Loaded();
    void DonkeyButtonPressed();
    void LoadSpaceRig();
    void ExecuteUbergraph_BP_GameMode(int32 EntryPoint, FExecuteUbergraph_BP_GameModeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const FExecuteUbergraph_BP_GameModeTemp_delegate_Variable Temp_delegate_Variable, const FExecuteUbergraph_BP_GameModeTemp_delegate_Variable_1 Temp_delegate_Variable_1, bool CallFunc_AllPlayersHaveGeneratedLevel_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_cancelAllWaves, FTransform K2Node_CustomEvent_Location, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FExecuteUbergraph_BP_GameModeK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasMatchEnded_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_4, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_Conv_VectorToTransform_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAlive_ReturnValue, TSubclassOf<class ABosco> CallFunc_GetDroneClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TSubclassOf<class AMiningPod> CallFunc_GetDropPodEscapeClass_ReturnValue, class ABosco* CallFunc_FinishSpawningActor_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UGeneratedMission* CallFunc_GetCurrentSingleMission_ReturnValue, bool CallFunc_CompleteCurrentSingleMission_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_GetBoscoAllowed_ReturnValue, FExecuteUbergraph_BP_GameModeK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_5, bool CallFunc_GetMissionSuccessful_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array, FSoftObjectPath CallFunc_GetDropPodEscapePath_ReturnValue, FSoftObjectPath CallFunc_GetDropPodPath_ReturnValue, FSoftObjectPath CallFunc_GetDronePath_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FTransform CallFunc_GetEscapepodLocation_Location, bool CallFunc_BooleanOR_ReturnValue_1);
};

#endif
