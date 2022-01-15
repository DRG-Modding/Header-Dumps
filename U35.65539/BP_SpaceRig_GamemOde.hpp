#ifndef UE4SS_SDK_BP_SpaceRig_GamemOde_HPP
#define UE4SS_SDK_BP_SpaceRig_GamemOde_HPP

class ABP_SpaceRig_Gamemode_C : UFSDGameModeSpaceRig
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDifficultyManager* DifficultyManager;
    USceneComponent* DefaultSceneRoot;

    bool PlayerCanRestart(UPlayerController* PlayerUFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SendMissionStartAnalytics(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_GetObjectName_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, FString CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3);
    void SelectRandomAvailableClass(UFSDPlayerState* Player, TArray<UPlayerCharacterID*> HeroesLeft, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UBP_GameState_SpaceRig_C* CallFunc_GetGameState_GameState, int32 CallFunc_Array_LastIndex_ReturnValue, TArray<UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, UPlayerState* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
    AActor* ChoosePlayerStart(AController* PlayerUSpacerigStart* SelectedStart);
    void GetGameState(UBP_GameState_SpaceRig_C*& GameState, UGameStateBase* CallFunc_GetGameState_ReturnValue, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    UClass* GetDefaultPawnClassForController(AController* InControllerTSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetDefaultCharacter_ReturnValue);
    void OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55();
    void OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55();
    void OnFailure_509E599D4BB91C15BA2979B190501E9F();
    void OnSuccess_509E599D4BB91C15BA2979B190501E9F();
    void ReceiveBeginPlay();
    void OnCountdownComplete();
    void K2_OnLogout(AController* ExitingController);
    void K2_OnRestartPlayer(AController* NewPlayer);
    void ControllerReady(UFSDPlayerController* Target);
    void InstantlyStartMission();
    void On online privilige checked(const UPlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void ExecuteUbergraph_BP_SpaceRig_Gamemode(int32 EntryPoint, bool CallFunc_IsInActiveSession_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnGetUserPrivilegeCompleteBPDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UBP_GameState_SpaceRig_C* CallFunc_GetGameState_GameState, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, AController* K2Node_Event_ExitingController, TArray<USpacerigStart*>& CallFunc_GetAllActorsOfClass_OutActors, USpacerigStart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FString CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, AController* K2Node_Event_NewPlayer, int32 CallFunc_FindSubstring_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, FString CallFunc_Left_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UFSDPlayerController* K2Node_CustomEvent_Target, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_1, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetCurrentSessionState_sessionState, FString CallFunc_GetCurrentSessionState_id, bool CallFunc_GetCurrentSessionState_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, OnCountdownCompleted__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsInActiveSession_ReturnValue_1, int32 CallFunc_GetMaxPublicConnections_ReturnValue, UFSDCreateSessionCallbackProxy* CallFunc_FSDCreateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_FSDUpdateSessionInfo_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, const UPlayerState* K2Node_CustomEvent_CheckedPlayerState, EBlueprintableUserPrivileges K2Node_CustomEvent_CheckedPrivilege, EBlueprintablePrivilegeResults K2Node_CustomEvent_PrivilegeResult, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FString Temp_string_Variable, bool Temp_bool_Variable, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool CallFunc_HasPendingInvite_ReturnValue, FString K2Node_Select_Default, bool CallFunc_HasPendingActivity_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetMaxPublicConnections_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, UFSDCreateSessionCallbackProxy* CallFunc_FSDCreateSession_ReturnValue_1, bool CallFunc_HasTooManyModsEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif