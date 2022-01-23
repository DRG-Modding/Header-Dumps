#ifndef UE4SS_SDK_BP_GameInstance_HPP
#define UE4SS_SDK_BP_GameInstance_HPP

class UBP_GameInstance_C : public UFSDGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_GameInstance_COnAvailableCraftingItems OnAvailableCraftingItems;
    void OnAvailableCraftingItems(TArray<TScriptInterface<ICraftable>>& NewItems);
    bool EligibleForRetirementAssignment;
    FBP_GameInstance_COnEligibleForRetirementAssignment OnEligibleForRetirementAssignment;
    void OnEligibleForRetirementAssignment(class UBP_GameInstance_C* GameInstance);
    class UWND_JoiningPassword_C* JoinFriendInvitePasswordWidget;
    class UWND_JoiningModded_C* JoinFriendInviteModdedWidget;
    FBlueprintSessionResult CurrentModdedSession;
    FString CurrentModdedPassword;
    class UWND_Joining_C* JoiningFriendInviteWidget;
    class UObject* JoinFriendInviteProgressionDisabling;
    FBlueprintSessionResult tmpSetupModdedSession;

    void ResetTempSessions();
    void CreateAndOpenModdedWidget(class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWND_JoiningModded_C* CallFunc_Create_ReturnValue);
    void SetModdedSession(FSetModdedSessionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSetModdedSessionK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
    void SetupJoinVanillaDisableProgressionMods(FBlueprintSessionResult Session, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FSetupJoinVanillaDisableProgressionModsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSetupJoinVanillaDisableProgressionModsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
    void PromptSandboxUser(FBlueprintSessionResult Session, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenWindowFromClass_ReturnValue, FPromptSandboxUserK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
    void ShouldPromptSandboxUser(FBlueprintSessionResult Session, bool& Yes, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_GetIsModded_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void SetupJoinModded(FBlueprintSessionResult Session, FSetupJoinModdedK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_ShouldPromptSandboxUser_Yes, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Setup Join with Password(FBlueprintSessionResult Session, FSetup Join with PasswordK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSetup Join with PasswordK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue);
    void IsEligibleForRetirementAassignment(bool& EligibleForRetirementAssignment);
    void OnFailure_7B3ECFCE46627790F0C9B89A6B449207();
    void OnSuccess_7B3ECFCE46627790F0C9B89A6B449207();
    void OnFailure_7B3ECFCE46627790F0C9B89A0D72085C();
    void OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C();
    void OnFailure_7B3ECFCE46627790F0C9B89A89B12120();
    void OnSuccess_7B3ECFCE46627790F0C9B89A89B12120();
    void OnFailure_D72617F2470A6492F0633884F8A94A97();
    void OnSuccess_D72617F2470A6492F0633884F8A94A97();
    void OnFailure_E6A52403462766A65D96D581DEE58F2A();
    void OnSuccess_E6A52403462766A65D96D581DEE58F2A();
    void OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB();
    void OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB();
    void ReceiveInit();
    void JoinFriendInvite(FBlueprintSessionResult Session);
    void OnLoadComplete(FString MapName);
    void SetEligableForRetirementAssignment(bool eligable);
    void JoinFriendInviteWithPassword(FBlueprintSessionResult Session, FString Password);
    void OnCancelJoin();
    void OnJoiningModded(FBlueprintSessionResult Session, FString Password);
    void ModdedSaveLoaded();
    void OnSandboxAnswer(bool Yes);
    void OnSaveLoaded();
    void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UPopup_ModdedSave_C* CallFunc_Create_ReturnValue, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UWND_Joining_C* CallFunc_Create_ReturnValue_1, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UWND_Joining_C* CallFunc_Create_ReturnValue_2, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UWND_Joining_C* CallFunc_Create_ReturnValue_3, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, bool Temp_bool_Variable, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_GetIsModded_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_2, bool CallFunc_AreModsInstalled_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, FBlueprintSessionResult K2Node_CustomEvent_Session_2, bool CallFunc_FSDIsPasswordRequired_ReturnValue, bool CallFunc_FSDIsModdedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, bool CallFunc_IsInActiveSession_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FString K2Node_Event_MapName, bool CallFunc_EndsWith_ReturnValue, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11, bool K2Node_Event_eligable, bool Temp_bool_Variable_4, bool CallFunc_NotEqual_BoolBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, EFSDTargetPlatform Temp_byte_Variable, class UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue, bool K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, FBlueprintSessionResult K2Node_CustomEvent_Session_1, FString K2Node_CustomEvent_Password_1, class UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue_1, bool CallFunc_FSDIsSessionValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_1, class UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FBlueprintSessionResult K2Node_CustomEvent_Session, FString K2Node_CustomEvent_Password, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, class UPopup_ModdedSave_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool CallFunc_FSDIsSessionValid_ReturnValue_1, class UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue_2, bool CallFunc_FSDIsSessionValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, class UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_4, class UWindowWidget* CallFunc_GetCurrentWindow_ReturnValue, class UWND_Joining_C* K2Node_DynamicCast_AsWND_Joining, bool K2Node_DynamicCast_bSuccess, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_5, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue_1, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool K2Node_CustomEvent_Yes, bool CallFunc_Not_PreBool_ReturnValue_3, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_6, class UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_14 K2Node_CreateDelegate_OutputDelegate_14, FExecuteUbergraph_BP_GameInstanceK2Node_CreateDelegate_OutputDelegate_15 K2Node_CreateDelegate_OutputDelegate_15);
    void OnEligibleForRetirementAssignment__DelegateSignature(class UBP_GameInstance_C* GameInstance);
    void OnAvailableCraftingItems__DelegateSignature(TArray<TScriptInterface<ICraftable>>& NewItems);
};

#endif
